/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.solver;

import com.solvitaire.solitaire.reader.pCBoardReader;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.util.qa;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.util.s_0;
import java.awt.geom.Rectangle2D;
import java.io.File;
import java.util.Arrays;
import java.util.HashMap;

public final class pBSolver
extends SolitaireSolver {
    private static int LHandler = 10;
    private int MHandler = 0;
    private int NHandler = -5;
    private int OHandler = 40;
    private int PPanel = 20;
    private int Q = 40;
    private int R = -10;
    private int SPanel = -4;
    private int T = -12;
    private int U = 30;
    private int V = -10;
    private int W = -3;
    private int X = -2;
    private int Y = -4;
    private int Z = 43;
    private int aa = -9;
    private int ab = 6;
    private int ac = -2;
    private int ad = 10;
    private int ae = 3;
    private int af = -7;
    private int ag = -1;
    private int ah = 20;
    private int ai = 40;
    private int DesktopDuplication = 0;
    private int ak = 0;
    private int al = 0;
    private int am = 0;
    private int an = 0;
    private int ao = 0;
    private int ap = 0;
    private int aq = 0;
    private int ar;
    private int as;
    private static String[] at = new String[]{"?", "toAces", "fromSpace", "toSpace", "fromWork", "toWork", "matching", "toAcesAuto", "expose", "matchWithSplit", "toSpaceKing"};
    static final int[] AboutDialog;
    private static int[] au;
    private pCBoardReader av;
    private int[][] aw;
    private int ax;
    public int[] b;
    public int[] c;

    static {
        int[] nArray = new int[5];
        nArray[0] = -1;
        nArray[1] = 3;
        nArray[3] = 2;
        nArray[4] = 1;
        AboutDialog = nArray;
        int[] nArray2 = new int[5];
        nArray2[0] = -1;
        nArray2[1] = 1;
        nArray2[2] = 2;
        nArray2[4] = 3;
        au = nArray2;
    }

    pBSolver(SolitaireGameEngine qo_02) {
        super(qo_02, 2000);
        this.o = 1;
        this.p = 52;
        this.f = 8;
        this.rPanel = true;
    }

    @Override
    final String AboutDialog() {
        return "FreeCell";
    }

    @Override
    final boolean b() {
        this.i();
        this.e = this.d.au + "freecell" + File.separator;
        this.as = 0;
        this.g = new int[50][this.f];
        this.b = new int[4];
        this.c = new int[4];
        this.t = new int[this.f][LHandler];
        this.aw = new int[this.j][1];
        this.h = new int[this.f];
        this.i = new int[this.f];
        if (this.FPanel) {
            if (this.d.d <= 4) {
                this.d.g("Running FreeCell");
            }
            this.av = new pCBoardReader(this);
            this.d.ap = this.av;
            if (this.d.d <= 3) {
                this.d.g("Auto constructed");
            }
            this.d.ap.d();
        }
        if (!this.d.ap.e()) {
            return false;
        }
        if (!this.d.uPanel) {
            pCBoardReader pC2 = this.av;
            Rectangle2D.Double double_ = pC2.f.aY.AboutDialog[0].f[0].o();
            int n2 = 0;
            while (n2 < 20) {
                pC2.q[n2] = new s_0(pC2.f, pC2.f.bu.c, n2);
                pC2.q[n2].AboutDialog((int)double_.xHandler, (int)(double_.yHandler + 48.0 * pC2.f.FPanel.wHandler * (double)n2));
                ++n2;
            }
        }
        this.d.aZ = new qa(this.d.aY, true);
        this.J = 0;
        this.KHandler = 0;
        this.ax = this.d.l.m;
        if (this.d.l.k < 999) {
            if (this.d.d <= 5) {
                this.d.g("Using modified search for max move target");
            }
            this.MHandler = this.W;
            this.T = this.Y;
            this.SPanel = this.X;
        }
        if (this.d.l.c == 4) {
            this.T = this.af;
            this.SPanel = this.ag;
            this.PPanel = this.ah;
            this.OHandler = this.ai;
        }
        return true;
    }

    @Override
    final void AboutDialog(int n2, boolean bl2) {
        if (this.d.d <= n2) {
            this.b(n2);
            this.AboutDialog(n2, this.d.aZ.AboutDialog[2]);
            this.AboutDialog(n2, this.d.aZ.AboutDialog[1]);
            this.AboutDialog(n2, this.d.aZ.AboutDialog[0]);
        }
    }

    @Override
    final void AboutDialog(int n2, int n3) {
        this.l();
        if (this.d.PPanel++ % 100000L == 0L) {
            this.b(4);
        }
        if (!this.EHandler) {
            pBSolver pB2 = this;
            n3 = pB2.b(pB2.d.aZ, n2);
            if (n3 == 2) {
                if (this.d.d <= 4) {
                    this.d.g("Solved state solved so backout 999");
                }
                this.G = 999;
            } else if (n3 == 1) {
                return;
            }
        }
        if (this.d.aZ.h > this.yHandler) {
            return;
        }
        if (this.G < 0 && this.d.aZ.h == 0 && this.c(1, n2) && this.G < 0) {
            this.G = 0;
        }
        n3 = this.d.T;
        if (this.G < 0 && !this.c(7, n2)) {
            if (this.G < 0) {
                this.d.T += this.MHandler;
                if (this.d.T <= 0) {
                    ++this.DesktopDuplication;
                    if (this.d.d <= 2) {
                        this.d.g("Depth " + this.d.aZ.h + " try moving aces");
                    }
                    this.c(1, n2);
                    --this.DesktopDuplication;
                }
                this.d.T = n3;
            }
            if (this.G < 0) {
                this.d.T += this.R;
                if (this.d.T < 0) {
                    ++this.an;
                    if (this.d.d <= 2) {
                        this.d.g("Depth " + this.d.aZ.h + " try moving from work area");
                    }
                    this.c(4, n2);
                    --this.an;
                }
                this.d.T = n3;
            }
            if (this.G < 0) {
                this.d.T += this.NHandler;
                if (this.d.T < 0) {
                    ++this.al;
                    this.c(2, n2);
                    --this.al;
                }
                this.d.T = n3;
            }
            if (this.G < 0) {
                this.d.T += this.T;
                if (this.d.T < 0) {
                    ++this.ap;
                    if (this.d.d <= 2) {
                        this.d.g("Depth " + this.d.aZ.h + " try exposing an ace");
                    }
                    this.c(8, n2);
                    --this.ap;
                }
                this.d.T = n3;
            }
            if (this.G < 0) {
                this.d.T += this.SPanel;
                if (this.d.T < 0) {
                    ++this.ao;
                    if (this.d.d <= 2) {
                        this.d.g("Depth " + this.d.aZ.h + " try alternating joins");
                    }
                    this.c(6, n2);
                    --this.ao;
                }
                this.d.T = n3;
            }
            if (this.G < 0) {
                this.d.T += this.PPanel;
                if (this.d.T < 0) {
                    ++this.ak;
                    if (this.d.d <= 2) {
                        this.d.g("Depth " + this.d.aZ.h + " try moving to AboutDialog space");
                    }
                    this.c(10, n2);
                    --this.ak;
                }
                this.d.T = n3;
            }
            if (this.G < 0) {
                this.d.T += this.OHandler;
                if (this.d.T < 0) {
                    ++this.ak;
                    if (this.d.d <= 2) {
                        this.d.g("Depth " + this.d.aZ.h + " try moving to AboutDialog space");
                    }
                    this.c(3, n2);
                    --this.ak;
                }
                this.d.T = n3;
            }
            if (this.G < 0) {
                this.d.T += this.Q;
                if (this.d.T < 0) {
                    ++this.am;
                    if (this.d.d <= 2) {
                        this.d.g("Depth " + this.d.aZ.h + " try moving to work area");
                    }
                    this.c(5, n2);
                    --this.am;
                }
                this.d.T = n3;
            }
            if (this.G < 0) {
                this.d.T += this.U;
                if (this.d.T < 0) {
                    ++this.aq;
                    if (this.d.d <= 2) {
                        this.d.g("Depth " + this.d.aZ.h + " try AboutDialog match with AboutDialog split");
                    }
                    this.c(9, n2);
                    --this.aq;
                }
                this.d.T = n3;
            }
        }
        if (this.G >= 0) {
            --this.G;
            if (this.d.d <= 1) {
                this.d.g("Backout now " + this.G);
            }
        }
    }

    @Override
    final long c() {
        long l2 = 0L;
        int n2 = 0;
        while (n2 < this.f) {
            pBSolver pB2 = this;
            l2 += pB2.AboutDialog(pB2.d.aZ.AboutDialog[0].f[n2], l2, true, false);
            ++n2;
        }
        this.n = 0;
        n2 = 0;
        while (n2 < 4) {
            pBSolver pB3 = this;
            l2 += pB3.AboutDialog(pB3.d.aZ.AboutDialog[2].f[n2], l2, false, false);
            ++n2;
        }
        n2 = 0;
        while (n2 < 4) {
            pBSolver pB4 = this;
            l2 += pB4.AboutDialog(pB4.d.aZ.AboutDialog[1].f[n2], l2, false, false);
            ++n2;
        }
        return l2;
    }

    private static boolean c(Card object2) {
        boolean bl2 = false;
        for (Object object2 : ((Card)object2).e) {
            if (((CardRun)object2).AboutDialog != 1 || ((CardRun)object2).c[0].f != 1) continue;
            bl2 = true;
            break;
        }
        return bl2;
    }

    private boolean d(Card qu2) {
        int n2 = this.d.aZ.AboutDialog[2].f[AboutDialog[this.d.l.e]].b() + 1;
        CardRun qm_02 = null;
        for (CardRun qm_03 : qu2.e) {
            if (qm_03 == qu2.d) break;
            qm_02 = qm_03;
        }
        return qm_02 != null && qm_02.c[qm_02.AboutDialog - 1].g == n2;
    }

    private boolean c(int n2, int n3) {
        boolean bl2;
        block81: {
            bl2 = false;
            if (this.d.d <= 3) {
                this.d.g("Entered dojoins for mode " + at[n2] + " complexity " + this.d.T);
            }
            if (n2 == 4) {
                Card[] quArray = this.d.aZ.AboutDialog[1].f;
                int n4 = this.d.aZ.AboutDialog[1].f.length;
                int n5 = 0;
                while (n5 < n4) {
                    Card qu2 = quArray[n5];
                    if (this.G <= 0) {
                        if (qu2.d != null) {
                            Card[] quArray2 = this.d.aZ.AboutDialog[0].f;
                            int n6 = this.d.aZ.AboutDialog[0].f.length;
                            int n7 = 0;
                            while (n7 < n6) {
                                Card qu3 = quArray2[n7];
                                if (this.G > 0) break;
                                if (qu3.d != null || qu2.d.c[0].f == 13) {
                                    this.AboutDialog(qu3, qu2, n2, n3);
                                }
                                ++n7;
                            }
                        }
                        ++n5;
                        continue;
                    }
                    break;
                }
            } else if (n2 == 3 || n2 == 10) {
                Card[] quArray = this.d.aZ.AboutDialog[0].f;
                int n8 = this.d.aZ.AboutDialog[0].f.length;
                int n9 = 0;
                while (n9 < n8) {
                    Card qu4 = quArray[n9];
                    if (qu4.d == null) {
                        Card[] quArray3 = this.d.aZ.AboutDialog[0].f;
                        int n10 = this.d.aZ.AboutDialog[0].f.length;
                        int n11 = 0;
                        while (n11 < n10) {
                            Card qu5 = quArray3[n11];
                            if (this.G <= 0) {
                                if (qu5.d != null) {
                                    boolean bl3;
                                    boolean bl4 = bl3 = qu5.d.c[0].f == 13;
                                    if (!(n2 != 10 ? bl3 : !bl3) && qu5.e.size() != 1) {
                                        this.AboutDialog(qu4, qu5, n2, n3);
                                    }
                                }
                                ++n11;
                                continue;
                            }
                            break block81;
                        }
                        break;
                    }
                    ++n9;
                }
            } else if (n2 == 2 || n2 == 8 || n2 == 6 || n2 == 9) {
                Card[] quArray = this.d.aZ.AboutDialog[0].f;
                int n12 = this.d.aZ.AboutDialog[0].f.length;
                int n13 = 0;
                while (n13 < n12) {
                    Card qu6 = quArray[n13];
                    if (this.G > 0) break;
                    if (qu6.d != null) {
                        boolean bl5 = true;
                        if (this.d.l.c == 4) {
                            if (n2 == 8) {
                                if (!this.d(qu6)) {
                                    bl5 = false;
                                }
                            } else if (n2 == 6 && this.d(qu6)) {
                                bl5 = false;
                            }
                        } else if (n2 == 8 && !pBSolver.c(qu6)) {
                            bl5 = false;
                        }
                        if (bl5) {
                            Card[] quArray4 = this.d.aZ.AboutDialog[0].f;
                            int n14 = this.d.aZ.AboutDialog[0].f.length;
                            int n15 = 0;
                            while (n15 < n14) {
                                Card qu7 = quArray4[n15];
                                if (this.G > 0) break;
                                if (this.d.l.c == 4 || !(n2 != 8 ? n2 == 6 && pBSolver.c(qu6) && !pBSolver.c(qu7) : pBSolver.c(qu7))) {
                                    this.AboutDialog(qu7, qu6, n2, n3);
                                }
                                ++n15;
                            }
                        }
                    }
                    ++n13;
                }
            } else if (n2 == 5) {
                Card qu8;
                if (this.d.aZ.AboutDialog[1].f[0].d == null) {
                    qu8 = this.d.aZ.AboutDialog[1].f[0];
                } else if (this.d.aZ.AboutDialog[1].f[1].d == null) {
                    qu8 = this.d.aZ.AboutDialog[1].f[1];
                } else if (this.d.aZ.AboutDialog[1].f[2].d == null) {
                    qu8 = this.d.aZ.AboutDialog[1].f[2];
                } else if (this.d.aZ.AboutDialog[1].f[3].d == null) {
                    qu8 = this.d.aZ.AboutDialog[1].f[3];
                } else {
                    return false;
                }
                if (this.d.d <= 2) {
                    this.d.g("Selected workArea " + qu8.c);
                }
                Card[] quArray = this.d.aZ.AboutDialog[0].f;
                int n16 = this.d.aZ.AboutDialog[0].f.length;
                int n17 = 0;
                while (n17 < n16) {
                    Card qu9 = quArray[n17];
                    if (qu9.e.size() == 1 && qu9.d.AboutDialog == 1) {
                        this.d.T += this.NHandler;
                    }
                    if (this.G <= 0) {
                        this.AboutDialog(qu8, qu9, n2, n3);
                        ++n17;
                        continue;
                    }
                    break;
                }
            } else if (n2 == 7) {
                int n18;
                Card qu10;
                if (this.d.l.k < 999 && (this.d.l.c == 4 || this.d.l.c == 3)) {
                    return false;
                }
                int n19 = 13;
                int n20 = 13;
                Card[] quArray = this.d.aZ.AboutDialog[2].f;
                int n21 = this.d.aZ.AboutDialog[2].f.length;
                int n22 = 0;
                while (n22 < n21) {
                    qu10 = quArray[n22];
                    int n23 = qu10.f;
                    n18 = qu10.c();
                    if (pBSolver.c(n23)) {
                        if (n18 < n19) {
                            n19 = n18;
                        }
                    } else if (n18 < n20) {
                        n20 = n18;
                    }
                    ++n22;
                }
                if (this.d.d <= 3) {
                    this.d.g("Lowest black on aces is " + n19 + " lowest red is " + n20);
                }
                quArray = this.d.aZ.AboutDialog[2].f;
                n21 = this.d.aZ.AboutDialog[2].f.length;
                n22 = 0;
                while (n22 < n21) {
                    qu10 = quArray[n22];
                    int n24 = qu10.f;
                    n18 = qu10.c();
                    int n25 = 0;
                    if (n18 < 2) {
                        n25 = 1;
                    } else if (pBSolver.c(n24)) {
                        if (n18 <= n20) {
                            n25 = 1;
                        }
                    } else if (n18 <= n19) {
                        n25 = 1;
                    }
                    if (n25 != 0) {
                        if (this.d.d <= 3) {
                            this.d.g("Try and move card up to " + pBSolver.f(n18) + " of " + pBSolver.d(n24 * 100));
                        }
                        Card[] quArray5 = this.d.aZ.AboutDialog[0].f;
                        n25 = this.d.aZ.AboutDialog[0].f.length;
                        n18 = 0;
                        while (n18 < n25) {
                            Card qu11 = quArray5[n18];
                            bl2 = this.AboutDialog(qu10, qu11, n2, n3);
                            if (bl2) {
                                if (this.d.d > 3) break;
                                this.d.g("Automatic ace move from stack " + qu11.c + " was productive");
                                break;
                            }
                            ++n18;
                        }
                        if (bl2) break;
                        quArray5 = this.d.aZ.AboutDialog[1].f;
                        n25 = this.d.aZ.AboutDialog[1].f.length;
                        n18 = 0;
                        while (n18 < n25) {
                            Card qu12 = quArray5[n18];
                            bl2 = this.AboutDialog(qu10, qu12, n2, n3);
                            if (bl2) {
                                if (this.d.d > 3) break;
                                this.d.g("Automatic ace move from work " + qu12.c + " was productive");
                                break;
                            }
                            ++n18;
                        }
                        if (bl2) break;
                    }
                    ++n22;
                }
            } else {
                Card[] quArray = this.d.aZ.AboutDialog[2].f;
                int n26 = this.d.aZ.AboutDialog[2].f.length;
                int n27 = 0;
                while (n27 < n26) {
                    Card qu13 = quArray[n27];
                    if (this.G > 0) break;
                    if (this.d.d <= 2) {
                        this.d.g("Try and move card run to ace of " + pBSolver.d(qu13.f * 100));
                    }
                    if (this.d.l.c == 4 && qu13.d != null && qu13.c() > 2) {
                        int n28 = qu13.c % 10;
                        if (n28 == au[this.d.l.e]) {
                            this.d.T += this.Z;
                            if (this.d.d <= 3) {
                                this.d.g("Adjusted complexity by removeAntag to " + this.d.T);
                            }
                        } else if (n28 == AboutDialog[this.d.l.e]) {
                            this.d.T += this.aa;
                            if (this.d.d <= 3) {
                                this.d.g("Adjusted complexity by removeTargetSuit to " + this.d.T);
                            }
                        } else {
                            this.d.T += this.ab;
                            if (this.d.d <= 3) {
                                this.d.g("Adjusted complexity by removeOtherSuit to " + this.d.T);
                            }
                        }
                    }
                    Card[] quArray6 = this.d.aZ.AboutDialog[0].f;
                    int n29 = this.d.aZ.AboutDialog[0].f.length;
                    int n30 = 0;
                    while (n30 < n29) {
                        Card qu14 = quArray6[n30];
                        if (this.G > 0 || (bl2 = this.AboutDialog(qu13, qu14, n2, n3))) break;
                        ++n30;
                    }
                    if (bl2) break;
                    quArray6 = this.d.aZ.AboutDialog[1].f;
                    n29 = this.d.aZ.AboutDialog[1].f.length;
                    n30 = 0;
                    while (n30 < n29) {
                        Card qu15 = quArray6[n30];
                        if (this.G > 0 || (bl2 = this.AboutDialog(qu13, qu15, n2, n3))) break;
                        ++n30;
                    }
                    if (!bl2) {
                        ++n27;
                        continue;
                    }
                    break;
                }
            }
        }
        return bl2;
    }

    private boolean AboutDialog(Card qu2, Card qu3, int n2, int n3) {
        int n4;
        int n5;
        if (qu2 == qu3) {
            return false;
        }
        if (qu3.d == null) {
            return false;
        }
        int n6 = qu3.d.AboutDialog;
        if (n3 > 0) {
            n5 = n3 % 100;
            if (qu2.c == (n3 = n3 / 100 % 100) && qu3.c == n5) {
                return false;
            }
        }
        n5 = 0;
        n3 = this.d.T;
        switch (n2) {
            case 8: {
                n4 = 1;
                if (qu2.d != null) break;
                n4 = 2;
                break;
            }
            case 6: 
            case 9: {
                n4 = 1;
                break;
            }
            case 4: {
                n4 = 1;
                if (qu2.d != null) break;
                n4 = 2;
                break;
            }
            case 1: 
            case 7: {
                n4 = 1;
                break;
            }
            case 5: {
                n4 = 6;
                break;
            }
            case 3: {
                n4 = 2;
                break;
            }
            case 10: {
                n4 = 2;
                break;
            }
            case 2: {
                n4 = 3;
                break;
            }
            default: {
                n4 = -1;
            }
        }
        int n7 = qu2.AboutDialog(qu3, n4, false);
        if (n2 == 9 && n7 > 0 && n7 < qu3.d.AboutDialog) {
            CardImage pV2 = qu3.d.c[qu3.d.AboutDialog - n7 - 1];
            if (this.d.l.c == 4) {
                if (pV2.e == this.d.l.e) {
                    this.d.T += this.ac;
                    if (this.d.d <= 3) {
                        this.d.g("Adjusted complexity by splitGivesSuit to " + this.d.T);
                    }
                } else {
                    this.d.T += this.ad;
                    if (this.d.d <= 3) {
                        this.d.g("Adjusted complexity by splitDoesNotGiveSuit to " + this.d.T);
                    }
                }
            } else if (this.d.aZ.AboutDialog[2].f[0].b() + 1 == pV2.g || this.d.aZ.AboutDialog[2].f[1].b() + 1 == pV2.g || this.d.aZ.AboutDialog[2].f[2].b() + 1 == pV2.g || this.d.aZ.AboutDialog[2].f[3].b() + 1 == pV2.g) {
                this.d.T += this.V;
                if (this.d.d <= 3) {
                    this.d.g("Adjusted complexity by splitMatchesAce to " + this.d.T);
                }
            }
        }
        if (this.d.l.c == 4 && (n2 == 6 || n2 == 9 || n2 == 4 || n2 == 2) && qu2.b.AboutDialog == 0 && qu2.d != null && qu2.d.c[qu2.d.AboutDialog - 1].e == this.d.l.e) {
            this.d.T += this.ae;
            if (this.d.d <= 3) {
                this.d.g("Adjusted complexity by joinOverSuit to " + this.d.T);
            }
        }
        if (n7 >= 0) {
            int n8;
            int n9;
            int n10 = n7 == 0 ? n6 : n7;
            if (n10 > 1 && (n2 == 6 || n2 == 9 || n2 == 8 || n2 == 3 || n2 == 10 || n2 == 2)) {
                n9 = this.d.aZ.AboutDialog[1].e;
                n8 = this.d.aZ.AboutDialog[0].e;
                if (n4 == 2) {
                    --n8;
                }
                int n11 = (1 << n8) * (n9 + 1);
                if (this.d.d <= 2) {
                    this.d.g("Workarea spaces " + n9 + " stack spaces " + n8 + " allow length " + n11);
                }
                if (n10 > n11) {
                    if (this.d.d <= 2) {
                        this.d.g("Move of " + n7 + " denied because workarea spaces " + n9 + " and stack spaces " + n8);
                    }
                    n7 = -1;
                }
            }
            if (n7 >= 0 && (n10 == n6 || n2 != 6 && n2 != 8 && n2 != 2)) {
                n9 = qu2.d != null ? 2 : 0;
                if ((n7 = qu2.AboutDialog(qu3, n7, null)) >= 0) {
                    if (this.d.d <= 2) {
                        this.d.g("Completed join with split of " + n7);
                    }
                    if (n10 != n6) {
                        n9 |= 1;
                    }
                    if (n2 == 7) {
                        n9 |= 0x10;
                    }
                    this.d.aZ.d[this.d.aZ.h] = n8 = GameMove.AboutDialog(n9, n10, qu3, qu2);
                    ++this.d.aZ.h;
                    long l2 = this.c();
                    if (n2 == 7 || !this.b(qu2, qu3)) {
                        if (n2 != 7) {
                            this.G = this.b(l2);
                        }
                        if (this.G < 0) {
                            this.AboutDialog(l2);
                            n5 = 1;
                            n2 = 0;
                            CardImage pV3 = qu3.AboutDialog();
                            Card qu4 = null;
                            if (pV3 != null && pV3.g == 0) {
                                n2 = 1;
                                qu4 = qu3;
                            } else {
                                CardRun qm_02 = (CardRun)qu3.e.peekFirst();
                                if (qm_02 != null && qm_02.c[0].g == 0 && qu3.q() < 12) {
                                    n2 = 1;
                                }
                            }
                            if (n2 != 0) {
                                if (this.d.d <= 5) {
                                    this.d.g("Invoking play() due to unknown cards, stack " + qu3.c + " lastCard " + String.valueOf(pV3) + " peek " + String.valueOf(qu3.e.peekFirst()));
                                }
                                this.d.ap.AboutDialog(this.d.aZ, qu4, false, true, false);
                                this.d.AboutDialog(1000L, "Wait for auto to complete");
                                this.d.ap.c(qu3);
                                this.d.Z = this.d.ap.AboutDialog(this.d.aY.d);
                                this.av.AboutDialog(qu3, this.d.Y);
                            }
                            this.AboutDialog(n8, 0);
                        }
                        if (this.G >= 0) {
                            --this.G;
                        }
                    }
                    --this.d.aZ.h;
                    qu2.b(qu3, n7, null);
                }
            }
        }
        this.d.T = n3;
        return n5;
    }

    @Override
    final int AboutDialog(Card object) {
        object = new HashMap(52);
        int n2 = this.AboutDialog((HashMap)object, this.d.aY.AboutDialog[0], 1);
        n2 += this.AboutDialog((HashMap)object, this.d.aY.AboutDialog[1], 1);
        return n2 += this.AboutDialog((HashMap)object, this.d.aY.AboutDialog[2], 1);
    }

    @Override
    final boolean AboutDialog(Card qu2, Card qu3) {
        return false;
    }

    @Override
    final int AboutDialog(qa object, boolean bl2, int n2, int n3) {
        if (bl2) {
            return 0;
        }
        if (object == null) {
            return 0;
        }
        if (((qa)object).AboutDialog[2] == null) {
            return 0;
        }
        bl2 = false;
        Card[] quArray = ((qa)object).AboutDialog[2].f;
        int n4 = ((qa)object).AboutDialog[2].f.length;
        int n5 = 0;
        while (n5 < n4) {
            object = quArray[n5];
            if (((Card)object).d != null && ((Card)object).d.AboutDialog >= n3 && (n2 == 0 || ((Card)object).d.c[((Card)object).d.AboutDialog - 1].e == n2)) {
                bl2 += 1;
            }
            ++n5;
        }
        return bl2 ? 1 : 0;
    }

    @Override
    final int AboutDialog(qa qa2) {
        int n2;
        Object object2;
        if (qa2 == null) {
            return 999;
        }
        if (qa2.AboutDialog[2] == null) {
            return 999;
        }
        if (this.d.l.k == 999) {
            boolean bl2 = true;
            object2 = qa2.AboutDialog[0].f;
            n2 = qa2.AboutDialog[0].f.length;
            int n3 = 0;
            while (n3 < n2) {
                Card qu2 = object2[n3];
                if (qu2.e.size() > 1) {
                    bl2 = false;
                    break;
                }
                ++n3;
            }
            if (bl2) {
                if (this.d.d <= 5) {
                    this.d.g("Freecell completed because stacks sequenced, depth " + qa2.h);
                }
                return qa2.h;
            }
        }
        if (this.d.l.c == 4) {
            int n4;
            int n5;
            block26: {
                n5 = this.d.l.e;
                Card[] quArray = qa2.AboutDialog[2];
                if (quArray == null) {
                    n4 = 0;
                } else {
                    quArray = quArray.f;
                    int n6 = quArray.f.length;
                    n2 = 0;
                    while (n2 < n6) {
                        Card qu3 = quArray[n2];
                        if (qu3.d != null && qu3.d.c[qu3.d.AboutDialog - 1].e == n5) {
                            n4 = qu3.d.AboutDialog;
                            break block26;
                        }
                        ++n2;
                    }
                    n4 = 0;
                }
            }
            int n7 = n4;
            n5 = 0;
            int n8 = this.d.l.e * 100 + n7 + 1;
            n2 = this.d.l.e * 100 + this.d.l.d;
            Card[] quArray = qa2.AboutDialog[0].f;
            int n9 = qa2.AboutDialog[0].f.length;
            n7 = 0;
            while (n7 < n9) {
                object2 = quArray[n7];
                for (Object object2 : object2.e) {
                    int n10 = 0;
                    while (n10 < object2.AboutDialog) {
                        if (object2.c[n10].g >= n8 && object2.c[n10].g <= n2) {
                            ++n5;
                            if (n10 < object2.AboutDialog - 1) {
                                ++n5;
                            }
                        }
                        ++n10;
                    }
                }
                ++n7;
            }
            quArray = qa2.AboutDialog[1].f;
            n9 = qa2.AboutDialog[1].f.length;
            n7 = 0;
            while (n7 < n9) {
                Card qu4 = quArray[n7];
                int n11 = qu4.b();
                if (n11 >= n8 && n11 <= n2) {
                    ++n5;
                }
                ++n7;
            }
            return qa2.h + n5;
        }
        if (this.d.l.c == 3) {
            int n12;
            int n13 = this.d.l.i;
            Object object3 = qa2.AboutDialog[2];
            if (object3 == null) {
                n12 = 0;
            } else {
                int[] nArray = new int[4];
                n2 = 0;
                int n14 = 0;
                Card[] quArray = ((CardStack)object3).f;
                int n15 = ((CardStack)object3).f.length;
                int n16 = 0;
                while (n16 < n15) {
                    object3 = quArray[n16];
                    if (((Card)object3).d != null) {
                        nArray[n2] = ((Card)object3).d.AboutDialog;
                    }
                    ++n2;
                    ++n16;
                }
                Arrays.sort(nArray);
                n2 = 3;
                while (n2 > 3 - n13) {
                    n14 += nArray[n2];
                    --n2;
                }
                n12 = n14;
            }
            int n17 = n12;
            n13 = this.d.l.d * this.d.l.i - n17;
            return qa2.h + n13;
        }
        int n18 = qa2.h + 52;
        CardStack qv2 = qa2.AboutDialog[2];
        int n19 = 0;
        int n20 = 0;
        while (n20 < qv2.c) {
            n19 += qv2.f[n20].q();
            ++n20;
        }
        return n18 - n19;
    }

    @Override
    final boolean AboutDialog(qa object, int n2) {
        if (object == null) {
            return false;
        }
        if (((qa)object).AboutDialog[2] == null) {
            return false;
        }
        n2 = 1;
        Card[] quArray = ((qa)object).AboutDialog[0].f;
        int n3 = ((qa)object).AboutDialog[0].f.length;
        int n4 = 0;
        while (n4 < n3) {
            object = quArray[n4];
            if (((Card)object).e.size() > 1) {
                n2 = 0;
                break;
            }
            ++n4;
        }
        return n2 != 0;
    }

    @Override
    final boolean AboutDialog(String object, String[] stringArray, int n2) {
        int n3;
        CardStack qv2 = this.d.aY.AboutDialog[0];
        int n4 = 7;
        boolean bl2 = false;
        int[] nArray = new int[]{7, 7, 7, 7, 6, 6, 6, 6};
        if (object == null) {
            if (n2 != 8) {
                String string = "FreeCell input file must have 7 rows of cards";
                object = this.d;
                object.AboutDialog(string, false);
            }
        } else {
            bl2 = true;
            n4 = 0;
            object = object.split(":");
            try {
                n2 = 0;
                while (n2 < 8) {
                    int n5;
                    nArray[n2] = n5 = (n3 = Integer.parseInt(object[n2]));
                    if (n5 > n4) {
                        n4 = n5;
                    }
                    ++n2;
                }
            }
            catch (NumberFormatException numberFormatException) {
                String string = "Error parsing Freecell options for partially completed deck";
                object = this.d;
                object.AboutDialog(string, false);
            }
        }
        try {
            int n6;
            CardRun qm_02;
            Object object2;
            int n7;
            int n8 = 0;
            while (n8 < n4) {
                String[] stringArray2 = stringArray[n8 + 1].split(",");
                n3 = 0;
                while (n3 < stringArray2.length) {
                    if (nArray[n3] > n8) {
                        Card qu2 = qv2.f[n3];
                        String string = stringArray2[n3];
                        this.g[n8][n3] = n7 = this.d.c(string);
                        if (this.d.d <= 2) {
                            this.d.g("Loading card " + n7 + " into stack " + n3 + " level " + n8);
                        }
                        object2 = qu2.d;
                        qm_02 = new CardRun(this.b(qu2, n7));
                        if (object2 != null) {
                            n6 = qu2.AboutDialog((CardRun)object2, qm_02, false, false);
                            if (n6 > 0) {
                                ((CardRun)object2).AboutDialog(qm_02, n6);
                            } else {
                                qu2.AboutDialog(qm_02);
                            }
                        } else {
                            qu2.AboutDialog(qm_02);
                        }
                    }
                    ++n3;
                }
                ++n8;
            }
            if (bl2) {
                String[] stringArray3 = stringArray[n4 + 1].split(",");
                int n9 = 0;
                while (n9 < 4) {
                    int n10;
                    String string = stringArray3[n9];
                    this.c[n9] = n10 = this.d.c(string);
                    if (n10 > 0) {
                        Card qu3 = this.d.aY.AboutDialog[1].f[n9];
                        qu3.AboutDialog(new CardRun(this.b(qu3, n10)));
                    }
                    ++n9;
                }
                stringArray3 = stringArray[n4 + 2].split(",");
                n9 = 0;
                while (n9 < 4) {
                    int n11;
                    String string = stringArray3[n9];
                    this.b[n9] = n11 = this.d.c(string);
                    if (n11 > 0) {
                        n7 = n11 / 100;
                        int n12 = n11 % 100;
                        object2 = this.d.aY.AboutDialog[2].f[n9];
                        qm_02 = new CardRun(this.b((Card)object2, n7 * 100 + 1));
                        ((Card)object2).AboutDialog(qm_02);
                        n6 = 2;
                        while (n6 <= n12) {
                            qm_02.AboutDialog(new CardRun(this.b((Card)object2, n7 * 100 + n6)), 1);
                            ++n6;
                        }
                    }
                    ++n9;
                }
            }
        }
        catch (Exception exception) {
            String string = "Error interpreting the card data.  Probably unexpected number of cards somewhere in the file.";
            object = this.d;
            object.AboutDialog(string, false);
        }
        if (this.AboutDialog((Card)null) != 52) {
            String string = "ERROR - Did not read 52 cards from the file";
            SolitaireGameEngine qo_02 = this.d;
            qo_02.AboutDialog(string, false);
        }
        return true;
    }

    @Override
    final void AboutDialog(StringBuffer stringBuffer) {
        int n2 = 0;
        boolean bl2 = false;
        stringBuffer.append(SolitaireGameEngine.j[this.d.i]);
        int n3 = 0;
        while (n3 < 4) {
            if (this.h[n3] > n2) {
                n2 = this.h[n3];
            }
            if (this.h[n3] != 7) {
                bl2 = true;
            }
            ++n3;
        }
        n3 = 4;
        while (n3 < 8) {
            if (this.h[n3] > n2) {
                n2 = this.h[n3];
            }
            if (this.h[n3] != 6) {
                bl2 = true;
            }
            ++n3;
        }
        n3 = 0;
        while (n3 < 4) {
            if (this.b[n3] != 0) {
                bl2 = true;
            }
            ++n3;
        }
        n3 = 0;
        while (n3 < 4) {
            if (this.c[n3] != 0) {
                bl2 = true;
            }
            ++n3;
        }
        if (bl2) {
            stringBuffer.append(",");
            n3 = 0;
            while (n3 < 8) {
                stringBuffer.append("" + this.h[n3]);
                if (n3 != 7) {
                    stringBuffer.append(":");
                }
                ++n3;
            }
        }
        stringBuffer.append("\n# Stacks:\n");
        n3 = 0;
        while (n3 < n2) {
            int n4;
            int n5 = this.f;
            if (n3 == n2 - 1) {
                n4 = this.f - 1;
                while (n4 >= 0) {
                    if (this.g[n3][n4] != 0) {
                        n5 = n4 + 1;
                        break;
                    }
                    --n4;
                }
            }
            n4 = 0;
            while (n4 < n5) {
                stringBuffer.append(pBSolver.i(this.g[n3][n4]));
                stringBuffer.append(",");
                ++n4;
            }
            stringBuffer.append("\n");
            ++n3;
        }
        if (bl2) {
            stringBuffer.append("# Work:\n");
            n3 = 0;
            while (n3 < 4) {
                stringBuffer.append(pBSolver.i(this.c[n3]));
                stringBuffer.append(",");
                ++n3;
            }
            stringBuffer.append("\n# Aces:\n");
            n3 = 0;
            while (n3 < 4) {
                stringBuffer.append(pBSolver.i(this.b[n3]));
                stringBuffer.append(",");
                ++n3;
            }
        }
    }

    @Override
    final StringBuffer AboutDialog(String string, int n2) {
        return new StringBuffer(string + "[" + n2 + ":" + this.DesktopDuplication + "," + this.ak + "," + this.al + "," + this.am + "," + this.an + "," + this.ao + "," + this.ap + "," + this.aq + "," + this.ar + "]: ");
    }

    @Override
    final void AboutDialog(int n2) {
    }

    @Override
    final int AboutDialog(HashMap hashMap) {
        int n2;
        int n3 = 0;
        int n4 = 0;
        while (n4 < this.f) {
            n2 = 0;
            while (n2 < this.h[n4]) {
                ++n3;
                this.AboutDialog(hashMap, this.g[n2][n4], "stack");
                if (this.d.d <= 3) {
                    this.d.g("Add card " + n4 + "," + n2 + " to check:" + this.g[n2][n4]);
                }
                ++n2;
            }
            ++n4;
        }
        n4 = 0;
        while (n4 < 4) {
            if (this.c[n4] > 0) {
                ++n3;
                this.AboutDialog(hashMap, this.c[n4], "workarea");
                if (this.d.d <= 3) {
                    this.d.g("Add workarea card " + n4 + " to check:" + this.c[n4]);
                }
            }
            if (this.b[n4] > 0) {
                n2 = this.b[n4] % 100;
                int n5 = this.b[n4] / 100 * 100;
                n3 += n2;
                int n6 = 0;
                while (n6 < n2) {
                    int n7 = n5 + n6 + 1;
                    this.AboutDialog(hashMap, n7, "aces");
                    if (this.d.d <= 3) {
                        this.d.g("Add ace card " + n7 + " to check");
                    }
                    ++n6;
                }
            }
            ++n4;
        }
        return n3;
    }

    @Override
    final int[] d() {
        String string = "Unknown cards not expected in Freecell";
        SolitaireGameEngine qo_02 = this.d;
        qo_02.AboutDialog(string, false);
        return null;
    }

    @Override
    final int AboutDialog(Card qu2, Card qu3, int n2) {
        int n3 = 0;
        if (qu3.d == null) {
            n3 = 1;
        }
        return this.b(qu2, qu3, n2, n3);
    }

    private int b(Card qu2, Card qu3, int n2, int n3) {
        if (qu2.b.AboutDialog == 2) {
            return -1;
        }
        int n4 = -1;
        int n5 = qu2.d.AboutDialog;
        int n6 = qu3.b.AboutDialog == 1 ? 6 : (qu3.b.AboutDialog == 0 && qu3.d == null ? 2 : (qu2.e.size() == 1 ? 3 : 1));
        if (n3 == 2 ? qu3.d == null : n3 == 1 && qu3.d != null) {
            return -1;
        }
        n3 = -1;
        if (qu3.b.AboutDialog == 0 && qu3.d == null && n2 > 0) {
            if (n2 == n5) {
                n3 = 0;
            } else if (n2 > 0 && n2 < n5) {
                n3 = n2;
            }
        } else {
            n3 = qu3.AboutDialog(qu2, n6, true);
        }
        if (n3 >= 0) {
            int n7 = n4 = n3 == 0 ? n5 : n3;
            if (n2 > 0 && n2 != n4) {
                return -1;
            }
            if (n4 > 1) {
                n2 = this.d.aY.AboutDialog[1].e;
                int n8 = this.d.aY.AboutDialog[0].e;
                if (n6 == 2) {
                    --n8;
                }
                n6 = (1 << n8) * (n2 + 1);
                if (this.d.d <= 2) {
                    this.d.g("Workarea spaces " + n2 + " stack spaces " + n8 + " allow length " + n6);
                }
                if (n4 > n6) {
                    if (this.d.d <= 2) {
                        this.d.g("Move of " + n3 + " denied because workarea spaces " + n2 + " and stack spaces " + n8);
                    }
                    return -1;
                }
            }
            int n9 = n2 = qu3.d != null ? 2 : 0;
            if (n4 < n5) {
                n2 |= 1;
            }
            n4 = GameMove.AboutDialog(n2, n4, qu2, qu3);
            this.k(n4);
        }
        if (this.d.d <= 5) {
            this.d.g(String.format("trymove returning %08x", n4));
        }
        return n4;
    }

    @Override
    final int AboutDialog(CardImage object) {
        Card[] quArray;
        object = ((CardImage)object).o;
        if (((Card)object).b.AboutDialog == 2) {
            return -1;
        }
        int n2 = -1;
        Card[] quArray2 = this.d.aY.AboutDialog[2].f;
        int n3 = this.d.aY.AboutDialog[2].f.length;
        int n4 = 0;
        while (n4 < n3) {
            Card qu2 = quArray2[n4];
            n2 = this.b((Card)object, qu2, 1, 0);
            if (n2 > 0) break;
            ++n4;
        }
        int n5 = ((Card)object).d.AboutDialog;
        if (n2 <= 0) {
            quArray = this.d.aY.AboutDialog[0].f;
            int n6 = this.d.aY.AboutDialog[0].f.length;
            n3 = 0;
            while (n3 < n6) {
                Card qu3 = quArray[n3];
                if (qu3 != object && (n2 = this.b((Card)object, qu3, n5, 2)) > 0) break;
                ++n3;
            }
        }
        if (n2 <= 0) {
            quArray = this.d.aY.AboutDialog[0].f;
            int n7 = this.d.aY.AboutDialog[0].f.length;
            n3 = 0;
            while (n3 < n7) {
                Card qu4 = quArray[n3];
                if (qu4 != object && (n2 = this.b((Card)object, qu4, -1, 0)) > 0) break;
                ++n3;
            }
        }
        if (n2 <= 0) {
            quArray = this.d.aY.AboutDialog[0].f;
            int n8 = this.d.aY.AboutDialog[0].f.length;
            n3 = 0;
            while (n3 < n8) {
                Card qu5 = quArray[n3];
                if (qu5 != object && (n2 = this.b((Card)object, qu5, -1, 1)) > 0) break;
                ++n3;
            }
        }
        if (n2 <= 0) {
            quArray = this.d.aY.AboutDialog[1].f;
            int n9 = this.d.aY.AboutDialog[1].f.length;
            n3 = 0;
            while (n3 < n9) {
                Card qu6 = quArray[n3];
                n2 = this.b((Card)object, qu6, 1, 0);
                if (n2 > 0) break;
                ++n3;
            }
        }
        return n2;
    }

    @Override
    final int e() {
        int n2;
        int n3;
        Card qu2;
        CardStack qv2 = this.d.aY.AboutDialog[0];
        CardStack qv3 = this.d.aY.AboutDialog[1];
        CardStack qv4 = this.d.aY.AboutDialog[2];
        int n4 = -1;
        if (this.d.l.k < 999 && (this.d.l.c == 4 || this.d.l.c == 3)) {
            return -1;
        }
        int n5 = 13;
        int n6 = 13;
        Card[] quArray = qv4.f;
        int n7 = qv4.f.length;
        int n8 = 0;
        while (n8 < n7) {
            qu2 = quArray[n8];
            n3 = qu2.f;
            n2 = qu2.c();
            if (pBSolver.c(n3)) {
                if (n2 < n5) {
                    n5 = n2;
                }
            } else if (n2 < n6) {
                n6 = n2;
            }
            ++n8;
        }
        if (this.d.d <= 3) {
            this.d.g("Lowest black on aces is " + n5 + " lowest red is " + n6);
        }
        quArray = qv4.f;
        n7 = qv4.f.length;
        n8 = 0;
        while (n8 < n7) {
            qu2 = quArray[n8];
            n3 = qu2.f;
            n2 = qu2.b();
            int n9 = n2 % 100;
            ++n2;
            int n10 = 0;
            if (n9 < 2) {
                n10 = 1;
            } else if (pBSolver.c(n3)) {
                if (n9 <= n6) {
                    n10 = 1;
                }
            } else if (n9 <= n5) {
                n10 = 1;
            }
            if (n10 != 0) {
                if (this.d.d <= 3) {
                    this.d.g("Try and move card up to " + pBSolver.f(n9) + " of " + pBSolver.d(n3 * 100));
                }
                Card[] quArray2 = qv2.f;
                n10 = qv2.f.length;
                n3 = 0;
                while (n3 < n10) {
                    Card qu3 = quArray2[n3];
                    if (qu3.d != null) {
                        CardImage pV2 = qu3.d.c[qu3.d.AboutDialog - 1];
                        if (pV2.e == qu2.f && (n2 == 1 && pV2.f == 1 || qu3.d.c[qu3.d.AboutDialog - 1].g == n2)) {
                            n4 = pBSolver.c(qu3, qu2);
                            if (this.d.d > 3) break;
                            this.d.g("Automatic ace move from stack " + qu3.c + " was productive");
                            break;
                        }
                    }
                    ++n3;
                }
                if (n4 > 0) break;
                quArray2 = qv3.f;
                n10 = qv3.f.length;
                n3 = 0;
                while (n3 < n10) {
                    Card qu4 = quArray2[n3];
                    if (qu4.d != null && qu4.d.c[qu4.d.AboutDialog - 1].g == n2) {
                        n4 = pBSolver.c(qu4, qu2);
                        if (this.d.d > 3) break;
                        this.d.g("Automatic ace move from work " + qu4.c + " was productive");
                        break;
                    }
                    ++n3;
                }
                if (n4 > 0) break;
            }
            ++n8;
        }
        if (n4 > 0) {
            this.k(n4);
        }
        return n4;
    }

    private static int c(Card qu2, Card qu3) {
        int n2;
        int n3 = n2 = qu3.d != null ? 18 : 16;
        if (qu2.d.AboutDialog > 1) {
            n2 |= 1;
        }
        return GameMove.AboutDialog(n2, 1, qu2, qu3);
    }
}

