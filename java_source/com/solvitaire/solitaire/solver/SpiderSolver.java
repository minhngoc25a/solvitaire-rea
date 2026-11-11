/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.solver;

import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.util.qa;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.reader.SpiderBoardReader;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import java.io.File;
import java.util.HashMap;
import java.util.Set;

/*
 * Renamed from com.solvitaire.app.qs
 */
final class SpiderSolver
extends SolitaireSolver {
    private int[] b;
    private int[] c = new int[]{30, 60, 30, 30, 30, 30, 30};
    private int[] LHandler = new int[]{30, 60, 75, 75, 30, 30, 30};
    private int[] MHandler = this.c;
    private double[] NHandler = new double[]{0.0, 0.0, -3.0, -2.0, 0.0, 0.0, 0.0};
    private int[] OHandler = new int[]{100, 150, 400, 400, 180, 500, 500};
    private double[] PPanel = new double[]{-50.0, -50.0, -60.0, -40.0, -3.0, -27.0, -9.0};
    private int Q = 7;
    private int R = 30;
    private int[] SPanel = new int[]{-15, -4, -5, -5, -15};
    private int T;
    private int U;
    private int V;
    private int W;
    private int X;
    private int Y;
    private int[] Z;
    private int[] aa = new int[]{-30, -10, -20, -20, -30};
    private int[] ab = new int[]{-10, -10, -10, -10, -10};
    private int[][] ac;
    private int ad = 0;
    private int ae = 0;
    private int af = 0;
    private int ag = 0;
    private int ah = 0;
    private int ai = 0;
    private int DesktopDuplication = 0;
    private int ak = 0;
    private int al = 0;
    private boolean am;
    private boolean an = false;
    private int ao;
    int[] AboutDialog = new int[8];
    private int ap;
    private static int[] aq;

    static {
        int[] nArray = new int[5];
        nArray[1] = 1;
        nArray[2] = 16;
        nArray[3] = 256;
        nArray[4] = 4096;
        aq = new int[]{1, 2, 4, 8, 16, 32, 1024, 2048, 256, 512};
    }

    SpiderSolver(SolitaireGameEngine qo_02) {
        super(qo_02, 2000);
        this.f = 10;
        this.o = 2;
        this.p = 104;
        this.xHandler = 5;
        this.rPanel = true;
    }

    @Override
    final String AboutDialog() {
        return "Spider";
    }

    @Override
    final boolean b() {
        this.g = new int[50][this.f];
        this.h = new int[this.f];
        this.i = new int[this.f];
        this.t = new int[this.f][10];
        this.B = new int[5][this.f];
        this.AboutDialog = new int[8];
        this.ap = this.Q;
        this.k = this.OHandler;
        this.l = this.PPanel;
        this.m = this.R;
        this.ac = new int[this.ap][10];
        this.i();
        this.e = this.d.au + "spider" + File.separator;
        if (this.FPanel) {
            if (this.d.d <= 4) {
                this.d.g("Running Spider");
            }
            this.d.ap = new SpiderBoardReader(this);
            if (this.d.d <= 3) {
                this.d.g("Auto constructed");
            }
            this.d.ap.d();
        }
        this.q = 0;
        if (!this.d.ap.e()) {
            return false;
        }
        this.d.aZ = new qa(this.d.aY, true);
        if (this.d.d <= 4) {
            this.d.g("Max club " + this.d.bu.e + " min spade " + this.d.bu.f);
        }
        this.AboutDialog((Card)null);
        this.am = false;
        this.J = 0;
        this.KHandler = 0;
        this.ao = this.d.l.m;
        this.an = false;
        return true;
    }

    @Override
    final void AboutDialog(int n2, int n3) {
        this.AboutDialog(n2, n3, false);
    }

    private void AboutDialog(int n2, int n3, boolean bl2) {
        int n4;
        int n5;
        if (this.d.an) {
            this.d.an = false;
            this.T = this.SPanel[this.q];
            this.U = 7;
            this.V = 13;
            this.W = -15;
            this.X = 27;
            this.Y = 37;
            this.Z = this.aa;
            this.b = this.LHandler;
            if (this.d.l.k < 999) {
                this.am = false;
                this.an = true;
                this.U = this.U * 200 / (this.d.l.k + 80);
                this.V = this.V * 200 / (this.d.l.k + 80);
                this.X = this.X * 200 / (this.d.l.k + 50);
                this.Y = this.Y * 200 / (this.d.l.k + 50);
                this.Z = this.ab;
                this.b = this.MHandler;
            } else {
                this.am = true;
                this.d.T += -300;
                n5 = this.d.aZ.h + 5;
                if (this.d.d < 3) {
                    this.d.g("Expose triggered, complexity to " + this.d.T + " target depth now " + n5 + " do expose solve");
                }
                this.AboutDialog(n2, n5, false);
                this.d.T -= -300;
                if (this.d.d < 5) {
                    this.d.g("Back from expose solve, expose state " + this.am + " depth " + n3 + " complexity " + this.d.T);
                }
                if (this.EHandler) {
                    if (this.d.d <= 5) {
                        this.d.g("Solved in expose!");
                    }
                    this.G = 999;
                    this.am = false;
                    return;
                }
            }
        }
        if (this.am) {
            if (n3 == 0) {
                if (this.d.d < 5) {
                    this.d.g("Just exited expose state at recursion " + this.d.aZ.h + ", complexity now " + this.d.T);
                }
                this.am = false;
            } else if (this.d.aZ.h >= n3) {
                return;
            }
        }
        this.l();
        if (this.d.aZ.h > this.yHandler) {
            if (this.d.d <= 2) {
                this.d.g("Exiting solve due to recursion limit");
            }
            return;
        }
        if (this.d.d <= 3) {
            this.d.g("into solve level " + this.d.aZ.h);
        }
        if (this.d.PPanel++ % 100000L == 0L) {
            this.b(4);
            this.AboutDialog(4);
            this.b(4, this.d.aZ.AboutDialog[0]);
        }
        if (!this.EHandler) {
            SpiderSolver qs_02 = this;
            n4 = qs_02.b(qs_02.d.aZ, n2);
            if (n4 == 2) {
                this.G = 999;
            } else if (n4 == 1) {
                return;
            }
        }
        if (this.d.T > 0) {
            return;
        }
        if (this.G < 0 && this.am && !bl2) {
            this.AboutDialog(8, "exposematch", n2, n3);
        }
        if (this.G < 0 && this.am && !bl2) {
            this.AboutDialog(9, "exposeany", n2, n3);
        }
        if (this.G < 0 && !bl2) {
            SpiderSolver qs_03 = this;
            n4 = qs_03.j(qs_03.T);
            if (n4 < 999999) {
                ++this.ad;
                this.AboutDialog(1, "matching", n2, n3);
                --this.ad;
                this.d.T = n4;
            }
        }
        if (this.G < 0 && !bl2 && !this.an) {
            SpiderSolver qs_04 = this;
            n4 = qs_04.j(qs_04.X);
            if (n4 < 999999) {
                ++this.ae;
                this.AboutDialog(5, "matchdiff", n2, n3);
                --this.ae;
                this.d.T = n4;
            }
        }
        CardStack qv2 = this.d.aZ.AboutDialog[0];
        int n6 = qv2.e;
        if (this.G < 0 && !bl2 && n6 == 0) {
            SpiderSolver qs_05 = this;
            n5 = qs_05.j(qs_05.U);
            if (n5 < 999999) {
                ++this.af;
                this.AboutDialog(4, "fromspace", n2, n3);
                --this.af;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && !bl2 && n6 > 0) {
            if (n6 > 1 && !this.an) {
                n5 = this.j(0);
            } else {
                SpiderSolver qs_06 = this;
                n5 = qs_06.j(qs_06.V);
            }
            if (n5 < 999999) {
                ++this.ag;
                this.AboutDialog(2, "tospace", n2, n3);
                --this.ag;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && !bl2 && n6 > 0) {
            if (n6 > 1) {
                SpiderSolver qs_07 = this;
                n5 = qs_07.j(qs_07.W);
            } else {
                SpiderSolver qs_08 = this;
                n5 = qs_08.j(qs_08.V);
            }
            if (n5 < 999999) {
                ++this.ah;
                this.AboutDialog(3, "kingtospace", n2, n3);
                --this.ah;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && !bl2 && this.d.aZ.b < this.xHandler) {
            SpiderSolver qs_09 = this;
            n5 = qs_09.j(qs_09.Y);
            if (n5 < 999999) {
                ++this.ai;
                this.AboutDialog(6, "shift", n2, n3);
                --this.ai;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && this.d.aZ.c < this.ap) {
            if (this.d.d <= 2) {
                this.d.g("At level " + this.d.aZ.h + " try AboutDialog deal");
            }
            this.d(n2, n3);
        }
        if (this.G < 0 && !bl2 && this.an) {
            SpiderSolver qs_010 = this;
            n5 = qs_010.j(qs_010.X);
            if (n5 < 999999) {
                ++this.ae;
                this.AboutDialog(5, "matchdiff", n2, n3);
                --this.ae;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && !bl2) {
            SpiderSolver qs_011 = this;
            n5 = qs_011.j(qs_011.Y);
            if (n5 < 999999) {
                ++this.ai;
                this.AboutDialog(7, "shiftfordeal", n2, n3);
                --this.ai;
                this.d.T = n5;
            }
        }
        if (this.G >= 0) {
            --this.G;
            if (this.d.d <= 1) {
                this.d.g("Backout now " + this.G);
            }
        }
        if (this.d.d < 3) {
            this.d.g("All done at level " + this.d.aZ.h + " complexity " + this.d.T + " backout " + this.G);
        }
    }

    @Override
    final long c() {
        long l2 = 0L;
        Card[] quArray = this.d.aZ.AboutDialog[0].f;
        int n2 = this.d.aZ.AboutDialog[0].f.length;
        int n3 = 0;
        while (n3 < n2) {
            Card qu2 = quArray[n3];
            l2 += this.AboutDialog(qu2, l2, true, false);
            ++n3;
        }
        boolean cfr_ignored_0 = this.d.AboutDialog;
        return l2;
    }

    @Override
    final int[] d() {
        HashMap hashMap = new HashMap(104);
        this.b(hashMap);
        return this.b(hashMap, 2);
    }

    private int b(HashMap hashMap) {
        CardStack qv2 = this.d.aY.AboutDialog[0];
        CardStack qv3 = this.d.aY.AboutDialog[2];
        int n2 = this.d.aY.b;
        int n3 = 8;
        if (this.q > 0) {
            n3 = 8 / this.q;
        }
        if (this.d.d <= 4) {
            this.d.g("numSuits is " + this.q + " so maxCards is " + n3);
        }
        int n4 = this.AboutDialog(hashMap, qv2, n3);
        if (this.d.d <= 3) {
            this.d.g("Totals numcards after stacks is " + n4);
        }
        n4 += this.AboutDialog(hashMap, qv3, n3);
        if (this.d.d <= 3) {
            this.d.g("Total numcards after removed suits is " + n4);
        }
        int n5 = n2;
        while (n5 < 5) {
            if (this.B[n5][0] == 0) break;
            n2 = 0;
            while (n2 < this.f) {
                int n6;
                if (this.d.d <= 1) {
                    this.d.g("Testing deal " + n5 + " stack " + n2 + " card " + this.B[n5][n2]);
                }
                if ((n6 = this.AboutDialog(hashMap, this.B[n5][n2])) > n3) {
                    this.d.bu.AboutDialog();
                    this.d.i("ERROR - Too many " + SpiderSolver.f(this.B[n5][n2]) + " of " + SpiderSolver.d(this.B[n5][n2]) + "s in the deck");
                }
                ++n4;
                ++n2;
            }
            ++n5;
        }
        if (this.q == 0) {
            this.q = 1;
            Set set = hashMap.keySet();
            for (Integer n7 : set) {
                if (n7 / 100 > 2) {
                    if (this.d.d <= 4) {
                        this.d.g("Key of " + n7 + " triggers numSuits of 4");
                    }
                    this.q = 4;
                    break;
                }
                if (n7 / 100 <= 1) continue;
                if (this.d.d <= 4) {
                    this.d.g("Key of " + n7 + " triggers numSuits of 2");
                }
                this.q = 2;
            }
        }
        if (this.d.d <= 4) {
            this.d.g("Count of known cards is now " + n4);
        }
        return n4;
    }

    final void l(int n2) {
        CardStack qv2 = this.d.aY.AboutDialog[2];
        int n3 = 0;
        while (n3 < qv2.f.length) {
            if (qv2.f[n3].d == null) break;
            ++n3;
        }
        CardRun qm_02 = new CardRun();
        int n4 = 13;
        while (n4 > 0) {
            Card qu2 = qv2.f[n3];
            qm_02.c[qm_02.AboutDialog++] = this.b(qu2, n2 * 100 + n4);
            --n4;
        }
        qv2.AboutDialog(qm_02);
    }

    @Override
    final int AboutDialog(Card object) {
        object = this.d.aY.AboutDialog[0];
        HashMap hashMap = new HashMap();
        int n2 = this.b(hashMap);
        if (this.d.d <= 4) {
            this.d.g("numCards is now " + n2);
        }
        if (n2 == 103 && this.d.aZ != null) {
            int n3 = 8 / this.q;
            if (this.d.d <= 5) {
                this.d.g("Found 103 cards");
            }
            int n4 = 1;
            while (n4 < 14) {
                int n5 = 1;
                while (n5 < this.q + 1) {
                    int n6 = n5 * 100 + n4;
                    Object object2 = (Integer)hashMap.get(n6);
                    if ((Integer)object2 == n3 - 1) {
                        Card[] quArray = ((CardStack)object).f;
                        int n7 = ((CardStack)object).f.length;
                        int n8 = 0;
                        while (n8 < n7) {
                            object2 = quArray[n8];
                            if (((Card)object2).e.size() > 0) {
                                CardRun qm_02 = (CardRun)((Card)object2).e.getFirst();
                                if (qm_02.AboutDialog > 0 && qm_02.c[0].g == 0) {
                                    if (this.d.d <= 5) {
                                        this.d.g("***Final card (on stack " + ((Card)object2).c + ") must be " + n6);
                                    }
                                    this.g[0][((Card)object2).c] = n6;
                                    qm_02.AboutDialog(n6);
                                    if (this.d.aZ != null) {
                                        object2 = (CardRun)this.d.aZ.AboutDialog[0].f[((Card)object2).c].e.getFirst();
                                        ((CardRun)object2).AboutDialog(n6);
                                    }
                                }
                            }
                            ++n8;
                        }
                    }
                    ++n5;
                }
                ++n4;
            }
        }
        return n2;
    }

    private void m(int n2) {
        if (n2 / 100 > 2) {
            this.q = 4;
            return;
        }
        if (n2 / 100 > 1) {
            this.q = 2;
        }
    }

    @Override
    final int AboutDialog(HashMap hashMap) {
        int n2;
        this.q = 1;
        CardStack qv2 = this.d.aY.AboutDialog[0];
        int n3 = 0;
        int n4 = 0;
        while (n4 < this.f) {
            n2 = 0;
            while (n2 < 6) {
                if (n4 < 4 || n2 < 5) {
                    ++n3;
                    this.AboutDialog(hashMap, this.g[n2][n4], "stack");
                    SpiderSolver qs_02 = this;
                    qs_02.m(qs_02.g[n2][n4]);
                }
                ++n2;
            }
            ++n4;
        }
        n4 = this.d.aY.b;
        while (n4 < this.xHandler) {
            if (this.B[n4][0] == 0) break;
            n2 = 0;
            while (n2 < qv2.f.length) {
                this.AboutDialog(hashMap, this.B[n4][n2], "deal ");
                ++n3;
                SpiderSolver qs_03 = this;
                qs_03.m(qs_03.B[n4][n2]);
                ++n2;
            }
            ++n4;
        }
        return n3;
    }

    /*
     * Unable to fully structure code
     */
    private void AboutDialog(int var1_1, String var2_2, int var3_3, int var4_4) {
        if (this.d.d <= 3) {
            this.d.g(String.format("Entered dojoins mode %s complexity %d lastmove %08x backout %d", new Object[]{var2_2, this.d.T, var3_3, this.G}));
        }
        var8_5 = this.d.aZ.AboutDialog[0].f;
        var7_6 = this.d.aZ.AboutDialog[0].f.length;
        var6_7 = 0;
        while (var6_7 < var7_6) {
            block25: {
                block26: {
                    var5_8 = var8_5[var6_7];
                    if (var5_8.d == null) break block25;
                    var9_9 = var5_8.e.size();
                    if ((var1_1 == 8 || var1_1 == 2 || var1_1 == 3 || var1_1 == 11 || var1_1 == 10 || var1_1 == 9) && var9_9 < 2) break block25;
                    if (this.G > 0) break;
                    if (var1_1 != 1 && var1_1 != 8 && var1_1 != 2 && var1_1 != 3 && var1_1 != 10 && var1_1 != 11) break block26;
                    var10_10 = null;
                    var11_11 = -1;
                    var12_12 = -1;
                    var13_13 = 1;
                    var17_19 = this.d.aZ.AboutDialog[0].f;
                    var16_18 = this.d.aZ.AboutDialog[0].f.length;
                    var15_17 = 0;
                    block14: while (var15_17 < var16_18) {
                        block27: {
                            var14_15 = var17_19[var15_17];
                            if (this.G > 0) break;
                            if (var14_15 == var5_8) break block27;
                            switch (var1_1) {
                                case 1: {
                                    var13_13 = 1;
                                    ** GOTO lbl47
                                }
                                case 8: {
                                    if (((CardRun)var5_8.e.get((int)(var9_9 - 2))).c[0].g != 0) break;
                                    var13_13 = 1;
                                    ** GOTO lbl47
                                }
                                case 3: {
                                    if (var14_15.d != null || var5_8.d.c[0].f != 13) break;
                                    var13_13 = 2;
                                    ** GOTO lbl47
                                }
                                case 2: {
                                    if (var14_15.d != null || var5_8.d.c[0].f == 13) break;
                                    var13_13 = 2;
                                    ** GOTO lbl47
                                }
                                case 10: {
                                    if (var14_15.d != null) break;
                                    var13_13 = 6;
                                    ** GOTO lbl47
                                }
                                case 11: {
                                    if (var14_15.d != null) break;
                                    var13_13 = 2;
                                }
lbl47:
                                // 7 sources

                                default: {
                                    var18_20 = var14_15.AboutDialog(var5_8, var13_13, false);
                                    if (var18_20 >= 0 && var14_15.d != null && var5_8.d.c[var5_8.d.AboutDialog - 1].f == 1) {
                                        var19_21 = var14_15.d.AboutDialog + var5_8.d.AboutDialog;
                                        if (var14_15.e.size() + var19_21 >= 12 && (var19_22 = var14_15.k()) != null && !var19_22.b && var19_22.c[var19_22.AboutDialog - 1].g == 0) {
                                            this.d.g("Disallow join of " + String.valueOf(var5_8) + " to " + String.valueOf(var14_15) + " due to possible suit completion");
                                            var18_20 = -1;
                                        }
                                    }
                                    if (var18_20 < 0) break;
                                    if (var1_1 == 1 || var1_1 == 8) {
                                        var19_21 = var14_15.d.AboutDialog + var5_8.d.AboutDialog;
                                        if (var19_21 <= var12_12) break;
                                        var12_12 = var19_21;
                                        var11_11 = var18_20;
                                        var10_10 = var14_15;
                                        break;
                                    }
                                    var11_11 = var18_20;
                                    var10_10 = var14_15;
                                    break block14;
                                }
                            }
                        }
                        ++var15_17;
                    }
                    if (var11_11 < 0) break block25;
                    this.AboutDialog(var1_1, var2_2, var13_13, var4_4, var5_8, var10_10, var11_11, var5_8.d.AboutDialog, var3_3);
                    break block25;
                }
                var13_14 = this.d.aZ.AboutDialog[0].f;
                var12_12 = this.d.aZ.AboutDialog[0].f.length;
                var11_11 = 0;
                while (var11_11 < var12_12) {
                    block24: {
                        var10_10 = var13_14[var11_11];
                        if (this.G > 0) break;
                        if (var10_10 != var5_8) {
                            switch (var1_1) {
                                case 4: {
                                    var14_16 = 3;
                                    break;
                                }
                                case 5: {
                                    var14_16 = 4;
                                    break;
                                }
                                case 9: {
                                    if (((CardRun)var5_8.e.get((int)(var9_9 - 2))).c[0].g == 0) {
                                        var14_16 = 4;
                                        break;
                                    }
                                    break block24;
                                }
                                default: {
                                    var14_16 = 5;
                                }
                            }
                            var15_17 = var10_10.AboutDialog(var5_8, var14_16, false);
                            if (var15_17 >= 0) {
                                this.AboutDialog(var1_1, var2_2, var14_16, var4_4, var5_8, var10_10, var15_17, var5_8.d.AboutDialog, var3_3);
                                var9_9 = var5_8.e.size();
                                if (var9_9 < 2) break;
                            }
                        }
                    }
                    ++var11_11;
                }
            }
            ++var6_7;
        }
        if (this.d.d <= 3) {
            this.d.g("Exited dojoins for mode " + var2_2);
        }
    }

    private void AboutDialog(int n2, String string, int n3, int n4, Card qu2, Card qu3, int n5, int n6, int n7) {
        int n8;
        int n9;
        int n10;
        boolean bl2 = false;
        if (n5 == 0 && n7 > 0) {
            n10 = n7;
            n9 = n10 & 0xFF;
            n10 = n7;
            n8 = n10 >> 8 & 0xFF;
            n10 = n7;
            int n11 = (n10 & 0xF0000) >> 16;
            if (qu2.c == n9 && n6 == n11) {
                if (qu3.c != n8) {
                    n5 = -1;
                }
            } else if (n2 == 6 || n2 == 5) {
                if (n2 == 6) {
                    if (qu3.c == n8 || qu2.c == n9) {
                        n5 = -1;
                    } else if (qu2.c != n8 && qu3.c != n9) {
                        n5 = -1;
                    }
                }
                if (n5 >= 0 && this.c(qu2)) {
                    n5 = -1;
                }
            } else if (n2 == 7 || n2 == 10 || n2 == 11) {
                bl2 = true;
            }
        } else if (n5 > 0) {
            if (n2 == 2) {
                if (this.c(qu2)) {
                    n5 = -1;
                }
            } else if (n2 == 10 || n2 == 11) {
                bl2 = true;
            }
        }
        if (n5 >= 0) {
            n5 = qu3.AboutDialog(qu2, n5, this.d.aZ.AboutDialog[2]);
            n9 = n3 == 1 ? 1 : 0;
            this.d.aZ.d[this.d.aZ.h] = n8 = GameMove.AboutDialog(n5, n6, qu2, qu3, n9 != 0);
            ++this.d.aZ.h;
            long l2 = this.c();
            if (!this.b(qu3, qu2)) {
                if (this.G < 0) {
                    this.G = this.b(l2);
                    if (this.G < 0) {
                        int n12;
                        if (!this.am) {
                            this.AboutDialog(l2);
                        }
                        n3 = this.d.T;
                        n9 = this.DesktopDuplication;
                        int n13 = this.ao;
                        if ((n2 == 1 || n2 == 8 || n2 == 4) && (n2 = ((n10 = n8) & 0x70000000) >> 28) != 0) {
                            if (this.d.d < 3) {
                                this.d.g("Completed AboutDialog suit");
                            }
                            n12 = this.Z[this.q];
                            this.d.T += this.AboutDialog(n12, 0, 0, 0.0);
                            ++this.DesktopDuplication;
                            this.ao += 100;
                        }
                        if (this.d.d <= 2) {
                            this.d.g("Entering level " + this.d.aZ.h + " for mode " + string + " complexity " + this.d.T);
                        }
                        n2 = 0;
                        n12 = 0;
                        if (qu2.d != null) {
                            n2 = qu2.d.b ? 1 : 0;
                            qu2.d.b = false;
                            if (qu2.d.AboutDialog == 1 && qu2.d.c[0].g == 0) {
                                if (this.d.d <= 3) {
                                    this.d.g("Exposed AboutDialog card, try reading it");
                                }
                                if (!this.AboutDialog(qu2, n7)) {
                                    if (this.d.d <= 5) {
                                        this.d.g("checkReadCard failed, backing out 1");
                                    }
                                    this.G = 0;
                                } else {
                                    CardRun qm_02;
                                    CardImage pV2 = qu2.AboutDialog();
                                    if (this.d.d <= 2) {
                                        this.d.g("Just read card " + pV2.g);
                                    }
                                    if (pV2 != null && (qm_02 = qu3.d) != null && qm_02.AboutDialog >= n6) {
                                        CardImage pV3 = qm_02.c[qm_02.AboutDialog - n6];
                                        if (pV2.g == pV3.g + 1 && n2 == 0) {
                                            this.d.aZ.d[this.d.aZ.h - 1] = n8 |= 0x1000000;
                                            this.d.aY.d[this.d.aZ.h - 1] = n8;
                                            this.d.ap.l[this.d.ap.m].AboutDialog = n8;
                                            if (n5 < 20) {
                                                n5 += 20;
                                            }
                                            if (this.d.d <= 5) {
                                                this.d.g(String.format("Added missing split flag on move giving %08x at level %d, split %d", n8, this.d.aZ.h - 1, n5));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (!this.EHandler && this.G < 0 && qu3.d != null) {
                            n12 = qu3.d.b ? 1 : 0;
                            qu3.d.b = false;
                            if (qu3.d.AboutDialog == 1 && qu3.d.c[0].g == 0 && !this.AboutDialog(qu3, n7)) {
                                if (this.d.d <= 5) {
                                    this.d.g("checkReadCard failed on suit completion, backing out 1");
                                }
                                this.G = 0;
                            }
                        }
                        if (!this.EHandler && this.G < 0) {
                            int n14;
                            if (this.ao > 0 && ((n14 = n8) & 0x70000000) >> 28 == 0) {
                                --this.ao;
                            }
                            this.AboutDialog(n8, n4, bl2);
                        }
                        if (qu2.d != null) {
                            qu2.d.b = n2;
                        }
                        if (qu3.d != null) {
                            qu3.d.b = n12;
                        }
                        if (this.d.d <= 2) {
                            this.d.g("Exited level " + this.d.aZ.h + " for mode " + string);
                        }
                        this.d.T = n3;
                        this.DesktopDuplication = n9;
                        this.ao = n13;
                    }
                }
                if (this.G >= 0) {
                    --this.G;
                }
            }
            --this.d.aZ.h;
            qu3.b(qu2, n5, this.d.aZ.AboutDialog[2]);
        }
    }

    private static boolean c(int n2, int n3) {
        return (n2 & aq[n3]) != 0;
    }

    private boolean c(Card qu2) {
        CardImage pV2 = qu2.d.c[0];
        if (pV2.f == 13) {
            return false;
        }
        int n2 = pV2.g + 1;
        boolean bl2 = false;
        Card[] quArray = this.d.aZ.AboutDialog[0].f;
        int n3 = this.d.aZ.AboutDialog[0].f.length;
        int n4 = 0;
        while (n4 < n3) {
            block7: {
                block8: {
                    Card qu3 = quArray[n4];
                    if (qu3 == qu2) break block7;
                    int n5 = qu3.e.size();
                    if (n5 <= 1) break block8;
                    if (qu3.d.c[0].f != pV2.f) break block7;
                    Object object = (CardRun)qu3.e.get(n5 - 2);
                    object = ((CardRun)object).c[((CardRun)object).AboutDialog - 1];
                    if (((CardImage)object).g == 0) break block7;
                    if (((CardImage)object).g == n2) {
                        pV2 = qu3.d.c[0];
                        n2 = pV2.g + 1;
                        int n6 = qu2.e.size();
                        Object object2 = (CardRun)qu2.e.get(n6 - 2);
                        object2 = ((CardRun)object2).c[((CardRun)object2).AboutDialog - 1];
                        if (((CardImage)object2).g != n2 || qu2.c > qu3.c) {
                            bl2 = true;
                        }
                    }
                }
                if (bl2) break;
            }
            ++n4;
        }
        return bl2;
    }

    @Override
    final boolean AboutDialog(Card qu2, Card qu3) {
        if (qu2.d == null) {
            return false;
        }
        if (this.d.aZ.b == 5 && this.d.aZ.h > 2) {
            int n2 = this.d.aZ.d[this.d.aZ.h - 3];
            int n3 = (n2 & 0xF0000) >> 16;
            n2 = this.d.aZ.d[this.d.aZ.h - 3];
            int n4 = n2 & 0xFF;
            n2 = this.d.aZ.d[this.d.aZ.h - 3];
            int n5 = n2 >> 8 & 0xFF;
            n2 = this.d.aZ.d[this.d.aZ.h - 2];
            int n6 = (n2 & 0xF0000) >> 16;
            n2 = this.d.aZ.d[this.d.aZ.h - 2];
            int n7 = n2 & 0xFF;
            n2 = this.d.aZ.d[this.d.aZ.h - 2];
            n2 = n2 >> 8 & 0xFF;
            int n8 = qu2.d.AboutDialog;
            int n9 = qu2.c;
            int n10 = qu3.c;
            if (n3 == n8 && n6 == n8 && n4 == n10 && n5 == n2 && n7 == n9) {
                Card qu4 = this.d.aZ.AboutDialog[0].f[n5];
                n9 = 1;
                Card[] quArray = this.d.aZ.AboutDialog[0].f;
                n5 = this.d.aZ.AboutDialog[0].f.length;
                n4 = 0;
                while (n4 < n5) {
                    int n11;
                    Card qu5 = quArray[n4];
                    if (qu4 != qu5 && (n11 = qu4.AboutDialog(qu5, 1, false)) >= 0) {
                        n9 = 0;
                        break;
                    }
                    ++n4;
                }
                if (n9 != 0) {
                    return true;
                }
            }
        }
        return false;
    }

    @Override
    final void AboutDialog(int n2, boolean bl2) {
        if (this.d.d <= n2) {
            this.b(n2);
            this.AboutDialog(n2, this.d.aZ.AboutDialog[0]);
        }
    }

    private int n(int n2) {
        SpiderSolver qs_02 = this;
        int n3 = qs_02.AboutDialog(qs_02.b[this.d.aZ.c - 1], this.c[this.d.aZ.c - 1], this.ad - this.ae / 2, this.NHandler[this.d.aZ.c - 1]);
        if (this.d.aZ.c < 5) {
            if (n2 > 0) {
                if (this.d.d < 3) {
                    this.d.g("Completed AboutDialog suit");
                }
                n2 = this.Z[this.q];
                n3 += this.AboutDialog(n2, 0, 0, 0.0);
                ++this.DesktopDuplication;
            }
            Card[] quArray = this.d.aZ.AboutDialog[0].f;
            int n4 = this.d.aZ.AboutDialog[0].f.length;
            int n5 = 0;
            while (n5 < n4) {
                Card qu2 = quArray[n5];
                int n6 = qu2.e.size();
                SpiderSolver qs_03 = this;
                int n7 = qs_03.AboutDialog(qs_03.SPanel[this.q], 0, 0, 0.0);
                if (n6 == 1) {
                    n3 += n7;
                    ++this.ad;
                } else if (qu2.d != null && qu2.d.AboutDialog > 1) {
                    n3 += n7;
                    ++this.ad;
                }
                ++n5;
            }
        }
        return n3;
    }

    private int o(int n2) {
        if ((n2 = (int)((double)this.k[this.d.aZ.c - 1] + (double)n2 * this.l[this.d.aZ.c - 1])) < this.m) {
            n2 = this.m;
        }
        return n2;
    }

    private void d(int n2, int n3) {
        int n4;
        int n5;
        int n6 = 1;
        Card[] quArray = this.d.aZ.AboutDialog[0].f;
        int n7 = this.d.aZ.AboutDialog[0].f.length;
        int n8 = 0;
        while (n8 < n7) {
            Card qu2 = quArray[n8];
            if (qu2.d == null) {
                n6 = 0;
                n5 = 0;
                Card[] quArray2 = this.d.aZ.AboutDialog[0].f;
                int n9 = this.d.aZ.AboutDialog[0].f.length;
                n4 = 0;
                while (n4 < n9) {
                    Card qu3 = quArray2[n4];
                    if (qu3 != qu2 && qu3.e != null && qu3.e.size() > 1) {
                        this.AboutDialog(11, "tospacefordeal", n2, n3);
                        n5 = 1;
                        break;
                    }
                    ++n4;
                }
                if (n5 == 0 && this.d.aZ.b < this.xHandler) {
                    this.AboutDialog(10, "tospacesingle", n2, n3);
                }
            }
            ++n8;
        }
        if (n6 != 0) {
            int n10;
            if (this.d.aZ.b < this.xHandler) {
                if (this.xHandler < 5) {
                    ++this.xHandler;
                    if (this.d.d <= 4) {
                        this.d.g("In deal() incremented dealMaxIndex to " + this.xHandler);
                    }
                }
                SpiderSolver qs_02 = this;
                int cfr_ignored_0 = this.d.aZ.b;
                n10 = qs_02.AboutDialog(qs_02.d.aZ.AboutDialog[0], this.d.aZ.AboutDialog[1].f[0], this.d.aZ.AboutDialog[2]);
                ++this.d.aZ.b;
                ++this.d.aZ.c;
                if (this.d.d < 3) {
                    this.d.g("Done AboutDialog deal, dealIndex now " + this.d.aZ.b + " progress " + this.d.aZ.c);
                }
            } else if (this.d.aZ.b >= 5 && this.d.aZ.c < this.ap) {
                ++this.d.aZ.c;
                n10 = 0;
                if (this.d.d < 3) {
                    this.d.g("Progress pseudo-deal, index now " + this.d.aZ.c);
                }
            } else {
                if (this.d.d < 3) {
                    this.d.g("No more deals to do right now");
                }
                n10 = -1;
            }
            if (n10 >= 0) {
                n7 = this.DesktopDuplication;
                int n11 = this.ad;
                n5 = this.ao;
                if (n10 > 0) {
                    int n12 = 0;
                    n4 = 0;
                    while (n4 < 10) {
                        if (SpiderSolver.c(n10, n4)) {
                            ++n12;
                        }
                        ++n4;
                    }
                    this.ao += n12 * 101;
                }
                n8 = this.d.aZ.c <= 5 ? GameMove.AboutDialog(8, 0, n10 >> 8, n10 & 0xFF) : GameMove.AboutDialog(4, 0, 0, 0);
                int n13 = this.n(n10);
                this.d.T += n13;
                SpiderSolver qs_03 = this;
                n4 = qs_03.o(qs_03.ad - this.ae / 2);
                if (this.d.T <= -n4) {
                    this.ac[this.d.aZ.c - 1][0] = this.d.T;
                    this.ac[this.d.aZ.c - 1][2] = n13;
                    this.ac[this.d.aZ.c - 1][1] = -n4;
                    this.ac[this.d.aZ.c - 1][3] = this.ad;
                    this.ac[this.d.aZ.c - 1][4] = this.af;
                    this.ac[this.d.aZ.c - 1][5] = this.ag;
                    this.ac[this.d.aZ.c - 1][6] = this.ah;
                    this.ac[this.d.aZ.c - 1][7] = this.ae;
                    this.ac[this.d.aZ.c - 1][8] = this.ai;
                    this.ac[this.d.aZ.c - 1][9] = this.DesktopDuplication;
                    this.d.aZ.d[this.d.aZ.h] = n8;
                    ++this.d.aZ.h;
                    if (this.d.d <= 2) {
                        this.d.g("Entering new progress/deal " + this.d.aZ.b + "/" + this.d.aZ.c + " at depth " + this.d.aZ.h);
                    }
                    ++this.ak;
                    boolean[] blArray = null;
                    boolean bl2 = true;
                    if (n10 > 0) {
                        n2 = this.d.aZ.AboutDialog[0].f.length;
                        blArray = new boolean[n2];
                        n6 = 0;
                        while (n6 < n2) {
                            Card qu4 = this.d.aZ.AboutDialog[0].f[n6];
                            if (qu4.d != null) {
                                blArray[n6] = qu4.d.b;
                                if (qu4.d.AboutDialog == 1 && qu4.d.c[0].g == 0) {
                                    qu4.d.b = false;
                                    bl2 = this.AboutDialog(qu4, n8);
                                }
                            }
                            ++n6;
                        }
                    }
                    if (this.ao > 0) {
                        --this.ao;
                    }
                    if (bl2) {
                        this.AboutDialog(-1, n3, false);
                    }
                    if (blArray != null) {
                        n2 = 0;
                        while (n2 < this.d.aZ.AboutDialog[0].f.length) {
                            Card qu5 = this.d.aZ.AboutDialog[0].f[n2];
                            if (qu5.d != null) {
                                qu5.d.b = blArray[n2];
                            }
                            ++n2;
                        }
                    }
                    --this.ak;
                    if (this.d.d <= 2) {
                        this.d.g("Exiting progress/deal " + this.d.aZ.b + "/" + this.d.aZ.c + " from depth " + this.d.aZ.h);
                    }
                    --this.d.aZ.h;
                }
                if (this.d.aZ.c > 5) {
                    --this.d.aZ.c;
                } else {
                    --this.d.aZ.c;
                    --this.d.aZ.b;
                    int cfr_ignored_1 = this.d.aZ.b;
                    this.AboutDialog(n8, this.d.aZ.AboutDialog[0], this.d.aZ.AboutDialog[1].f[0], this.d.aZ.AboutDialog[2]);
                }
                this.b(2, this.d.aZ.AboutDialog[0]);
                this.d.T -= n13;
                this.DesktopDuplication = n7;
                this.ad = n11;
                this.ao = n5;
            }
        }
    }

    final int AboutDialog(CardStack qv2, Card qu2, CardStack qv3) {
        int n2 = 0;
        int n3 = 0;
        while (n3 < qv2.f.length) {
            CardRun qm_02 = qu2.e();
            Card qu3 = qv2.f[n3];
            if (qu3.d == null) {
                this.d.i("Spider dealing to empty stack??");
                qu3.AboutDialog(qm_02);
            } else {
                Card qu4 = qu3;
                int n4 = qu4.AboutDialog(qu4.d, qm_02, false, false);
                if (n4 < 0) {
                    qu3.AboutDialog(qm_02);
                    qm_02.b = false;
                } else {
                    qu3.d.AboutDialog(qm_02, n4);
                    if (n4 > 0 && qu3.d.AboutDialog == 13) {
                        if (this.d.d <= 3) {
                            this.d.g("Deal completed AboutDialog suit!!");
                        }
                        qm_02 = qu3.e();
                        qv3.AboutDialog(qm_02);
                        qu3.AboutDialog(false);
                        int n5 = qu3.c;
                        n2 |= aq[n5];
                    }
                }
            }
            ++n3;
        }
        return n2;
    }

    final void AboutDialog(int n2, CardStack qv2, Card qu2, CardStack qv3) {
        int n3 = qv2.f.length - 1;
        while (n3 >= 0) {
            Object object;
            boolean bl2 = SpiderSolver.c(n2, qv2.f[n3].c);
            if (bl2) {
                CardRun qm_02 = qv3.AboutDialog();
                qv2.f[n3].AboutDialog(qm_02);
            }
            if (qv2.f[n3].d.AboutDialog > 1) {
                object = qv2.f[n3].d.c[qv2.f[n3].d.AboutDialog - 1];
                --qv2.f[n3].d.AboutDialog;
                object = new CardRun((CardImage)object);
            } else {
                object = (CardRun)qv2.f[n3].e.getLast();
                qv2.f[n3].b((CardRun)object);
            }
            ((CardRun)object).b = true;
            qu2.AboutDialog((CardRun)object);
            --n3;
        }
    }

    @Override
    final StringBuffer AboutDialog(String string, int n2) {
        return new StringBuffer(String.format("%s[%03d:%02d,%02d,%02d,%02d,%02d,%02d,%02d,%02d]: ", string, n2, this.ad, this.ak, this.af, this.ag, this.ae, this.ai, this.ah, this.DesktopDuplication));
    }

    @Override
    final boolean AboutDialog(String stringArray, String[] stringArray2, int n2) {
        CardRun qm_02;
        Object object;
        int n3;
        int n4;
        CardStack qv2 = this.d.aY.AboutDialog[0];
        this.d.aY.b = 0;
        int[] nArray = new int[]{6, 6, 6, 6, 5, 5, 5, 5, 5, 5};
        int[] nArray2 = new int[]{5, 5, 5, 5, 4, 4, 4, 4, 4, 4};
        int n5 = 6;
        boolean bl2 = false;
        if (stringArray != null && !stringArray.equals("60")) {
            bl2 = true;
            n5 = 0;
            String[] stringArray3 = stringArray.split(":");
            try {
                int n6 = Integer.parseInt(stringArray3[0]);
                this.d.aY.c = this.d.aY.b = (50 - n6) / 10;
                n6 = 0;
                while (n6 < 10) {
                    n4 = Integer.parseInt(stringArray3[n6 + 1]);
                    int n7 = n4 % 100;
                    n3 = n4 / 100;
                    nArray[n6] = n7;
                    nArray2[n6] = n3;
                    if (n7 > n5) {
                        n5 = n7;
                    }
                    ++n6;
                }
            }
            catch (NumberFormatException numberFormatException) {
                this.d.i("Error parsing Spider options for partially completed deck");
            }
        }
        int n8 = 0;
        while (n8 < n5) {
            stringArray = stringArray2[n8 + 1].split(",");
            n4 = 0;
            while (n4 < stringArray.length) {
                if (nArray[n4] > n8) {
                    int n9;
                    Card qu2 = qv2.f[n4];
                    object = stringArray[n4];
                    this.g[n8][n4] = n9 = this.d.c((String)object);
                    if (this.d.d <= 2) {
                        this.d.g("Loading card " + n9 + " into stack " + n4 + " level " + n8);
                    }
                    if (nArray2[n4] > n8) {
                        qm_02 = new CardRun(this.b(qu2, n9));
                        qu2.AboutDialog(qm_02);
                        qm_02.b = true;
                    } else {
                        qm_02 = qu2.d;
                        CardRun qm_03 = new CardRun(this.b(qu2, n9));
                        if (qm_02 != null && !qm_02.b) {
                            int n10 = qu2.AboutDialog(qm_02, qm_03, false, false);
                            if (n10 > 0) {
                                qm_02.AboutDialog(qm_03, n10);
                            } else {
                                qu2.AboutDialog(qm_03);
                            }
                        } else {
                            qu2.AboutDialog(qm_03);
                        }
                    }
                }
                ++n4;
            }
            ++n8;
        }
        String[] stringArray4 = stringArray2[n5 + 1].split(",");
        try {
            int n11 = this.d.aY.b;
            while (n11 < 5) {
                n4 = 0;
                while (n4 < 10) {
                    String string = stringArray4[n11 * 10 + n4];
                    this.B[n11][n4] = n3 = this.d.c(string);
                    object = this.d.aY.AboutDialog[1].f[0];
                    qm_02 = new CardRun(this.b((Card)object, n3));
                    new CardRun(this.b((Card)object, n3)).b = true;
                    ((Card)object).c(qm_02);
                    if (this.d.d <= 2) {
                        this.d.g("Loading card " + n3 + " into deck level " + n11 + " stack " + n4);
                    }
                    ++n4;
                }
                ++n11;
            }
        }
        catch (ArrayIndexOutOfBoundsException arrayIndexOutOfBoundsException) {
            this.d.i("Insufficient cards in the deal pile");
        }
        catch (Exception exception) {
            this.d.i("Problem reading the cards in the deal pile");
        }
        if (bl2) {
            stringArray4 = stringArray2[n5 + 2].split(",");
            int n12 = 0;
            while (n12 < 8) {
                String string = stringArray4[n12];
                int n13 = this.d.c(string);
                if (n13 > 0) {
                    this.AboutDialog[n12] = n13;
                    this.l(n13 / 100);
                    if (this.d.d <= 2) {
                        this.d.g("Loaded suit card " + n13);
                    }
                }
                ++n12;
            }
        }
        this.AboutDialog((Card)null);
        if (this.d.m == 1) {
            int n14 = 0;
            while (n14 < 104) {
                if (this.CHandler[n14].g <= 0) {
                    this.d.g("For ALLCARDS the input file must have all 104 cards");
                    return false;
                }
                ++n14;
            }
        }
        this.d.ap.g();
        return true;
    }

    @Override
    final void AboutDialog(StringBuffer stringBuffer) {
        int n2;
        stringBuffer.append(SolitaireGameEngine.j[this.d.i]);
        int n3 = 0;
        boolean bl2 = false;
        int n4 = 0;
        while (n4 < 4) {
            if (this.h[n4] > n3) {
                n3 = this.h[n4];
            }
            if (this.h[n4] != 6) {
                bl2 = true;
            }
            ++n4;
        }
        n4 = 4;
        while (n4 < 10) {
            if (this.h[n4] > n3) {
                n3 = this.h[n4];
            }
            if (this.h[n4] != 5) {
                bl2 = true;
            }
            ++n4;
        }
        if (bl2 || this.uPanel != 50) {
            bl2 = true;
            stringBuffer.append(",");
            stringBuffer.append(this.uPanel);
            n4 = 0;
            while (n4 < 10) {
                stringBuffer.append(":" + (this.i[n4] * 100 + this.h[n4]));
                ++n4;
            }
        }
        stringBuffer.append("\n# Stacks:\n");
        n4 = 0;
        while (n4 < n3) {
            int n5;
            n2 = this.f;
            if (n4 == n3 - 1) {
                n5 = this.f - 1;
                while (n5 >= 0) {
                    if (this.g[n4][n5] != 0) {
                        n2 = n5 + 1;
                        break;
                    }
                    --n5;
                }
            }
            n5 = 0;
            while (n5 < n2) {
                stringBuffer.append(SpiderSolver.i(this.g[n4][n5]));
                stringBuffer.append(",");
                ++n5;
            }
            stringBuffer.append("\n");
            ++n4;
        }
        stringBuffer.append("# Deck:\n");
        n4 = 0;
        while (n4 < 5) {
            n2 = 0;
            while (n2 < this.f) {
                stringBuffer.append(SpiderSolver.i(this.B[n4][n2]));
                stringBuffer.append(",");
                ++n2;
            }
            ++n4;
        }
        if (bl2) {
            stringBuffer.append("\n# Suits:\n");
            n4 = 0;
            while (n4 < 8) {
                stringBuffer.append(SpiderSolver.i(this.AboutDialog[n4]));
                stringBuffer.append(",");
                ++n4;
            }
        }
    }

    @Override
    final void AboutDialog(int n2) {
        if (this.d.d <= n2) {
            n2 = 0;
            while (n2 < this.d.aZ.c) {
                this.d.g(String.format("Deal%1d penalty stats %4d/%4d(%3d) %3d,%3d,%3d,%3d,%3d,%3d,%3d", n2, this.ac[n2][0], this.ac[n2][1], this.ac[n2][2], this.ac[n2][3], this.ac[n2][4], this.ac[n2][5], this.ac[n2][6], this.ac[n2][7], this.ac[n2][8], this.ac[n2][9]));
                ++n2;
            }
            this.d.g(String.format("Tip   penalty stats %4d           %3d,%3d,%3d,%3d,%3d,%3d,%3d", this.d.T, this.ad, this.af, this.ag, this.ah, this.ae, this.ai, this.DesktopDuplication));
        }
    }

    @Override
    final boolean AboutDialog(qa object, int n2) {
        if (object == null) {
            return false;
        }
        if (((qa)object).AboutDialog[0] == null) {
            return false;
        }
        Card[] quArray = ((qa)object).AboutDialog[0].f;
        int n3 = ((qa)object).AboutDialog[0].f.length;
        n2 = 0;
        while (n2 < n3) {
            object = quArray[n2];
            if (((Card)object).d != null) {
                return false;
            }
            ++n2;
        }
        return true;
    }

    @Override
    final int b(qa object, boolean bl2) {
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
        int n2 = ((qa)object).AboutDialog[2].f.length;
        int n3 = 0;
        while (n3 < n2) {
            object = quArray[n3];
            if (((Card)object).d == null) break;
            bl2 += 1;
            ++n3;
        }
        return bl2 ? 1 : 0;
    }

    @Override
    final int AboutDialog(qa qa2, boolean bl2) {
        if (bl2) {
            return 0;
        }
        return this.ao;
    }

    @Override
    final int AboutDialog(qa qa2) {
        int n2;
        int n3;
        if (qa2 == null) {
            return 999;
        }
        if (qa2.AboutDialog[0] == null) {
            return 999;
        }
        int n4 = 0;
        while (n4 < qa2.AboutDialog[2].f.length) {
            if (qa2.AboutDialog[2].f[n4].d == null) break;
            ++n4;
        }
        if (this.d.l.c == 1 || this.d.l.c == 2) {
            int n5 = 8 - n4;
            int n6 = this.q << 1;
            if (n6 < 8) {
                n6 += 2;
            }
            n4 = (5 - this.d.aZ.b) * n6;
            Card[] quArray = qa2.AboutDialog[0].f;
            int n7 = qa2.AboutDialog[0].f.length;
            int n8 = 0;
            while (n8 < n7) {
                Card qu2 = quArray[n8];
                n4 += qu2.e.size();
                ++n8;
            }
            return qa2.h + (n4 -= n5);
        }
        if (this.d.l.c == 5) {
            n3 = this.d.l.j - n4;
        } else {
            n2 = (this.d.l.h - this.d.l.g + 99) / 100 + 1;
            n3 = n2 - n4;
        }
        n2 = 0;
        Card[] quArray = qa2.AboutDialog[0].f;
        int n9 = qa2.AboutDialog[0].f.length;
        int n10 = 0;
        while (n10 < n9) {
            Card qu3 = quArray[n10];
            if (qu3.d != null && qu3.d.c[0].f == 13) {
                ++n2;
                --n3;
            }
            if (n3 == 0) break;
            ++n10;
        }
        int n11 = 0;
        while (n11 < n3) {
            n2 += 2;
            ++n11;
        }
        return qa2.h + n2;
    }

    @Override
    final int AboutDialog(Card qu2, Card qu3, int n2) {
        int n3 = this.AboutDialog(qu2, qu3, n2, 3);
        if (n3 <= 0) {
            n3 = this.AboutDialog(qu2, qu3, n2, 0);
        }
        if (n3 <= 0) {
            n3 = this.AboutDialog(qu2, qu3, n2, 1);
        }
        return n3;
    }

    private int AboutDialog(Card qu2, Card qu3, int n2, int n3) {
        int n4;
        int n5;
        int n6 = -1;
        int n7 = qu2.d.AboutDialog;
        int n8 = 1;
        switch (n3) {
            case 3: 
            case 6: {
                n8 = 1;
                break;
            }
            case 0: 
            case 4: {
                n8 = 4;
                break;
            }
            case 1: 
            case 5: {
                n8 = 2;
            }
        }
        int n9 = qu3.AboutDialog(qu2, n8, true);
        if (n3 == 4 && n9 > 0) {
            n9 = -1;
        } else if (n3 == 5 && n9 != qu2.d.AboutDialog) {
            n9 = -1;
        }
        int n10 = n5 = n9 == 0 ? n7 : n9;
        if (n9 >= 0 && n3 == 6 && (n4 = n5 + qu3.d.AboutDialog) < 13) {
            n9 = -1;
        }
        if (n9 >= 0) {
            if (n2 > 0 && n2 != n5) {
                if (n3 == 1) {
                    n5 = n2;
                } else {
                    return -1;
                }
            }
            if (this.d.d <= 5) {
                this.d.g("User move will be permitted " + n9);
            }
            n4 = n8 == 1 ? 2 : 0;
            n4 = n4 | (n5 < n7 ? 1 : 0);
            if (qu3.d != null && qu3.d.AboutDialog + n5 == 13 && qu3.d.c[0].e == qu2.d.c[0].e) {
                n4 |= qu3.d.c[0].e << 4;
            }
            n6 = GameMove.AboutDialog(n4, n5, qu2, qu3);
            this.k(n6);
        }
        return n6;
    }

    @Override
    final int AboutDialog(CardImage object) {
        int n2;
        Card qu2 = ((CardImage)object).o;
        if (qu2.b.AboutDialog == this.d.ap.h) {
            int n3;
            block22: {
                if (this.d.d <= 5) {
                    this.d.g("Got double click on feed stack");
                }
                object = this;
                int n4 = -1;
                Card[] quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
                int n5 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
                int n6 = 0;
                while (n6 < n5) {
                    Card qu3 = quArray[n6];
                    if (qu3.d == null) {
                        n3 = -1;
                        break block22;
                    }
                    ++n6;
                }
                if (((SolitaireSolver)object).d.aY.b < ((SolitaireSolver)object).xHandler) {
                    Object object2 = object;
                    int cfr_ignored_0 = ((SolitaireSolver)object).d.aY.b;
                    int n7 = ((SpiderSolver)object2).AboutDialog(((SolitaireSolver)object2).d.aY.AboutDialog[0], ((SolitaireSolver)object).d.aY.AboutDialog[1].f[0], ((SolitaireSolver)object).d.aY.AboutDialog[2]);
                    if (((SolitaireSolver)object).d.d <= 4) {
                        ((SolitaireSolver)object).d.g("Done AboutDialog deal, dealIndex now " + (((SolitaireSolver)object).d.aY.b + 1));
                    }
                    if (n7 >= 0) {
                        n4 = GameMove.AboutDialog(8, 0, n7 >> 8, n7 & 0xFF);
                        int cfr_ignored_1 = ((SolitaireSolver)object).d.aY.b;
                        ((SpiderSolver)object).AboutDialog(n4, ((SolitaireSolver)object).d.aY.AboutDialog[0], ((SolitaireSolver)object).d.aY.AboutDialog[1].f[0], ((SolitaireSolver)object).d.aY.AboutDialog[2]);
                        ((SolitaireSolver)object).k(n4);
                    }
                } else if (((SolitaireSolver)object).d.d <= 4) {
                    ((SolitaireSolver)object).d.g("No more deals to do right now");
                }
                n3 = n4;
            }
            n2 = n3;
        } else {
            Card qu4;
            CardImage pV2 = object;
            object = this;
            int n8 = -1;
            int n9 = -1;
            if (pV2 != qu2.AboutDialog()) {
                n9 = qu2.d.AboutDialog - pV2.q;
            }
            Card[] quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
            int n10 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
            int n11 = 0;
            while (n11 < n10) {
                qu4 = quArray[n11];
                if (qu4 != qu2 && (n8 = ((SpiderSolver)object).AboutDialog(qu2, qu4, n9, 6)) > 0) break;
                ++n11;
            }
            if (n8 <= 0) {
                quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
                n10 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((SpiderSolver)object).AboutDialog(qu2, qu4, n9, 3)) > 0) break;
                    ++n11;
                }
            }
            if (n8 <= 0) {
                quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
                n10 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((SpiderSolver)object).AboutDialog(qu2, qu4, n9, 4)) > 0) break;
                    ++n11;
                }
            }
            if (n8 <= 0) {
                quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
                n10 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((SpiderSolver)object).AboutDialog(qu2, qu4, n9, 5)) > 0) break;
                    ++n11;
                }
            }
            if (n8 <= 0) {
                quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
                n10 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((SpiderSolver)object).AboutDialog(qu2, qu4, n9, 0)) > 0) break;
                    ++n11;
                }
            }
            if (n8 <= 0) {
                quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
                n10 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((SpiderSolver)object).AboutDialog(qu2, qu4, n9, 1)) > 0) break;
                    ++n11;
                }
            }
            n2 = n8;
        }
        return n2;
    }
}

