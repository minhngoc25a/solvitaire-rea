import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompiledFunction;
import ghidra.util.task.ConsoleTaskMonitor;
import ghidra.program.model.listing.Function;
import java.io.File;
import java.io.FileWriter;
import java.io.BufferedWriter;

public class DecompileAll extends GhidraScript {
    private static final String OUTPUT_DIR = "C:/Users/admin/ToyProjects/solvitaire-rea/decompiled_installer";

    @Override
    public void run() throws Exception {
        File dir = new File(OUTPUT_DIR);
        dir.mkdirs();

        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        ConsoleTaskMonitor monitor = new ConsoleTaskMonitor();

        ghidra.app.decompiler.DecompileResults res;
        java.util.Iterator<Function> iter = currentProgram.getFunctionManager().getFunctions(true);
        java.util.ArrayList<Function> funcList = new java.util.ArrayList<Function>();
        while (iter.hasNext()) {
            funcList.add(iter.next());
        }
        Function[] funcs = funcList.toArray(new Function[0]);
        int total = funcs.length;
        int done = 0;

        println("Total functions: " + total);

        for (int i = 0; i < total; i++) {
            Function func = funcs[i];
            String name = func.getName();
            String entry = func.getEntryPoint().toString();
            String safe = name.replaceAll("[^a-zA-Z0-9_-]", "_");
            String fname = String.format("%05d_%s_%s.c", i, safe, entry);
            File outFile = new File(dir, fname);

            try {
                res = decompiler.decompileFunction(func, 60, monitor);
                if (res.decompileCompleted()) {
                    BufferedWriter writer = new BufferedWriter(new FileWriter(outFile));
                    writer.write("// Function: " + name + "\n");
                    writer.write("// Entry: " + entry + "\n");
                    writer.write("// Size: " + func.getBody().getNumAddresses() + " bytes\n");
                    writer.write("// Thunk: " + func.isThunk() + "\n");
                    writer.write("// External: " + func.isExternal() + "\n");
                    writer.write("\n");
                    DecompiledFunction df = res.getDecompiledFunction();
                    String ccode = df.getC();
                    writer.write(ccode);
                    writer.write("\n");
                    writer.close();
                    done++;
                    if (done % 50 == 0) {
                        println("Decompiled " + done + "/" + total + "...");
                    }
                } else {
                    println("FAILED: " + name + " @ " + entry);
                }
            } catch (Exception e) {
                println("EXCEPTION: " + name + " @ " + entry + ": " + e.getMessage());
            }
        }

        decompiler.dispose();
        println("DONE. Decompiled " + done + "/" + total + " functions to " + OUTPUT_DIR);
    }
}
