/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire;

import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.solver.pBSolver;
import com.solvitaire.solitaire.solver.pDSolver;
import com.solvitaire.solitaire.util.pI;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.solver.KlondikeSolver;
import com.solvitaire.solitaire.solver.SolverException;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SpiderSolver;
import com.solvitaire.solitaire.challenge.ChallengeSolver;
import com.solvitaire.solitaire.solver.SpiderVariantSolver;
import java.awt.EventQueue;
import javax.swing.JOptionPane;

public class Main {
    private static SolitaireGameEngine AboutDialog = null;

    public static void main(String[] object) {
        try {
            Thread.sleep(1000L);
        }
        catch (Exception exception) {}
        AboutDialog = new SolitaireGameEngine();
        new SolitaireGameEngine().br = new ChallengeSolver(AboutDialog);
        if (((String[])object).length > 0) {
            AboutDialog.g("Argument 0 " + object[0]);
            if (object[0].startsWith("api")) {
                AboutDialog.g("Activating API thread");
                System.out.println("## Initializing API ##");
                // API thread disabled pending ApiCommandProcessor.java rewrite:
                // Main.AboutDialog.k = new ApiCommandProcessor(AboutDialog);
                // Main.AboutDialog.k.start();
            }
        } else if (Main.AboutDialog.d < 5) {
            JOptionPane.showMessageDialog(null, "\n\nYou have debug logging set.\nPerformance will be impaired\n\n");
        }
        AboutDialog.b(true);
        while (!Main.AboutDialog.ai) {
            if (!Main.AboutDialog.e) {
                try {
                    if (Main.AboutDialog(AboutDialog)) {
                        return;
                    }
                }
                catch (SolverException ql2) {
                    AboutDialog.g("*****Got restart exception");
                }
                catch (Exception exception) {
                    AboutDialog.g("Unexpected exception:" + exception.getMessage());
                    AboutDialog.g("Stack trace:" + SolitaireGameEngine.AboutDialog(exception));
                    try {
                        String string = "Unexpected exception, restart required";
                        object = AboutDialog;
                        object.AboutDialog(string, false);
                    }
                    catch (SolverException ql3) {}
                }
            } else {
                try {
                    if (Main.AboutDialog(AboutDialog)) {
                        return;
                    }
                }
                catch (SolverException ql4) {
                    AboutDialog.g("*****Got restart exception");
                }
            }
            Main.AboutDialog.DesktopDuplication = false;
            Main.AboutDialog.ak = false;
            Main.AboutDialog.am = false;
        }
    }

    private static boolean AboutDialog(SolitaireGameEngine qo_02) {
        SolitaireGameEngine qo_03;
        String string;
        if (!qo_02.aq.g.isVisible()) {
            qo_02.aq.n();
            qo_02.aq.g.setVisible(true);
        }
        EventQueue.invokeLater(new pI(qo_02));
        if (qo_02.uPanel) {
            qo_02.g();
        }
        qo_02.h();
        if (qo_02.d <= 5) {
            SolitaireGameEngine qo_04 = qo_02;
            qo_04.g("AFTER MAINLINEPAUSE, modechoice " + qo_04.bg + " game mode " + qo_02.m + " challenge " + qo_02.l.c);
        }
        if (qo_02.ai) {
            return true;
        }
        if (qo_02.yHandler) {
            string = "Cannot be inError after main doPause";
            qo_03 = qo_02;
            qo_03.AboutDialog(string, false);
        }
        qo_02.aq.V = "";
        qo_02.ao = null;
        qo_02.aR = false;
        switch (qo_02.bg) {
            case 2: 
            case 4: {
                if (qo_02.ar == null) break;
                qo_02.ar.AboutDialog();
                qo_02.aq.m();
                qo_02.aq.n();
                break;
            }
            case 3: {
                qo_02.DHandler = 0;
                qo_02.i = 0;
                qo_02.aq.m();
                qo_02.FPanel.d();
            }
        }
        switch (qo_02.i) {
            case 1: {
                qo_02.ao = new pDSolver(qo_02);
                break;
            }
            case 2: {
                qo_02.ao = new SpiderSolver(qo_02);
                break;
            }
            case 3: {
                qo_02.ao = new pBSolver(qo_02);
                break;
            }
            case 4: {
                qo_02.ao = new KlondikeSolver(qo_02);
                break;
            }
            case 5: {
                qo_02.ao = new SpiderVariantSolver(qo_02);
                break;
            }
            default: {
                string = "Unidentified Solitaire variant";
                qo_03 = qo_02;
                qo_03.AboutDialog(string, false);
            }
        }
        qo_02.ao.FPanel = true;
        boolean bl2 = false;
        while (!qo_02.ai && !qo_02.yHandler) {
            qo_02.FPanel.b();
            if (qo_02.ar != null) {
                qo_02.ar.b();
            }
            qo_02.ao.j();
            if (qo_02.d <= 5) {
                SolitaireGameEngine qo_05 = qo_02;
                qo_05.g("Exited process in game mode " + qo_05.m + " with game number " + qo_02.l.g());
            }
            ++qo_02.ab;
            int n2 = qo_02.l.c();
            if (qo_02.m == 3) {
                if (qo_02.l.rPanel && qo_02.d <= 5) {
                    SolitaireGameEngine qo_06 = qo_02;
                    qo_06.g("Next capture checkpoint is " + qo_06.l.AboutDialog(!qo_02.l.s));
                }
                if (!qo_02.l.b) {
                    qo_02.aq.c(6, "Saved partial solution for " + qo_02.l.k() + " (board " + qo_02.l.h() + ")");
                    qo_02.AboutDialog(1000L, "Allow read of partial");
                    if (qo_02.d <= 5) {
                        SolitaireGameEngine qo_07 = qo_02;
                        qo_07.g("challenge not yet solved, try another board, acc score " + qo_07.l.m + " acc cards " + qo_02.l.n);
                    }
                    if (!qo_02.uPanel) {
                        n2 = 0;
                        while (n2 < 20) {
                            SolitaireGameEngine qo_08 = qo_02;
                            if (ErrorDialog.AboutDialog(qo_08, qo_08.FPanel.AboutDialog.e(), null, 100, 500, false, "endBoardStable") != null) break;
                            ++n2;
                        }
                        if (qo_02.d <= 5) {
                            qo_02.g("Table is stable, calling process again");
                        }
                    }
                    qo_02.FPanel.b();
                    MainWindow qb_02 = qo_02.aq;
                    qb_02.c(true);
                    continue;
                }
                if (qo_02.d <= 5) {
                    qo_02.g("Solved so set pause and return to mainline");
                }
                qo_02.aq.c(6, "Saved solution for " + qo_02.l.k());
                qo_02.AboutDialog(2000L, "Allow read of saved");
                qo_02.aq.AboutDialog(6);
                break;
            }
            if (qo_02.m == 4) {
                if (qo_02.bg == 4) break;
                if (n2 != 0) continue;
                if (qo_02.d <= 4) {
                    qo_02.g("Next board does not exist - look for next game");
                }
                if (qo_02.l.i()) {
                    qo_02.aq.AboutDialog(10);
                    bl2 = true;
                    break;
                }
                qo_02.m = 0;
                qo_02.aq.AboutDialog(11);
                break;
            }
            if (qo_02.m == 2) {
                if (qo_02.ah) {
                    if (qo_02.d <= 5) {
                        qo_02.g("Single file request completed in API mode so back to old mode");
                    }
                    qo_02.bg = qo_02.k.AboutDialog;
                    qo_02.uPanel = true;
                    break;
                }
                if (qo_02.d <= 5) {
                    qo_02.g("Single file request completed so do partial reset (stay in file mode)");
                }
                qo_02.aq.AboutDialog(12);
                break;
            }
            if (qo_02.m == 1) {
                n2 = qo_02.l.AboutDialog(false);
                if (qo_02.d > 5) continue;
                qo_02.g("Game number is now " + n2);
                continue;
            }
            if (qo_02.m != 0) continue;
            if (qo_02.aT) {
                qo_02.AboutDialog(1000L);
            }
            if (qo_02.uPanel || !qo_02.FPanel.b(!qo_02.aT)) {
                if (qo_02.d > 5) break;
                qo_02.g("Standalone UI or normal mode and no table so restart");
                break;
            }
            qo_02.l.l = 0;
        }
        if (!bl2) {
            if (qo_02.d <= 5) {
                qo_02.g("*****Out of process loop so request AboutDialog reset");
            }
            qo_02.c(14);
        }
        return false;
    }
}

