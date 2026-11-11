/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pY;
import com.solvitaire.app.q;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qr;
import com.solvitaire.app.s_0;
import com.solvitaire.app.u_0;
import java.awt.Rectangle;

public final class pX {
    private static int[] M;
    private static int[] N;
    qo_0 a;
    String b;
    Rectangle c;
    u_0 d;
    u_0 e;
    u_0 f;
    u_0 g;
    u_0 h;
    u_0 i;
    u_0 j;
    u_0 k;
    u_0 l;
    int m;
    private int O;
    int n;
    int o;
    private u_0 P;
    private int Q;
    byte[][][] p;
    private int[][] R;
    int[][][] q;
    int[] r;
    int[] s;
    int[] t;
    int[] u;
    int v;
    int w;
    Rectangle x;
    Rectangle y;
    int z;
    int A;
    int B;
    double C;
    int D = 11;
    double E;
    double F;
    double G;
    int H;
    double I;
    int J;
    static int K;
    static int L;
    private static int S;

    static {
        new u_0(50, 50, 50);
        new u_0(20, 20, 20);
        int[] nArray = new int[59];
        nArray[3] = 1;
        nArray[4] = 1;
        nArray[5] = 1;
        nArray[6] = -1;
        nArray[7] = -1;
        nArray[8] = -1;
        nArray[11] = 1;
        nArray[12] = 1;
        nArray[13] = -1;
        nArray[14] = -1;
        nArray[15] = 2;
        nArray[16] = 2;
        nArray[17] = 2;
        nArray[18] = 2;
        nArray[19] = 2;
        nArray[20] = -2;
        nArray[21] = -2;
        nArray[22] = -2;
        nArray[23] = -2;
        nArray[24] = -2;
        nArray[27] = 1;
        nArray[28] = 1;
        nArray[29] = -1;
        nArray[30] = -1;
        nArray[31] = 2;
        nArray[32] = 2;
        nArray[33] = -2;
        nArray[34] = -2;
        nArray[35] = 3;
        nArray[36] = 3;
        nArray[37] = 3;
        nArray[38] = 3;
        nArray[39] = 3;
        nArray[40] = 3;
        nArray[41] = 3;
        nArray[42] = -3;
        nArray[43] = -3;
        nArray[44] = -3;
        nArray[45] = -3;
        nArray[46] = -3;
        nArray[47] = -3;
        nArray[48] = -3;
        nArray[51] = 1;
        nArray[52] = 1;
        nArray[53] = -1;
        nArray[54] = -1;
        nArray[55] = 2;
        nArray[56] = 2;
        nArray[57] = -2;
        nArray[58] = -2;
        M = nArray;
        int[] nArray2 = new int[59];
        nArray2[1] = -1;
        nArray2[2] = 1;
        nArray2[3] = -1;
        nArray2[5] = 1;
        nArray2[6] = -1;
        nArray2[8] = 1;
        nArray2[9] = -2;
        nArray2[10] = 2;
        nArray2[11] = -2;
        nArray2[12] = 2;
        nArray2[13] = -2;
        nArray2[14] = 2;
        nArray2[15] = -2;
        nArray2[16] = -1;
        nArray2[18] = 1;
        nArray2[19] = 2;
        nArray2[20] = -2;
        nArray2[21] = -1;
        nArray2[23] = 1;
        nArray2[24] = 2;
        nArray2[25] = -3;
        nArray2[26] = 3;
        nArray2[27] = -3;
        nArray2[28] = 3;
        nArray2[29] = -3;
        nArray2[30] = 3;
        nArray2[31] = -3;
        nArray2[32] = 3;
        nArray2[33] = -3;
        nArray2[34] = 3;
        nArray2[35] = -3;
        nArray2[36] = -2;
        nArray2[37] = -1;
        nArray2[39] = 1;
        nArray2[40] = 2;
        nArray2[41] = 3;
        nArray2[42] = -3;
        nArray2[43] = -2;
        nArray2[44] = -1;
        nArray2[46] = 1;
        nArray2[47] = 2;
        nArray2[48] = 3;
        nArray2[49] = -4;
        nArray2[50] = 4;
        nArray2[51] = -4;
        nArray2[52] = 4;
        nArray2[53] = -4;
        nArray2[54] = 4;
        nArray2[55] = -4;
        nArray2[56] = 4;
        nArray2[57] = -4;
        nArray2[58] = 4;
        N = nArray2;
        K = 0;
        L = 1;
        S = 2;
    }

    pX(String string, double d2, int n2, double d3, Rectangle rectangle, u_0 u_02, u_0 u_03, u_0 u_04, u_0 u_05, u_0 u_06, u_0 u_07, u_0 u_08, u_0 u_09, u_0 u_010, int n3, int n4, int n5, int n6, int n7, int n8, double d4, int n9, double d5, double d6, int n10, int n11, int[][][] nArray) {
        this.b = string;
        this.G = d2;
        this.H = 0;
        this.I = d3;
        this.c = rectangle;
        this.v = n4;
        this.w = n5;
        this.z = n6;
        this.A = n7;
        this.B = n8;
        this.C = d4;
        this.D = n9;
        this.E = d5;
        this.F = d6;
        this.n = n10;
        this.o = n11;
        this.f = u_02;
        this.g = u_03;
        this.h = u_04;
        this.i = u_05;
        this.j = u_06;
        this.k = u_07;
        this.d = u_08;
        this.e = u_09;
        this.l = u_010;
        this.m = n3;
        this.q = nArray;
        this.b();
    }

    final void a() {
        if (this.q == null) {
            return;
        }
        this.s = new int[52];
        this.r = new int[52];
        this.t = new int[52];
        this.u = new int[52];
        this.p = new byte[52][][];
        this.J = (int)(0.6 * (double)this.y.height);
        this.R = new int[this.c.height + 2][this.c.width + 2];
        this.P = new u_0();
        this.Q = 0;
        int n2 = 0;
        while (n2 < 52) {
            boolean bl2 = pX.a(n2);
            if (this.q[n2] != null && this.q[n2].length > 0) {
                int n3;
                if (this.a.d <= 2) {
                    this.a.f(this.b + " mask for " + qr.h(com.solvitaire.app.q.b(n2)));
                }
                pX pX2 = this;
                Object object = pX2.a(pX2.q[n2], false, bl2);
                this.p[n2] = object;
                object = new Rectangle(0, 0, this.y.width, this.y.height);
                pX pX3 = this;
                this.u[n2] = n3 = pX3.a(pX3.q[n2], 2, 5, object.width - 2, bl2);
                if (this.a.d <= 3) {
                    this.a.f("Y offset for " + this.b + " card " + com.solvitaire.app.q.b(n2) + " is " + this.u[n2]);
                }
                if (this.a.d <= 5 && (this.u[n2] > 4 || this.u[n2] < -4)) {
                    this.a.a("Suspicious font offset");
                }
                pX pX4 = this;
                double d2 = pX4.b(pX4.q[n2], 0, 0, this.y.width, this.y.height, bl2);
                this.s[n2] = (int)(d2 * this.G);
                if (this.a.d <= 1) {
                    pX pX5 = this;
                    pX5.a(pX5.q[n2], 0, 0, this.y.width, this.y.height, bl2);
                }
                int n4 = 0;
                if (this.z != 9) {
                    n4 = this.c.height - this.x.height;
                }
                pX pX6 = this;
                d2 = pX6.b(pX6.q[n2], 0, this.c.height - this.x.height, this.x.width, this.x.height, bl2);
                this.t[n2] = (int)(d2 * this.I);
                if (this.a.d <= 2) {
                    pX pX7 = this;
                    pX7.a(pX7.q[n2], 0, n4, this.x.width, this.x.height, bl2);
                }
                pX pX8 = this;
                d2 = pX8.b(pX8.q[n2], 0, 0, this.y.width, n3 + (int)(0.6 * (double)this.y.height), bl2);
                this.r[n2] = (int)(d2 * this.G);
                if (this.a.d <= 2) {
                    pX pX9 = this;
                    pX9.a(pX9.q[n2], 0, 0, this.y.width, n3 + (int)(0.6 * (double)this.y.height), bl2);
                }
                if (this.a.d <= 3) {
                    this.a.f("Card matches for " + com.solvitaire.app.q.b(n2) + " nummatch " + this.s[n2] + " partMatch " + this.r[n2] + " suitMatch " + this.t[n2]);
                }
            }
            ++n2;
        }
        if (this.Q > 0) {
            this.P.b(this.Q);
            this.O = this.j.c(this.P);
            return;
        }
        this.O = 100;
    }

    private void a(int[][] nArray, int n2, int n3, int n4, int n5, boolean bl2) {
        Rectangle rectangle = new Rectangle(0, n3, n4, n5);
        com.solvitaire.app.q.a(this.a, this, nArray, rectangle, bl2);
    }

    final byte[][] a(int[][] nArray, boolean bl2, boolean bl3) {
        int n2;
        int n3;
        u_0 u_02 = new u_0();
        u_0 u_03 = this.a(bl3);
        u_0 u_04 = this.c(bl3);
        byte[][] byArray = new byte[this.c.height][this.c.width];
        int n4 = 0;
        while (n4 < this.c.height) {
            n3 = 0;
            while (n3 < this.c.width) {
                n2 = bl2 ? nArray[n4 + this.c.y][n3 + this.c.x] : nArray[n4][n3];
                u_02.c(n2);
                byArray[n4][n3] = 0;
                if (u_02.a(this.d, this.e) == 0) {
                    byte[] byArray2 = byArray[n4];
                    int n5 = n3;
                    byArray2[n5] = (byte)(byArray2[n5] | 0x20);
                    if (n2 < -16777216) {
                        byte[] byArray3 = byArray[n4];
                        int n6 = n3;
                        byArray3[n6] = (byte)(byArray3[n6] + 6);
                        if (n2 < -33554432) {
                            byte[] byArray4 = byArray[n4];
                            int n7 = n3;
                            byArray4[n7] = (byte)(byArray4[n7] + 6);
                        }
                    }
                }
                if (u_02.a(u_04, u_03) == 0) {
                    byte[] byArray5 = byArray[n4];
                    int n8 = n3;
                    byArray5[n8] = (byte)(byArray5[n8] | 0x10);
                    if (n2 < -16777216) {
                        byte[] byArray6 = byArray[n4];
                        int n9 = n3;
                        byArray6[n9] = (byte)(byArray6[n9] + 6);
                        if (n2 < -33554432) {
                            byte[] byArray7 = byArray[n4];
                            int n10 = n3;
                            byArray7[n10] = (byte)(byArray7[n10] + 6);
                        }
                    }
                    if (!bl3 && u_02.a(this.i, this.k) == 0) {
                        this.P.a(u_02);
                        ++this.Q;
                    }
                }
                ++n3;
            }
            ++n4;
        }
        n4 = this.c.width / 2;
        n3 = 1;
        while (n3 < this.c.height - 1) {
            n2 = 1;
            while (n2 < this.c.width - 1) {
                if ((n3 < this.y.height || n2 < n4 - 1 || n2 > n4 + 1) && (byArray[n3][n2] & 0xF) == 0) {
                    byte[] byArray8 = byArray[n3];
                    int n11 = n2;
                    byArray8[n11] = (byte)(byArray8[n11] + pX.a(byArray, n2, n3));
                }
                ++n2;
            }
            ++n3;
        }
        if (this.a.d <= 2) {
            Rectangle rectangle = new Rectangle(0, 0, this.c.width, this.c.height);
            this.a(rectangle, null, byArray);
        }
        return byArray;
    }

    private static int a(byte[][] byArray, int n2, int n3) {
        int n4 = byArray[n3][n2] & 0x30;
        if (n4 == 0 || n4 == 48) {
            return 0;
        }
        int n5 = 0;
        int n6 = -1;
        while (n6 <= 1) {
            int n7 = -1;
            while (n7 <= 1) {
                int n8;
                if ((n6 != 0 || n7 != 0) && (n8 = byArray[n3 + n6][n2 + n7] & 0x30) == n4) {
                    ++n5;
                }
                ++n7;
            }
            ++n6;
        }
        if (n5 < 8) {
            n5 = n5 == 7 && n4 == 32 ? 4 : 0;
        }
        return n5;
    }

    private int b(int[][] nArray, int n2, int n3, int n4, int n5, boolean bl2) {
        int n6;
        u_0 u_02 = this.a(bl2);
        u_0 u_03 = this.c(bl2);
        int n7 = 0;
        u_0 u_04 = new u_0();
        int n8 = 0;
        while (n8 < n4 + 0) {
            n6 = n3 + 1;
            while (n6 < n3 + n5 - 1) {
                u_04.c(nArray[n6][n8]);
                if (u_04.a(u_02, u_03) == 0) {
                    u_04.c(nArray[n6 + 1][n8]);
                    if (u_04.a(u_02, u_03) != 0) {
                        ++n7;
                    }
                    u_04.c(nArray[n6 - 1][n8]);
                    if (u_04.a(u_02, u_03) != 0) {
                        ++n7;
                    }
                }
                ++n6;
            }
            ++n8;
        }
        n8 = n3;
        while (n8 < n3 + n5) {
            n6 = 1;
            while (n6 < n4 + 0 - 1) {
                u_04.c(nArray[n8][n6]);
                if (u_04.a(u_02, u_03) == 0) {
                    u_04.c(nArray[n8][n6 + 1]);
                    if (u_04.a(u_02, u_03) != 0) {
                        ++n7;
                    }
                    u_04.c(nArray[n8][n6 - 1]);
                    if (u_04.a(u_02, u_03) != 0) {
                        ++n7;
                    }
                }
                ++n6;
            }
            ++n8;
        }
        return n7;
    }

    final void b() {
        this.y = new Rectangle(this.c);
        this.x = new Rectangle(this.c);
        if (this.w > 0) {
            this.x.y = this.c.y + this.c.height - this.w;
            this.x.height = this.w;
            this.y.height -= this.w;
        } else {
            this.x.x = this.c.x + this.c.width - this.v;
            this.x.height /= 2;
            this.y.width = this.v;
        }
        this.x.width = this.v;
    }

    private boolean a(int n2, boolean bl2, int n3) {
        if (bl2) {
            if (!pX.a(n2)) {
                return false;
            }
            if (n3 == 0) {
                return true;
            }
            boolean bl3 = n2 >= 13 && n2 < 26;
            if (bl3 ? n3 != 2 : n3 != 3) {
                return false;
            }
        } else {
            if (pX.a(n2)) {
                return false;
            }
            if (n3 == 0) {
                return true;
            }
            boolean bl4 = n2 >= 39;
            if (bl4 ? n3 != 4 : n3 != 1) {
                return false;
            }
        }
        return true;
    }

    final int a(int[][] nArray, int n2, int n3, boolean bl2) {
        Rectangle rectangle = new Rectangle(this.y);
        rectangle.y += n3 - 2;
        rectangle.x += n2;
        n2 = rectangle.y + 4;
        if (this.a.d <= 2) {
            this.a.f("Stack top is " + n3 + " so scan up 4 rows from " + n2);
        }
        n2 = this.a(nArray, rectangle.x + 2, n2, rectangle.width - 2, bl2);
        int n4 = n2 - n3 - this.y.y;
        if (this.a.d <= 3) {
            this.a.f("Scan for grab position with top " + n2 + " y " + n3 + " numrect.y " + this.y.y + " gives adjustment of " + n4);
        }
        if (n4 < 0) {
            n4 = 0;
        }
        if (n4 > 2) {
            if (this.a.d <= 4) {
                this.a.f("Top origin delta unexpectedly large:" + n4);
            }
            if (this.a.d <= 4) {
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle.x, rectangle.y, rectangle.width, rectangle.height, bl2);
            }
        }
        return n4;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    final void a(int[][] var1_1, pY var2_2, int var3_3, int var4_4, int var5_5, int var6_8, int var7_9) {
        block61: {
            block60: {
                block63: {
                    block65: {
                        block64: {
                            block62: {
                                if (var5_5 != 2) break block61;
                                var16_10 = this.x;
                                var15_13 = var4_4;
                                var14_14 = var3_3;
                                var13_16 /* !! */  = var1_1;
                                var12_17 = var2_2;
                                var8_18 = this;
                                var12_17.c = -1;
                                var17_21 = new Rectangle(var16_10);
                                var17_21.x += var14_14;
                                var17_21.y += var15_13;
                                var17_21.y -= 3;
                                var17_21.height += 6;
                                if (var17_21.y < 0) {
                                    var17_21.y = 0;
                                }
                                if (var17_21.y + var17_21.height <= (var18_23 = var13_16 /* !! */ .length)) break block62;
                                var8_18.a.f("Possible font error or run off screen, insufficient data captured, need " + (var17_21.y + var17_21.height - var18_23) + " more rows");
                                break block60;
                            }
                            var19_24 = new int[var17_21.height];
                            var20_26 = new int[var17_21.height];
                            if (var8_18.a.d <= 1) {
                                var8_18.a.f("getSuit on rectangle " + String.valueOf(var17_21));
                            }
                            if (!var12_17.e) break block63;
                            var21_28 = var8_18.a(var13_16 /* !! */ , var17_21, var19_24, var20_26, true, -1);
                            if (var21_28 >= 0) break block64;
                            if (var8_18.a.d <= 3) {
                                var8_18.a.f("Aborting suit identification due to start/end scan failure");
                            }
                            if (var8_18.a.d <= 2) {
                                com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var12_17.e);
                            }
                            break block60;
                        }
                        if (var21_28 >= 0 && var21_28 <= var19_24.length - 5) break block65;
                        if (var8_18.a.d <= 3) {
                            var8_18.a.f("Failure, red suit start position " + var21_28 + " is invalid");
                        }
                        if (var8_18.a.d <= 2) {
                            com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var12_17.e);
                        }
                        break block60;
                    }
                    var12_17.c = var19_24[var21_28 + 3] > var8_18.D ? 2 : 3;
                    if (var8_18.a.d <= 3) {
                        var8_18.a.f("Red suit row 2 count is " + var19_24[var21_28 + 2] + " so suit is " + var12_17.c);
                    }
                    if (var8_18.a.d <= 2) {
                        com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var12_17.e);
                    }
                    ** GOTO lbl126
                }
                var21_28 = 3;
                var22_29 = var8_18.z;
                if (var8_18.z >= 10) {
                    var21_28 = var8_18.z / 10;
                    var22_29 %= 10;
                }
                if (var8_18.a.d <= 2) {
                    var8_18.a.f("Blackmode " + var8_18.z + ", search height set to " + var21_28);
                }
                if ((var14_14 = var8_18.a(var13_16 /* !! */ , var17_21, var19_24, var20_26, false, var22_29)) < 0) {
                    if (var8_18.a.d <= 3) {
                        var8_18.a.f("Aborting suit identification due to start/end scan failure");
                    }
                    if (var8_18.a.d <= 2) {
                        com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var12_17.e);
                    }
                } else if (var14_14 + var8_18.B + 1 >= var19_24.length) {
                    if (var8_18.a.d <= 3) {
                        var8_18.a.f("Failure, black suit scan start " + var14_14 + " plus blackBot+1 " + (var8_18.B + 1) + " is more than rows length " + var19_24.length + " maybe need to reduce height of suitrect or grab more?");
                    }
                    if (var8_18.a.d <= 2) {
                        com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var14_14, var12_17.e);
                    }
                } else if (var19_24[var14_14] > 10) {
                    if (var8_18.a.d <= 3) {
                        var8_18.a.f("Failure, black suit start width at " + var14_14 + " is " + var19_24[var14_14] + ", more than 10 pixels");
                    }
                    if (var8_18.a.d <= 2) {
                        com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var14_14, var12_17.e);
                    }
                } else {
                    var15_13 = var14_14 + var8_18.A;
                    var16_11 = var14_14 + var8_18.B;
                    if (var8_18.a.d <= 3 && var14_14 + 7 < var19_24.length) {
                        var8_18.a.f(String.format("Counts from top (%d): %d, %d, %d, %d, %d, %d, %d", new Object[]{var14_14, var19_24[var14_14], var19_24[var14_14 + 1], var19_24[var14_14 + 2], var19_24[var14_14 + 3], var19_24[var14_14 + 4], var19_24[var14_14 + 5], var19_24[var14_14 + 6]}));
                        var8_18.a.f(String.format("Sums from top (%d): %d, %d, %d, %d, %d, %d, %d", new Object[]{var14_14, var20_26[var14_14], var20_26[var14_14 + 1], var20_26[var14_14 + 2], var20_26[var14_14 + 3], var20_26[var14_14 + 4], var20_26[var14_14 + 5], var20_26[var14_14 + 6]}));
                    }
                    var12_17.d = 10000.0;
                    var9_30 = 0;
                    while (var9_30 < var21_28) {
                        if (var15_13 + var9_30 >= var20_26.length || var16_11 + var9_30 >= var20_26.length) break;
                        if ((var22_29 != 0 && var22_29 != 2 || var20_26[var15_13 + var9_30] != 0) && (var22_29 != 1 || var19_24[var15_13 + var9_30] != 0)) {
                            if (var22_29 != 0 && var22_29 != 2) {
                                var10_32 = var19_24[var15_13 + var9_30];
                                var11_33 = var19_24[var16_11 + var9_30];
                                var14_14 = (var8_18.A + var9_30 << 1) + 10;
                                if (var10_32 > var14_14 || var11_33 < 4) {
                                    if (var8_18.a.d <= 3) {
                                        var8_18.a.f("Black suit counts " + var10_32 + "/" + var11_33 + " out of range " + var14_14 + "/" + 4 + ", rejecting suit");
                                    }
                                    if (var8_18.a.d <= 2) {
                                        com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var12_17.e);
                                    }
                                    break block60;
                                }
                                var33_31 = ((double)var11_33 - (double)var10_32 + 10.0) / 10.0;
                            } else {
                                var10_32 = var20_26[var15_13 + var9_30];
                                var11_33 = var20_26[var16_11 + var9_30];
                                var14_14 = (var8_18.A + var9_30) * 1200 + 1400;
                                var18_23 = (var8_18.B + var9_30) * 70 + 100;
                                if (var10_32 > var14_14 || var11_33 < var18_23 || var11_33 > 4000) {
                                    if (var8_18.a.d <= 3) {
                                        var8_18.a.f("Black suit counts " + var10_32 + "/" + var11_33 + " out of range " + var14_14 + "/" + var18_23 + ", rejecting suit");
                                    }
                                    if (var8_18.a.d <= 2) {
                                        com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var12_17.e);
                                    }
                                    break block60;
                                }
                                var33_31 = ((double)var11_33 - (double)var10_32 + 1000.0) / 1000.0;
                                if (var8_18.a.d <= 3) {
                                    var8_18.a.f("Black suit (bot " + var11_33 + " top " + var10_32 + " delta " + (var11_33 - var10_32) + " gives ratio " + var33_31);
                                }
                            }
                            if (var33_31 < var12_17.d) {
                                var12_17.d = var33_31;
                            }
                        }
                        ++var9_30;
                    }
                    if (var12_17.d == 10000.0) {
                        if (var8_18.a.d <= 5) {
                            var8_18.a.g("Suit matching aborted, topy " + var15_13 + " boty " + var16_11);
                        }
                        var12_17.c = 0;
                    } else {
                        if (var12_17.d < var8_18.C) {
                            var12_17.c = 4;
                            if (var8_18.a.d <= 3) {
                                var8_18.a.f("Ratio " + var12_17.d + " means suit is clubs, maxclub " + var8_18.a.bu.e + " minspade " + var8_18.a.bu.f);
                            }
                        } else {
                            var12_17.c = 1;
                            if (var8_18.a.d <= 5 && var8_18.a.d <= 3) {
                                var8_18.a.f("Ratio " + var12_17.d + " means suit is spades, maxclub " + var8_18.a.bu.e + " minspade " + var8_18.a.bu.f);
                            }
                        }
                        if (var8_18.a.d <= 2) {
                            com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var12_17.e);
                        }
                    }
lbl126:
                    // 5 sources

                    if (var12_17.c < 0) {
                        if (var8_18.a.d <= 3) {
                            var8_18.a.f("No suit identified");
                        }
                        if (var8_18.a.d <= 2) {
                            com.solvitaire.app.q.a(var8_18.a, var8_18, var13_16 /* !! */ , var17_21, var12_17.e);
                        }
                    }
                }
            }
            if (var2_2.c < 0) {
                var2_2.a.e = 2;
                return;
            }
            if (this.a.d <= 2) {
                this.a.f("Matched suit:" + var2_2.c);
            }
        }
        if (this.a.d <= 2) {
            this.a.f(String.format("Processing match %d on area at %d,%d height %d expected %d", new Object[]{var5_5, var3_3, var4_4, var6_8, var7_9}));
        }
        var8_19 = 0;
        while (var8_19 < pX.M.length) {
            block66: {
                block67: {
                    var9_30 = pX.M[var8_19];
                    var10_32 = pX.N[var8_19];
                    this.a(var2_2, this.p, var1_1, var3_3, var4_4, var5_5, var6_8, var9_30, var10_32, var7_9);
                    if (var2_2.a.e != 9) break block66;
                    if (var5_5 != 2) {
                        var2_2.c = 0;
                        var2_2.a.e = 6;
                        return;
                    }
                    if (!this.a.e || this.a.d > 5) break block67;
                    var5_6 = var2_2.a;
                    var7_9 = var5_6.a;
                    var11_33 = this.s[var7_9] - var5_6.g;
                    if (var11_33 >= 0) break block67;
                    if (this.a.d <= 4) {
                        this.a.f("Retry near miss on match of card " + com.solvitaire.app.q.b(var7_9) + " score " + var5_6.g + " leeway " + var11_33 + " xd " + var9_30 + " yd " + var10_32);
                    }
                    var5_7 = var8_19 + 1;
                    while (var5_7 < pX.M.length) {
                        block70: {
                            block71: {
                                block68: {
                                    block69: {
                                        var20_27 = var11_33;
                                        var19_25 = var7_9;
                                        var18_23 = var5_7;
                                        var17_22 = var6_8;
                                        var16_12 = var4_4;
                                        var15_13 = var3_3;
                                        var14_15 /* !! */  = var1_1;
                                        var13_16 /* !! */  = (int[][])this.p;
                                        var12_17 = var2_2;
                                        var8_20 = this;
                                        var21_28 = pX.M[var18_23];
                                        var22_29 = pX.N[var18_23];
                                        var12_17.a.a();
                                        var8_20.a(var12_17, (byte[][][])var13_16 /* !! */ , var14_15 /* !! */ , var15_13, var16_12, 2, var17_22, var21_28, var22_29, -1);
                                        if (var12_17.a.e != 9) break block68;
                                        v0 = var12_17.a;
                                        var14_15 /* !! */  = (int[][])v0;
                                        var15_13 = v0.a;
                                        var16_12 = var8_20.s[var15_13] - var14_15 /* !! */ .g;
                                        if (var16_12 < 0) break block69;
                                        if (var15_13 != var19_25) {
                                            if (var8_20.a.d <= 4) {
                                                var8_20.a.f("Match failed with duplicate card " + com.solvitaire.app.q.b(var15_13) + " leeway " + var16_12 + " xd " + pX.M[var18_23] + " yd " + pX.N[var18_23] + " previous card was " + com.solvitaire.app.q.b(var19_25) + " score " + var12_17.a.g + " leeway " + var20_27);
                                            }
                                            v1 = false;
                                        } else {
                                            if (var8_20.a.d <= 4) {
                                                var8_20.a.f("Match retry worked for " + com.solvitaire.app.q.b(var15_13) + " score " + var12_17.a.g + " leeway " + var16_12 + " xd " + pX.M[var18_23] + " yd " + pX.N[var18_23]);
                                            }
                                            v1 = true;
                                        }
                                        break block70;
                                    }
                                    if (var8_20.a.d <= 4) {
                                        var8_20.a.f("match retry scored too low for " + var21_28 + "," + var22_29 + " card " + var12_17.a.d + " score " + var12_17.a.g + " leeway " + var16_12);
                                    }
                                    break block71;
                                }
                                if (var8_20.a.d <= 4) {
                                    var8_20.a.f("testMatch with deltas " + var21_28 + "," + var22_29 + " failed");
                                }
                            }
                            v1 = false;
                        }
                        if (v1) {
                            return;
                        }
                        ++var5_7;
                    }
                    this.a.f("*** Match too close to limit for " + com.solvitaire.app.q.b(var7_9) + " leeway " + var11_33 + " xd " + var9_30 + " yd " + var10_32);
                }
                return;
            }
            ++var8_19;
        }
    }

    private void a(pY pY2, byte[][][] byArray, int[][] nArray, int n2, int n3, int n4, int n5, int n6, int n7, int n8) {
        boolean bl2;
        if (this.a.d <= 2) {
            this.a.f("==Asked for match at " + n2 + "," + n3 + " height " + n5 + " using deltas " + n6 + "," + n7);
        }
        boolean cfr_ignored_0 = this.a.c;
        boolean bl3 = bl2 = this.a.d <= 2;
        if (n4 == 2) {
            int n9 = -1;
            if (n8 > 0) {
                n9 = com.solvitaire.app.q.c(n8);
                if (this.a.d <= 2) {
                    this.a.f("Prioritizing expected card " + n8 + " with deltas " + n6 + "," + n7);
                }
                if (this.a(n9, pY2.e, pY2.c)) {
                    this.a(pY2, byArray, nArray, n2, n3, n9, n4, n5, n6, n7, bl2);
                    boolean cfr_ignored_1 = this.a.c;
                    if (this.a.d > 2 && pY2.a.e == 9) {
                        return;
                    }
                }
            }
            n8 = 0;
            while (n8 < 52) {
                if (n8 != n9 && this.a(n8, pY2.e, pY2.c)) {
                    this.a(pY2, byArray, nArray, n2, n3, n8, n4, n5, n6, n7, bl2);
                    boolean cfr_ignored_2 = this.a.c;
                    if (this.a.d > 2 && pY2.a.e == 9) {
                        if (this.a.d <= 3) {
                            this.a.f("Found a match using " + pY2.a.d + " so stopping search");
                        }
                        return;
                    }
                }
                ++n8;
            }
            return;
        }
        int n10 = 0;
        while (n10 < 52) {
            if (pY2.e == pX.a(n10)) {
                this.a(pY2, byArray, nArray, n2, n3, n10, n4, n5, n6, n7, bl2);
                if (pY2.a.e == 9) {
                    pY2.c = 0;
                    return;
                }
            }
            ++n10;
        }
    }

    final void a(pY pY2, int[][] nArray, int n2, int n3, int n4, int n5, int n6, int n7) {
        this.R = new int[this.c.height + 2][this.c.width + 2];
        this.a(pY2, this.p, nArray, 0, 0, n4, 2, n5, n6, n7, true);
    }

    private void a(pY pY2, byte[][][] object, int[][] nArray, int n2, int n3, int n4, int n5, int n6, int n7, int n8, boolean bl2) {
        if (this.a.d <= 1) {
            this.a.f(String.format("Trying card %s, location %d+%d,%d+%d, height %d, partial %d, complete %b", com.solvitaire.app.q.b(n4), n2, n7, n3, n8, n6, n5, bl2));
        }
        if (object == null || object[n4] == null) {
            return;
        }
        if (pY2.e != pX.a(n4)) {
            return;
        }
        s_0 s_02 = pY2.b[n4];
        object = object[n4];
        s_02.n = this.u[n4];
        s_02.j = n2;
        s_02.k = n3;
        s_02.l = n7;
        s_02.m = n8;
        u_0 u_02 = this.a(pY2.e);
        u_0 u_03 = this.c(pY2.e);
        if (n5 == 2) {
            pY2.f = this.s[n4];
            if (pY2.a.e <= 4) {
                pY2.a = s_02;
            }
            this.a(s_02, nArray, n2, n3 - s_02.n, (byte[][])object, false, u_02, u_03, pY2, n6, n7, n8, bl2);
            if (s_02.g >= this.s[n4]) {
                if (this.a.d <= 1) {
                    this.a.f("Test of character " + com.solvitaire.app.q.b(n4) + " failed num match, best score so far " + s_02.g + " vs " + this.s[n4]);
                }
            } else {
                int n9;
                int n10;
                boolean bl3 = false;
                if (this.a.d <= 2) {
                    this.a.f("Test of character " + com.solvitaire.app.q.b(n4) + " passed num match with score " + s_02.g + " vs " + this.s[n4]);
                }
                if (this.a.d <= 1) {
                    this.a.f(String.format("Number result %d so trying suit %s, location %d+%d,%d+%d, height %d, partial %d, complete %b", s_02.g, com.solvitaire.app.q.b(n4), n2, n7, n3, n8, this.x.height, n5, bl2));
                }
                pY2.f = this.t[n4];
                if (pY2.a.e <= 5) {
                    pY2.a = s_02;
                }
                s_02.e = 5;
                this.a(s_02, nArray, n2, n3 - s_02.n, (byte[][])object, true, u_02, u_03, pY2, this.x.height, n7, n8, bl2);
                if (s_02.f >= pY2.f) {
                    int n11;
                    int n12;
                    if (this.z == 9) {
                        n10 = n2 + 1;
                        n12 = n2 - 1;
                        n9 = n3 - s_02.n;
                        n11 = n3 - s_02.n;
                    } else {
                        n10 = n2;
                        n12 = n2;
                        n9 = n3 - s_02.n + 1;
                        n11 = n3 - s_02.n - 1;
                    }
                    if (this.a.d <= 2) {
                        this.a.f("Suit match gave " + s_02.f + " retry for card " + com.solvitaire.app.q.b(n4));
                    }
                    s_02.f = 99999;
                    this.a(s_02, nArray, n10, n9, (byte[][])object, true, u_02, u_03, pY2, this.x.height, n7, n8, bl2);
                    if (s_02.f >= pY2.f) {
                        if (this.a.d <= 2) {
                            this.a.f("Suit retry gave " + s_02.f + " retry 2 for card " + com.solvitaire.app.q.b(n4));
                        }
                        s_02.f = 99999;
                        this.a(s_02, nArray, n12, n11, (byte[][])object, true, u_02, u_03, pY2, this.x.height, n7, n8, bl2);
                    }
                }
                if (s_02.f >= pY2.f) {
                    if (this.a.d <= 2) {
                        this.a.f("Test of suit for card " + com.solvitaire.app.q.b(n4) + " failed suit match with score " + s_02.f + " vs " + pY2.f);
                    }
                    s_02.g = 999999;
                } else {
                    bl3 = true;
                    if (this.a.d <= 2) {
                        this.a.f("Suit matched with count " + s_02.f + " vs failureLimit " + pY2.f);
                    }
                }
                if (bl3) {
                    if (this.a.d <= 2 && (pY2.a.e == 9 || this.a.d <= 1)) {
                        if (this.a.d <= 9) {
                            com.solvitaire.app.q.a(this.a, this, nArray, n2 + this.c.x, n3 + this.c.y, this.c.width, this.c.height, pY2.e);
                        }
                        this.a.bu.a(9, n5);
                    }
                    if (this.a.d <= 3) {
                        this.a.f("Successful matchinternal for location " + n2 + "," + n3 + " height " + n6 + " xd " + n7 + " yd " + n8 + " card " + com.solvitaire.app.q.b(n4) + " score " + pY2.a.g);
                    }
                    if (pY2.a.e == 9 && (n10 = com.solvitaire.app.q.b(pY2.a.a)) % 100 != (n9 = com.solvitaire.app.q.b(n4)) % 100) {
                        this.a.a("Got second successful  match, was " + com.solvitaire.app.q.b(pY2.a.a) + " now " + com.solvitaire.app.q.b(n4));
                    }
                    pY2.a = pY2.b[n4];
                    pY2.a.e = 9;
                }
            }
            if (this.z == 9 && s_02.e < 9 && s_02.h < this.r[n4]) {
                s_02.e = 6;
                if (pY2.a.e <= 6) {
                    pY2.a = s_02;
                    return;
                }
            }
        } else {
            double d2;
            if (pY2.a.e <= 4) {
                pY2.a = s_02;
            }
            s_02.e = 4;
            double d3 = (double)n6 / (double)this.J;
            if (d2 < 0.6) {
                d3 = 0.6;
            }
            pY2.f = (int)((double)this.r[n4] * d3);
            int n13 = n6;
            if (n5 == 3 && n8 > 0) {
                --n13;
            }
            this.a(s_02, nArray, n2, n3 - s_02.n, (byte[][])object, false, u_02, u_03, pY2, n13, n7, n8, bl2);
            if (this.a.d <= 2 && s_02.g >= pY2.f && s_02.g < 300) {
                this.a.f("Partial test of character " + com.solvitaire.app.q.b(n4) + " failed num match with score " + s_02.g + " vs " + pY2.f);
            }
            if (s_02.g <= pY2.a.g && s_02.g < pY2.f) {
                pY2.a = pY2.b[n4];
                pY2.a.e = 9;
                if ((pY2.a.l > 1 || pY2.a.l < -1 || pY2.a.m > 1 || pY2.a.m < -1) && this.a.d <= 5) {
                    this.a.g("Had to offset " + pY2.a.l + "," + pY2.a.m + " for partial match on stackid " + this.a.bu.d + " card " + com.solvitaire.app.q.b(s_02.a));
                }
            }
        }
    }

    private void a(s_0 s_02, int[][] nArray, int n2, int n3, byte[][] byArray, boolean bl2, u_0 u_02, u_0 u_03, pY pY2, int n4, int n5, int n6, boolean bl3) {
        Rectangle rectangle = this.z == 9 ? (bl2 ? new Rectangle(this.c.width - this.v, 0, this.x.width, n4) : new Rectangle(0, 0, this.x.width, n4)) : (bl2 ? new Rectangle(0, this.y.height, this.x.width, n4) : new Rectangle(0, 0, this.y.width, n4));
        if (rectangle.height > byArray.length) {
            rectangle.height = byArray.length;
        }
        int n7 = n2 + n5 + this.c.x;
        int n8 = n3 + n6 + this.c.y;
        if (rectangle.x + n7 < 0 || rectangle.x + rectangle.width + n7 > nArray[0].length) {
            if (this.a.d <= 3) {
                this.a.f("Exiting match because x " + rectangle.x + " plus shiftx " + n7 + " is less then 0 or +w " + rectangle.width + " is greater than " + nArray[0].length);
            }
            return;
        }
        if (rectangle.y + n8 < 0 || rectangle.y + rectangle.height + n8 > nArray.length) {
            if (this.a.d <= 3) {
                this.a.f("Exiting match because y " + rectangle.y + " plus shifty " + n8 + " less then 0 or +h " + rectangle.height + " greater than " + nArray.length);
            }
            return;
        }
        int n9 = pY2.f * 3 / 2;
        int n10 = 0;
        if (!this.a(s_02, bl3, bl2, n9, nArray, rectangle, n7, n8, byArray, u_02, u_03)) {
            if (bl2) {
                s_02.f = n9;
                return;
            }
            s_02.g = n9;
            return;
        }
        int n11 = rectangle.y;
        while (n11 < rectangle.y + rectangle.height) {
            int n12 = rectangle.x;
            while (n12 < rectangle.x + rectangle.width) {
                n10 += s_02.i[n11][n12];
                ++n12;
            }
            if (!bl2 && n11 == this.J && this.z == 9) {
                s_02.h = n10;
                if (s_02.h < this.r[s_02.a]) {
                    s_02.e = 6;
                }
            }
            ++n11;
        }
        if (n10 < (bl2 ? s_02.f : s_02.g)) {
            boolean cfr_ignored_0 = this.a.c;
            if (this.a.d <= 2 && n10 < 400) {
                this.a.f("Card " + com.solvitaire.app.q.b(s_02.a) + " testing with off " + this.c.x + "," + this.c.y + " delta " + n5 + "," + n6 + " and base " + n2 + "," + n3 + " height " + rectangle.height + " gave improved score of " + n10 + ", penalties:");
                this.a(rectangle, s_02, byArray);
            }
            if (bl2) {
                s_02.f = n10;
                return;
            }
            s_02.g = n10;
            return;
        }
        boolean cfr_ignored_1 = this.a.c;
        if (this.a.d <= 1 || bl2 && this.a.d <= 2) {
            this.a.f("Index " + s_02.a + " testing with off " + this.c.x + "," + this.c.y + " delta " + n5 + "," + n6 + " and base " + n2 + "," + n3 + " height " + rectangle.height + " gave worse score of " + n10);
        }
    }

    private void a(Rectangle rectangle, s_0 s_02, byte[][] byArray) {
        Object object = "";
        Object object2 = "";
        int n2 = rectangle.y;
        while (n2 < rectangle.y + rectangle.height) {
            int n3 = rectangle.x;
            while (n3 < rectangle.x + rectangle.width) {
                if (s_02 != null) {
                    object = (String)object + s_02.i[n2][n3] + ",";
                }
                object2 = (String)object2 + String.format("%02x", byArray[n2][n3]);
                ++n3;
            }
            this.a.f((String)object + "    " + (String)object2);
            object = "";
            object2 = "";
            ++n2;
        }
    }

    private boolean a(s_0 s_02, boolean bl2, boolean bl3, int n2, int[][] nArray, Rectangle rectangle, int n3, int n4, byte[][] byArray, u_0 u_02, u_0 u_03) {
        int n5;
        int n6;
        int n7;
        int n8;
        int n9;
        int n10;
        u_0 u_04 = new u_0();
        int n11 = 0;
        int n12 = rectangle.height / 2;
        int n13 = 0;
        int n14 = 0;
        while (n14 < rectangle.height) {
            n10 = rectangle.y + n12 + n13;
            if ((n13 = -n13) <= 0) {
                --n13;
            }
            n9 = n10 + n4;
            n8 = rectangle.x;
            while (n8 < rectangle.x + rectangle.width) {
                n7 = n8 + n3;
                u_0 u_05 = null;
                u_0 u_06 = null;
                n6 = byArray[n10][n8];
                n5 = (n6 & 0xF) + 1;
                if ((n6 & 0x30) == 32) {
                    u_05 = this.d;
                    u_06 = this.e;
                } else if ((n6 & 0x30) == 16) {
                    u_05 = u_02;
                    u_06 = u_03;
                }
                if (u_05 == null) {
                    this.R[n10 + 1][n8 + 1] = 0;
                } else {
                    u_04.c(nArray[n9][n7]);
                    n7 = u_04.a(u_05, u_06);
                    if (n7 == 0) {
                        this.R[n10 + 1][n8 + 1] = 0;
                    } else {
                        this.R[n10 + 1][n8 + 1] = n5;
                        if (!bl2 && (n11 += n5) > n2) {
                            return false;
                        }
                    }
                }
                ++n8;
            }
            ++n14;
        }
        n14 = rectangle.y + 2;
        while (n14 < rectangle.y + rectangle.height) {
            n10 = rectangle.x + 2;
            while (n10 < rectangle.x + rectangle.width) {
                n9 = this.R[n14][n10];
                if (!bl3 && n9 != 0) {
                    n8 = 0;
                    n7 = 0;
                    int n15 = 0;
                    int n16 = -1;
                    while (n16 < 2) {
                        n6 = -1;
                        while (n6 < 2) {
                            n5 = this.R[n14 + n16][n10 + n6];
                            if (n5 != 0) {
                                ++n8;
                                if (n5 == 1) {
                                    if (n16 == 0 && n6 != 0) {
                                        ++n7;
                                    }
                                    if (n16 != 0 && n6 == 0) {
                                        ++n15;
                                    }
                                }
                            }
                            ++n6;
                        }
                        ++n16;
                    }
                    if (n8 > 3) {
                        n9 = n9 + n8 - 3;
                    } else if (n8 == 3 && (n7 == 2 || n15 == 2)) {
                        if (n7 == 2) {
                            if (this.R[n14][n10 + 2] == 1 || this.R[n14][n10 - 2] == 1) {
                                n9 = 0;
                            }
                        } else if (n15 == 2 && (this.R[n14 + 2][n10] == 1 || this.R[n14 - 2][n10] == 1)) {
                            n9 = 0;
                        }
                    }
                }
                s_02.i[n14 - 1][n10 - 1] = n9;
                ++n10;
            }
            ++n14;
        }
        n14 = rectangle.y + 1;
        while (n14 <= rectangle.y + rectangle.height) {
            s_02.i[n14 - 1][rectangle.x] = this.R[n14][rectangle.x + 1];
            s_02.i[n14 - 1][rectangle.x + rectangle.width - 1] = this.R[n14][rectangle.x + rectangle.width];
            ++n14;
        }
        n14 = rectangle.x + 1;
        while (n14 <= rectangle.x + rectangle.width) {
            s_02.i[rectangle.y][n14 - 1] = this.R[rectangle.y + 1][n14];
            s_02.i[rectangle.y + rectangle.height - 1][n14 - 1] = this.R[rectangle.y + rectangle.height][n14];
            ++n14;
        }
        return true;
    }

    static boolean a(int n2) {
        return n2 > 12 && n2 < 39;
    }

    final int a(int[][] nArray, int n2, int n3) {
        int n4;
        int n5 = 0;
        int n6 = 0;
        int n7 = 0;
        u_0 u_02 = new u_0();
        int n8 = 15;
        n2 += this.c.x;
        if ((n3 += this.c.y) + 15 > nArray.length) {
            n8 = nArray.length - n3;
        }
        int n9 = n3;
        while (n9 < n3 + n8) {
            n4 = n2;
            while (n4 < n2 + this.x.width) {
                u_02.c(nArray[n9][n4]);
                if (u_02.a(this.f, this.h) == 0) {
                    if (this.a.d <= 1) {
                        this.a.f(String.format("Found red %08x, range %08x-%08x", nArray[n9][n4], this.f.a(), this.h.a()));
                    }
                    ++n6;
                }
                if (u_02.a(this.i, this.k) == 0) {
                    if (this.a.d <= 1) {
                        this.a.f(String.format("Found black %08x, range %08x-%08x", nArray[n9][n4], this.i.a(), this.k.a()));
                    }
                    ++n7;
                }
                ++n4;
            }
            ++n9;
        }
        if (n6 <= 3 && n7 <= 3) {
            if (this.a.d <= 3) {
                this.a.f("Too few color pixels for reliable color match, red:" + n6 + " black:" + n7 + " height " + n8);
            }
            if (this.a.d <= 2) {
                Rectangle rectangle = new Rectangle(n2, n3, this.c.width, 30);
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, false);
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, true);
                n4 = n3;
                while (n4 < n3 + n8) {
                    n6 = n2;
                    while (n6 < n2 + this.c.width) {
                        u_02.c(nArray[n4][n6]);
                        if (u_02.a(this.f, this.h) == 0) {
                            this.a.f(String.format("Pixel %08x at %d,%d is red", nArray[n4][n6], n6, n4));
                        } else if (u_02.a(this.f, this.g) == 0) {
                            this.a.f(String.format("Pixel %08x at %d,%d is missed red", nArray[n4][n6], n6, n4));
                        }
                        if (u_02.a(this.i, this.k) == 0) {
                            this.a.f(String.format("Pixel %08x at %d,%d is black", nArray[n4][n6], n6, n4));
                        } else if (u_02.a(this.i, this.j) == 0) {
                            this.a.f(String.format("Pixel %08x at %d,%d is missed black", nArray[n4][n6], n6, n4));
                        }
                        ++n6;
                    }
                    ++n4;
                }
            }
        } else {
            if (this.a.d < 5 && Math.abs(n6 - n7) < 50) {
                this.a.f("Unreliable color match, red:" + n6 + " black:" + n7);
                if (this.a.d <= 2) {
                    Rectangle rectangle = new Rectangle(n2, n3, this.c.width, 30);
                    com.solvitaire.app.q.a(this.a, this, nArray, rectangle, false);
                    com.solvitaire.app.q.a(this.a, this, nArray, rectangle, true);
                }
            }
            if (n6 > n7) {
                if (this.a.d <= 3) {
                    this.a.f("Found " + n6 + " red and " + n7 + " black, so set as RED");
                }
                n5 = L;
            } else {
                if (this.a.d <= 3) {
                    this.a.f("Found " + n6 + " red and " + n7 + " black, so set as BLACK");
                }
                n5 = S;
            }
        }
        return n5;
    }

    final u_0 a(boolean bl2) {
        if (bl2) {
            return this.f;
        }
        return this.i;
    }

    final u_0 b(boolean bl2) {
        if (bl2) {
            return this.h;
        }
        return this.k;
    }

    final u_0 c(boolean bl2) {
        if (bl2) {
            return this.g;
        }
        return this.j;
    }

    final void a(u_0 u_02, u_0 u_03, u_0 u_04, u_0 u_05, u_0 u_06, boolean bl2) {
        if (bl2) {
            this.f = u_02;
            this.g = u_03;
            this.h = u_04;
        } else {
            this.i = u_02;
            this.j = u_03;
            this.k = u_04;
        }
        this.d = u_05;
        this.e = u_06;
    }

    final void b(u_0 u_02, u_0 u_03, u_0 u_04, u_0 u_05, u_0 u_06, boolean bl2) {
        if (bl2) {
            u_02.b(this.f);
            u_03.b(this.g);
            u_04.b(this.h);
        } else {
            u_02.b(this.i);
            u_03.b(this.j);
            u_04.b(this.k);
        }
        u_05.b(this.d);
        u_06.b(this.e);
    }

    private int a(int[][] nArray, Rectangle rectangle, int[] nArray2, int[] nArray3, boolean bl2, int n2) {
        int n3;
        int n4;
        u_0 u_02 = new u_0();
        int[] nArray4 = new int[rectangle.height];
        int[] nArray5 = new int[rectangle.height];
        u_0 u_03 = this.c(bl2);
        u_0 u_04 = this.a(bl2);
        double d2 = 0.0;
        int n5 = 0;
        if (rectangle.x + rectangle.width > nArray[0].length) {
            String string = "Font width mismatch, pixel width " + nArray[0].length + " but bounds give " + (rectangle.x + rectangle.width);
            qo_0 qo_02 = this.a;
            qo_02.a(string, false);
        }
        int n6 = n4 = rectangle.width / 2;
        int n7 = 0;
        if (rectangle.height + rectangle.y > nArray.length) {
            rectangle.height = nArray.length - rectangle.y;
        }
        if (rectangle.height < 8) {
            if (this.a.d <= 3) {
                this.a.f("Grabbed only " + rectangle.height + " suit rows, too little to reliably identify suit");
            }
            if (this.a.d <= 3) {
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, bl2);
            }
            return -1;
        }
        if (this.a.d <= 2) {
            this.a.f("Testing suit rows from " + rectangle.y + " to " + (rectangle.y + rectangle.height - 1) + "inclusive");
        }
        int n8 = 0;
        int n9 = rectangle.height - 1;
        while (n9 >= 0) {
            if ((n4 = this.c(u_02, nArray, rectangle, n4, n9, u_04, u_03)) <= rectangle.x + rectangle.width) {
                ++n4;
            }
            if (this.a.d <= 2) {
                this.a.f("Shifting left side to left while red/black gave " + n4);
            }
            n4 = this.b(u_02, nArray, rectangle, n4, n9, u_04, u_03);
            if (this.a.d <= 2) {
                this.a.f("Shifting left side to right while NOT red/black gave " + n4);
            }
            if ((n6 = this.a(u_02, nArray, rectangle, n6, n9, u_04, u_03)) > 0) {
                --n6;
            }
            if (this.a.d <= 2) {
                this.a.f("Shifting right side to right while red/black gave " + n6);
            }
            n6 = this.d(u_02, nArray, rectangle, n6, n9, u_04, u_03);
            if (this.a.d <= 2) {
                this.a.f("Shifting right side to left while NOT red/black gave " + n6);
            }
            if (this.a.d <= 2) {
                this.a.f("Row " + n9 + " xleft " + n4 + " xright " + n6 + " centreLine " + (n5 > 0 ? d2 / (double)n5 : -1.0));
            }
            if (n4 > n6) {
                if (n7 != 0 && n9 < rectangle.height - 6) {
                    if (this.a.d <= 3) {
                        this.a.f("End scan due to blank line at " + (rectangle.y + n9));
                    }
                    n8 = n9 + 1;
                    break;
                }
                n6 = n4 = rectangle.width / 2;
                d2 = 0.0;
                n5 = 0;
                --rectangle.height;
            } else {
                if (n7 != 0 && n9 < 5 && nArray4[n9 + 1] > 4) {
                    if (n6 > nArray5[n9 + 1] + 1 || n4 < nArray4[n9 + 1] - 1) {
                        if (this.a.d <= 3) {
                            this.a.f("Looks like suit touching situation, y " + n9 + " endxs[y+1} " + nArray5[n9 + 1] + " startxs[y+1] " + nArray4[n9 + 1] + " xright " + n6 + " xleft " + n4);
                        }
                        n8 = n9 + 1;
                        break;
                    }
                    if (n5 > 0) {
                        int n10;
                        double d3 = d2 / (double)n5;
                        int n11 = (n4 + n6) / 2;
                        if ((double)n10 > d3 + 3.0) {
                            if (this.a.d <= 3) {
                                this.a.f("Looks like queen merge situation, y " + n9 + " xright " + n6 + " xleft " + n4 + " centreSum " + d2 + " centreCount " + n5 + " mid " + n11);
                            }
                            n8 = n9 + 1;
                            if (!((double)n4 <= d3)) break;
                            double d4 = d3;
                            n7 = (int)(d4 + d4 - (double)n4 + 1.0);
                            if (this.a.d > 3) break;
                            this.a.f("Queen merge situation, xright " + n6 + " xleft " + n4 + " centre " + d3 + " so estimated xright as " + n7);
                            break;
                        }
                        if (n6 > rectangle.width - 4) {
                            if ((double)n4 <= d3) {
                                double d5 = d3;
                                n7 = (int)(d5 + d5 - (double)n4 + 1.0);
                                if (n6 - n7 > 2) {
                                    if (this.a.d <= 3) {
                                        this.a.f("Looks like queen merge situation, y " + n9 + " xright " + n6 + " xleft " + n4 + " centreSum " + d2 + " centreCount " + n5 + " mid " + n11 + " estimated xright as " + n7);
                                    }
                                    n6 = n7;
                                }
                            } else if (this.a.d <= 3) {
                                this.a.f("Could be queen merge situation but xright " + n6 + " xleft " + n4 + " centre " + d3 + " so ignoring");
                            }
                        }
                    }
                }
                n7 = 1;
                if (n9 > 4) {
                    nArray4[n9] = n4 - 1;
                    if (nArray4[n9] < 0) {
                        nArray4[n9] = 0;
                    }
                    nArray5[n9] = n6 + 1;
                    if (nArray5[n9] > rectangle.width - 1) {
                        nArray5[n9] = rectangle.width - 1;
                    }
                    n4 = nArray4[n9];
                    n6 = nArray5[n9];
                } else {
                    nArray4[n9] = n4;
                    nArray5[n9] = n6;
                }
                if (n9 < 10 && n6 < rectangle.width) {
                    d2 += (double)(n4 + n6);
                    n5 += 2;
                }
            }
            --n9;
        }
        if (rectangle.height < 8) {
            if (this.a.d <= 3) {
                this.a.f("testRect collapsed down to less than 8 rows, too little to reliably identify suit");
            }
            if (this.a.d <= 3) {
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, bl2);
            }
            return -1;
        }
        if (d2 == 0.0) {
            if (this.a.d <= 2) {
                this.a.f("Aborting suit identification due to no centreline");
            }
            if (this.a.d <= 2) {
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, bl2);
            }
            return -1;
        }
        int n12 = 0;
        double d6 = d2 / (double)n5;
        n7 = -1;
        if (rectangle.height + rectangle.y > nArray.length) {
            if (this.a.d <= 3) {
                this.a.f("Aborting suit identification due to image overrun, ycount " + rectangle.height + " testRect.y " + rectangle.y + " pixels.length " + nArray.length);
            }
            if (this.a.d <= 2) {
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, bl2);
            }
            return -1;
        }
        if (n8 == 0) {
            int n13 = 0;
            n3 = n8 + 4;
            if (n3 > rectangle.height) {
                n3 = rectangle.height;
            }
            int n14 = n8;
            while (n14 < n3) {
                double d7 = (double)(nArray4[n14] + nArray5[n14]) / 2.0;
                n5 = nArray5[n14] - nArray4[n14];
                if (n5 < n13 && Math.abs(d6 - d7) > 3.0) {
                    if (this.a.d <= 3) {
                        this.a.f("At row " + n14 + " pixels from " + nArray5[n14] + " to " + nArray4[n14] + " decrease from prior count of " + n13 + ", maybe suit ran into number?");
                    }
                    if (this.a.d <= 2) {
                        com.solvitaire.app.q.a(this.a, this, nArray, rectangle, n14, bl2);
                    }
                    n8 = n14 + 1;
                }
                n13 = n5;
                ++n14;
            }
        }
        int n15 = 0;
        n3 = n8;
        while (n3 < rectangle.height) {
            double d8 = (double)(nArray4[n3] + nArray5[n3]) / 2.0;
            if (Math.abs(d6 - d8) > 4.0) {
                ++n12;
                if (this.a.d <= 2) {
                    this.a.f("Row " + n3 + " start " + nArray4[n3] + " plus end " + nArray5[n3] + " vs expected " + rectangle.width + " more than 8, makes asymmetrical count " + n12);
                }
                if (this.a.d <= 2) {
                    com.solvitaire.app.q.a(this.a, this, nArray, rectangle, n3, bl2);
                }
            }
            int n16 = 0;
            n5 = 0;
            n4 = 0;
            n6 = 0;
            n9 = 1;
            int n17 = nArray4[n3];
            while (n17 <= nArray5[n3]) {
                boolean bl3;
                int n18 = nArray[n3 + rectangle.y][n17 + rectangle.x];
                u_02.c(n18);
                boolean bl4 = u_02.a(u_04, u_03) == 0;
                boolean bl5 = bl3 = n17 == nArray4[n3] || n17 == nArray5[n3];
                if (bl4) {
                    if (n17 == 0) {
                        if (this.a.d <= 2) {
                            this.a.f("Leftmost line detected at row " + n3);
                        }
                        ++n15;
                    }
                    if (n4 == 0) {
                        if (nArray5[n3] - n17 < 3) {
                            if (this.a.d <= 2) {
                                this.a.f("Fg starts too close to end, clear gapsum");
                            }
                            n5 = 0;
                        }
                        if (n16 > 0) {
                            if (this.a.d <= 2) {
                                this.a.f("Skipped a gap, add " + n5 + " to " + n16);
                            }
                            n16 += n5;
                        }
                        n5 = 0;
                    }
                    n4 = 1;
                    ++n16;
                    if (!bl2) {
                        n18 = this.a(u_02, n3);
                        if (n2 != 0 && n2 != 2) {
                            if (n18 > 77) {
                                n9 = 0;
                            }
                        } else if (n18 > 15) {
                            n9 = 0;
                        }
                        int n19 = n3;
                        nArray3[n19] = nArray3[n19] + n18;
                    }
                } else {
                    if (!bl2 && !bl3) {
                        int n20 = n3;
                        nArray3[n20] = nArray3[n20] + this.a(u_02, n3);
                    }
                    if (this.a.d <= 2) {
                        this.a.f(String.format("Pixel at %d, %d (%08x) not between %08x and %08x so in gap, infg %b gapsum %d", n17, n3, n18, u_04.a(), u_03.a(), n4 != 0, n5));
                    }
                    if (n4 != 0) {
                        n4 = 0;
                        if (++n6 > 3 && n3 - n8 < 6) {
                            if (this.a.d <= 3) {
                                this.a.f("Aborting suit identification due to breaks in fg pixels");
                            }
                            if (this.a.d <= 2) {
                                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, bl2);
                            }
                            return -1;
                        }
                    }
                    ++n5;
                }
                ++n17;
            }
            if (!bl2 && n9 != 0) {
                nArray3[n3] = 0;
                nArray2[n3] = 0;
            } else {
                nArray2[n3] = n16;
                if (n16 > 0 && n7 == -1) {
                    n7 = n3;
                    if (this.a.d <= 2) {
                        this.a.f("First row with pixels is row " + n7);
                    }
                }
            }
            ++n3;
        }
        if (this.a.d <= 3) {
            this.a.f("Leftmost lines count is " + n15);
        }
        if (this.z != 9 && n15 > 7 && n7 < 2) {
            if (this.a.d <= 3) {
                this.a.f("Aborting suit identification due to more than 7 leftmost lines");
            }
            if (this.a.d <= 2) {
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, bl2);
            }
            return -1;
        }
        if (n12 > 3) {
            if (this.a.d <= 3) {
                this.a.f("Aborting suit identification due asymmetry in more than 3 lines");
            }
            if (this.a.d <= 2) {
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, bl2);
            }
            return -1;
        }
        if (n7 < 0) {
            if (this.a.d <= 3) {
                this.a.f("No suit data or invalid offset, starty is " + n7);
            }
            if (this.a.d <= 2) {
                com.solvitaire.app.q.a(this.a, this, nArray, rectangle, n7, bl2);
            }
            return -1;
        }
        return n7;
    }

    private int a(u_0 u_02, int n2) {
        int n3 = this.i.a > 200 ? this.P.d(u_02) : u_02.d(this.P);
        if (n3 < 0) {
            n3 = 0;
        }
        n3 = this.O - n3;
        if (this.z == 2 && n3 > 100) {
            n3 = this.O;
        }
        if (this.a.d <= 2) {
            this.a.f("Black card, row " + n2 + " count of " + n3);
        }
        return n3;
    }

    private int a(u_0 u_02, int[][] nArray, Rectangle rectangle, int n2, int n3, u_0 u_03, u_0 u_04) {
        return this.a(u_02, nArray, rectangle, n2, n3, u_03, u_04, false, true);
    }

    private int b(u_0 u_02, int[][] nArray, Rectangle rectangle, int n2, int n3, u_0 u_03, u_0 u_04) {
        return this.a(u_02, nArray, rectangle, n2, n3, u_03, u_04, false, false);
    }

    private int c(u_0 u_02, int[][] nArray, Rectangle rectangle, int n2, int n3, u_0 u_03, u_0 u_04) {
        return this.a(u_02, nArray, rectangle, n2, n3, u_03, u_04, true, true);
    }

    private int d(u_0 u_02, int[][] nArray, Rectangle rectangle, int n2, int n3, u_0 u_03, u_0 u_04) {
        return this.a(u_02, nArray, rectangle, n2, n3, u_03, u_04, true, false);
    }

    private int a(u_0 u_02, int[][] nArray, Rectangle rectangle, int n2, int n3, u_0 u_03, u_0 u_04, boolean bl2, boolean bl3) {
        block8: {
            if (n3 + rectangle.y < 0) {
                return -1;
            }
            do {
                boolean bl4;
                if (n2 + rectangle.x >= nArray[0].length) {
                    if (this.a.d <= 1) {
                        this.a.f("x of " + n2 + " with rect.x " + rectangle.x + " will overflow pixels width " + nArray[0].length);
                    }
                    return rectangle.width;
                }
                if (n2 + rectangle.x < 0) {
                    if (this.a.d <= 1) {
                        this.a.f("x of " + n2 + " with rect.x " + rectangle.x + " is negative");
                    }
                    return -1;
                }
                u_02.c(nArray[n3 + rectangle.y][n2 + rectangle.x]);
                boolean bl5 = bl3 ? u_02.a(u_03, u_04) == 0 : (bl4 = u_02.a(u_03, u_04) != 0);
                if (bl3 && this.a.d <= 1) {
                    this.a.f(String.format("Pixel at %d, %d (%08x) is %sbetween %08x and %08x so %s", n2, n3, nArray[n3 + rectangle.y][n2 + rectangle.x], bl3 ? "" : "not ", u_03.a(), u_04.a(), bl3 ? "matches OK" : " mismatches OK"));
                }
                if (!bl4) break block8;
                n2 = bl2 ? n2 - 1 : n2 + 1;
                if (n2 >= 0) continue;
                return -1;
            } while (n2 < rectangle.width);
            if (this.a.d <= 1) {
                this.a.f("Hit end of test rectangle, returning " + rectangle.width);
            }
            return rectangle.width;
        }
        return n2;
    }

    private static boolean a(u_0 u_02, int[][] nArray, int n2, int n3, u_0 u_03, u_0 u_04) {
        u_02.c(nArray[n3][n2]);
        return u_02.a(u_03, u_04) == 0;
    }

    final int a(u_0 u_02, int[][] nArray, int n2, int n3, int n4, u_0 u_03, u_0 u_04, int n5) {
        if (pX.a(u_02, nArray, n2 += (n4 /= 2), n3, u_03, u_04)) {
            if (this.a.d <= 2) {
                this.a.f(String.format("Row %d hit %d  matching pixels ending at %d (%08x) vs %08x, %08x", n3, 1, n2, u_02.a(), u_03.a(), u_04.a()));
            }
            return n2;
        }
        n5 = 1;
        while (n5 < n4) {
            if (pX.a(u_02, nArray, n2 + n5, n3, u_03, u_04)) {
                if (this.a.d <= 2) {
                    this.a.f(String.format("Row %d hit %d  matching pixels ending at %d (%08x) vs %08x, %08x", n3, 1, n2 + n5, u_02.a(), u_03.a(), u_04.a()));
                }
                return n2 + n5;
            }
            if (pX.a(u_02, nArray, n2 - n5, n3, u_03, u_04)) {
                if (this.a.d <= 2) {
                    this.a.f(String.format("Row %d hit %d  matching pixels ending at %d (%08x) vs %08x, %08x", n3, 1, n2 - n5, u_02.a(), u_03.a(), u_04.a()));
                }
                return n2 - n5;
            }
            ++n5;
        }
        if (this.a.d <= 2) {
            this.a.f(String.format("Row %d failed match check, only matched %d pixels, last (%08x) vs %08x, %08x", n3, 0, u_02.a(), u_03.a(), u_04.a()));
        }
        return -1;
    }

    final boolean a(u_0 u_02, int[][] nArray, int n2, int n3, int n4, u_0 u_03, u_0 u_04) {
        if (!pX.a(u_02, nArray, n2 += (n4 /= 2), n3, u_03, u_04)) {
            if (this.a.d <= 2) {
                this.a.f(String.format("Row %d hit a non-matching pixel at %d (%08x) vs %08x, %08x", n3, n2, u_02.a(), u_03.a(), u_04.a()));
            }
            return false;
        }
        int n5 = 1;
        while (n5 < n4) {
            if (!pX.a(u_02, nArray, n2 + n5, n3, u_03, u_04)) {
                if (this.a.d <= 2) {
                    this.a.f(String.format("Row %d hit a non-matching pixel at %d (%08x) vs %08x, %08x", n3, n2 + n5, u_02.a(), u_03.a(), u_04.a()));
                }
                return false;
            }
            if (!pX.a(u_02, nArray, n2 - n5, n3, u_03, u_04)) {
                if (this.a.d <= 2) {
                    this.a.f(String.format("Row %d hit a non-matching pixel at %d (%08x) vs %08x, %08x", n3, n2 - n5, u_02.a(), u_03.a(), u_04.a()));
                }
                return false;
            }
            ++n5;
        }
        if (this.a.d <= 2) {
            this.a.f("Stringent match succeeded at row " + n3);
        }
        return true;
    }

    final boolean b(u_0 u_02, int[][] nArray, int n2, int n3, int n4, u_0 u_03, u_0 u_04, int n5) {
        n5 = 0;
        if (!pX.a(u_02, nArray, n2 += (n4 /= 2), n3, u_03, u_04) && !pX.a(u_02, nArray, n2, n3, this.e, this.d)) {
            ++n5;
        }
        int n6 = 1;
        while (n6 < n4) {
            if (!pX.a(u_02, nArray, n2 + n6, n3, u_03, u_04) && !pX.a(u_02, nArray, n2 + n6, n3, this.e, this.d)) {
                ++n5;
            }
            if (!pX.a(u_02, nArray, n2 - n6, n3, u_03, u_04) && !pX.a(u_02, nArray, n2 - n6, n3, this.e, this.d)) {
                ++n5;
            }
            if (n5 > 5) {
                if (this.a.d <= 2) {
                    this.a.f("Row " + n3 + " hit " + 5 + " mismatching pixels");
                }
                return true;
            }
            ++n6;
        }
        return false;
    }

    /*
     * Unable to fully structure code
     */
    final int a(int[][] var1_1, int var2_2, int var3_3, int var4_4, boolean var5_5) {
        var6_7 = new u_0();
        var7_8 = this.a(var5_5);
        var8_9 = this.c(var5_5);
        var5_6 = this.b(var5_5);
        if (this.a.d <= 2) {
            this.a.f("Scanning up from " + var3_3 + " to 0, x range from " + var2_2 + " width " + var4_4);
        }
        if (var3_3 != 0) ** GOTO lbl11
        return -1;
        while (this.a(var6_7, var1_1, var2_2, var3_3, var4_4, var7_8, var5_6, 1) >= 0 && !this.b(var6_7, var1_1, var2_2, var3_3, var4_4, var7_8, var8_9, 5)) {
            --var3_3;
lbl11:
            // 2 sources

            if (var3_3 >= 0) continue;
        }
        if (this.a.d <= 2) {
            this.a.f("Scan ended at y = " + (var3_3 + 1));
        }
        return var3_3 + 1;
    }
}

