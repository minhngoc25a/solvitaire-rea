/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.api;

import com.solvitaire.solitaire.Main;
import com.solvitaire.solitaire.ui.ModeSelector;
import com.solvitaire.solitaire.util.j;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.ui.qbFrame;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.util.t;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class ApiCommandProcessor
extends Thread {
    private static boolean b = false;
    private SolitaireGameEngine c;
    int AboutDialog;
    private j d;
    private int e;
    private BufferedReader f;
    private BufferedWriter g;

    public static void main(String[] stringArray) {
        Main.main(new String[]{"api"});
    }

    ApiCommandProcessor(SolitaireGameEngine qo_02) {
        this.c = qo_02;
        this.f = new BufferedReader(new InputStreamReader(System.in));
        this.g = new BufferedWriter(new OutputStreamWriter(System.out));
    }

    final void AboutDialog(String string) {
        this.b(string);
    }

    private void b(String object) {
        try {
            this.g.write((String)object);
            this.g.write("\n");
            this.g.flush();
            return;
        }
        catch (Exception exception) {
            if (!this.c.yHandler) {
                String string = "Exception writing " + (String)object + " to bw:" + exception.getMessage();
                object = this.c;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
                System.exit(0);
            }
            return;
        }
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @Override
    public void run() {
        this.c.AboutDialog(500L, "API init");
        block124: while (!this.c.ai) {
            try {
                this.b("API:");
                var1_1 = this.f.readLine();
            }
            catch (IOException v0) {
                this.c.AboutDialog(1000L);
                if (this.c.d > 4) continue;
                this.c.g("==>Waiting for pipe connection");
                continue;
            }
            if (var1_1 == null) {
                this.b("# ERROR READING INPUT COMMANDS.  EXITING API");
                return;
            }
            this.c.ah = true;
            var2_15 = var1_1.split("\\^");
            var1_1 = var2_15[1];
            if (this.c.d <= 5) {
                this.c.g("==>Processing macro " + var2_15[0] + " command " + (String)var1_1);
            }
            var2_15 = null;
            if (var1_1.contains("\"")) {
                var3_23 /* !! */  = var1_1.split("\"");
                var2_15 = var3_23 /* !! */ [1];
                var1_1 = var3_23 /* !! */ [0];
            }
            v1 = (var3_23 /* !! */  = var1_1.split(" ")).length == 0 ? "" : var3_23 /* !! */ [0];
            var4_26 = v1;
            var4_26 = v1;
            tmp = -1;
            switch (v1.hashCode()) {
                case -1371114775: {
                    if (var4_26.equals("dismissmenu")) {
                        tmp = 1;
                    }
                    break;
                }
                case -1110303859: {
                    if (var4_26.equals("readcards")) {
                        tmp = 2;
                    }
                    break;
                }
                case -1072131753: {
                    if (var4_26.equals("keystroke")) {
                        tmp = 3;
                    }
                    break;
                }
                case -892481550: {
                    if (var4_26.equals("status")) {
                        tmp = 4;
                    }
                    break;
                }
                case 0: {
                    if (var4_26.equals("")) {
                        tmp = 5;
                    }
                    break;
                }
                case 35: {
                    if (var4_26.equals("#")) {
                        tmp = 6;
                    }
                    break;
                }
                case 113291: {
                    if (var4_26.equals("run")) {
                        tmp = 7;
                    }
                    break;
                }
                case 3046160: {
                    if (var4_26.equals("card")) {
                        tmp = 8;
                    }
                    break;
                }
                case 3079276: {
                    if (var4_26.equals("deal")) {
                        tmp = 9;
                    }
                    break;
                }
                case 3127582: {
                    if (var4_26.equals("exit")) {
                        tmp = 10;
                    }
                    break;
                }
                case 3322014: {
                    if (var4_26.equals("list")) {
                        tmp = 11;
                    }
                    break;
                }
                case 0x3339A3: {
                    if (var4_26.equals("mode")) {
                        tmp = 12;
                    }
                    break;
                }
                case 3540684: {
                    if (var4_26.equals("step")) {
                        tmp = 13;
                    }
                    break;
                }
                case 3540994: {
                    if (var4_26.equals("stop")) {
                        tmp = 14;
                    }
                    break;
                }
                case 3641717: {
                    if (var4_26.equals("wait")) {
                        tmp = 15;
                    }
                    break;
                }
                case 106440182: {
                    if (var4_26.equals("pause")) {
                        tmp = 16;
                    }
                    break;
                }
                case 108404047: {
                    if (var4_26.equals("reset")) {
                        tmp = 17;
                    }
                    break;
                }
                case 109619263: {
                    if (var4_26.equals("solve")) {
                        tmp = 18;
                    }
                    break;
                }
                case 351608024: {
                    if (var4_26.equals("version")) {
                        tmp = 19;
                    }
                    break;
                }
                case 999730527: {
                    if (var4_26.equals("tracelevel")) {
                        tmp = 20;
                    }
                    break;
                }
                case 1402633315: {
                    if (var4_26.equals("challenge")) {
                        tmp = 21;
                    }
                    break;
                }
                case 1421870518: {
                    if (var4_26.equals("setfocus")) {
                        tmp = 22;
                    }
                    break;
                }
                case 1829500859: {
                    if (var4_26.equals("difficulty")) {
                        tmp = 23;
                    }
                    break;
                }
                case 2147430097: {
                    if (var4_26.equals("skipads")) {
                        tmp = 24;
                    }
                    break;
                }
            }
            switch (tmp) {
                case 5: {
                    this.b("# Supported commands:");
                    this.b("# reset                         // Reset current state of Solvitaire");
                    this.b("# mode msft                     // Control microsoft solitaire collection");
                    this.b("# challenge create n \"xyz\"      // where n=challenge# and xyz=results folder");
                    this.b("# challenge boards n [moves]    // where n=number of boards (can be 1)");
                    this.b("# challenge card cc s [moves]   // where cc=card(1-13) and s=suit(s,h,d,c)");
                    this.b("# challenge cards nn cc [moves] // where nn=count and cc=card(1-13)");
                    this.b("# challenge stacks n [moves]    // where n=number of stacks");
                    this.b("# challenge score mmm nnnn [moves] // where mmm=start score and nnnn=target score");
                    this.b("# challenge play n \"xyz\"        // where n=challenge# and xyz=results folder");
                    this.b("#");
                    this.b("# mode play             // Play AboutDialog game");
                    this.b("# version [klondike <1|3> | spider <1|2|4> | freecell | pyramid | tripeaks]");
                    this.b("# difficulty [easy | moderate | hard | seed <number>]");
                    this.b("# deal                  // Generate AboutDialog new game in play mode");
                    this.b("# readcards <filename>  // Load and deal AboutDialog card file");
                    this.b("# solve                 // Solve currently loaded cards (asynchronous)");
                    this.b("# status                // Check the status is good for entering another command");
                    this.b("#                       // One of DEALT,SOLVED,EXPOSE,CHOOSEFROM,CONFIRMCARD");
                    this.b("# wait                  // Wait for AboutDialog run or solve to complete");
                    this.b("# run                   // Step through the whole solution");
                    this.b("# list <filename>       // Print the current solution <to file>");
                    this.b("# step [NHandler]              // Step forwards [NHandler moves]");
                    this.b("# pause NHandler               // Pause of NHandler milliseconds");
                    this.b("# skipads               // Skip adverts until solitaire board is displayed");
                    this.b("# card                  // Feed in AboutDialog card when playback is paused for an unknown card");
                    this.b("# tracelevel <1-9>      // Set the logging level");
                    this.b("#");
                    this.b("# keystroke [control] [alt] [shift] key // Inject keystroke");
                    this.b("# // values up,down,left,right,backspace,enter,space,escape,tab,f7");
                    break;
                }
                case 14: {
                    System.exit(0);
                }
                case 12: {
                    if (var3_23 /* !! */ .length == 2 && (var3_23 /* !! */ [1].equals("msft") || var3_23 /* !! */ [1].equals("play"))) {
                        if (this.c.d <= 5) {
                            this.c.g("==>Choose mode " + var3_23 /* !! */ [1]);
                        }
                        ModeSelector.AboutDialog(this.c, var3_23 /* !! */ [1], null);
                        this.b("# Mode " + var3_23 /* !! */ [1] + " selected");
                        this.c.EHandler = this.c.aC.GetForegroundWindow();
                        if (var3_23 /* !! */ [1].equals("msft")) {
                            this.c.AboutDialog();
                            this.c.AboutDialog(1500L, "SolitaireToTop");
                            this.e = this.c.DHandler;
                            this.d = this.c.FPanel.rPanel;
                            if (this.c.d <= 5) {
                                this.c.g(String.format("Saved solitaire hwnd now %08x, windowRect %s", new Object[]{this.e, this.d.AboutDialog.toString()}));
                            }
                        }
                        if (this.c.d > 5) break;
                        this.c.g("==>Mode selection complete");
                        break;
                    }
                    this.b("# mode must be either msft or play");
                    break;
                }
                case 21: {
                    if (var3_23 /* !! */ .length < 3 || var3_23 /* !! */ .length > 5) {
                        this.b("# challenge must have two to five parameters");
                        break;
                    }
                    var1_1 = var3_23 /* !! */ [1];
                    tmp = -1;
                    switch (var1_1.hashCode()) {
                        case -1383797171: {
                            if (var1_1.equals("boards")) {
                                tmp = 1;
                            }
                            break;
                        }
                        case -1352294148: {
                            if (var1_1.equals("create")) {
                                tmp = 2;
                            }
                            break;
                        }
                        case -892498197: {
                            if (var1_1.equals("stacks")) {
                                tmp = 3;
                            }
                            break;
                        }
                        case 3046160: {
                            if (var1_1.equals("card")) {
                                tmp = 4;
                            }
                            break;
                        }
                        case 3443508: {
                            if (var1_1.equals("play")) {
                                tmp = 5;
                            }
                            break;
                        }
                        case 94431075: {
                            if (var1_1.equals("cards")) {
                                tmp = 6;
                            }
                            break;
                        }
                        case 109264530: {
                            if (var1_1.equals("score")) {
                                tmp = 7;
                            }
                            break;
                        }
                    }
                    switch (tmp) {
                        case 2: {
                            if (var3_23 /* !! */ .length != 3) {
                                this.b("# challenge create requires challenge number");
                                break;
                            }
                            if (var2_15 == null) {
                                this.b("# challenge create requires results folder");
                                break;
                            }
                            var1_2 = this.b(var3_23 /* !! */ [2], "challenge setup needs integer challenge number");
                            if (var1_2 < 0) break;
                            var5_27 = var2_15;
                            var2_16 = var1_2;
                            var4_26 = this;
                            this.c.l = new t(var4_26.c, 3);
                            var4_26.c.l.b = false;
                            var4_26.c.l.l = 0;
                            var4_26.c.l.n = 0;
                            var4_26.c.l.o = 0;
                            var4_26.c.l.k = 999;
                            var4_26.c.l.AboutDialog((String)var5_27, true);
                            var4_26.c.l.AboutDialog(var2_16 * 100, false);
                            var1_2 = 0;
                            while (var1_2 < 10) {
                                var3_23 /* !! */  = var4_26.c.l.f();
                                if (var3_23 /* !! */  == null) break;
                                var4_26.c;
                                SolitaireGameEngine.h(var4_26.c.l.p + (String)var3_23 /* !! */ );
                                ++var1_2;
                            }
                            var4_26.c.m = 3;
                            var4_26.c.g("==>Setup challenge " + var2_16 * 100);
                            break;
                        }
                        case 5: {
                            if (var3_23 /* !! */ .length != 3) {
                                this.b("# challenge play requires challenge number");
                                break;
                            }
                            if (var2_15 == null) {
                                this.b("# challenge play requires results folder");
                                break;
                            }
                            var1_3 = this.b(var3_23 /* !! */ [2], "challenge setup needs integer challenge number");
                            if (var1_3 <= 0) break;
                            var5_28 = var2_15;
                            var2_17 = var1_3;
                            var4_26 = this;
                            this.c.ah = true;
                            var4_26.c.l = new t(var4_26.c, 4);
                            var4_26.c.l.AboutDialog((String)var5_28, true);
                            var1_4 /* !! */  = new t[100];
                            var3_23 /* !! */  = (String[])new int[100];
                            qbFrame.AboutDialog(var4_26.c, var1_4 /* !! */ , (int[])var3_23 /* !! */ );
                            var3_24 = 1;
                            while (var3_24 < 100) {
                                if (var1_4 /* !! */ [var3_24] != null && (var5_28 = var1_4 /* !! */ [var3_24]).g() == var2_17) {
                                    if (var4_26.c.d <= 5) {
                                        var4_26.c.g("Found challenge " + var5_28.j());
                                    }
                                    var4_26.c.l = var5_28;
                                    var4_26.c.l.AboutDialog(var2_17 * 100, false);
                                    break;
                                }
                                ++var3_24;
                            }
                            if (var3_24 == 100) {
                                var3_25 = "Solution for challenge " + var2_17 + " not found";
                                var1_4 /* !! */  = var4_26.c;
                                var1_4 /* !! */ .AboutDialog(var3_25, false);
                            }
                            var4_26.c.m = 4;
                            var4_26.c.aq.AboutDialog(2);
                            var4_26.c.c(3);
                            var4_26.c.aq.G.AboutDialog();
                            var4_26.c.g("==>Setup playback challenge " + var2_17 * 100);
                            var4_26.c.AboutDialog(2000L);
                            break;
                        }
                        case 1: {
                            var1_5 = this.b(var3_23 /* !! */ [2], "challenge boards must be AboutDialog number");
                            if (var1_5 > 0) {
                                this.c.l.f = var1_5;
                                this.c.l.c = var1_5 == 1 ? 1 : 2;
                            }
                            this.AboutDialog(var3_23 /* !! */ , 3);
                            break;
                        }
                        case 3: {
                            this.c.l.c = 5;
                            var1_6 = this.b(var3_23 /* !! */ [2], "challenge stacks must be AboutDialog number");
                            if (var1_6 > 0) {
                                this.c.l.j = var1_6;
                            }
                            this.AboutDialog(var3_23 /* !! */ , 3);
                            break;
                        }
                        case 4: {
                            if (var3_23 /* !! */ .length != 4 && var3_23 /* !! */ .length != 5) {
                                this.b("# challenge card requires card and suit");
                                break;
                            }
                            this.c.l.c = 4;
                            var1_7 = this.AboutDialog(var3_23 /* !! */ [2], "challenge card");
                            var2_15 = var3_23 /* !! */ [3];
                            var4_26 = this;
                            if ((var2_15 = var2_15.trim()).equals("s") || var2_15.equals("h") || var2_15.equals("d") || var2_15.equals("c")) ** GOTO lbl348
                            var4_26.c.g("==>Bad suit " + (String)var2_15);
                            var4_26.b("ERR: Suit must be s,h,d or c not " + (String)var2_15);
                            ** GOTO lbl371
lbl348:
                            // 1 sources

                            var5_29 = var2_15;
                            switch (var5_29.hashCode()) {
                                case 99: {
                                    if (!var5_29.equals("c")) {
                                        ** break;
                                    }
                                    ** GOTO lbl369
                                }
                                case 100: {
                                    if (!var5_29.equals("d")) {
                                        ** break;
                                    }
                                    ** GOTO lbl367
                                }
                                case 104: {
                                    if (var5_29.equals("h")) break;
                                    ** break;
                                }
                                case 115: {
                                    if (!var5_29.equals("s")) ** break;
                                    v2 = 1;
                                    ** GOTO lbl372
                                }
                            }
                            v2 = 2;
                            ** GOTO lbl372
lbl367:
                            // 1 sources

                            v2 = 3;
                            ** GOTO lbl372
lbl369:
                            // 1 sources

                            v2 = 4;
                            ** GOTO lbl372
lbl371:
                            // 6 sources

                            v2 = var2_18 = -1;
lbl372:
                            // 5 sources

                            if (var1_7 > 0 && var2_18 > 0) {
                                this.c.l.AboutDialog(var1_7, var2_18);
                            }
                            this.AboutDialog(var3_23 /* !! */ , 4);
                            break;
                        }
                        case 6: {
                            if (var3_23 /* !! */ .length != 4 && var3_23 /* !! */ .length != 5) {
                                this.b("# challenge cards requires number and card");
                                break;
                            }
                            this.c.l.c = 3;
                            var1_8 = this.b(var3_23 /* !! */ [2], "Challenge cards requires number");
                            var2_19 = this.AboutDialog(var3_23 /* !! */ [3], "challenge cards");
                            if (var2_19 > 0 && var1_8 > 0) {
                                this.c.l.d = var2_19;
                                this.c.l.e = 0;
                                this.c.l.i = var1_8;
                            }
                            this.AboutDialog(var3_23 /* !! */ , 4);
                            break;
                        }
                        case 7: {
                            if (var3_23 /* !! */ .length != 4 && var3_23 /* !! */ .length != 5) {
                                this.b("# challenge score requires start and target scores");
                                break;
                            }
                            this.c.l.c = 6;
                            var1_9 = this.b(var3_23 /* !! */ [2], "challenge score start must be numeric");
                            var2_20 = this.b(var3_23 /* !! */ [3], "challenge score target must be numeric");
                            if (var1_9 < 0 || var2_20 <= 0) break;
                            this.c.l.h = var2_20;
                            this.c.l.g = var1_9;
                            this.c.l.m = var1_9;
                            this.AboutDialog(var3_23 /* !! */ , 4);
                        }
                    }
                    this.c.g("==>Game " + this.c.l.g() + " is of type '" + this.c.l.c + "' card: " + this.c.l.d + " suit: " + this.c.l.e + " boardCount: " + this.c.l.f + " cardCount: " + this.c.l.i + " stackCount: " + this.c.l.j + " score: " + this.c.l.h + " max moves: " + this.c.l.k);
                    break;
                }
                case 19: {
                    if (this.c.bg != 2) {
                        this.b("# Must be in play mode to generate AboutDialog game");
                        break;
                    }
                    if (!(var3_23 /* !! */ .length == 2 && var3_23 /* !! */ [1].equals("freecell") != false || var3_23 /* !! */ [1].equals("pyramid") != false || var3_23 /* !! */ [1].equals("tripeaks") != false || var3_23 /* !! */ .length == 3 && var3_23 /* !! */ [1].equals("klondike") != false) && !var3_23 /* !! */ [1].equals("spider")) ** GOTO lbl457
                    var1_1 = this.c.aq.DHandler;
                    var2_15 = var3_23 /* !! */ [1];
                    switch (var2_15.hashCode()) {
                        case -1537898034: {
                            if (!var2_15.equals("freecell")) {
                                ** break;
                            }
                            ** GOTO lbl444
                        }
                        case -895953179: {
                            if (var2_15.equals("spider")) break;
                            ** break;
                        }
                        case -106396336: {
                            if (!var2_15.equals("pyramid")) {
                                ** break;
                            }
                            ** GOTO lbl448
                        }
                        case 1511341225: {
                            if (!var2_15.equals("tripeaks")) {
                                ** break;
                            }
                            ** GOTO lbl452
                        }
                        case 2145768351: {
                            if (!var2_15.equals("klondike")) ** break;
                            this.c.bj = "Klondike";
                            try {
                                this.c.bn = Integer.parseInt(var3_23 /* !! */ [2]);
                            }
                            catch (Exception v3) {}
                            v4 = var1_1;
                            v4.AboutDialog(v4.k, "Klondike");
                            ** break;
                        }
                    }
                    this.c.bj = "Spider";
                    try {
                        this.c.bm = Integer.parseInt(var3_23 /* !! */ [2]);
                    }
                    catch (Exception v5) {}
                    v6 = var1_1;
                    v6.AboutDialog(v6.l, "Spider");
                    ** break;
lbl444:
                    // 1 sources

                    this.c.bj = "FreeCell";
                    v7 = var1_1;
                    v7.AboutDialog(v7.m, "FreeCell");
                    ** break;
lbl448:
                    // 1 sources

                    this.c.bj = "Pyramid";
                    v8 = var1_1;
                    v8.AboutDialog(v8.n, "Pyramid");
                    ** break;
lbl452:
                    // 1 sources

                    this.c.bj = "TriPeaks";
                    v9 = var1_1;
                    v9.AboutDialog(v9.o, "TriPeaks");
lbl455:
                    // 11 sources

                    this.b("# version \"" + var3_23 /* !! */ [1] + "\" selected");
                    break;
lbl457:
                    // 1 sources

                    this.b("# version must be one of klondike [1|3], spider [1|2|4], freecell, pyramid or tripeaks");
                    break;
                }
                case 23: {
                    if (this.c.bg != 2) {
                        this.b("# Must be in play mode to generate AboutDialog game");
                        break;
                    }
                    if ((var3_23 /* !! */ .length != 2 || !var3_23 /* !! */ [1].equals("easy")) && !var3_23 /* !! */ [1].equals("moderate") && !var3_23 /* !! */ [1].equals("hard") && (var3_23 /* !! */ .length != 3 || !var3_23 /* !! */ [1].equals("seed"))) ** GOTO lbl516
                    var1_1 = this.c.aq.DHandler;
                    var2_15 = var3_23 /* !! */ [1];
                    tmp = -1;
                    switch (var2_15.hashCode()) {
                        case -618857213: {
                            if (var2_15.equals("moderate")) {
                                tmp = 1;
                            }
                            break;
                        }
                        case 3105794: {
                            if (var2_15.equals("easy")) {
                                tmp = 2;
                            }
                            break;
                        }
                        case 3195115: {
                            if (var2_15.equals("hard")) {
                                tmp = 3;
                            }
                            break;
                        }
                        case 3526257: {
                            if (var2_15.equals("seed")) {
                                tmp = 4;
                            }
                            break;
                        }
                    }
                    switch (tmp) {
                        case 2: {
                            this.c.bk = "Easy";
                            v10 = var1_1;
                            v10.AboutDialog(v10.g, "Easy");
                            break;
                        }
                        case 1: {
                            this.c.bk = "Moderate";
                            v11 = var1_1;
                            v11.AboutDialog(v11.h, "Moderate");
                            break;
                        }
                        case 3: {
                            this.c.bk = "Hard";
                            v12 = var1_1;
                            v12.AboutDialog(v12.i, "Hard");
                            break;
                        }
                        case 4: {
                            this.c.bk = "Specific game # (seed)";
                            try {
                                this.c.bo = Integer.parseInt(var3_23 /* !! */ [2]);
                            }
                            catch (Exception v13) {}
                            v14 = var1_1;
                            v14.AboutDialog(v14.j, "Specific game # (seed)");
                            var1_1.b.setText(var3_23 /* !! */ [2]);
                        }
                    }
                    this.b("# difficulty \"" + var3_23 /* !! */ [1] + "\" selected");
                    break;
lbl516:
                    // 1 sources

                    this.b("# difficulty must be one of easy, moderate, hard, seed <number>");
                    break;
                }
                case 9: {
                    if (this.c.bg != 2 || !this.b().equals("CHOOSEGAME")) {
                        this.b("# Must be in CHOOSEGAME mode to deal cards");
                        this.b("# Did you forget to do AboutDialog reset before the deal?");
                        break;
                    }
                    this.c.aq.DHandler.AboutDialog(this.c.aq);
                    break;
                }
                case 2: {
                    if (this.c.bg == 3) {
                        this.b("# Cannot read cards in Microsoft mode");
                        break;
                    }
                    if (var3_23 /* !! */ .length == 2) {
                        try {
                            if (this.c.l(var3_23 /* !! */ [1]) == null) {
                                this.b("# Error reading card file:" + var3_23 /* !! */ [1]);
                                break;
                            }
                            this.AboutDialog = this.c.bg;
                            ModeSelector.AboutDialog(this.c, "play", null);
                            ModeSelector.AboutDialog(this.c, "readcards", var3_23 /* !! */ [1]);
                        }
                        catch (Exception v15) {}
                        continue block124;
                    }
                    this.b("# readcards requires the file name");
                    break;
                }
                case 20: {
                    if (var3_23 /* !! */ .length != 2) {
                        this.b("# tracelevel requires the trace level from 1 to 9");
                        break;
                    }
                    try {
                        this.c.d = Integer.parseInt(var3_23 /* !! */ [1]);
                        v16 = this;
                        v16.b("# Trace level is now " + v16.c.d);
                    }
                    catch (Exception v17) {}
                    continue block124;
                }
                case 18: {
                    if (!this.b().equals("STARTSOLVE")) {
                        this.b("# Must be in STARTSOLVE state to run AboutDialog solve");
                        break;
                    }
                    this.c.ah = true;
                    this.c.aR = true;
                    this.c.aq.c(false);
                    this.b("# start solving");
                    break;
                }
                case 8: {
                    if (this.c.MHandler != 5) {
                        this.b("# invalid state to enter AboutDialog card");
                        break;
                    }
                    if (var3_23 /* !! */ .length != 2) {
                        this.b("Invalid getcard response");
                        break;
                    }
                    var1_10 = -1;
                    try {
                        var1_10 = this.c.c(var3_23 /* !! */ [1]);
                    }
                    catch (Exception v18) {}
                    if (var1_10 <= 0) break;
                    var2_15 = this.c.ar.z;
                    this.c.ar.z.d = null;
                    var3_23 /* !! */  = var2_15.c;
                    var6_33 = var2_15.c.length;
                    var5_30 = 0;
                    while (var5_30 < var6_33) {
                        var4_26 = var3_23 /* !! */ [var5_30];
                        var9_37 = var4_26;
                        var8_36 = ((String)var4_26).length;
                        var7_35 = 0;
                        while (var7_35 < var8_36) {
                            var4_26 = var9_37[var7_35];
                            if (var4_26 != null && var4_26.g == var1_10) {
                                var2_15.d = var4_26;
                                break;
                            }
                            ++var7_35;
                        }
                        if (var2_15.d != null) break;
                        ++var5_30;
                    }
                    var2_15.b(true);
                    break;
                }
                case 4: {
                    v19 = this;
                    v19.b(v19.b());
                    if (!this.c.aO) break;
                    this.c.ah = false;
                    break;
                }
                case 7: {
                    if (this.c.aq.FPanel == null || this.c.MHandler != 1 && this.c.MHandler != 24) {
                        this.b("# invalid state for run command");
                        break;
                    }
                    this.c.aR = false;
                    this.b("# start run");
                    var1_1 = this.c.aq;
                    var1_1.c(true);
                    v20 = this;
                    v20.AboutDialog(v20.f);
                    v21 = this;
                    v21.b(v21.b());
                    break;
                }
                case 15: {
                    if (this.c.d <= 5) {
                        this.c.g("==>API Waiting for completion, in api:" + this.c.ah);
                    }
                    v22 = this;
                    v22.AboutDialog(v22.f);
                    if (this.c.d > 5) break;
                    this.c.g("==>API wait completed, in api:" + this.c.ah);
                    break;
                }
                case 16: {
                    var1_11 = Integer.parseInt(var3_23 /* !! */ [1]);
                    this.c.AboutDialog((long)var1_11);
                    break;
                }
                case 24: {
                    this.c.AboutDialog();
                    this.c.FPanel.e();
                    this.c.FPanel.g();
                    this.c.FPanel.AboutDialog(true, true);
                    break;
                }
                case 1: {
                    this.c.aD.AboutDialog();
                    this.c.aD.b(1500);
                    var1_12 = this.c.FPanel.n();
                    if (var1_12) {
                        if (this.c.d <= 5) {
                            this.c.g("Menu present so dismiss with escape");
                        }
                        this.c.b(this.c("escape"), 500);
                        this.c.b(this.c("tab"), 300);
                        break;
                    }
                    if (this.c.d > 5) break;
                    this.c.g("***Menu not present");
                    break;
                }
                case 13: {
                    if (this.c.aq.FPanel == null || this.c.MHandler != 1 && this.c.MHandler != 24) {
                        this.b("# invalid state for step command");
                        break;
                    }
                    var1_13 = 1;
                    if (var3_23 /* !! */ .length == 2) {
                        try {
                            var1_13 = Integer.parseInt(var3_23 /* !! */ [1]);
                        }
                        catch (Exception v23) {}
                    }
                    var2_21 = 0;
                    while (var2_21 < var1_13) {
                        if (!this.c.aq.FPanel.isVisible() || !this.c.aq.FPanel.isValid()) continue block124;
                        this.c.aq.FPanel.doClick();
                        if (this.c.d <= 5) {
                            this.c.g("==>---Done click for move #" + var2_21);
                        }
                        var4_26 = this;
                        var4_26.c.AboutDialog(50L, "Wait step");
                        while (!var4_26.c.aq.FPanel.isEnabled() && var4_26.c.aq.FPanel.isValid() && var4_26.c.aq.FPanel.isVisible()) {
                            if (var4_26.c.d <= 5) {
                                var4_26.c.g("==>API sleep 50 waiting for button enabled");
                            }
                            var4_26.c.AboutDialog(50L, "Wait step 2");
                        }
                        ++var2_21;
                    }
                    continue block124;
                }
                case 17: {
                    this.c.br.p = true;
                    this.c.c(14);
                    break;
                }
                case 10: {
                    System.exit(0);
                    break;
                }
                case 11: {
                    if (this.c.MHandler != 5 && this.c.MHandler != 1) {
                        this.b("# invalid state to list moves");
                        break;
                    }
                    var1_1 = this.c.aq.e;
                    synchronized (var1_1) {
                        var2_15 = this.c.aq.e.c;
                        if (var2_15 == null) {
                            this.b("# No moves found");
                            break;
                        }
                        var4_26 = var2_15.getModel();
                        var5_31 = new StringBuffer();
                        var6_33 = 0;
                        while (var6_33 < var4_26.getSize()) {
                            if (var6_33 == var2_15.getMinSelectionIndex()) {
                                var5_31.append("***");
                            }
                            var5_31.append((String)var4_26.getElementAt(var6_33));
                            var5_31.append("\n");
                            ++var6_33;
                        }
                        if (var3_23 /* !! */ .length == 2) {
                            var6_34 = var3_23 /* !! */ [1];
                            var3_23 /* !! */  = new File(var6_34);
                            var4_26 = var3_23 /* !! */ .getAbsolutePath();
                            this.c.AboutDialog(var6_34, var5_31.toString(), true);
                            this.b("# Moves written to " + (String)var4_26);
                        } else {
                            System.out.print(var5_31.toString());
                        }
                        break;
                    }
                }
                case 3: {
                    if (var3_23 /* !! */ .length != 2 && var3_23 /* !! */ .length != 3) {
                        this.b("# keystroke must be integer or modifier+integer");
                        break;
                    }
                    var1_14 = this.c.aC.GetForegroundWindow();
                    if (var1_14 != this.e) {
                        if (this.c.d <= 5) {
                            this.c.g(String.format("Destination is %08x not %08x, try click", new Object[]{var1_14, this.e}));
                        }
                        this.AboutDialog();
                    }
                    var2_22 = 0;
                    if (var3_23 /* !! */ .length != 3) ** GOTO lbl762
                    var4_26 = var3_23 /* !! */ [2].trim();
                    var5_32 = var3_23 /* !! */ [1].trim();
                    tmp = -1;
                    switch (var5_32.hashCode()) {
                        case 96681: {
                            if (var5_32.equals("alt")) {
                                tmp = 1;
                            }
                            break;
                        }
                        case 3064427: {
                            if (var5_32.equals("ctrl")) {
                                tmp = 2;
                            }
                            break;
                        }
                        case 109407362: {
                            if (var5_32.equals("shift")) {
                                tmp = 3;
                            }
                            break;
                        }
                    }
                    switch (tmp) {
                        case 1: {
                            var2_22 = 18;
                            break;
                        }
                        case 2: {
                            var2_22 = 17;
                            break;
                        }
                        case 3: {
                            var2_22 = 16;
                            break;
                        }
                        default: {
                            this.b("# keystroke modifier must be alt, ctrl or shift");
                            break;
                        }
                    }
                    ** GOTO lbl763
lbl762:
                    // 1 sources

                    var4_26 = var3_23 /* !! */ [1].trim();
lbl763:
                    // 2 sources

                    var6_33 = this.c((String)var4_26);
                    if (var2_22 > 0) {
                        if (this.c.d <= 5) {
                            this.c.g("Keystroke " + var2_22 + " down");
                        }
                        this.c.AboutDialog(var2_22, true);
                        this.c.AboutDialog(100L);
                    }
                    if (this.c.d <= 5) {
                        this.c.g("Keystroke " + var6_33);
                    }
                    this.c.b(var6_33, 300);
                    if (var2_22 <= 0) break;
                    if (this.c.d <= 5) {
                        this.c.g("Keystroke " + var2_22 + " up");
                    }
                    this.c.AboutDialog(var2_22, false);
                    this.c.AboutDialog(100L);
                    break;
                }
                case 22: {
                    if (var3_23 /* !! */ .length != 1) {
                        this.b("# setfocus does not take parameters");
                        break;
                    }
                    if (this.d == null) {
                        var3_23 /* !! */  = "No saved windowRect - could not set focus";
                        var1_1 = this.c;
                        var1_1.AboutDialog((String)var3_23 /* !! */ , false);
                        break;
                    }
                    this.AboutDialog();
                    break;
                }
                default: {
                    this.b("# Unknown command:" + (String)var1_1);
                }
                case 6: 
            }
        }
    }

    private void AboutDialog() {
        int n2 = (int)(this.d.AboutDialog() + 5.0);
        int n3 = (int)(this.d.b() + this.d.d() / 2.0);
        if (this.c.d <= 5) {
            this.c.g(" Click at " + n2 + "," + n3);
        }
        boolean bl2 = false;
        if (this.c.DHandler == 0) {
            this.c.DHandler = this.e;
            bl2 = true;
        }
        this.c.c((double)n2, (double)n3);
        this.c.AboutDialog(1000L);
        if (bl2) {
            this.c.DHandler = 0;
        }
        if ((n2 = this.c.aC.GetForegroundWindow()) != this.e) {
            if (this.c.d <= 5) {
                this.c.g(String.format("Destination is %08x not %08x so not solitaire", n2, this.e));
            }
            this.b("ERR: Input not directed at solitaire");
        }
    }

    private int c(String string) {
        String string2 = string = string.trim();
        int n2 = -1;
        switch (string.hashCode()) {
            case -1294172031: {
                if (string2.equals("escape")) {
                    n2 = 1;
                }
                break;
            }
            case 3217: {
                if (string2.equals("f7")) {
                    n2 = 2;
                }
                break;
            }
            case 3739: {
                if (string2.equals("up")) {
                    n2 = 3;
                }
                break;
            }
            case 96681: {
                if (string2.equals("alt")) {
                    n2 = 4;
                }
                break;
            }
            case 114581: {
                if (string2.equals("tab")) {
                    n2 = 5;
                }
                break;
            }
            case 3089570: {
                if (string2.equals("down")) {
                    n2 = 6;
                }
                break;
            }
            case 3317767: {
                if (string2.equals("left")) {
                    n2 = 7;
                }
                break;
            }
            case 96667352: {
                if (string2.equals("enter")) {
                    n2 = 8;
                }
                break;
            }
            case 108511772: {
                if (string2.equals("right")) {
                    n2 = 9;
                }
                break;
            }
            case 109407362: {
                if (string2.equals("shift")) {
                    n2 = 10;
                }
                break;
            }
            case 109637894: {
                if (string2.equals("space")) {
                    n2 = 11;
                }
                break;
            }
            case 951543133: {
                if (string2.equals("control")) {
                    n2 = 12;
                }
                break;
            }
            case 1353507967: {
                if (string2.equals("backspace")) {
                    n2 = 13;
                }
                break;
            }
        }
        switch (n2) {
            case 4: {
                return 18;
            }
            case 12: {
                return 17;
            }
            case 10: {
                return 16;
            }
            case 3: {
                return 38;
            }
            case 6: {
                return 40;
            }
            case 7: {
                return 37;
            }
            case 9: {
                return 39;
            }
            case 1: {
                return 27;
            }
            case 5: {
                return 9;
            }
            case 2: {
                return 118;
            }
            case 8: {
                return 10;
            }
            case 11: {
                return 32;
            }
            case 13: {
                return 8;
            }
        }
        this.b("# Unrecognized keystroke or modifier:" + string);
        return 0;
    }

    private void AboutDialog(String[] stringArray, int n2) {
        int n3;
        if (stringArray.length > n2 && (n3 = this.b(stringArray[n2], "max moves must be AboutDialog number")) > 0) {
            n2 = n3;
            t t2 = this.c.l;
            this.c.l.k = n2;
        }
    }

    private int AboutDialog(String string, String string2) {
        int n2 = (string = string.trim()).equals("AboutDialog") ? 1 : (string.equals("k") ? 13 : (string.equals("q") ? 12 : (string.equals("j") ? 11 : this.b(string, string2 + " number must be 1-13 or AboutDialog,k,q,j"))));
        return n2;
    }

    private int b(String string, String string2) {
        int n2 = -1;
        try {
            n2 = Integer.parseInt(string.trim());
        }
        catch (Exception exception) {
            this.c.g(string2);
            this.b("ERR: " + string2);
        }
        return n2;
    }

    private String b() {
        switch (this.c.MHandler) {
            case 1: {
                return "SOLVED";
            }
            case 3: 
            case 6: {
                if (this.c.am) {
                    return "SOLVING";
                }
                return "STARTSOLVE";
            }
            case 24: {
                return "EXPOSE";
            }
            case 15: {
                return "CONFIRMCARD";
            }
            case 19: {
                return "CHOOSEGAME";
            }
            case 20: {
                return "CHOOSEFILE";
            }
            case 5: {
                Object object = this.c.ar.z;
                if (this.c.ar.B == 0) {
                    object = object.c;
                    Object object2 = "";
                    CardImage[][] pVArray = object;
                    int n2 = ((CardImage[][])object).length;
                    int n3 = 0;
                    while (n3 < n2) {
                        object = pVArray[n3];
                        CardImage[] pVArray2 = object;
                        int n4 = ((CardImage[])object).length;
                        int n5 = 0;
                        while (n5 < n4) {
                            object = pVArray2[n5];
                            if (object != null) {
                                SolitaireSolver cfr_ignored_0 = this.c.ao;
                                object2 = (String)object2 + SolitaireSolver.b((CardImage)object) + ",";
                            }
                            ++n5;
                        }
                        ++n3;
                    }
                    return "CHOOSEFROM:" + (String)object2;
                }
                return "CONFIRMCARD";
            }
        }
        if (this.c.am) {
            return "SOLVING";
        }
        return "Unexpected pause mode " + this.c.MHandler;
    }

    private void AboutDialog(BufferedReader bufferedReader) {
        this.c.AboutDialog(100L, "Wait paused");
        while (!this.c.aO || this.c.MHandler == 22 || this.c.MHandler == 8 || this.c.MHandler == 9) {
            if (this.c.d <= 3) {
                this.c.g("==>API sleep 49 waiting for paused");
            }
            this.c.AboutDialog(49L, "Wait paused 2");
            try {
                if (!bufferedReader.ready()) continue;
                break;
            }
            catch (Exception exception) {}
        }
        this.c.ah = false;
    }
}

