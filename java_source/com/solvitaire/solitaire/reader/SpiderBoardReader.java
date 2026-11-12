/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.reader;

import com.solvitaire.solitaire.reader.BoardReader;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.util.qa;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.solver.SpiderSolver;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.util.qw_0;
import java.util.Arrays;

public final class SpiderBoardReader
extends BoardReader {
    public static final double[] p = new double[]{841.0, 841.0};
    private SpiderSolver q;
    private qa rPanel;

    SpiderBoardReader(SpiderSolver qs_02) {
        super(qs_02);
        this.q = qs_02;
        this.h = 1;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    final boolean AboutDialog() {
        block79: {
            this.k = true;
            v0 = this.f.ao;
            var5_1 = this;
            var6_5 = var5_1.f.FPanel.c / 4;
            var7_11 = new int[var5_1.q.f];
            var5_1.f.aD.AboutDialog();
            var1_13 = 0;
            var8_20 = 0;
            var18_21 = 0.0;
            var20_23 = 0;
            while (var20_23 < 10) {
                v1 = var5_1;
                var21_41 = v1.AboutDialog(v1.f.aY.AboutDialog[0].f[var20_23]);
                if (var5_1.f.d <= 4) {
                    var5_1.f.g("Tabrect top:" + var5_1.f.FPanel.AboutDialog.b() + " edges:" + Arrays.toString(var21_41.b));
                }
                var9_33 = 9999;
                if (var21_41 != null && var21_41.b.length > 1 && var21_41.b[0] != null) {
                    var11_38 = var21_41.b.length;
                    if (var11_38 < 5 || var11_38 > 6) {
                        var5_1.q.A = true;
                    }
                    var18_21 = var21_41.b[0].c();
                    if (var11_38 < 11 || var11_38 < 14 && var20_23 > 1 && var20_23 < 8) {
                        var2_26 = 1;
                        while (var2_26 < var21_41.b.length - 1) {
                            var3_28 = var21_41.b[var2_26].c() - var21_41.b[var2_26 - 1].c();
                            if (var5_1.f.d <= 4) {
                                var5_1.f.g("Span for edge " + var2_26 + " is " + var3_28);
                            }
                            if (var3_28 > var6_5) {
                                if (var5_1.f.d <= 5) {
                                    var5_1.f.g("Span " + var3_28 + " in non-compressed stack indicates end of face down cards");
                                }
                                var7_11[var20_23] = var2_26 - 1;
                                break;
                            }
                            var1_13 += var3_28;
                            ++var8_20;
                            ++var2_26;
                        }
                    } else {
                        var2_26 = 1;
                        while (var2_26 < var21_41.b.length - 1) {
                            var3_28 = var21_41.b[var2_26].c() - var21_41.b[var2_26 - 1].c();
                            if (var5_1.f.d <= 4) {
                                var5_1.f.g("Span for edge " + var2_26 + " is " + var3_28);
                            }
                            if (var3_28 < var9_33) {
                                var9_33 = var3_28;
                            }
                            if (var7_11[var20_23] == 0 && ((double)var3_28 - (double)var9_33) / (double)var9_33 > 0.5) {
                                if (var5_1.f.d <= 5) {
                                    var5_1.f.g("Edge size discontinuity at row " + (var2_26 - 1) + " mark facedown");
                                }
                                var7_11[var20_23] = var2_26 - 1;
                            }
                            ++var2_26;
                        }
                    }
                } else {
                    var5_1.q.A = true;
                }
                ++var20_23;
            }
            if (var8_20 > 0) {
                var20_24 = (double)var1_13 / (double)var8_20;
                if (var5_1.f.d <= 5) {
                    v2 = var20_24;
                    var5_1.f.g("Calculated accurate facedown span of " + v2 + " ratio " + v2 / (double)var5_1.f.FPanel.c);
                }
            } else {
                var20_24 = 0.1187 * (double)var5_1.f.FPanel.c;
                if (var5_1.f.d <= 5) {
                    var5_1.f.g("Using builtin facedown span of " + var20_24);
                }
            }
            var9_33 = 0;
            while (var9_33 < 6) {
                var3_28 = (int)(var18_21 - var5_1.f.FPanel.AboutDialog.b() + var20_24 * (double)var9_33);
                var2_26 = var9_33;
                var1_14 = var5_1.f.aY.AboutDialog[0];
                var1_14.i[var2_26] = (double)var3_28 - var1_14.g.yHandler;
                if (var5_1.f.d <= 5) {
                    var5_1.f.g("Card " + var9_33 + " yHandler offset " + var5_1.f.aY.AboutDialog[0].i[var9_33]);
                }
                ++var9_33;
            }
            v0.i = var7_11;
            if (this.f.m == 4) break block79;
            var2_26 = 2;
            var1_15 = this.f.aq;
            var1_15.c(var2_26, null);
            this.f.FPanel.b(3000);
            this.f.aD.AboutDialog();
            var1_16 = 0;
            while (var1_16 < this.q.f) {
                v3 = this;
                v3.f(v3.f.aY.AboutDialog[0].f[var1_16]);
                ++var1_16;
            }
            var1_16 = this.i();
            if (var1_16 > 0) {
                this.f.FPanel.n = false;
            }
            var1_17 = this.f.aq;
            var1_17.d(false);
            var2_27 = new Card[10];
            var1_18 = 0;
            while (var1_18 < 10) {
                var3_30 = this.f.aY.AboutDialog[0].f[var1_18];
                var2_27[var1_18] = new Card(var3_30.b, var3_30);
                ++var1_18;
            }
            var1_18 = this.j();
            while (var1_18 >= 0) {
                block77: {
                    if (this.f.d <= 5) {
                        this.f.g("Stack " + var1_18 + " is empty so we must fill to read deck");
                    }
                    var5_1 = this;
                    var6_5 = 0;
                    while (var6_5 < 10) {
                        v4 = var5_1;
                        v5 = v4.AboutDialog(v4.f.aY.AboutDialog[0].f[var6_5], true, 0, -1);
                        var7_11 = v5;
                        if (v5.b != null && var7_11.b.length > 1 && var5_1.f.aY.AboutDialog[0].f[var6_5].AboutDialog().g > 100) {
                            v6 = var6_5;
                            break block77;
                        }
                        ++var6_5;
                    }
                    v6 = var3_31 = -1;
                }
                if (v6 < 0) {
                    this.f.g("No stack available to move from");
                    break;
                }
                if (this.f.d <= 5) {
                    this.f.g("Using stack " + var3_31 + " to populate empty space");
                }
                var4_42 = this.f.aY.AboutDialog[0];
                var5_1 = var4_42.f[var3_31];
                var6_6 = var4_42.f[var1_18];
                v7 = var5_1.d;
                var7_11 = v7;
                if (v7 == null) {
                    this.f.i("Unexpected move from stack " + var3_31 + " found null tail");
                    break;
                }
                var8_20 = var7_11.c[var7_11.AboutDialog - 1].g;
                var9_35 = new GameMove(this.f, GameMove.AboutDialog(1, (Card)var5_1, var6_6), 0);
                this.AboutDialog(var9_35, 0);
                this.e((Card)var5_1);
                this.f.AboutDialog(500L, "Stabilize stack");
                this.e(var6_6);
                var10_44 = var7_11;
                if (var7_11.AboutDialog != 1) {
                    if (this.f.d <= 5) {
                        this.f.g("Split of " + var8_20 + " from " + var3_31 + " to " + var1_18);
                    }
                    var10_44 = var7_11.b(1);
                } else {
                    if (this.f.d <= 5) {
                        this.f.g("Move of " + var8_20 + " from " + var3_31 + " to " + var1_18);
                    }
                    var5_1.e();
                }
                this.f.aY.AboutDialog[0].f[var1_18].AboutDialog((CardRun)var10_44);
                var1_18 = this.j();
            }
            if (this.f.d <= 5) {
                this.f.g("Filled spaces, reading deal cards now");
            }
            var3_32 = new int[10];
            var4_43 = 0;
            while (var4_43 < 10) {
                var3_32[var4_43] = this.f.aY.AboutDialog[0].f[var4_43].q();
                ++var4_43;
            }
            var4_43 = 0;
            while (var4_43 < 5) {
                if (this.f.d <= 5) {
                    this.f.g("Deal number " + var4_43);
                }
                this.f.aD.AboutDialog();
                this.f.aD.b(5000);
                if (this.g.c()) {
                    v8 = this;
                    var5_1 = v8.AboutDialog(v8.f.aY.AboutDialog[0].f[1], true, -1, -1);
                    if (this.f.d <= 5) {
                        this.f.g("Stack 1 edges:" + String.valueOf(var5_1));
                    }
                } else {
                    v9 = this;
                    var5_1 = v9.AboutDialog(v9.f.aY.AboutDialog[0].f[8], true, -1, -1);
                    if (this.f.d <= 5) {
                        this.f.g("Stack 8 edges:" + String.valueOf(var5_1));
                    }
                }
                var6_7 = false;
                if (var5_1.b == null || (double)(var5_1.b[var5_1.b.length - 1].k + this.f.FPanel.c) < this.f.aY.AboutDialog[1].g.yHandler + this.f.FPanel.AboutDialog.b()) {
                    block78: {
                        if (this.f.d <= 5) {
                            this.f.g("Main stack does not overlap deal stackset so deal cards");
                        }
                        v10 = this;
                        var1_18 = var4_43;
                        var7_11 = var3_32;
                        var6_8 = v10.f.aY.AboutDialog[0].f;
                        var5_1 = v10;
                        if (v10.f.d <= 4) {
                            var5_1.f.g("Dealing to read initial cards");
                        }
                        if (!var5_1.l()) {
                            v11 = false;
                        } else {
                            var8_20 = 0;
                            while (var8_20 < 10) {
                                var18_22 = System.currentTimeMillis() + 3500L;
                                var20_25 = var18_22 - 1000L;
                                while (true) {
                                    if (System.currentTimeMillis() > var18_22) {
                                        if (var5_1.f.d <= 6) {
                                            var5_1.f.g("Timed out reading cards on stack " + String.valueOf(var6_8[var8_20]) + " for deal " + var1_18);
                                        }
                                        v11 = false;
                                        break block78;
                                    }
                                    var5_1.f.AboutDialog(100L);
                                    var5_1.f.aD.AboutDialog();
                                    var10_44 = var5_1.AboutDialog(var6_8[var8_20], true, 0, -1);
                                    if (var10_44 == null || var10_44.b == null) {
                                        var5_1.f.FPanel.p();
                                        var18_22 = System.currentTimeMillis() + 3500L;
                                        var20_25 = var18_22 - 1000L;
                                        var5_1.l();
                                        if (var5_1.f.d > 6) continue;
                                        var5_1.f.g("Retry read after dismissing no more moves dialog");
                                        continue;
                                    }
                                    var11_39 = var10_44.b.length;
                                    if (var11_39 == 0) continue;
                                    if (var11_39 == var7_11[var8_20] + var1_18 + true || System.currentTimeMillis() > var20_25) {
                                        var9_36 = var5_1.d(var6_8[var8_20]);
                                        if (var9_36 <= 0) continue;
                                        if (var5_1.f.d <= 5) {
                                            var5_1.f.g("Read deal row " + var1_18 + " card " + var8_20 + " value " + var9_36);
                                        }
                                        if (var11_39 == var7_11[var8_20] + var1_18 + true || var5_1.f.d > 6) break;
                                        var5_1.f.g("Timeout waiting for card to appear on stack " + String.valueOf(var6_8[var8_20]) + " so accept value of " + var9_36);
                                        break;
                                    }
                                    if (var5_1.f.d > 5) continue;
                                    var5_1.f.g("Card count mismatch, count " + (int)var7_11[var8_20] + " deal " + var1_18 + " edges " + String.valueOf(var10_44) + " so retry");
                                }
                                var5_1.q.B[var5_1.f.aY.b][var8_20] = var9_36;
                                var10_44 = var5_1.f.aY.AboutDialog[1].f[0];
                                var11_40 = new CardRun(var5_1.q.b((Card)var10_44, var9_36));
                                new CardRun(var5_1.q.b((Card)var10_44, var9_36)).b = true;
                                var10_44.c(var11_40);
                                var5_1.g.n = false;
                                ++var8_20;
                            }
                            v11 = true;
                        }
                    }
                    var6_7 = v11;
                } else if (this.f.d <= 5) {
                    this.f.g("Main stack overlaps deal stackset so no more deal cards, tryReversed?" + this.g.n);
                }
                if (var6_7) break;
                if (var4_43 != 0) break;
                if (this.g.n && !this.g.c()) {
                    this.g.AboutDialog(true);
                    this.f.FPanel.b(-10, true);
                    var1_18 = this.i();
                    if (var1_18 > 0) {
                        this.g.n = false;
                        if (this.f.d <= 5) {
                            this.f.g("Read " + var1_18 + " ace stack(s) in reversed mode");
                        }
                    } else {
                        this.g.n = true;
                    }
                    var4_43 = -1;
                } else {
                    this.f.g("Reverse deal also failed, assume mid-game with no deck");
                    if (!this.g.n) break;
                    this.g.m = false;
                    this.f.FPanel.b(-10, false);
                    break;
lbl264:
                    // 1 sources

                    if (this.f.d > 5) break;
                    this.f.g("Deal timed out after " + var4_43 + " deals, assume mid-game");
                    break;
lbl267:
                    // 1 sources

                    this.g.n = false;
                    ++this.f.aY.b;
                    this.f.AboutDialog(300L, "SpiderDeal");
                }
                ++var4_43;
            }
            if (this.f.aY.b < 5) {
                if (this.f.d <= 5) {
                    this.f.g("Not AboutDialog full deal, shift cards in the deck");
                }
                var4_43 = 0;
                while (var4_43 < this.f.aY.b) {
                    var5_2 = 0;
                    while (var5_2 < 10) {
                        this.q.B[4 - var4_43][var5_2] = this.q.B[this.f.aY.b - var4_43 - 1][var5_2];
                        ++var5_2;
                    }
                    ++var4_43;
                }
                var4_43 = 0;
                while (var4_43 < 5 - this.f.aY.b) {
                    var5_3 = 0;
                    while (var5_3 < 10) {
                        this.q.B[var4_43][var5_3] = 0;
                        ++var5_3;
                    }
                    ++var4_43;
                }
            }
            this.f.AboutDialog(500L, "waiting for nomoves");
            this.f.FPanel.o();
            if (this.f.FPanel.v) {
                this.f.FPanel.p();
            }
            this.f.FPanel.d(false);
            var4_43 = 0;
            while (var4_43 < 10) {
                this.f.aY.AboutDialog[0].f[var4_43] = var2_27[var4_43];
                ++var4_43;
            }
            this.q.uPanel = this.f.aY.b * 10;
            this.f.aY.c = this.f.aY.b = 5 - this.f.aY.b;
            this.rPanel = new qa(this.f.aY, false);
            this.g();
            var4_43 = this.q.AboutDialog((Card)null);
            var5_4 = 0;
            var9_37 = this.f.aY.AboutDialog[0].f;
            var8_20 = this.f.aY.AboutDialog[0].f.length;
            var7_12 = 0;
            while (var7_12 < var8_20) {
                var6_9 = var9_37[var7_12];
                var10_46 = 0;
                while (var10_46 < 100) {
                    var1_19 = var6_9.AboutDialog(var10_46);
                    if (var1_19 == null || var1_19.g > 100) break;
                    ++var5_4;
                    ++var10_46;
                }
                ++var7_12;
            }
            if (var5_4 == 44 && var4_43 + var5_4 != 104) {
                var6_10 = new StringBuffer();
                this.f.ao.AboutDialog(var6_10);
                this.f.AboutDialog(this.f.at + "allknowncards.txt", var6_10.toString(), true);
                this.f.i("Card read error, only identified " + (var4_43 + var5_4) + " cards");
            }
            if (this.f.d <= 3) {
                this.f.g("Got initial cards");
            }
        }
        if (this.f.aW && this.f.aX) {
            this.g.m = true;
            this.f.FPanel.b(-10, true);
        }
        return true;
    }

    private int i() {
        int n2 = 0;
        boolean bl2 = false;
        CardStack qv2 = this.f.aY.AboutDialog[2];
        int n3 = 0;
        while (n3 < 8) {
            if (!qv2.f[n3].n) break;
            int n4 = this.AboutDialog(qv2.f[n3], -1, 0, 0, 0L, this.g.c());
            if (n4 > 0 && n4 % 100 == 13) {
                if (bl2) {
                    this.f.i("Failure reading suit stack " + (n3 - 1));
                }
                if (this.f.d <= 5) {
                    this.f.g("Read initial suit stack " + n4);
                }
                this.q.AboutDialog[n3] = n4;
                this.q.l(n4 / 100);
                ++n2;
            } else {
                if (this.f.d <= 5) {
                    this.f.g("Failed to read King off suit stack " + n3);
                }
                bl2 = true;
            }
            ++n3;
        }
        return n2;
    }

    private int j() {
        int n2 = 0;
        while (n2 < 10) {
            SpiderBoardReader qt2 = this;
            qw_0 qw_02 = qt2.AboutDialog(qt2.f.aY.AboutDialog[0].f[n2], false, 0, -1);
            if (qw_02.b == null || qw_02.b.length == 0) {
                return n2;
            }
            ++n2;
        }
        return -1;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    final void AboutDialog(GameMove var1_1, int[] var2_2, int var3_5, int var4_6, boolean var5_7) {
        block71: {
            block77: {
                block73: {
                    block74: {
                        block76: {
                            block75: {
                                block72: {
                                    var1_1.q = 0;
                                    var1_1.rPanel = 0;
                                    if (!this.f.uPanel) {
                                        this.f.AboutDialog(30L, "Miniumum delay");
                                    }
                                    if (var1_1.n) {
                                        if (this.f.uPanel) {
                                            this.k();
                                            return;
                                        }
                                        if (!this.AboutDialog(var3_5, 1500, "pre deal")) {
                                            this.f.g("Pre-deal state check gives card state mismatch at level " + var3_5);
                                            var1_1.rPanel = 1;
                                            return;
                                        }
                                        if (this.f.d <= 5) {
                                            this.f.g("In play() playback deal");
                                        }
                                        this.l();
                                        var2_3 = this.k();
                                        if (var2_3 != 0 || this.f.aY.b == 5 && (this.f.aY.AboutDialog[0].f[8].p() > 9 || this.f.aY.AboutDialog[0].f[9].p() > 9)) {
                                            if (this.f.d <= 5) {
                                                this.f.g("Final deal, 1000 pause to allow columns 8 and 9 to adjust");
                                            }
                                            this.f.AboutDialog(1500L, "Pause for deal");
                                        }
                                        if (this.AboutDialog(var3_5, 2000, "post deal")) {
                                            this.g.n = false;
                                        } else {
                                            var4_6 = 0;
                                            if (!this.g.c() && this.g.n) {
                                                var4_6 = 1;
                                                this.g.n = false;
                                                if (this.f.d <= 5) {
                                                    this.f.g("Trying AboutDialog reverse deal");
                                                }
                                                this.g.b(-10, true);
                                                this.l();
                                                this.f.AboutDialog(1500L, "Pause for reverse deal");
                                            }
                                            if (!this.AboutDialog(var3_5, 2000, "reverse deal")) {
                                                this.f.g("Post-deal state check gives card state mismatch at level " + var3_5);
                                                if (var4_6 != 0) {
                                                    this.g.b(-10, false);
                                                }
                                                this.AboutDialog(var1_1.AboutDialog);
                                                var1_1.rPanel = 1;
                                                return;
                                            }
                                        }
                                        if (var2_3 != 0) {
                                            if (this.f.d <= 5) {
                                                this.f.g("Extra pause for deal completing suit");
                                            }
                                            this.f.AboutDialog(30L, "Suit");
                                            return;
                                        }
                                        this.f.AboutDialog(30L, "Pause after deal");
                                        return;
                                    }
                                    if ((var1_1.b & 4) != 0) break block71;
                                    var2_4 = var1_1.g.d.c[var1_1.g.d.AboutDialog - var1_1.i].g;
                                    var4_6 = var1_1.e.b();
                                    if (var4_6 == var2_4 + 1) {
                                        var1_1.b |= 2;
                                    }
                                    if (!this.f.uPanel) break block72;
                                    this.AboutDialog(var1_1, this.f.aY.AboutDialog[2]);
                                    if (this.f.m != 1 && (var1_1.b & 240) != 0) {
                                        var6_8 = this.f.aY.AboutDialog[2];
                                        var4_6 = 0;
                                        var9_10 = var6_8.f;
                                        var2_4 = var6_8.f.length;
                                        var8_13 = 0;
                                        while (var8_13 < var2_4) {
                                            var7_15 = var9_10[var8_13];
                                            var4_6 += var7_15.q();
                                            ++var8_13;
                                        }
                                        if (this.f.d <= 3) {
                                            this.f.g("Numcards after counting aces is " + var4_6);
                                        }
                                        if (var4_6 == 104) {
                                            var7_16 = 0;
                                            while (var7_16 < 100) {
                                                this.f.ar.b(false);
                                                this.f.AboutDialog(10L);
                                                ++var7_16;
                                            }
                                            return;
                                        }
                                    }
                                    break block71;
                                }
                                if (this.f.d <= 5) {
                                    this.f.g("*** At " + var3_5 + " move " + String.valueOf(var1_1));
                                }
                                var6_9 = this.f.g;
                                if (var4_6 == var2_4 + 1) {
                                    if ((var1_1.b & 240) != 0) {
                                        if (this.f.d <= 4) {
                                            this.f.g("Suit completion, check no earlier preventing click move");
                                        }
                                        var4_6 = 0;
                                        while (var4_6 < var1_1.f) {
                                            if (var1_1.c.f[var4_6].b() == var2_4 + 1 && var1_1.c.f[var4_6].d.AboutDialog + var1_1.i == 13) {
                                                if (this.f.d <= 5) {
                                                    this.f.g("Prior suit completion would override move so deny click");
                                                }
                                                var6_9 = false;
                                            }
                                            ++var4_6;
                                        }
                                    } else {
                                        var4_6 = 0;
                                        while (var4_6 < var1_1.f) {
                                            if (var1_1.c.f[var4_6].b() == var2_4 + 1) {
                                                var6_9 = false;
                                            }
                                            ++var4_6;
                                        }
                                        if (var6_9) {
                                            var4_6 = var1_1.f + 1;
                                            while (var4_6 < 10) {
                                                var7_17 = var1_1.c.f[var4_6];
                                                if (var7_17.b() == var2_4 + 1) {
                                                    var8_14 = var1_1.i + var1_1.c.f[var4_6].d.AboutDialog;
                                                    if (var8_14 == 13) {
                                                        if (this.f.d <= 5) {
                                                            this.f.g("Suit completion would override move so deny click");
                                                        }
                                                        var6_9 = false;
                                                    } else if (var7_17.e.size() + var8_14 >= 12) {
                                                        if (this.f.d <= 5) {
                                                            this.f.g("Possible suit completion so deny click");
                                                        }
                                                        var6_9 = false;
                                                    }
                                                }
                                                ++var4_6;
                                            }
                                        }
                                    }
                                } else {
                                    var4_6 = 0;
                                    while (var4_6 < 10) {
                                        if (var1_1.c.f[var4_6].b() == var2_4 + 1) {
                                            var6_9 = false;
                                        }
                                        ++var4_6;
                                    }
                                    var4_6 = 0;
                                    while (var4_6 < var1_1.f) {
                                        if (var1_1.c.f[var4_6].b() == -1) {
                                            var6_9 = false;
                                        }
                                        if (var1_1.c.f[var4_6].c() == var2_4 % 100 + 1) {
                                            var6_9 = false;
                                        }
                                        ++var4_6;
                                    }
                                }
                                if (var6_9) {
                                    var4_6 = 0;
                                    if (SpiderBoardReader.g(var1_1.g)) {
                                        if (this.f.d <= 5) {
                                            this.f.g("Source stack is compressed so check dest stack " + String.valueOf(var1_1.e));
                                        }
                                        var4_6 = 1;
                                    }
                                    if (!this.b(var1_1, (boolean)var4_6)) {
                                        if (this.f.d <= 5) {
                                            this.f.g("Click stack failed - need to attempt recovery");
                                        }
                                        var1_1.rPanel = 1;
                                        return;
                                    }
                                    if (this.k) {
                                        if (this.f.d <= 5) {
                                            this.f.g("Recovery level before first click is " + (var3_5 - 1));
                                        }
                                        this.j = var3_5 - 1;
                                        this.k = false;
                                    }
                                    var1_1.e.l = System.currentTimeMillis() + 300L;
                                } else {
                                    if (!this.AboutDialog(var1_1, 0)) {
                                        if (this.f.d <= 5) {
                                            this.f.g("Move stack failed - need to attempt recovery");
                                        }
                                        var1_1.rPanel = 1;
                                        return;
                                    }
                                    var1_1.e.l = System.currentTimeMillis() + 100L;
                                }
                                var7_18 = SpiderBoardReader.g(var1_1.g);
                                if ((var1_1.b & 240) == 0) break block73;
                                var1_1.e.k = System.currentTimeMillis();
                                var8_14 = SpiderBoardReader.g(var1_1.e);
                                var2_4 = var1_1.g.AboutDialog().g;
                                var4_6 = (int)this.AboutDialog(var1_1, this.f.aY.AboutDialog[2]);
                                var9_11 = var1_1.e.d;
                                var10_19 = false;
                                if (var9_11 == null || var9_11.AboutDialog <= 0) break block74;
                                var9_12 = var9_11.c[var9_11.AboutDialog - 1].g;
                                if (this.f.d <= 5) {
                                    this.f.g("Suit removal leaving " + var9_12 + " on stack, cardBefore " + var2_4);
                                }
                                if (var9_12 != 0) break block75;
                                if (this.f.d <= 5) {
                                    this.f.g("Add delay for suit removal when exposed card is unknown");
                                }
                                this.f.AboutDialog(1500L, "Suit removal expose");
                                break;
                            }
                            if (var9_12 != var2_4) break block76;
                            if (var5_7 != 0 && this.f.Z == this.f.Y - 1) break block74;
                            if (this.f.d <= 5) {
                                this.f.g("Add delay for suit removal when exposed card is an ace of same suit");
                            }
                            this.f.AboutDialog(1500L, "Suit removal when exposed is an ace");
                            break;
                        }
                        if (this.f.d <= 5) {
                            this.f.g("Regular suit removal delay (1 sec but exit if see Ace on dest)");
                        }
                        var16_20 = System.currentTimeMillis();
                        while (System.currentTimeMillis() <= var16_20 + 1000L) {
                            this.f.aD.AboutDialog();
                            var5_7 = this.d(var1_1.e);
                            if (var2_4 != var5_7) continue;
                            if (!this.f.FPanel.n) {
                                if (this.f.d > 5) break;
                                this.f.g("Got " + var5_7 + " as expected so exit early");
                                break;
                            }
                            if (this.f.d <= 5) {
                                this.f.g("Deal direction not established so need state check");
                            }
lbl201:
                            // 5 sources

                            var10_19 = true;
                            break;
                        }
                    }
                    if (this.f.d <= 5) {
                        var2_4 = var1_1.AboutDialog;
                        this.f.g("Suit removal, suit " + ((var2_4 & 0x70000000) >> 28));
                    }
                    if (var10_19 && !this.AboutDialog(var3_5, 3000, "Suit removal")) {
                        this.b(var1_1, var3_5);
                        if (this.f.FPanel.v) {
                            if (this.f.d <= 5) {
                                this.f.g("No moves dialog after suit removal");
                            }
                            this.f.FPanel.p();
                            this.f.FPanel.v = false;
                            var1_1.rPanel = 2;
                            v0 = var1_1;
                            var2_4 = v0.AboutDialog;
                            this.AboutDialog(v0, (var2_4 & 0x70000000) >> 28, this.f.aY.AboutDialog[2]);
                            --this.f.Y;
                            return;
                        }
                        if (this.f.d <= 5) {
                            this.f.g("Card state did not match after suit removal");
                        }
                        var1_1.rPanel = 1;
                        return;
                    }
                    this.f.AboutDialog(30L, "Suit");
                    break block77;
                }
                var4_6 = (int)this.AboutDialog(var1_1, this.f.aY.AboutDialog[2]);
                var8_14 = (int)SpiderBoardReader.g(var1_1.e);
            }
            if (!var6_9) {
                var1_1.q |= 1;
            }
            if (var4_6 != 0) {
                var1_1.q |= 2;
            }
            if (var7_18) {
                var1_1.q |= 4;
            }
            if (var8_14 != 0) {
                var1_1.q |= 8;
            }
        }
    }

    private int k() {
        int cfr_ignored_0 = this.f.aY.b;
        int n2 = this.q.AboutDialog(this.f.aY.AboutDialog[0], this.f.aY.AboutDialog[1].f[0], this.f.aY.AboutDialog[2]);
        ++this.f.aY.b;
        return n2;
    }

    private void AboutDialog(int n2) {
        --this.f.aY.b;
        int cfr_ignored_0 = this.f.aY.b;
        this.q.AboutDialog(n2, this.f.aY.AboutDialog[0], this.f.aY.AboutDialog[1].f[0], this.f.aY.AboutDialog[2]);
    }

    @Override
    final void AboutDialog(GameMove pJ2, boolean bl2) {
        if ((pJ2.b & 4) != 0) {
            this.b(pJ2);
            return;
        }
        if (this.f.FPanel.v && !bl2) {
            this.f.FPanel.p();
            if (!pJ2.n) {
                if (this.f.d <= 6) {
                    this.f.g("No more moves on something other than AboutDialog deal of remaining cards, move = " + GameMove.AboutDialog(pJ2.AboutDialog));
                }
                GameMove pJ3 = pJ2;
                int n2 = pJ3.AboutDialog;
                this.AboutDialog(pJ3, (n2 & 0x70000000) >> 28, this.f.aY.AboutDialog[2]);
                return;
            }
            int n3 = pJ2.k;
            if (this.f.d <= 6) {
                this.f.g("Backspace undid deal of " + n3 + " cards");
            }
            this.AboutDialog(pJ2.AboutDialog);
            return;
        }
        if (pJ2.n) {
            if (!bl2) {
                if (this.f.d <= 5) {
                    this.f.g("***Undoing deal");
                }
                this.f.FPanel.k();
                this.f.AboutDialog(200L, "Undo feed");
            }
            this.AboutDialog(pJ2.AboutDialog);
            this.b(pJ2);
            return;
        }
        if (!bl2) {
            if (this.f.d <= 5) {
                this.f.g("***Undoing move of " + String.valueOf(pJ2));
            }
            this.f.FPanel.k();
            this.f.AboutDialog(200L, "Undo");
        }
        int n5 = pJ2.AboutDialog;
        n5 = (n5 & 0x70000000) >> 28;
        this.AboutDialog(pJ2, n5, this.f.aY.AboutDialog[2]);
    }

    private boolean l() {
        Card qu2 = this.f.aY.AboutDialog[0].f[0];
        this.f.aD.AboutDialog();
        qw_0 qw_02 = this.AboutDialog(qu2, true, 0, -1);
        int n2 = 0;
        while (n2 < 10) {
            if (n2 % 5 == 0) {
                this.f.c(this.g.p);
            }
            this.f.AboutDialog(300L, "SpiderDeal");
            this.f.aD.AboutDialog();
            qw_0 qw_03 = this.AboutDialog(qu2, true, 0, -1);
            if (this.AboutDialog(qw_02, qw_03)) {
                if (this.f.d <= 5) {
                    this.f.g("Deal completed after looping " + n2 + " times");
                }
                return true;
            }
            ++n2;
        }
        return false;
    }

    @Override
    final int AboutDialog(GameMove pJ2, Card qu2) {
        int n2 = -1;
        if (!this.f.FPanel.o()) {
            n2 = super.AboutDialog(pJ2, qu2);
            if (n2 < 0 && this.f.FPanel.o()) {
                if (this.f.d <= 5) {
                    this.f.g("No more moves dialog up in spider");
                }
                this.f.V = true;
            }
        } else {
            if (this.f.d <= 5) {
                this.f.g("No more moves dialog up in spider");
            }
            this.f.V = true;
        }
        if (n2 > 0) {
            if (this.f.ao.xHandler < 5) {
                if (this.f.d <= 5) {
                    this.f.g("In readExposedCards setting dealMaxIndex to deck depth");
                }
                this.f.ao.xHandler = 5;
            }
            this.f.an = true;
            if (this.f.d <= 3) {
                this.f.g("int readExposedCards expose triggered");
            }
        }
        return n2;
    }

    @Override
    final int[] b() {
        int[] nArray = new int[2];
        nArray[1] = 2;
        int[] nArray2 = nArray;
        return nArray;
    }

    @Override
    final double c() {
        return 0.1;
    }

    private static boolean g(Card qu2) {
        if (qu2.c > 1 && qu2.c < 8) {
            return qu2.q() > 13;
        }
        return qu2.q() > 10;
    }

    @Override
    final void AboutDialog(int n2, CardRun qm_02) {
        Card qu2 = this.rPanel.AboutDialog[0].f[n2];
        qu2.c(qm_02);
        if (this.f.d <= 5) {
            this.f.g("Adding empty card to top of start position stack " + n2);
        }
    }

    @Override
    final void AboutDialog(int n2, int n3, int n4) {
        Object object = this.rPanel.AboutDialog[0].f[n2];
        object = (CardRun)((Card)object).e.get(n3);
        ((CardRun)object).c[0].AboutDialog(n4);
        if (this.f.d <= 5) {
            this.f.g("Setting value " + n4 + " in card " + n3 + " in start position stack " + n2);
        }
    }

    @Override
    final void h() {
        this.f.aY = new qa(this.rPanel, false);
    }
}

