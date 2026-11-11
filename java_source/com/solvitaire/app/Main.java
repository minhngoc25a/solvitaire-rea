/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.CommandLine;
import com.solvitaire.app.al_0;
import com.solvitaire.app.pB;
import com.solvitaire.app.pD;
import com.solvitaire.app.pI;
import com.solvitaire.app.qb_0;
import com.solvitaire.app.qh;
import com.solvitaire.app.ql;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qs_0;
import com.solvitaire.app.qx_0;
import com.solvitaire.app.sp;
import java.awt.EventQueue;
import javax.swing.JOptionPane;

public class Main {
    private static qo_0 a = null;

    public static void main(String[] object) {
        try {
            Thread.sleep(1000L);
        }
        catch (Exception exception) {}
        a = new qo_0();
        new qo_0().br = new qx_0(a);
        if (((String[])object).length > 0) {
            a.g("Argument 0 " + object[0]);
            if (object[0].startsWith("api")) {
                a.g("Activating API thread");
                System.out.println("## Initializing API ##");
                Main.a.k = new CommandLine(a);
                Main.a.k.start();
            }
        } else if (Main.a.d < 5) {
            JOptionPane.showMessageDialog(null, "\n\nYou have debug logging set.\nPerformance will be impaired\n\n");
        }
        a.b(true);
        while (!Main.a.ai) {
            if (!Main.a.e) {
                try {
                    if (Main.a(a)) {
                        return;
                    }
                }
                catch (ql ql2) {
                    a.g("*****Got restart exception");
                }
                catch (Exception exception) {
                    a.g("Unexpected exception:" + exception.getMessage());
                    a.g("Stack trace:" + qo_0.a(exception));
                    try {
                        String string = "Unexpected exception, restart required";
                        object = a;
                        object.a(string, false);
                    }
                    catch (ql ql3) {}
                }
            } else {
                try {
                    if (Main.a(a)) {
                        return;
                    }
                }
                catch (ql ql4) {
                    a.g("*****Got restart exception");
                }
            }
            Main.a.aj = false;
            Main.a.ak = false;
            Main.a.am = false;
        }
    }

    private static boolean a(qo_0 qo_02) {
        qo_0 qo_03;
        String string;
        if (!qo_02.aq.g.isVisible()) {
            qo_02.aq.n();
            qo_02.aq.g.setVisible(true);
        }
        EventQueue.invokeLater(new pI(qo_02));
        if (qo_02.u) {
            qo_02.g();
        }
        qo_02.h();
        if (qo_02.d <= 5) {
            qo_0 qo_04 = qo_02;
            qo_04.g("AFTER MAINLINEPAUSE, modechoice " + qo_04.bg + " game mode " + qo_02.m + " challenge " + qo_02.l.c);
        }
        if (qo_02.ai) {
            return true;
        }
        if (qo_02.y) {
            string = "Cannot be inError after main doPause";
            qo_03 = qo_02;
            qo_03.a(string, false);
        }
        qo_02.aq.V = "";
        qo_02.ao = null;
        qo_02.aR = false;
        switch (qo_02.bg) {
            case 2: 
            case 4: {
                if (qo_02.ar == null) break;
                qo_02.ar.a();
                qo_02.aq.m();
                qo_02.aq.n();
                break;
            }
            case 3: {
                qo_02.D = 0;
                qo_02.i = 0;
                qo_02.aq.m();
                qo_02.F.d();
            }
        }
        switch (qo_02.i) {
            case 1: {
                qo_02.ao = new pD(qo_02);
                break;
            }
            case 2: {
                qo_02.ao = new qs_0(qo_02);
                break;
            }
            case 3: {
                qo_02.ao = new pB(qo_02);
                break;
            }
            case 4: {
                qo_02.ao = new qh(qo_02);
                break;
            }
            case 5: {
                qo_02.ao = new sp(qo_02);
                break;
            }
            default: {
                string = "Unidentified Solitaire variant";
                qo_03 = qo_02;
                qo_03.a(string, false);
            }
        }
        qo_02.ao.F = true;
        boolean bl2 = false;
        while (!qo_02.ai && !qo_02.y) {
            qo_02.F.b();
            if (qo_02.ar != null) {
                qo_02.ar.b();
            }
            qo_02.ao.j();
            if (qo_02.d <= 5) {
                qo_0 qo_05 = qo_02;
                qo_05.g("Exited process in game mode " + qo_05.m + " with game number " + qo_02.l.g());
            }
            ++qo_02.ab;
            int n2 = qo_02.l.c();
            if (qo_02.m == 3) {
                if (qo_02.l.r && qo_02.d <= 5) {
                    qo_0 qo_06 = qo_02;
                    qo_06.g("Next capture checkpoint is " + qo_06.l.a(!qo_02.l.s));
                }
                if (!qo_02.l.b) {
                    qo_02.aq.c(6, "Saved partial solution for " + qo_02.l.k() + " (board " + qo_02.l.h() + ")");
                    qo_02.a(1000L, "Allow read of partial");
                    if (qo_02.d <= 5) {
                        qo_0 qo_07 = qo_02;
                        qo_07.g("challenge not yet solved, try another board, acc score " + qo_07.l.m + " acc cards " + qo_02.l.n);
                    }
                    if (!qo_02.u) {
                        n2 = 0;
                        while (n2 < 20) {
                            qo_0 qo_08 = qo_02;
                            if (al_0.a(qo_08, qo_08.F.a.e(), null, 100, 500, false, "endBoardStable") != null) break;
                            ++n2;
                        }
                        if (qo_02.d <= 5) {
                            qo_02.g("Table is stable, calling process again");
                        }
                    }
                    qo_02.F.b();
                    qb_0 qb_02 = qo_02.aq;
                    qb_02.c(true);
                    continue;
                }
                if (qo_02.d <= 5) {
                    qo_02.g("Solved so set pause and return to mainline");
                }
                qo_02.aq.c(6, "Saved solution for " + qo_02.l.k());
                qo_02.a(2000L, "Allow read of saved");
                qo_02.aq.a(6);
                break;
            }
            if (qo_02.m == 4) {
                if (qo_02.bg == 4) break;
                if (n2 != 0) continue;
                if (qo_02.d <= 4) {
                    qo_02.g("Next board does not exist - look for next game");
                }
                if (qo_02.l.i()) {
                    qo_02.aq.a(10);
                    bl2 = true;
                    break;
                }
                qo_02.m = 0;
                qo_02.aq.a(11);
                break;
            }
            if (qo_02.m == 2) {
                if (qo_02.ah) {
                    if (qo_02.d <= 5) {
                        qo_02.g("Single file request completed in API mode so back to old mode");
                    }
                    qo_02.bg = qo_02.k.a;
                    qo_02.u = true;
                    break;
                }
                if (qo_02.d <= 5) {
                    qo_02.g("Single file request completed so do partial reset (stay in file mode)");
                }
                qo_02.aq.a(12);
                break;
            }
            if (qo_02.m == 1) {
                n2 = qo_02.l.a(false);
                if (qo_02.d > 5) continue;
                qo_02.g("Game number is now " + n2);
                continue;
            }
            if (qo_02.m != 0) continue;
            if (qo_02.aT) {
                qo_02.a(1000L);
            }
            if (qo_02.u || !qo_02.F.b(!qo_02.aT)) {
                if (qo_02.d > 5) break;
                qo_02.g("Standalone UI or normal mode and no table so restart");
                break;
            }
            qo_02.l.l = 0;
        }
        if (!bl2) {
            if (qo_02.d <= 5) {
                qo_02.g("*****Out of process loop so request a reset");
            }
            qo_02.c(14);
        }
        return false;
    }
}

