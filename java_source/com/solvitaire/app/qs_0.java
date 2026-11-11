/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pJ;
import com.solvitaire.app.pV;
import com.solvitaire.app.qa;
import com.solvitaire.app.qm_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qr;
import com.solvitaire.app.qt;
import com.solvitaire.app.qu;
import com.solvitaire.app.qv;
import java.io.File;
import java.util.HashMap;
import java.util.Set;

/*
 * Renamed from com.solvitaire.app.qs
 */
final class qs_0
extends qr {
    private int[] b;
    private int[] c = new int[]{30, 60, 30, 30, 30, 30, 30};
    private int[] L = new int[]{30, 60, 75, 75, 30, 30, 30};
    private int[] M = this.c;
    private double[] N = new double[]{0.0, 0.0, -3.0, -2.0, 0.0, 0.0, 0.0};
    private int[] O = new int[]{100, 150, 400, 400, 180, 500, 500};
    private double[] P = new double[]{-50.0, -50.0, -60.0, -40.0, -3.0, -27.0, -9.0};
    private int Q = 7;
    private int R = 30;
    private int[] S = new int[]{-15, -4, -5, -5, -15};
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
    private int aj = 0;
    private int ak = 0;
    private int al = 0;
    private boolean am;
    private boolean an = false;
    private int ao;
    int[] a = new int[8];
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

    qs_0(qo_0 qo_02) {
        super(qo_02, 2000);
        this.f = 10;
        this.o = 2;
        this.p = 104;
        this.x = 5;
        this.r = true;
    }

    @Override
    final String a() {
        return "Spider";
    }

    @Override
    final boolean b() {
        this.g = new int[50][this.f];
        this.h = new int[this.f];
        this.i = new int[this.f];
        this.t = new int[this.f][10];
        this.B = new int[5][this.f];
        this.a = new int[8];
        this.ap = this.Q;
        this.k = this.O;
        this.l = this.P;
        this.m = this.R;
        this.ac = new int[this.ap][10];
        this.i();
        this.e = this.d.au + "spider" + File.separator;
        if (this.F) {
            if (this.d.d <= 4) {
                this.d.g("Running Spider");
            }
            this.d.ap = new qt(this);
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
        this.a((qu)null);
        this.am = false;
        this.J = 0;
        this.K = 0;
        this.ao = this.d.l.m;
        this.an = false;
        return true;
    }

    @Override
    final void a(int n2, int n3) {
        this.a(n2, n3, false);
    }

    private void a(int n2, int n3, boolean bl2) {
        int n4;
        int n5;
        if (this.d.an) {
            this.d.an = false;
            this.T = this.S[this.q];
            this.U = 7;
            this.V = 13;
            this.W = -15;
            this.X = 27;
            this.Y = 37;
            this.Z = this.aa;
            this.b = this.L;
            if (this.d.l.k < 999) {
                this.am = false;
                this.an = true;
                this.U = this.U * 200 / (this.d.l.k + 80);
                this.V = this.V * 200 / (this.d.l.k + 80);
                this.X = this.X * 200 / (this.d.l.k + 50);
                this.Y = this.Y * 200 / (this.d.l.k + 50);
                this.Z = this.ab;
                this.b = this.M;
            } else {
                this.am = true;
                this.d.T += -300;
                n5 = this.d.aZ.h + 5;
                if (this.d.d < 3) {
                    this.d.g("Expose triggered, complexity to " + this.d.T + " target depth now " + n5 + " do expose solve");
                }
                this.a(n2, n5, false);
                this.d.T -= -300;
                if (this.d.d < 5) {
                    this.d.g("Back from expose solve, expose state " + this.am + " depth " + n3 + " complexity " + this.d.T);
                }
                if (this.E) {
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
        if (this.d.aZ.h > this.y) {
            if (this.d.d <= 2) {
                this.d.g("Exiting solve due to recursion limit");
            }
            return;
        }
        if (this.d.d <= 3) {
            this.d.g("into solve level " + this.d.aZ.h);
        }
        if (this.d.P++ % 100000L == 0L) {
            this.b(4);
            this.a(4);
            this.b(4, this.d.aZ.a[0]);
        }
        if (!this.E) {
            qs_0 qs_02 = this;
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
            this.a(8, "exposematch", n2, n3);
        }
        if (this.G < 0 && this.am && !bl2) {
            this.a(9, "exposeany", n2, n3);
        }
        if (this.G < 0 && !bl2) {
            qs_0 qs_03 = this;
            n4 = qs_03.j(qs_03.T);
            if (n4 < 999999) {
                ++this.ad;
                this.a(1, "matching", n2, n3);
                --this.ad;
                this.d.T = n4;
            }
        }
        if (this.G < 0 && !bl2 && !this.an) {
            qs_0 qs_04 = this;
            n4 = qs_04.j(qs_04.X);
            if (n4 < 999999) {
                ++this.ae;
                this.a(5, "matchdiff", n2, n3);
                --this.ae;
                this.d.T = n4;
            }
        }
        qv qv2 = this.d.aZ.a[0];
        int n6 = qv2.e;
        if (this.G < 0 && !bl2 && n6 == 0) {
            qs_0 qs_05 = this;
            n5 = qs_05.j(qs_05.U);
            if (n5 < 999999) {
                ++this.af;
                this.a(4, "fromspace", n2, n3);
                --this.af;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && !bl2 && n6 > 0) {
            if (n6 > 1 && !this.an) {
                n5 = this.j(0);
            } else {
                qs_0 qs_06 = this;
                n5 = qs_06.j(qs_06.V);
            }
            if (n5 < 999999) {
                ++this.ag;
                this.a(2, "tospace", n2, n3);
                --this.ag;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && !bl2 && n6 > 0) {
            if (n6 > 1) {
                qs_0 qs_07 = this;
                n5 = qs_07.j(qs_07.W);
            } else {
                qs_0 qs_08 = this;
                n5 = qs_08.j(qs_08.V);
            }
            if (n5 < 999999) {
                ++this.ah;
                this.a(3, "kingtospace", n2, n3);
                --this.ah;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && !bl2 && this.d.aZ.b < this.x) {
            qs_0 qs_09 = this;
            n5 = qs_09.j(qs_09.Y);
            if (n5 < 999999) {
                ++this.ai;
                this.a(6, "shift", n2, n3);
                --this.ai;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && this.d.aZ.c < this.ap) {
            if (this.d.d <= 2) {
                this.d.g("At level " + this.d.aZ.h + " try a deal");
            }
            this.d(n2, n3);
        }
        if (this.G < 0 && !bl2 && this.an) {
            qs_0 qs_010 = this;
            n5 = qs_010.j(qs_010.X);
            if (n5 < 999999) {
                ++this.ae;
                this.a(5, "matchdiff", n2, n3);
                --this.ae;
                this.d.T = n5;
            }
        }
        if (this.G < 0 && !bl2) {
            qs_0 qs_011 = this;
            n5 = qs_011.j(qs_011.Y);
            if (n5 < 999999) {
                ++this.ai;
                this.a(7, "shiftfordeal", n2, n3);
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
        qu[] quArray = this.d.aZ.a[0].f;
        int n2 = this.d.aZ.a[0].f.length;
        int n3 = 0;
        while (n3 < n2) {
            qu qu2 = quArray[n3];
            l2 += this.a(qu2, l2, true, false);
            ++n3;
        }
        boolean cfr_ignored_0 = this.d.a;
        return l2;
    }

    @Override
    final int[] d() {
        HashMap hashMap = new HashMap(104);
        this.b(hashMap);
        return this.b(hashMap, 2);
    }

    private int b(HashMap hashMap) {
        qv qv2 = this.d.aY.a[0];
        qv qv3 = this.d.aY.a[2];
        int n2 = this.d.aY.b;
        int n3 = 8;
        if (this.q > 0) {
            n3 = 8 / this.q;
        }
        if (this.d.d <= 4) {
            this.d.g("numSuits is " + this.q + " so maxCards is " + n3);
        }
        int n4 = this.a(hashMap, qv2, n3);
        if (this.d.d <= 3) {
            this.d.g("Totals numcards after stacks is " + n4);
        }
        n4 += this.a(hashMap, qv3, n3);
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
                if ((n6 = this.a(hashMap, this.B[n5][n2])) > n3) {
                    this.d.bu.a();
                    this.d.i("ERROR - Too many " + qs_0.f(this.B[n5][n2]) + " of " + qs_0.d(this.B[n5][n2]) + "s in the deck");
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
        qv qv2 = this.d.aY.a[2];
        int n3 = 0;
        while (n3 < qv2.f.length) {
            if (qv2.f[n3].d == null) break;
            ++n3;
        }
        qm_0 qm_02 = new qm_0();
        int n4 = 13;
        while (n4 > 0) {
            qu qu2 = qv2.f[n3];
            qm_02.c[qm_02.a++] = this.b(qu2, n2 * 100 + n4);
            --n4;
        }
        qv2.a(qm_02);
    }

    @Override
    final int a(qu object) {
        object = this.d.aY.a[0];
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
                        qu[] quArray = ((qv)object).f;
                        int n7 = ((qv)object).f.length;
                        int n8 = 0;
                        while (n8 < n7) {
                            object2 = quArray[n8];
                            if (((qu)object2).e.size() > 0) {
                                qm_0 qm_02 = (qm_0)((qu)object2).e.getFirst();
                                if (qm_02.a > 0 && qm_02.c[0].g == 0) {
                                    if (this.d.d <= 5) {
                                        this.d.g("***Final card (on stack " + ((qu)object2).c + ") must be " + n6);
                                    }
                                    this.g[0][((qu)object2).c] = n6;
                                    qm_02.a(n6);
                                    if (this.d.aZ != null) {
                                        object2 = (qm_0)this.d.aZ.a[0].f[((qu)object2).c].e.getFirst();
                                        ((qm_0)object2).a(n6);
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
    final int a(HashMap hashMap) {
        int n2;
        this.q = 1;
        qv qv2 = this.d.aY.a[0];
        int n3 = 0;
        int n4 = 0;
        while (n4 < this.f) {
            n2 = 0;
            while (n2 < 6) {
                if (n4 < 4 || n2 < 5) {
                    ++n3;
                    this.a(hashMap, this.g[n2][n4], "stack");
                    qs_0 qs_02 = this;
                    qs_02.m(qs_02.g[n2][n4]);
                }
                ++n2;
            }
            ++n4;
        }
        n4 = this.d.aY.b;
        while (n4 < this.x) {
            if (this.B[n4][0] == 0) break;
            n2 = 0;
            while (n2 < qv2.f.length) {
                this.a(hashMap, this.B[n4][n2], "deal ");
                ++n3;
                qs_0 qs_03 = this;
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
    private void a(int var1_1, String var2_2, int var3_3, int var4_4) {
        if (this.d.d <= 3) {
            this.d.g(String.format("Entered dojoins mode %s complexity %d lastmove %08x backout %d", new Object[]{var2_2, this.d.T, var3_3, this.G}));
        }
        var8_5 = this.d.aZ.a[0].f;
        var7_6 = this.d.aZ.a[0].f.length;
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
                    var17_19 = this.d.aZ.a[0].f;
                    var16_18 = this.d.aZ.a[0].f.length;
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
                                    if (((qm_0)var5_8.e.get((int)(var9_9 - 2))).c[0].g != 0) break;
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
                                    var18_20 = var14_15.a(var5_8, var13_13, false);
                                    if (var18_20 >= 0 && var14_15.d != null && var5_8.d.c[var5_8.d.a - 1].f == 1) {
                                        var19_21 = var14_15.d.a + var5_8.d.a;
                                        if (var14_15.e.size() + var19_21 >= 12 && (var19_22 = var14_15.k()) != null && !var19_22.b && var19_22.c[var19_22.a - 1].g == 0) {
                                            this.d.g("Disallow join of " + String.valueOf(var5_8) + " to " + String.valueOf(var14_15) + " due to possible suit completion");
                                            var18_20 = -1;
                                        }
                                    }
                                    if (var18_20 < 0) break;
                                    if (var1_1 == 1 || var1_1 == 8) {
                                        var19_21 = var14_15.d.a + var5_8.d.a;
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
                    this.a(var1_1, var2_2, var13_13, var4_4, var5_8, var10_10, var11_11, var5_8.d.a, var3_3);
                    break block25;
                }
                var13_14 = this.d.aZ.a[0].f;
                var12_12 = this.d.aZ.a[0].f.length;
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
                                    if (((qm_0)var5_8.e.get((int)(var9_9 - 2))).c[0].g == 0) {
                                        var14_16 = 4;
                                        break;
                                    }
                                    break block24;
                                }
                                default: {
                                    var14_16 = 5;
                                }
                            }
                            var15_17 = var10_10.a(var5_8, var14_16, false);
                            if (var15_17 >= 0) {
                                this.a(var1_1, var2_2, var14_16, var4_4, var5_8, var10_10, var15_17, var5_8.d.a, var3_3);
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

    private void a(int n2, String string, int n3, int n4, qu qu2, qu qu3, int n5, int n6, int n7) {
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
            n5 = qu3.a(qu2, n5, this.d.aZ.a[2]);
            n9 = n3 == 1 ? 1 : 0;
            this.d.aZ.d[this.d.aZ.h] = n8 = pJ.a(n5, n6, qu2, qu3, n9 != 0);
            ++this.d.aZ.h;
            long l2 = this.c();
            if (!this.b(qu3, qu2)) {
                if (this.G < 0) {
                    this.G = this.b(l2);
                    if (this.G < 0) {
                        int n12;
                        if (!this.am) {
                            this.a(l2);
                        }
                        n3 = this.d.T;
                        n9 = this.aj;
                        int n13 = this.ao;
                        if ((n2 == 1 || n2 == 8 || n2 == 4) && (n2 = ((n10 = n8) & 0x70000000) >> 28) != 0) {
                            if (this.d.d < 3) {
                                this.d.g("Completed a suit");
                            }
                            n12 = this.Z[this.q];
                            this.d.T += this.a(n12, 0, 0, 0.0);
                            ++this.aj;
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
                            if (qu2.d.a == 1 && qu2.d.c[0].g == 0) {
                                if (this.d.d <= 3) {
                                    this.d.g("Exposed a card, try reading it");
                                }
                                if (!this.a(qu2, n7)) {
                                    if (this.d.d <= 5) {
                                        this.d.g("checkReadCard failed, backing out 1");
                                    }
                                    this.G = 0;
                                } else {
                                    qm_0 qm_02;
                                    pV pV2 = qu2.a();
                                    if (this.d.d <= 2) {
                                        this.d.g("Just read card " + pV2.g);
                                    }
                                    if (pV2 != null && (qm_02 = qu3.d) != null && qm_02.a >= n6) {
                                        pV pV3 = qm_02.c[qm_02.a - n6];
                                        if (pV2.g == pV3.g + 1 && n2 == 0) {
                                            this.d.aZ.d[this.d.aZ.h - 1] = n8 |= 0x1000000;
                                            this.d.aY.d[this.d.aZ.h - 1] = n8;
                                            this.d.ap.l[this.d.ap.m].a = n8;
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
                        if (!this.E && this.G < 0 && qu3.d != null) {
                            n12 = qu3.d.b ? 1 : 0;
                            qu3.d.b = false;
                            if (qu3.d.a == 1 && qu3.d.c[0].g == 0 && !this.a(qu3, n7)) {
                                if (this.d.d <= 5) {
                                    this.d.g("checkReadCard failed on suit completion, backing out 1");
                                }
                                this.G = 0;
                            }
                        }
                        if (!this.E && this.G < 0) {
                            int n14;
                            if (this.ao > 0 && ((n14 = n8) & 0x70000000) >> 28 == 0) {
                                --this.ao;
                            }
                            this.a(n8, n4, bl2);
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
                        this.aj = n9;
                        this.ao = n13;
                    }
                }
                if (this.G >= 0) {
                    --this.G;
                }
            }
            --this.d.aZ.h;
            qu3.b(qu2, n5, this.d.aZ.a[2]);
        }
    }

    private static boolean c(int n2, int n3) {
        return (n2 & aq[n3]) != 0;
    }

    private boolean c(qu qu2) {
        pV pV2 = qu2.d.c[0];
        if (pV2.f == 13) {
            return false;
        }
        int n2 = pV2.g + 1;
        boolean bl2 = false;
        qu[] quArray = this.d.aZ.a[0].f;
        int n3 = this.d.aZ.a[0].f.length;
        int n4 = 0;
        while (n4 < n3) {
            block7: {
                block8: {
                    qu qu3 = quArray[n4];
                    if (qu3 == qu2) break block7;
                    int n5 = qu3.e.size();
                    if (n5 <= 1) break block8;
                    if (qu3.d.c[0].f != pV2.f) break block7;
                    Object object = (qm_0)qu3.e.get(n5 - 2);
                    object = ((qm_0)object).c[((qm_0)object).a - 1];
                    if (((pV)object).g == 0) break block7;
                    if (((pV)object).g == n2) {
                        pV2 = qu3.d.c[0];
                        n2 = pV2.g + 1;
                        int n6 = qu2.e.size();
                        Object object2 = (qm_0)qu2.e.get(n6 - 2);
                        object2 = ((qm_0)object2).c[((qm_0)object2).a - 1];
                        if (((pV)object2).g != n2 || qu2.c > qu3.c) {
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
    final boolean a(qu qu2, qu qu3) {
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
            int n8 = qu2.d.a;
            int n9 = qu2.c;
            int n10 = qu3.c;
            if (n3 == n8 && n6 == n8 && n4 == n10 && n5 == n2 && n7 == n9) {
                qu qu4 = this.d.aZ.a[0].f[n5];
                n9 = 1;
                qu[] quArray = this.d.aZ.a[0].f;
                n5 = this.d.aZ.a[0].f.length;
                n4 = 0;
                while (n4 < n5) {
                    int n11;
                    qu qu5 = quArray[n4];
                    if (qu4 != qu5 && (n11 = qu4.a(qu5, 1, false)) >= 0) {
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
    final void a(int n2, boolean bl2) {
        if (this.d.d <= n2) {
            this.b(n2);
            this.a(n2, this.d.aZ.a[0]);
        }
    }

    private int n(int n2) {
        qs_0 qs_02 = this;
        int n3 = qs_02.a(qs_02.b[this.d.aZ.c - 1], this.c[this.d.aZ.c - 1], this.ad - this.ae / 2, this.N[this.d.aZ.c - 1]);
        if (this.d.aZ.c < 5) {
            if (n2 > 0) {
                if (this.d.d < 3) {
                    this.d.g("Completed a suit");
                }
                n2 = this.Z[this.q];
                n3 += this.a(n2, 0, 0, 0.0);
                ++this.aj;
            }
            qu[] quArray = this.d.aZ.a[0].f;
            int n4 = this.d.aZ.a[0].f.length;
            int n5 = 0;
            while (n5 < n4) {
                qu qu2 = quArray[n5];
                int n6 = qu2.e.size();
                qs_0 qs_03 = this;
                int n7 = qs_03.a(qs_03.S[this.q], 0, 0, 0.0);
                if (n6 == 1) {
                    n3 += n7;
                    ++this.ad;
                } else if (qu2.d != null && qu2.d.a > 1) {
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
        qu[] quArray = this.d.aZ.a[0].f;
        int n7 = this.d.aZ.a[0].f.length;
        int n8 = 0;
        while (n8 < n7) {
            qu qu2 = quArray[n8];
            if (qu2.d == null) {
                n6 = 0;
                n5 = 0;
                qu[] quArray2 = this.d.aZ.a[0].f;
                int n9 = this.d.aZ.a[0].f.length;
                n4 = 0;
                while (n4 < n9) {
                    qu qu3 = quArray2[n4];
                    if (qu3 != qu2 && qu3.e != null && qu3.e.size() > 1) {
                        this.a(11, "tospacefordeal", n2, n3);
                        n5 = 1;
                        break;
                    }
                    ++n4;
                }
                if (n5 == 0 && this.d.aZ.b < this.x) {
                    this.a(10, "tospacesingle", n2, n3);
                }
            }
            ++n8;
        }
        if (n6 != 0) {
            int n10;
            if (this.d.aZ.b < this.x) {
                if (this.x < 5) {
                    ++this.x;
                    if (this.d.d <= 4) {
                        this.d.g("In deal() incremented dealMaxIndex to " + this.x);
                    }
                }
                qs_0 qs_02 = this;
                int cfr_ignored_0 = this.d.aZ.b;
                n10 = qs_02.a(qs_02.d.aZ.a[0], this.d.aZ.a[1].f[0], this.d.aZ.a[2]);
                ++this.d.aZ.b;
                ++this.d.aZ.c;
                if (this.d.d < 3) {
                    this.d.g("Done a deal, dealIndex now " + this.d.aZ.b + " progress " + this.d.aZ.c);
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
                n7 = this.aj;
                int n11 = this.ad;
                n5 = this.ao;
                if (n10 > 0) {
                    int n12 = 0;
                    n4 = 0;
                    while (n4 < 10) {
                        if (qs_0.c(n10, n4)) {
                            ++n12;
                        }
                        ++n4;
                    }
                    this.ao += n12 * 101;
                }
                n8 = this.d.aZ.c <= 5 ? pJ.a(8, 0, n10 >> 8, n10 & 0xFF) : pJ.a(4, 0, 0, 0);
                int n13 = this.n(n10);
                this.d.T += n13;
                qs_0 qs_03 = this;
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
                    this.ac[this.d.aZ.c - 1][9] = this.aj;
                    this.d.aZ.d[this.d.aZ.h] = n8;
                    ++this.d.aZ.h;
                    if (this.d.d <= 2) {
                        this.d.g("Entering new progress/deal " + this.d.aZ.b + "/" + this.d.aZ.c + " at depth " + this.d.aZ.h);
                    }
                    ++this.ak;
                    boolean[] blArray = null;
                    boolean bl2 = true;
                    if (n10 > 0) {
                        n2 = this.d.aZ.a[0].f.length;
                        blArray = new boolean[n2];
                        n6 = 0;
                        while (n6 < n2) {
                            qu qu4 = this.d.aZ.a[0].f[n6];
                            if (qu4.d != null) {
                                blArray[n6] = qu4.d.b;
                                if (qu4.d.a == 1 && qu4.d.c[0].g == 0) {
                                    qu4.d.b = false;
                                    bl2 = this.a(qu4, n8);
                                }
                            }
                            ++n6;
                        }
                    }
                    if (this.ao > 0) {
                        --this.ao;
                    }
                    if (bl2) {
                        this.a(-1, n3, false);
                    }
                    if (blArray != null) {
                        n2 = 0;
                        while (n2 < this.d.aZ.a[0].f.length) {
                            qu qu5 = this.d.aZ.a[0].f[n2];
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
                    this.a(n8, this.d.aZ.a[0], this.d.aZ.a[1].f[0], this.d.aZ.a[2]);
                }
                this.b(2, this.d.aZ.a[0]);
                this.d.T -= n13;
                this.aj = n7;
                this.ad = n11;
                this.ao = n5;
            }
        }
    }

    final int a(qv qv2, qu qu2, qv qv3) {
        int n2 = 0;
        int n3 = 0;
        while (n3 < qv2.f.length) {
            qm_0 qm_02 = qu2.e();
            qu qu3 = qv2.f[n3];
            if (qu3.d == null) {
                this.d.i("Spider dealing to empty stack??");
                qu3.a(qm_02);
            } else {
                qu qu4 = qu3;
                int n4 = qu4.a(qu4.d, qm_02, false, false);
                if (n4 < 0) {
                    qu3.a(qm_02);
                    qm_02.b = false;
                } else {
                    qu3.d.a(qm_02, n4);
                    if (n4 > 0 && qu3.d.a == 13) {
                        if (this.d.d <= 3) {
                            this.d.g("Deal completed a suit!!");
                        }
                        qm_02 = qu3.e();
                        qv3.a(qm_02);
                        qu3.a(false);
                        int n5 = qu3.c;
                        n2 |= aq[n5];
                    }
                }
            }
            ++n3;
        }
        return n2;
    }

    final void a(int n2, qv qv2, qu qu2, qv qv3) {
        int n3 = qv2.f.length - 1;
        while (n3 >= 0) {
            Object object;
            boolean bl2 = qs_0.c(n2, qv2.f[n3].c);
            if (bl2) {
                qm_0 qm_02 = qv3.a();
                qv2.f[n3].a(qm_02);
            }
            if (qv2.f[n3].d.a > 1) {
                object = qv2.f[n3].d.c[qv2.f[n3].d.a - 1];
                --qv2.f[n3].d.a;
                object = new qm_0((pV)object);
            } else {
                object = (qm_0)qv2.f[n3].e.getLast();
                qv2.f[n3].b((qm_0)object);
            }
            ((qm_0)object).b = true;
            qu2.a((qm_0)object);
            --n3;
        }
    }

    @Override
    final StringBuffer a(String string, int n2) {
        return new StringBuffer(String.format("%s[%03d:%02d,%02d,%02d,%02d,%02d,%02d,%02d,%02d]: ", string, n2, this.ad, this.ak, this.af, this.ag, this.ae, this.ai, this.ah, this.aj));
    }

    @Override
    final boolean a(String stringArray, String[] stringArray2, int n2) {
        qm_0 qm_02;
        Object object;
        int n3;
        int n4;
        qv qv2 = this.d.aY.a[0];
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
                    qu qu2 = qv2.f[n4];
                    object = stringArray[n4];
                    this.g[n8][n4] = n9 = this.d.c((String)object);
                    if (this.d.d <= 2) {
                        this.d.g("Loading card " + n9 + " into stack " + n4 + " level " + n8);
                    }
                    if (nArray2[n4] > n8) {
                        qm_02 = new qm_0(this.b(qu2, n9));
                        qu2.a(qm_02);
                        qm_02.b = true;
                    } else {
                        qm_02 = qu2.d;
                        qm_0 qm_03 = new qm_0(this.b(qu2, n9));
                        if (qm_02 != null && !qm_02.b) {
                            int n10 = qu2.a(qm_02, qm_03, false, false);
                            if (n10 > 0) {
                                qm_02.a(qm_03, n10);
                            } else {
                                qu2.a(qm_03);
                            }
                        } else {
                            qu2.a(qm_03);
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
                    object = this.d.aY.a[1].f[0];
                    qm_02 = new qm_0(this.b((qu)object, n3));
                    new qm_0(this.b((qu)object, n3)).b = true;
                    ((qu)object).c(qm_02);
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
                    this.a[n12] = n13;
                    this.l(n13 / 100);
                    if (this.d.d <= 2) {
                        this.d.g("Loaded suit card " + n13);
                    }
                }
                ++n12;
            }
        }
        this.a((qu)null);
        if (this.d.m == 1) {
            int n14 = 0;
            while (n14 < 104) {
                if (this.C[n14].g <= 0) {
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
    final void a(StringBuffer stringBuffer) {
        int n2;
        stringBuffer.append(qo_0.j[this.d.i]);
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
        if (bl2 || this.u != 50) {
            bl2 = true;
            stringBuffer.append(",");
            stringBuffer.append(this.u);
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
                stringBuffer.append(qs_0.i(this.g[n4][n5]));
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
                stringBuffer.append(qs_0.i(this.B[n4][n2]));
                stringBuffer.append(",");
                ++n2;
            }
            ++n4;
        }
        if (bl2) {
            stringBuffer.append("\n# Suits:\n");
            n4 = 0;
            while (n4 < 8) {
                stringBuffer.append(qs_0.i(this.a[n4]));
                stringBuffer.append(",");
                ++n4;
            }
        }
    }

    @Override
    final void a(int n2) {
        if (this.d.d <= n2) {
            n2 = 0;
            while (n2 < this.d.aZ.c) {
                this.d.g(String.format("Deal%1d penalty stats %4d/%4d(%3d) %3d,%3d,%3d,%3d,%3d,%3d,%3d", n2, this.ac[n2][0], this.ac[n2][1], this.ac[n2][2], this.ac[n2][3], this.ac[n2][4], this.ac[n2][5], this.ac[n2][6], this.ac[n2][7], this.ac[n2][8], this.ac[n2][9]));
                ++n2;
            }
            this.d.g(String.format("Tip   penalty stats %4d           %3d,%3d,%3d,%3d,%3d,%3d,%3d", this.d.T, this.ad, this.af, this.ag, this.ah, this.ae, this.ai, this.aj));
        }
    }

    @Override
    final boolean a(qa object, int n2) {
        if (object == null) {
            return false;
        }
        if (((qa)object).a[0] == null) {
            return false;
        }
        qu[] quArray = ((qa)object).a[0].f;
        int n3 = ((qa)object).a[0].f.length;
        n2 = 0;
        while (n2 < n3) {
            object = quArray[n2];
            if (((qu)object).d != null) {
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
        if (((qa)object).a[2] == null) {
            return 0;
        }
        bl2 = false;
        qu[] quArray = ((qa)object).a[2].f;
        int n2 = ((qa)object).a[2].f.length;
        int n3 = 0;
        while (n3 < n2) {
            object = quArray[n3];
            if (((qu)object).d == null) break;
            bl2 += 1;
            ++n3;
        }
        return bl2 ? 1 : 0;
    }

    @Override
    final int a(qa qa2, boolean bl2) {
        if (bl2) {
            return 0;
        }
        return this.ao;
    }

    @Override
    final int a(qa qa2) {
        int n2;
        int n3;
        if (qa2 == null) {
            return 999;
        }
        if (qa2.a[0] == null) {
            return 999;
        }
        int n4 = 0;
        while (n4 < qa2.a[2].f.length) {
            if (qa2.a[2].f[n4].d == null) break;
            ++n4;
        }
        if (this.d.l.c == 1 || this.d.l.c == 2) {
            int n5 = 8 - n4;
            int n6 = this.q << 1;
            if (n6 < 8) {
                n6 += 2;
            }
            n4 = (5 - this.d.aZ.b) * n6;
            qu[] quArray = qa2.a[0].f;
            int n7 = qa2.a[0].f.length;
            int n8 = 0;
            while (n8 < n7) {
                qu qu2 = quArray[n8];
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
        qu[] quArray = qa2.a[0].f;
        int n9 = qa2.a[0].f.length;
        int n10 = 0;
        while (n10 < n9) {
            qu qu3 = quArray[n10];
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
    final int a(qu qu2, qu qu3, int n2) {
        int n3 = this.a(qu2, qu3, n2, 3);
        if (n3 <= 0) {
            n3 = this.a(qu2, qu3, n2, 0);
        }
        if (n3 <= 0) {
            n3 = this.a(qu2, qu3, n2, 1);
        }
        return n3;
    }

    private int a(qu qu2, qu qu3, int n2, int n3) {
        int n4;
        int n5;
        int n6 = -1;
        int n7 = qu2.d.a;
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
        int n9 = qu3.a(qu2, n8, true);
        if (n3 == 4 && n9 > 0) {
            n9 = -1;
        } else if (n3 == 5 && n9 != qu2.d.a) {
            n9 = -1;
        }
        int n10 = n5 = n9 == 0 ? n7 : n9;
        if (n9 >= 0 && n3 == 6 && (n4 = n5 + qu3.d.a) < 13) {
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
            if (qu3.d != null && qu3.d.a + n5 == 13 && qu3.d.c[0].e == qu2.d.c[0].e) {
                n4 |= qu3.d.c[0].e << 4;
            }
            n6 = pJ.a(n4, n5, qu2, qu3);
            this.k(n6);
        }
        return n6;
    }

    @Override
    final int a(pV object) {
        int n2;
        qu qu2 = ((pV)object).o;
        if (qu2.b.a == this.d.ap.h) {
            int n3;
            block22: {
                if (this.d.d <= 5) {
                    this.d.g("Got double click on feed stack");
                }
                object = this;
                int n4 = -1;
                qu[] quArray = ((qr)object).d.aY.a[0].f;
                int n5 = ((qr)object).d.aY.a[0].f.length;
                int n6 = 0;
                while (n6 < n5) {
                    qu qu3 = quArray[n6];
                    if (qu3.d == null) {
                        n3 = -1;
                        break block22;
                    }
                    ++n6;
                }
                if (((qr)object).d.aY.b < ((qr)object).x) {
                    Object object2 = object;
                    int cfr_ignored_0 = ((qr)object).d.aY.b;
                    int n7 = ((qs_0)object2).a(((qr)object2).d.aY.a[0], ((qr)object).d.aY.a[1].f[0], ((qr)object).d.aY.a[2]);
                    if (((qr)object).d.d <= 4) {
                        ((qr)object).d.g("Done a deal, dealIndex now " + (((qr)object).d.aY.b + 1));
                    }
                    if (n7 >= 0) {
                        n4 = pJ.a(8, 0, n7 >> 8, n7 & 0xFF);
                        int cfr_ignored_1 = ((qr)object).d.aY.b;
                        ((qs_0)object).a(n4, ((qr)object).d.aY.a[0], ((qr)object).d.aY.a[1].f[0], ((qr)object).d.aY.a[2]);
                        ((qr)object).k(n4);
                    }
                } else if (((qr)object).d.d <= 4) {
                    ((qr)object).d.g("No more deals to do right now");
                }
                n3 = n4;
            }
            n2 = n3;
        } else {
            qu qu4;
            pV pV2 = object;
            object = this;
            int n8 = -1;
            int n9 = -1;
            if (pV2 != qu2.a()) {
                n9 = qu2.d.a - pV2.q;
            }
            qu[] quArray = ((qr)object).d.aY.a[0].f;
            int n10 = ((qr)object).d.aY.a[0].f.length;
            int n11 = 0;
            while (n11 < n10) {
                qu4 = quArray[n11];
                if (qu4 != qu2 && (n8 = ((qs_0)object).a(qu2, qu4, n9, 6)) > 0) break;
                ++n11;
            }
            if (n8 <= 0) {
                quArray = ((qr)object).d.aY.a[0].f;
                n10 = ((qr)object).d.aY.a[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((qs_0)object).a(qu2, qu4, n9, 3)) > 0) break;
                    ++n11;
                }
            }
            if (n8 <= 0) {
                quArray = ((qr)object).d.aY.a[0].f;
                n10 = ((qr)object).d.aY.a[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((qs_0)object).a(qu2, qu4, n9, 4)) > 0) break;
                    ++n11;
                }
            }
            if (n8 <= 0) {
                quArray = ((qr)object).d.aY.a[0].f;
                n10 = ((qr)object).d.aY.a[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((qs_0)object).a(qu2, qu4, n9, 5)) > 0) break;
                    ++n11;
                }
            }
            if (n8 <= 0) {
                quArray = ((qr)object).d.aY.a[0].f;
                n10 = ((qr)object).d.aY.a[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((qs_0)object).a(qu2, qu4, n9, 0)) > 0) break;
                    ++n11;
                }
            }
            if (n8 <= 0) {
                quArray = ((qr)object).d.aY.a[0].f;
                n10 = ((qr)object).d.aY.a[0].f.length;
                n11 = 0;
                while (n11 < n10) {
                    qu4 = quArray[n11];
                    if (qu4 != qu2 && (n8 = ((qs_0)object).a(qu2, qu4, n9, 1)) > 0) break;
                    ++n11;
                }
            }
            n2 = n8;
        }
        return n2;
    }
}

