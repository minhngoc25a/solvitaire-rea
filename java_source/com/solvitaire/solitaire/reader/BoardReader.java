/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.reader;

import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.engine.GameStats;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.util.pK;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.util.qa;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.util.qw_0;
import com.solvitaire.solitaire.util.s_0;
import java.awt.Dialog;
import java.awt.Window;
import javax.swing.JOptionPane;

/*
 * Renamed from com.solvitaire.app.e
 */
public abstract class BoardReader {
    private int p;
    private double q;
    int AboutDialog = -1;
    int b = 0;
    private int rPanel;
    private int s;
    private boolean t = false;
    long c;
    long d;
    private int uPanel;
    private int v;
    boolean e;
    private long wHandler;
    private SolitaireSolver xHandler;
    SolitaireGameEngine f;
    GameStats g;
    int h = -1;
    int i = -1;
    int j = -1;
    boolean k;
    private int yHandler = -1;
    private int z = 0;
    pK[] l;
    int m;
    private int[] A;
    private int B;
    Card n = null;
    GameMove o;

    abstract boolean AboutDialog();

    abstract void AboutDialog(GameMove var1, int[] var2, int var3, int var4, boolean var5);

    abstract void AboutDialog(GameMove var1, boolean var2);

    abstract int[] b();

    abstract double c();

    BoardReader(SolitaireSolver qr2) {
        this.xHandler = qr2;
        this.f = this.xHandler.d;
        this.f.ap = this;
        this.g = this.f.FPanel;
        this.l = new pK[350];
    }

    final void d() {
        int n2 = 1;
        MainWindow qb_02 = this.f.aq;
        qb_02.c(n2, null);
        this.p = this.f.aI == 0 ? 100 : 200;
    }

    final boolean e() {
        boolean bl2;
        this.f.aY.h = 0;
        this.AboutDialog = -1;
        this.B = 0;
        int[] nArray = this.A = this.b();
        int n2 = this.A.length;
        int n3 = 0;
        while (n3 < n2) {
            bl2 = nArray[n3];
            CardStack qv2 = this.f.aY.AboutDialog[bl2];
            if ((qv2.d & 0x40) != 0) {
                ++this.B;
            } else {
                Card[] quArray = this.f.aY.AboutDialog[bl2].f;
                int n4 = this.f.aY.AboutDialog[bl2].f.length;
                int n5 = 0;
                while (n5 < n4) {
                    Card qu2 = quArray[n5];
                    if (!qu2.h) {
                        ++this.B;
                    }
                    ++n5;
                }
            }
            ++n3;
        }
        this.l[0] = new pK(this.B);
        if (!this.f.uPanel) {
            this.f.c(this.g.rPanel.AboutDialog() + 4.0, this.g.rPanel.b() + this.g.rPanel.d() / 2.0);
            this.f.aD.AboutDialog();
            n2 = 1;
            MainWindow qb_02 = this.f.aq;
            qb_02.c(n2, null);
            if (!this.AboutDialog()) {
                return false;
            }
        }
        bl2 = this.xHandler.k();
        if (!this.f.uPanel) {
            this.b(new GameMove(this.f, 0, -1), -1);
            if (!this.AboutDialog(0, 6000, "prime")) {
                Object object = this.f.AboutDialog(this.f.CHandler, null);
                ((ErrorDialog)object).AboutDialog("CardMismatch", true);
                String string = "The cards do not match what is showing on the board";
                object = this.f;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
            }
            this.f.AboutDialog(200L, "After board check");
        }
        return bl2;
    }

    final void f() {
        int[] nArray = this.A;
        int n2 = this.A.length;
        int n3 = 0;
        while (n3 < n2) {
            int n4 = nArray[n3];
            if (this.f.aY.AboutDialog[n4] != null) {
                Card[] quArray = this.f.aY.AboutDialog[n4].f;
                int n5 = this.f.aY.AboutDialog[n4].f.length;
                int n6 = 0;
                while (n6 < n5) {
                    Card qu2 = quArray[n6];
                    if (!qu2.h) {
                        Object var8_9 = null;
                        v0.p = var8_9;
                    }
                    ++n6;
                }
            }
            ++n3;
        }
    }

    final qw_0 AboutDialog(Card qu2) {
        long l2;
        qw_0 qw_02 = null;
        long l3 = System.currentTimeMillis();
        while ((l2 = System.currentTimeMillis()) <= l3 + 1500L) {
            qw_02 = this.AboutDialog(qu2, true, 0, -1);
            if (this.f.FPanel.v) break;
            this.f.AboutDialog(20, "getStackEdgesRetried");
            if (this.g(qu2)) break;
            this.f.FPanel.AboutDialog(6, this.f.aY.h, 0, "***getStackEdges on stack " + String.valueOf(qu2) + " gave no cards after " + (l2 - l3) + "ms");
            if (l2 <= l3 + 100L) continue;
            if (this.f.d <= 6) {
                this.f.g("Try and give focus to Solitaire with AboutDialog click");
            }
            this.f.c(this.g.AboutDialog.AboutDialog() + 4.0, this.g.AboutDialog.b() + this.g.AboutDialog.d() / 2.0);
            this.f.AboutDialog(100L, "after click to return focus (auto getStackCards)");
        }
        return qw_02;
    }

    final qw_0 AboutDialog(Card qu2, boolean bl2, int n2, int n3) {
        return this.AboutDialog(qu2, bl2, n2, -1, false, false);
    }

    private qw_0 AboutDialog(Card qu2, boolean bl2, int n2, int n3, boolean bl3, boolean bl4) {
        qw_0 qw_02;
        if (!bl3 && qu2.p != null) {
            if (this.f.d <= 4) {
                this.f.g("Returning cards from cache:" + String.valueOf(qu2.p));
            }
            qw_02 = qu2.p;
        } else {
            qw_02 = new qw_0(qu2);
            if (this.f.FPanel.o()) {
                if (this.f.d <= 5) {
                    this.f.g("No move up so returning null from getStackEdges");
                }
            } else {
                this.f.FPanel.AboutDialog(qw_02, qu2, bl2, n2, n3, bl3, bl4);
                if (bl2 && !bl3) {
                    qw_0 qw_03;
                    if (this.f.d <= 4) {
                        this.f.g("Read cards and setting to cache:" + String.valueOf(qw_02));
                    }
                    v0.p = qw_03 = qw_02;
                } else {
                    if (this.f.d <= 4) {
                        this.f.g("Read cards but not caching:" + String.valueOf(qw_02));
                    }
                    Object var2_4 = null;
                    v1.p = var2_4;
                }
            }
        }
        return qw_02;
    }

    final boolean AboutDialog(qw_0 qw_02, qw_0 qw_03) {
        if (!this.b(qw_02, qw_03)) {
            return true;
        }
        if (qw_03.b == null || qw_03.b.length == 0) {
            return false;
        }
        return qw_03.b[qw_03.b.length - 1].d != qw_02.b[qw_02.b.length - 1].d;
    }

    private boolean b(qw_0 qw_02, qw_0 qw_03) {
        if (qw_02.b == null || qw_03.b == null) {
            return false;
        }
        if (qw_02.b.length != qw_03.b.length) {
            return false;
        }
        int n2 = 0;
        while (n2 < qw_03.b.length) {
            int n3 = qw_03.b[n2].c() - qw_02.b[n2].c();
            if (n3 > 1 || n3 < -1) break;
            ++n2;
        }
        if (n2 == qw_03.b.length) {
            if (this.f.d <= 4) {
                this.f.g("Read cards " + String.valueOf(qw_03) + " OK, locations unchanged");
            }
            return true;
        }
        return false;
    }

    final boolean AboutDialog(Card qu2, int n2, int n3) {
        this.f.aD.AboutDialog();
        if (!this.b(qu2, n2, 1500)) {
            return false;
        }
        this.f.AboutDialog((long)n3);
        return true;
    }

    final boolean AboutDialog(GameMove pJ2) {
        return this.AboutDialog(pJ2, 0, false, false);
    }

    final boolean b(GameMove pJ2, boolean bl2) {
        return this.AboutDialog(pJ2, 0, false, bl2);
    }

    final boolean AboutDialog(GameMove pJ2, int n2) {
        return this.AboutDialog(pJ2, n2, true, false);
    }

    /*
     * Unable to fully structure code
     */
    private void AboutDialog(GameMove var1_1, int var2_2, int var3_3, int var4_4, boolean var5_5, boolean var6_6) {
        var7_7 = var1_1.g;
        var8_8 = var1_1.e;
        var9_9 = var1_1.i;
        var10_10 = 0;
        var11_11 = null;
        var12_12 = 1;
        var13_13 = System.currentTimeMillis();
        if (var13_13 < var7_7.l) {
            this.f.AboutDialog(var7_7.l - var13_13, "Source availability");
            var13_13 = System.currentTimeMillis();
        }
        var15_14 = false;
        var16_15 = var13_13 - var7_7.k;
        var18_19 = 2000L - var16_15;
        if (var18_19 < 1500L) {
            var18_19 = 1500L;
        }
        if (var16_15 < 2000L) {
            var15_14 = true;
            if (this.f.d <= 5) {
                this.f.g("Suit removed recently so recovery delay is " + var18_19);
            }
        } else if (this.f.d <= 4) {
            this.f.g("Recovery delay is " + var18_19);
        }
        var20_25 = var13_13 + var18_19;
        var22_26 = var20_25 + 5000L;
        while (true) {
            block127: {
                block128: {
                    if ((var24_32 = System.currentTimeMillis()) > var20_25) {
                        if (this.f.d <= 5) {
                            this.f.g("Move timed out, current " + var24_32 + " recovery " + var20_25);
                        }
                        if (var1_1.rPanel == 0) {
                            var1_1.rPanel = 1;
                        }
                        return;
                    }
                    if (this.f.d <= 4) {
                        this.f.g("initiateMove, state:" + var12_12 + " retry:" + var10_10 + " start:" + var13_13 + " current:" + var24_32 + " retry:" + var22_26);
                    }
                    if (this.f.FPanel.v) {
                        if (this.f.d <= 6) {
                            this.f.g("Nomove dialog detected by clickDownStable");
                        }
                        var1_1.rPanel = 2;
                        return;
                    }
                    if (var12_12 == 2 && var24_32 > var22_26) {
                        if (var6_6) {
                            if (this.f.d <= 4) {
                                this.f.g("Move requires longer delay, check destination");
                            }
                            if ((var1_1.b & 240) != 0) {
                                var16_16 = var1_1.e.e.size() - 2;
                                if (var16_16 < 0) {
                                    var3_3 = -1;
                                } else {
                                    var17_27 = (CardRun)var1_1.e.e.get(var16_16);
                                    var3_3 = var17_27.c[var17_27.AboutDialog - 1].g;
                                }
                            }
                            if (var3_3 == 0) {
                                this.f.AboutDialog(500L, "retrySuit");
                            } else if (!this.b(var1_1.e, var3_3, 700)) {
                                if (this.f.d <= 6) {
                                    this.f.g("Timed out waiting for destination card value " + var3_3 + " edges:" + String.valueOf(var11_11));
                                }
                                var1_1.rPanel = 1;
                                return;
                            }
                        }
                        if (this.f.d <= 5) {
                            this.f.g("Post click testing timed out, checkDest " + var6_6 + ", retry the click");
                        }
                        var22_26 += (long)this.p;
                        var12_12 = 1;
                        ++var10_10;
                    }
                    if (var11_11 == null || var11_11.b == null) {
                        this.f.aD.AboutDialog();
                        var11_11 = this.AboutDialog(var7_7, true, 0, -1);
                    }
                    if (var11_11 == null || var11_11.b == null) {
                        if (this.f.d <= 5) {
                            this.f.g("Got null reading stack " + String.valueOf(var7_7) + ". Is stack changing? ");
                        }
                        this.f.AboutDialog(20L, "BadEdges");
                        var22_26 += (long)this.p;
                        continue;
                    }
                    if (var12_12 == 1 && var10_10 > 0 && var11_11.b.length < var9_9) {
                        if (this.f.d <= 5) {
                            this.f.g("Retry and stack too short so go to post click state, stack:" + String.valueOf(var11_11));
                        }
                        var12_12 = 2;
                    }
                    if (var12_12 == 1) {
                        if (var11_11.b.length < var9_9) {
                            if (this.f.d <= 5) {
                                this.f.g("Failure reading stack " + String.valueOf(var7_7) + ", length " + var11_11.b.length + " less than " + var9_9 + ". Is stack changing? ");
                            }
                            this.f.AboutDialog(20L, "BadEdges");
                            var11_11 = null;
                            continue;
                        }
                        var16_17 = this.c(var7_7, -1, var3_3);
                        if (var16_17 == var3_3) {
                            var17_28 = true;
                            if (var15_14 && !this.d(var7_7, var16_17, var3_3)) {
                                var17_28 = false;
                            }
                            if (var17_28 && var10_10 > 0 && var3_3 == var4_4) {
                                v0 = this;
                                if (v0.AboutDialog(v0.rPanel, 300, "clickDownstable")) {
                                    if (this.f.d <= 5) {
                                        this.f.g("cardValue " + var16_17 + " on stack " + String.valueOf(var7_7) + " matches pre and the state is unchanged so try again");
                                    }
                                } else {
                                    if (this.f.d <= 5) {
                                        this.f.g("Retry and stack state changed so assume click worked");
                                    }
                                    var12_12 = 2;
                                    var17_28 = false;
                                }
                            }
                            if (var17_28) {
                                if (this.f.d <= 5) {
                                    this.f.g("click approved, cardValue " + var16_17 + " on stack " + String.valueOf(var7_7) + ", post " + var4_4 + " elapsed " + (var20_25 - System.currentTimeMillis()));
                                }
                                if (var4_4 == 0) {
                                    if (this.f.d <= 5) {
                                        this.f.g("Post card will be unknown so check pre is stable for another 200 ms");
                                    }
                                    this.f.AboutDialog(200L, "check stable 0");
                                    this.f.aD.AboutDialog();
                                    var16_17 = this.c(var7_7, -1, var3_3);
                                    if (var16_17 != var3_3) {
                                        if (this.f.d <= 5) {
                                            this.f.g("Pre card changed, is " + var16_17 + " not " + var3_3 + " so wait more, do not click");
                                        }
                                        var22_26 += (long)this.p;
                                        var17_28 = false;
                                    }
                                } else if (var4_4 == var3_3) {
                                    if (this.f.d <= 5) {
                                        this.f.g("Pre and post the same, flag checkDest");
                                    }
                                    var6_6 = true;
                                }
                            }
                            if (var17_28) {
                                if (var10_10 == 0) {
                                    this.f.AboutDialog(20L, "movePrep");
                                }
                                this.f.aD.AboutDialog();
                                var11_11 = this.AboutDialog(var7_7, true, 0, -1);
                                if (var11_11 == null || var11_11.b == null || var11_11.b.length < var9_9) {
                                    if (this.f.d <= 5) {
                                        this.f.g("Got bad edges reading stack " + String.valueOf(var7_7) + " just before click:" + String.valueOf(var11_11));
                                    }
                                    var17_28 = false;
                                } else {
                                    var16_17 = this.c(var7_7, -1, var3_3);
                                    if (var16_17 != var3_3) {
                                        if (this.f.d <= 5) {
                                            this.f.g("Card invalid just before click, keep trying");
                                        }
                                        var17_28 = false;
                                        var1_1.rPanel = 3;
                                    }
                                }
                            }
                            if (var17_28) {
                                if (var5_5) {
                                    var26_33 = this.AboutDialog(var8_8);
                                    if (var26_33 == null) {
                                        if (this.f.d <= 5) {
                                            this.f.g("getStackEdgesRetried on stack " + String.valueOf(var8_8) + " returned null, need retry");
                                        }
                                        var1_1.rPanel = 1;
                                        return;
                                    }
                                    var18_20 = (int)(var8_8.m + 15.0 + this.g.AboutDialog.AboutDialog());
                                    if (var26_33.b.length == 0 || (var8_8.b.d & 2) != 0) {
                                        if (this.f.d <= 2) {
                                            this.f.g("Horizontal or empty vertical stack so drop card at original offset:" + this.q);
                                        }
                                        var19_31 = (int)(this.g.AboutDialog.b() + var8_8.b.g.yHandler + this.q);
                                    } else {
                                        if (this.f.d <= 2) {
                                            this.f.g("Populated vertical stack so drop card 1/6 below bottom:" + this.q);
                                        }
                                        var19_31 = (int)((double)(var26_33.b[var26_33.b.length - 1].c() + this.f.FPanel.c / 4) + this.q);
                                    }
                                    var27_35 = var1_1.e.b();
                                    var28_38 = this.d(var8_8);
                                    if (var27_35 != var28_38) {
                                        var17_28 = false;
                                    } else {
                                        var33_39 = var13_13 - var8_8.k;
                                        if (var33_39 < 1500L && var33_39 > 0L) {
                                            this.f.AboutDialog(var33_39, "Wait for dest suit");
                                            v1 = var16_17;
                                            if (!this.d(var8_8, v1, v1)) {
                                                var1_1.rPanel = 1;
                                                return;
                                            }
                                        }
                                    }
                                    if (var17_28) {
                                        if (!this.AboutDialog(var7_7, var9_9, (qw_0)var11_11, var20_25)) {
                                            if (this.f.d <= 5) {
                                                this.f.g("Drag clickdown failed, keep trying, recovery in" + (var20_25 - System.currentTimeMillis()));
                                            }
                                        } else {
                                            this.f.AboutDialog(10L, "dragStabilize");
                                            this.f.f(var18_20, var19_31 + var2_2);
                                        }
                                    }
                                } else if (!this.AboutDialog(var7_7, var9_9, (qw_0)var11_11, var20_25)) {
                                    if (this.f.d <= 5) {
                                        this.f.g("Move clickdown failed, keep trying, recovery in" + (var20_25 - System.currentTimeMillis()));
                                    }
                                } else {
                                    this.f.f();
                                }
                                this.f.AboutDialog(10L, "Clickup stabilize");
                                var12_12 = 2;
                                var18_21 = this.p;
                                if (var6_6) {
                                    if (this.f.d <= 4) {
                                        this.f.g("checkdest flagged so retry timeout (*6) is " + var18_21);
                                    }
                                    var18_21 = this.p * 6;
                                }
                                if (this.f.al && this.f.Z == this.f.Y) {
                                    var18_21 = this.p * 10;
                                    if (this.f.d >= 5) {
                                        this.f.g("After penultimate move so retry timeout is " + var18_21);
                                    }
                                }
                                var22_26 = System.currentTimeMillis() + (long)var18_21;
                            }
                        } else {
                            if (var16_17 == var4_4) {
                                if (var10_10 == 0) {
                                    if (this.f.d <= 5) {
                                        this.f.g("Got post value " + var16_17 + " not pre " + var3_3 + " on stack " + String.valueOf(var7_7) + " when not AboutDialog retry, assume transient");
                                    }
                                    this.f.AboutDialog(20L, "clickDownStable1");
                                    var11_11 = null;
                                    continue;
                                }
                                if (this.f.d <= 5) {
                                    this.f.g("Got post value in pre-click state so retry worked");
                                }
                                return;
                            }
                            if (var4_4 == 0) {
                                if (this.f.d <= 5) {
                                    this.f.g("Read " + var16_17 + " expecting unknown so accept it");
                                }
                                var12_12 = 2;
                            } else {
                                if (this.f.d <= 5) {
                                    this.f.g("clickDown check of card on stack " + String.valueOf(var7_7) + " before move returned " + var16_17 + " not " + var3_3 + "(checkCardPost? " + var4_4 + ", retries " + var10_10 + ")");
                                }
                                this.f.AboutDialog(20L, "clickDownStable2");
                                var11_11 = null;
                                continue;
                            }
                        }
                    }
                    if (var12_12 != 2) break block127;
                    this.f.aD.AboutDialog();
                    var16_18 = (var7_7.b.d & 16) != 0 ? this.AboutDialog(var7_7, -1, 0, 25, 50L, false) : this.c(var7_7, -1, 0);
                    if (this.f.d <= 5) {
                        this.f.g("Read " + var16_18 + " after clickup on " + String.valueOf(var7_7) + " pre " + var3_3 + " post " + var4_4);
                    }
                    if (var16_18 != var3_3) break block128;
                    var17_27 = this.AboutDialog(var7_7, true, 0, -1);
                    if (var17_27.b == null || this.f.FPanel.v) {
                        var1_1.rPanel = 1;
                        return;
                    }
                    if (this.b((qw_0)var11_11, (qw_0)var17_27)) {
                        if (this.f.d <= 5) {
                            this.f.g("Card unchanged, edges unchanged:" + String.valueOf(var17_27));
                        }
                        if (var3_3 == var4_4) {
                            v2 = this;
                            var18_22 = v2.b(v2.rPanel, 200, "initiateMove");
                            if (this.f.FPanel.v) {
                                if (this.f.d <= 5) {
                                    this.f.g("Return because no more moves");
                                }
                                var1_1.rPanel = 2;
                                return;
                            }
                            if (var18_22 == 0) {
                                if (this.f.d <= 5) {
                                    this.f.g("Stack state changed so assume click worked");
                                }
                                return;
                            }
                        }
                    } else {
                        if (this.f.d <= 5) {
                            this.f.g("Edges changed but card did not, apptype " + this.f.i + " edges " + String.valueOf(var17_27));
                        }
                        if (this.f.i == 2 && var17_27 != null) {
                            var18_23 = var17_27.b.length;
                            if (var18_23 > 3) {
                                var18_23 = 3;
                            }
                            var19_31 = var7_7.p() - var9_9 - 1;
                            var26_34 = 0;
                            while (var26_34 < var18_23) {
                                var27_36 = var7_7.AboutDialog(var19_31 - var26_34);
                                if (var27_36 == null) {
                                    if (this.f.d > 5) break;
                                    this.f.g("Spider card mismatch, cardAt src " + (var19_31 - var26_34) + "  gives null when edges are:" + String.valueOf(var17_27));
                                    break;
                                }
                                var28_38 = var17_27.b[var17_27.b.length - var26_34 - 1].c;
                                if (var28_38 != -2 && var27_36.f != var17_27.b[var17_27.b.length - var26_34 - 1].c) {
                                    if (this.f.d > 5) break;
                                    this.f.g("Spider card mismatch cardAt src " + (var19_31 - var26_34) + ", " + String.valueOf(var27_36) + " does not match " + String.valueOf(var17_27.b[var17_27.b.length - var26_34 - 1]));
                                    break;
                                }
                                ++var26_34;
                            }
                            if (var26_34 == var18_23) {
                                if (this.f.d <= 5) {
                                    this.f.g("Edges match expected completion state:" + String.valueOf(var17_27));
                                }
                                return;
                            }
                            if (var3_3 == var4_4) {
                                v3 = var27_37 = 100 + var9_9 * 20;
                                var16_18 = this.AboutDialog(var7_7, -1, 0, v3, v3 << 1, false);
                            }
                            if (this.f.d <= 5) {
                                this.f.g("Pre " + var3_3 + " post " + var4_4 + " card " + var16_18);
                            }
                        }
                        if (this.f.d <= 5) {
                            this.f.g("Found old card but edges changed since then so wait:" + String.valueOf(var17_27));
                        }
                        var22_26 += (long)this.p;
                        var20_25 += (long)this.p;
                        var11_11 = var17_27;
                    }
                    break block127;
                }
                if (var16_18 != var4_4 && (var16_18 != -2 && var16_18 <= 0 || var4_4 != 0)) break;
                if (var4_4 == 0) {
                    this.f.aD.AboutDialog();
                    v4 = var17_29 = 100 + var9_9 * 20;
                    var16_18 = this.AboutDialog(var7_7, -1, 0, v4, v4 << 1, false);
                    if (var16_18 == -2) {
                        if (this.f.d <= 5) {
                            this.f.g("Got confirmed read error on unknown card (pre was " + var3_3 + ") so accept it, retries: " + var10_10);
                        }
                        return;
                    }
                }
                var17_30 = var7_7.p();
                var18_24 = this.AboutDialog(var7_7, true, 0, -1);
                if (var7_7.o && (var18_24 == null || var18_24.b.length != var17_30 - var9_9)) {
                    if (this.f.d <= 5) {
                        this.f.g("Second level card check failed, expected " + (var17_30 - var9_9) + " cards but read " + String.valueOf(var18_24));
                    }
                } else if (var9_9 < var17_30 - 1) {
                    var19_31 = var17_30 - var9_9 - 2;
                    var26_33 = var7_7.AboutDialog(var19_31);
                    var27_35 = 0;
                    var28_38 = -2;
                    if (var26_33 != null) {
                        var27_35 = var26_33.k;
                        var28_38 = var26_33.f;
                    }
                    var33_40 = this.c(var7_7, var19_31, 0) % 100;
                    if (var27_35 != 0 && var33_40 == 0 || var27_35 == 0 && (!var7_7.o || var28_38 == var33_40)) {
                        if (this.f.d <= 4) {
                            this.f.g("Second level card check worked, facedown" + (boolean)var27_35 + " testcard " + var33_40 + " cardix " + var19_31);
                        }
                        if (!var6_6 || this.b(var1_1.e, var3_3, 700)) {
                            return;
                        }
                        if (this.f.d <= 6) {
                            this.f.g("Timed out waiting for destination card value " + var3_3 + " edges:" + String.valueOf(var11_11) + " so keep trying");
                        }
                    } else if (this.f.d <= 5) {
                        this.f.g("Second level card check failed, facedown" + (boolean)var27_35 + " testcard " + var33_40 + " cardix " + var19_31);
                    }
                } else {
                    if (this.f.d <= 5) {
                        this.f.g("Card matches " + var4_4 + " after stack click (pre was " + var3_3 + ") retries: " + var10_10);
                    }
                    return;
lbl309:
                    // 1 sources

                    if (var16_18 <= 0 && var9_9 == var1_1.g.d.AboutDialog && (var17_27 = var1_1.g.k()) != null && var17_27.b && var24_32 > var13_13 + 300L) {
                        if (this.f.d <= 5) {
                            this.f.g("Got -1 when looking for face down card 300ms after stack click so return");
                        }
                        return;
                    }
                }
            }
            this.f.AboutDialog(10, "Wait for clickdown to be stable");
        }
    }

    private boolean AboutDialog(GameMove pJ2, int n2, boolean bl2, boolean bl3) {
        boolean bl4 = false;
        int n3 = pJ2.g.AboutDialog().g;
        GameMove pJ3 = pJ2;
        int n4 = this.AboutDialog(pJ3, pJ3.g, n3);
        if (this.f.d <= 4) {
            this.f.g("Using " + (bl2 ? "drag" : "click") + " to move cards from " + pJ2.g.c + " to " + pJ2.e.c + " changing " + n3 + " to " + n4);
        }
        if (n4 == 0) {
            if (this.f.d <= 5) {
                this.f.g("Unknown card " + n4 + " so get dest edges for checking");
            }
            this.f.aD.AboutDialog();
            this.AboutDialog(pJ2.e, true, -1, -1);
        }
        this.AboutDialog(pJ2, n2, n3, n4, bl2, bl3);
        if (pJ2.rPanel == 0) {
            bl4 = true;
            if (n4 == 0) {
                if ((pJ2.q & 0x10) != 0) {
                    n2 = 0;
                    while (n2 < 10) {
                        if (!this.g(pJ2.e)) break;
                        if (this.f.d <= 4) {
                            this.f.g("Edges on dest stack exposing unknown card not changed yet");
                        }
                        this.f.AboutDialog(200L, "moveUnknownCard");
                        ++n2;
                    }
                    if (n2 == 10) {
                        if (this.f.d <= 6) {
                            this.f.g("Unknown duplicate test timed out, need recovery");
                        }
                        bl4 = false;
                    }
                }
                if (this.f.d <= 5) {
                    this.f.g("Unknown card so check dest value becomes pre of " + n3);
                }
                if (bl4 && !this.b(pJ2.e, n3, 1000)) {
                    if (this.f.d <= 5) {
                        this.f.g("Card on dest stack does not match " + n3 + " so click failed");
                    }
                    bl4 = false;
                }
            }
        }
        if (bl4) {
            return true;
        }
        if (this.f.d <= 5) {
            this.f.g("Click gave error or card not changed so recover move");
        }
        if (this.m > 0 && this.f.d <= 5) {
            BoardReader e_02 = this;
            this.f.g("Prev state entry:" + e_02.AboutDialog(e_02.m - 1));
        }
        if (this.f.d <= 5) {
            BoardReader e_03 = this;
            this.f.g("State entry:" + e_03.AboutDialog(e_03.m));
        }
        this.f.FPanel.AboutDialog(5, this.rPanel, this.s, "Move has failed with code " + pJ2.rPanel + ", needs recovery");
        return false;
    }

    final boolean b(Card qu2, int n2, int n3) {
        int n4;
        int n5 = 0;
        long l2 = System.currentTimeMillis();
        do {
            this.f.aD.AboutDialog();
            n4 = this.c(qu2, -1, n2);
            if (n5 == 0) {
                n5 = n4;
            }
            if (n4 == n2) {
                if (this.f.d <= 5) {
                    this.f.g("getCard in checkCardValue gives " + n2 + " as expected");
                }
                return true;
            }
            if (this.f.d <= 5) {
                this.f.g("Checkcardvalue first read " + n5 + " and now read " + n4 + " which is not " + n2 + " so retry");
            }
            this.f.AboutDialog(20, "checkCardValue");
        } while (System.currentTimeMillis() <= l2 + (long)n3);
        if (this.f.d <= 6) {
            if (n4 != n5) {
                this.f.g("Timeout in checkCardValue, but card has changed from " + n5 + " to " + n4 + " not " + n2);
            } else {
                this.f.g("Timeout in checkCardValue, expected " + n2 + " but always got " + n4);
                BoardReader e_02 = this;
                this.f.FPanel.AboutDialog(6, this.m, this.l[this.m].AboutDialog, "Failing move state entry:" + e_02.AboutDialog(e_02.m));
                if (this.f.d <= 4) {
                    n3 = this.f.d;
                    this.f.d = 2;
                    this.f.g("***DEBUG TRACE*** timeout in checkCardValue on stack " + String.valueOf(qu2) + " index -1");
                    this.c(qu2, -1, n2);
                    this.f.g("***END DEBUG TRACE***");
                    this.f.d = n3;
                }
            }
        }
        return false;
    }

    private boolean AboutDialog(Card qu2, int n2, qw_0 qw_02, long l2) {
        s_0[] s_0Array = qw_02.b;
        if (qw_02.b.length < n2) {
            if (this.f.d <= 5) {
                this.f.g("Moving " + n2 + " but only read " + s_0Array.length + " so fail click:" + String.valueOf(qw_02));
            }
            return false;
        }
        if (n2 > 2) {
            int n3 = s_0Array[s_0Array.length - 1].c();
            int n4 = (n3 - s_0Array[s_0Array.length - n2].c()) / (n2 - 1);
            int n5 = s_0Array.length - 2;
            while (n5 >= s_0Array.length - n2) {
                int n6 = s_0Array[n5].c();
                int n7 = n3 - n6;
                if (Math.abs(n7 - n4) > 5) {
                    if (this.f.d <= 5) {
                        this.f.g("Card separations not contiguous for len " + n2 + " edges:" + String.valueOf(qw_02));
                    }
                    return false;
                }
                n3 = n6;
                --n5;
            }
        }
        s_0 s_02 = qw_02.b[qw_02.b.length - n2];
        if (s_02.d <= 0) {
            if (qw_02.b.length < 25 && l2 - System.currentTimeMillis() > 400L) {
                if (this.f.d <= 5) {
                    this.f.g("Persistent click location misread of " + s_02.d + " on stack " + String.valueOf(qu2) + ", abort and retry");
                }
                return false;
            }
            if (this.f.d <= 5) {
                this.f.g("Accepting misread of " + s_02.d + " on stack " + String.valueOf(qu2) + ", proceeding with click");
            }
        }
        double d2 = s_02.c();
        if (n2 == 1) {
            this.q = this.f.FPanel.c / 8;
            if (d2 + this.q > this.f.FPanel.AboutDialog.b() + this.f.FPanel.AboutDialog.d() - 3.0) {
                if (this.f.d <= 3) {
                    this.f.g("Height/6 is off table so adjust to hit middle of card");
                }
                this.q = (this.f.FPanel.AboutDialog.b() + this.f.FPanel.AboutDialog.d() - d2) / 2.0;
            }
        } else {
            double d3 = qw_02.b[qw_02.b.length - n2 + 1].c();
            this.q = (d3 - d2) / 2.0;
            if (this.q <= 1.0) {
                if (this.f.d <= 5) {
                    this.f.g("clickYLocation calculated as " + this.q + " so set to 2");
                }
                this.q = 2.0;
            }
        }
        double d4 = d2 + this.q;
        double d5 = qu2.m + 15.0 + this.g.AboutDialog.AboutDialog();
        if ((qu2.b.d & 0x10) != 0 && !this.f.FPanel.c()) {
            int n8 = qu2.p() - 1;
            if (n8 > 2) {
                n8 = 2;
            }
            d5 += this.g.b * 0.2 * (double)n8;
        }
        if (this.f.d <= 5) {
            this.f.g("Click at " + d5 + "," + d4 + " passed edges " + String.valueOf(qw_02));
        }
        this.f.e(d5, d4);
        return true;
    }

    final boolean b(Card qu2) {
        double d2 = qu2.b.g.yHandler + this.g.AboutDialog.b() + 10.0;
        double d3 = qu2.m + (double)((int)(this.g.b / 2.0)) + this.g.AboutDialog.AboutDialog();
        this.f.e(d3, d2);
        this.f.f();
        this.f.aD.AboutDialog();
        return true;
    }

    final boolean AboutDialog(GameMove pJ2, CardStack object) {
        int n2;
        SolitaireGameEngine qo_02;
        Object object2;
        boolean bl2 = false;
        CardRun qm_02 = pJ2.g.d;
        if (qm_02 == null || qm_02.AboutDialog < pJ2.i || qm_02.c[qm_02.AboutDialog - 1].g == 0) {
            object2 = "Logic error in moveAutoStacks";
            qo_02 = this.f;
            qo_02.AboutDialog((String)object2, false);
        }
        if ((pJ2.b & 2) == 0 && pJ2.i != qm_02.AboutDialog) {
            object = pJ2.g.d.b(pJ2.i);
            if (this.f.d <= 4) {
                this.f.g("Auto stack split of " + pJ2.i + " from " + pJ2.g.c + " to " + pJ2.e.c);
            }
            pJ2.e.AboutDialog((CardRun)object);
            n2 = 0;
        } else if ((pJ2.b & 2) == 0 && pJ2.i == qm_02.AboutDialog && (pJ2.b & 0xF0) == 0) {
            if (this.f.d <= 4) {
                this.f.g("Auto stack move of " + pJ2.i + " from " + pJ2.g.c + " to " + pJ2.e.c);
            }
            n2 = pJ2.e.AboutDialog(pJ2.g, 0, (CardStack)object);
        } else {
            if (this.f.d <= 4) {
                this.f.g("Auto stack join of " + pJ2.i + " from " + pJ2.g.c + " to " + pJ2.e.c);
            }
            n2 = pJ2.e.AboutDialog(pJ2.g, pJ2.i, (CardStack)object);
        }
        if (n2 < 0) {
            object2 = "moveAutoStacks bad return code " + n2 + " from joinstack";
            qo_02 = this.f;
            qo_02.AboutDialog((String)object2, false);
        }
        if ((qm_02 = pJ2.g.d) != null) {
            if (qm_02.b) {
                qm_02.b = false;
                bl2 = true;
            }
            if (qm_02.c[qm_02.AboutDialog - 1].g == 0) {
                if (this.f.d <= 5) {
                    this.f.g("Unknown card on stack " + pJ2.g.c);
                }
                this.n = pJ2.g;
                this.o = pJ2;
            }
        }
        if ((qm_02 = pJ2.e.d) != null && qm_02.b) {
            qm_02.b = false;
            bl2 = true;
        }
        return bl2;
    }

    final void AboutDialog(GameMove pJ2, int n2, CardStack qv2) {
        int n3;
        Object object = pJ2.e.d;
        int n4 = n3 = object == null ? 0 : ((CardRun)object).AboutDialog;
        if (n2 == 0) {
            if (object == null || n3 < pJ2.i || ((CardRun)object).c[((CardRun)object).AboutDialog - 1].g == 0) {
                this.f.FPanel.AboutDialog(9, 0, pJ2.AboutDialog);
                String string = "Logic error in atMoveUnjoinStacks, insufficient cards for restoring from dest";
                object = this.f;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
            }
        } else {
            n3 += 13;
        }
        n2 = n2 * 100 + (pJ2.p ? 20 : 0) + (pJ2.i < n3 ? pJ2.i : 0);
        if (this.f.d <= 5) {
            this.f.g("Auto stack unjoin with split " + n2 + " src " + pJ2.g.c + " dest " + pJ2.e.c);
        }
        pJ2.e.b(pJ2.g, n2, qv2);
        this.b(pJ2);
    }

    private void AboutDialog(GameMove pJ2, int n2, int n3) {
        if (this.f.d <= 4) {
            this.f.g("Into atMovesetStackCard for card " + n3 + " at move level " + pJ2.j);
        }
        int n4 = 0;
        int[] nArray = this.A;
        int n5 = this.A.length;
        int n6 = 0;
        while (n6 < n5) {
            int n7 = nArray[n6];
            Object object = this.f.aY.AboutDialog[n7];
            Card[] quArray = ((CardStack)object).f;
            int n8 = ((CardStack)object).f.length;
            int n9 = 0;
            while (n9 < n8) {
                object = quArray[n9];
                if (!((Card)object).h) {
                    if (((Card)object).c == n2) {
                        if (this.f.d <= 5) {
                            this.f.g("Set card " + n3 + " in state array entry " + n4 + " at level " + pJ2.j);
                        }
                        if (this.l[this.m] == null) {
                            this.l[this.m] = new pK(this.B);
                        }
                        this.l[this.m].f[n4] = n3;
                        return;
                    }
                    ++n4;
                }
                ++n9;
            }
            ++n6;
        }
    }

    private int[] i() {
        boolean bl2 = false;
        this.f.aD.AboutDialog();
        int[] nArray = new int[this.B];
        int n2 = 0;
        int[] nArray2 = this.A;
        int n3 = this.A.length;
        int n4 = 0;
        while (n4 < n3) {
            int n5 = nArray2[n4];
            CardStack qv2 = this.f.aY.AboutDialog[n5];
            if ((qv2.d & 0x40) != 0) {
                nArray[n2++] = this.AboutDialog(qv2);
            } else {
                int n6 = 0;
                while (n6 < qv2.f.length) {
                    if (!qv2.f[n6].h) {
                        int n7 = this.d(qv2.f[n6]);
                        if (this.f.d < 4) {
                            this.f.g("Readstate for card " + qv2.AboutDialog + n6 + " gave " + n7);
                        }
                        if (n7 < 0) {
                            n7 = 0;
                        } else {
                            bl2 = true;
                        }
                        nArray[n2++] = n7;
                    }
                    ++n6;
                }
            }
            ++n4;
        }
        if (!bl2) {
            if (this.f.d <= 5) {
                this.f.g("Readstate failed to read any cards");
            }
            return null;
        }
        if (this.f.d <= 4) {
            this.f.g("***ReadState returning " + BoardReader.b(nArray));
        }
        return nArray;
    }

    private int AboutDialog(CardStack qv2) {
        int n2;
        boolean bl2 = false;
        int n3 = 0;
        while (n3 < qv2.f.length) {
            int n4 = this.d(qv2.f[n3]);
            if (n4 % 100 == 13) {
                if (this.f.d <= 5) {
                    this.f.g("Readstate for spider suit card " + n3 + " gave " + n4);
                }
                bl2 = true;
            } else if (bl2) break;
            ++n3;
        }
        if (!bl2) {
            if (this.f.d <= 5) {
                this.f.g("No spider suit cards found");
            }
            n2 = -1;
        } else {
            n2 = n3 + 100;
        }
        return n2;
    }

    private void AboutDialog(pK pK2) {
        int n2 = 0;
        int[] nArray = this.A;
        int n3 = this.A.length;
        int n4 = 0;
        while (n4 < n3) {
            int n5 = nArray[n4];
            CardStack qv2 = this.f.aY.AboutDialog[n5];
            if ((qv2.d & 0x40) != 0) {
                pK2.f[n2++] = this.b(qv2);
            } else {
                Card[] quArray = qv2.f;
                int n6 = qv2.f.length;
                int n7 = 0;
                while (n7 < n6) {
                    Object object = quArray[n7];
                    if (!((Card)object).h) {
                        int n8 = 0;
                        if (((Card)object).h()) {
                            if (((Card)object).d == null) {
                                n8 = -1;
                            } else if (!((Card)object).d.b) {
                                n8 = ((Card)object).b();
                            } else if (qv2.AboutDialog == 0 && this.f.i != 5) {
                                String string = "Storing state when main stack cards marked as face down";
                                object = this.f;
                                ((SolitaireGameEngine)object).AboutDialog(string, false);
                            }
                        }
                        pK2.f[n2] = n8;
                        ++n2;
                    }
                    ++n7;
                }
            }
            ++n4;
        }
        if (this.f.d <= 4) {
            this.f.g("GetState returning " + BoardReader.b(pK2.f));
        }
    }

    private int b(CardStack object) {
        int n2 = 100;
        Card[] quArray = ((CardStack)object).f;
        int n3 = ((CardStack)object).f.length;
        int n4 = 0;
        while (n4 < n3) {
            object = quArray[n4];
            if (((Card)object).d == null) break;
            ++n2;
            ++n4;
        }
        if (n2 == 100) {
            n2 = -1;
        }
        if (this.f.d <= 5) {
            SolitaireGameEngine qo_02 = this.f;
            qo_02.g("Spider suits state pseudo card value (number of suits) " + n2 + " reversed?" + qo_02.FPanel.c());
        }
        return n2;
    }

    final void b(GameMove pJ2, int n2) {
        this.m = n2 + 1;
        if (this.l[this.m] == null) {
            this.l[this.m] = new pK(this.B);
        }
        this.g();
        BoardReader e_02 = this;
        e_02.AboutDialog(e_02.l[this.m]);
        this.l[this.m].AboutDialog = pJ2.AboutDialog;
        this.l[this.m].h = this.f.Q;
        this.l[this.m].b = (pJ2.q & 1) != 0;
        this.l[this.m].c = (pJ2.q & 2) != 0;
        this.l[this.m].d = (pJ2.q & 4) != 0;
        boolean bl2 = this.l[this.m].e = (pJ2.q & 8) != 0;
        if (this.f.d <= 5) {
            BoardReader e_03 = this;
            this.f.g("Stored state " + e_03.AboutDialog(e_03.m));
        }
    }

    final void b(GameMove object) {
        if (((GameMove)object).AboutDialog != this.l[this.m].AboutDialog) {
            String string = "Logic error, undo references move " + GameMove.AboutDialog(((GameMove)object).AboutDialog) + " at level " + (((GameMove)object).j + 1) + " but current state (" + this.m + ") set up with " + GameMove.AboutDialog(this.l[this.m].AboutDialog);
            object = this.f;
            ((SolitaireGameEngine)object).AboutDialog(string, false);
        }
        --this.m;
        this.j();
    }

    final void g() {
        CardStack qv2 = this.f.aY.AboutDialog[0];
        if ((qv2.d & 1) == 0) {
            return;
        }
        if (this.l[this.m] == null) {
            this.l[this.m] = new pK(this.B);
        }
        int n2 = 0;
        while (n2 < qv2.f.length) {
            int n3 = 0;
            for (CardRun qm_02 : qv2.f[n2].e) {
                if (!qm_02.b) break;
                ++n3;
            }
            this.l[this.m].g[n2] = n3;
            ++n2;
        }
    }

    private void j() {
        CardStack qv2 = this.f.aY.AboutDialog[0];
        if ((qv2.d & 1) == 0) {
            return;
        }
        int n2 = 0;
        while (n2 < qv2.f.length) {
            int n3 = this.l[this.m].g[n2];
            if (n3 > 0) {
                for (CardRun qm_02 : qv2.f[n2].e) {
                    ((CardRun)var5_5.next()).b = true;
                    if (--n3 == 0) break;
                }
            }
            ++n2;
        }
    }

    private int AboutDialog(int n2, int n3, int[] nArray) {
        if (this.f.d <= 5) {
            this.f.g(String.format("Scanning back from level %3d to %3d for state match against        cards %s", n3, 0, BoardReader.b(nArray)));
        }
        n2 = n3;
        while (n2 >= 0) {
            n3 = this.l[n2].AboutDialog;
            if ((n3 >> 24 & 4) == 0) {
                n3 = 0;
                while (n3 < this.B) {
                    if ((nArray[n3] != 0 || this.l[n2].f[n3] != -1) && this.l[n2].f[n3] != nArray[n3]) break;
                    ++n3;
                }
                if (n3 == this.B) break;
                if (this.f.d <= 5) {
                    this.f.g(String.format("Mismatch at entry%3d, %s", n3, this.AboutDialog(n2)));
                }
            }
            --n2;
        }
        if (n2 < 0) {
            if (this.f.d <= 5) {
                this.f.g("Did not find match for requested state");
            }
            return -1;
        }
        if (this.f.d <= 5) {
            this.f.g(String.format("Match           state %s", this.AboutDialog(n2)));
        }
        return n2;
    }

    private boolean d(Card qu2, int n2, int n3) {
        int n4 = n3;
        int n5 = n3 + 12;
        if (n2 >= n4 && n2 <= n5) {
            if (this.f.d <= 5) {
                this.f.g("Need extra check because exposed card " + n2 + " removing suit " + n5 + "-" + n4 + " might confuse check");
            }
            if ((n2 = this.AboutDialog(qu2, -1, 0, 100, 200L, false)) != n3) {
                if (this.f.d <= 5) {
                    this.f.g("Spider extra check for stable card after stack removal failed");
                }
                return false;
            }
            if (this.f.d <= 5) {
                this.f.g("Spider extra check complete");
            }
        } else if (this.f.d <= 5) {
            this.f.g("Spider extra check not required because " + n2 + " not between " + n5 + " and " + n4);
        }
        return true;
    }

    final int c(Card qu2) {
        int n2;
        int n3;
        Card qu3 = this.f.aY.AboutDialog[qu2.b.AboutDialog].f[qu2.c];
        CardRun qm_02 = qu3.d;
        if (qm_02 != null) {
            n3 = qm_02.c[qm_02.AboutDialog - 1].g;
        } else {
            n3 = -1;
            this.f.AboutDialog(100L, "checkCardEmpty");
        }
        long l2 = System.currentTimeMillis();
        while ((n2 = this.c(qu2, -1, n3)) != n3) {
            if (this.f.d <= 4) {
                this.f.g("Checkcard looking for " + n3 + " on stack " + qu3.c + " and found " + n2);
            }
            this.f.AboutDialog(20, "checkCard");
            if (System.currentTimeMillis() > l2 + 700L) break;
            this.f.aD.AboutDialog();
        }
        if (n2 != n3) {
            if (this.f.d <= 6) {
                this.f.g("***Expected card " + n3 + " does not match card read " + n2 + " from stack " + String.valueOf(qu2) + " after synch");
            }
            return 9999;
        }
        return n2;
    }

    final int AboutDialog(Card qu2, int n2, int n3, int n4, boolean bl2) {
        int n5 = -1;
        int n6 = 0;
        while (n6 < 15) {
            n5 = this.c(qu2, n2, n3);
            if (n5 > 0 && (n3 <= 0 || n5 != n3) && (n4 <= 0 || n5 != n4)) break;
            if (bl2 && n5 < 0 && n6 == 10) {
                if (this.f.d <= 5) {
                    this.f.g("getNonDup failed after 10 tries, assume empty stack");
                }
                return n5;
            }
            this.f.aD.AboutDialog();
            this.f.AboutDialog(100L, "GetNonDupCard");
            if (this.f.d <= 5) {
                this.f.g("Re-reading card because GetNonDupCard read " + n5);
            }
            ++n6;
        }
        if (n5 == n3 || n5 == n4) {
            n5 = -2;
        }
        return n5;
    }

    final int d(Card qu2) {
        return this.AboutDialog(qu2, -1, 0, 0, 0L, false);
    }

    final int c(Card qu2, int n2, int n3) {
        return this.AboutDialog(qu2, n2, n3, 0, 0L, false);
    }

    final int AboutDialog(Card qu2, int n2, int n3, int n4, long l2, boolean bl2) {
        int n5;
        block17: {
            n5 = -2;
            if (qu2 == null) {
                return -2;
            }
            if (n4 > 0) {
                long l3;
                this.f.aD.AboutDialog();
                qw_0 qw_02 = this.AboutDialog(qu2, true, 0, -1, true, bl2);
                if (qw_02.b == null) {
                    return -2;
                }
                boolean bl3 = qw_02.b.length == 0;
                int n6 = this.AboutDialog(qu2, n2, false, n3, false);
                this.f.AboutDialog(0, "getCardClear");
                int n7 = 0;
                long l4 = l3 = System.currentTimeMillis();
                while (true) {
                    this.f.aD.AboutDialog();
                    ++n7;
                    this.f.AboutDialog(n4, "getCard");
                    qw_0 qw_03 = this.AboutDialog(qu2, true, 0, -1, true, bl2);
                    if (qw_03.b == null) {
                        return n5;
                    }
                    boolean bl4 = qw_03.b.length == 0;
                    n5 = this.AboutDialog(qu2, n2, false, n3, false);
                    long l5 = System.currentTimeMillis();
                    if (n5 != n6) {
                        if (this.f.d <= 5) {
                            this.f.g("In getCard card changed from " + n6 + " to " + n5);
                        }
                        l4 = l5;
                    } else if (bl4 && !bl3 || !bl4 && bl3) {
                        if (this.f.d <= 5) {
                            this.f.g("In getCard edges changed from " + String.valueOf(qw_02) + " to " + String.valueOf(qw_03));
                        }
                        l4 = l5;
                    } else if (!bl4 && !bl3 && qw_03.b[qw_03.b.length - 1].k != qw_02.b[qw_02.b.length - 1].k) {
                        l4 = l5;
                    }
                    if (l5 > l4 + (long)n4) {
                        if (this.f.d <= 5) {
                            this.f.g("Card stabilized at value " + n5 + " after " + n7 + " frames tested");
                        }
                        break block17;
                    }
                    if (l5 > l3 + l2) {
                        if (this.f.d <= 5) {
                            this.f.g("Card did not stabilize within timeout " + l2 + "," + n7 + " frames tested");
                        }
                        n5 = -2;
                        break block17;
                    }
                    qw_02 = qw_03;
                    bl3 = bl4;
                    n6 = n5;
                }
            }
            n5 = this.AboutDialog(qu2, n2, false, n3, bl2);
            if (n5 <= 0 && this.f.d <= 4) {
                this.f.g("getCard returned " + n5 + " for stack " + String.valueOf(qu2) + " card " + n2);
            }
        }
        return n5;
    }

    final int AboutDialog(Card qu2, int n2, boolean bl2) {
        this.f.AboutDialog(300L, "readInCard");
        return this.AboutDialog(qu2, -1, bl2, false, true);
    }

    final int AboutDialog(Card qu2, int n2, boolean bl2, boolean bl3, boolean n3) {
        this.wHandler = System.currentTimeMillis();
        boolean bl4 = false;
        int n4 = -1;
        if (n3 != 0 && (n3 = this.e(qu2)) == 0) {
            if (this.f.d <= 5) {
                this.f.g("Stabilize of stack " + String.valueOf(qu2) + " failed");
            }
            return -2;
        }
        n3 = 0;
        while (n3 < 100000) {
            if (n3 > 0 && this.f.d <= 4) {
                this.f.g("getCard retry " + n3);
            }
            if ((n4 = this.AboutDialog(qu2, n2, bl2, -1, false)) > 0) break;
            if (this.f.FPanel.o()) {
                if (this.f.d <= 6) {
                    this.f.g("No more move dialog in readInCard");
                }
                return -1;
            }
            if (System.currentTimeMillis() > this.wHandler + 2000L) {
                bl4 = true;
                break;
            }
            this.f.aD.AboutDialog();
            this.f.AboutDialog(10, "readInCard");
            ++n3;
        }
        if (bl4) {
            if (!bl3 && this.f.d <= 6) {
                this.f.b(2, "Auto.readInCard");
                this.f.g("Timeout reading card on stack " + String.valueOf(qu2) + " index " + n2);
                this.AboutDialog(qu2, n2, bl2, -1, false);
                this.f.n();
            }
            return -1;
        }
        if (this.f.d <= 5) {
            this.f.g("getCardRetried returning " + n4);
        }
        return n4;
    }

    private int AboutDialog(Card object, int n2, boolean bl2, int n3, boolean bl3) {
        if (this.f.d <= 3) {
            this.f.g("Getcard for stack " + String.valueOf(object) + " index " + n2);
        }
        boolean bl4 = bl2 || n2 >= 0;
        int n4 = -1;
        if (bl2) {
            n4 = n2 == -1 ? 1 : ((Card)object).p() - n2;
        }
        object = this.AboutDialog((Card)object, bl4, n3, n4, false, bl3);
        if (((qw_0)object).b == null) {
            if (this.f.d <= 5) {
                this.f.g("getStackEdges returned null so getCardInt returns UNKNOWN/ERROR");
            }
            if (n3 == -1) {
                return -1;
            }
            return -2;
        }
        if (((qw_0)object).b.length == 0) {
            return -1;
        }
        if (n2 == -1) {
            n2 = ((qw_0)object).b.length - 1;
        }
        if (n2 > ((qw_0)object).b.length - 1) {
            return -2;
        }
        object = ((qw_0)object).b[n2];
        if (object == null) {
            if (n3 == -1) {
                return -1;
            }
            return -2;
        }
        if (this.f.d <= 3) {
            this.f.g("Stacked card at index " + n2 + " is " + String.valueOf(object) + " facedown? " + ((s_0)object).o);
        }
        if (((s_0)object).o || ((s_0)object).b == 0) {
            return 0;
        }
        return ((s_0)object).b * 100 + ((s_0)object).c;
    }

    private boolean g(Card qu2) {
        qw_0 qw_02 = qu2.p;
        if (qw_02 == null || qw_02.b == null) {
            return false;
        }
        this.f.aD.AboutDialog();
        qw_0 qw_03 = this.AboutDialog(qu2, true, 0, -1, true, false);
        if (qw_03.b == null) {
            return false;
        }
        qw_0 qw_04 = qw_03;
        Card qu3 = qu2;
        qu2.p = qw_04;
        if (this.AboutDialog(qw_02, qw_03)) {
            if (this.f.d <= 5) {
                this.f.g("Stack " + String.valueOf(qu2) + " has changed, Old:" + String.valueOf(qw_02) + " New:" + String.valueOf(qw_03));
            }
            return false;
        }
        if (this.f.d <= 5) {
            this.f.g("Stack " + String.valueOf(qu2) + " has not changed, Old:" + String.valueOf(qw_02) + " New:" + String.valueOf(qw_03));
        }
        return true;
    }

    final boolean e(Card qu2) {
        if (this.f.d <= 5) {
            this.f.g("Stabilizing stack " + String.valueOf(qu2));
        }
        this.f.aD.AboutDialog();
        long l2 = System.currentTimeMillis();
        qu2 = this.f.aY.AboutDialog[qu2.b.AboutDialog].f[qu2.c];
        this.AboutDialog(qu2, true, 0, -1, false, false);
        this.f.aK = false;
        this.f.AboutDialog(100L, "stabilizeStack");
        this.f.AboutDialog(100, "stabilizeStack");
        if (this.f.d <= 5) {
            this.f.g("Read stack and paused 50ms");
        }
        while (true) {
            if (System.currentTimeMillis() > l2 + 1500L) {
                if (this.f.d <= 5) {
                    this.f.g("State check failed, check if no more moves is up");
                }
                if (this.f.FPanel.v && this.f.d <= 5) {
                    this.f.g("No more moves up during stabilizeStack");
                }
                return false;
            }
            boolean bl2 = this.g(qu2);
            if (qu2.p != null && qu2.p.b != null && qu2.p.b.length > 0 && bl2) {
                return true;
            }
            this.f.aK = false;
            this.f.AboutDialog(100L, "stabilizeStack2");
            this.f.AboutDialog(100, "stabilizeStack2");
        }
    }

    private void AboutDialog(String object) {
        object = new JOptionPane("The first single click move has triggered move failure recovery.\nHave you set 'Single tap to move' in your " + (String)object + " options?\nYou need to either set this option or go to Solvitaire settings\nto turn off the 'Allow single click moves' option.\n\nSetting 'Single tap to move' gives better performance.\n\n", 3, -1);
        object = ((JOptionPane)object).createDialog(null, "Check single click setting");
        ((Dialog)object).setModalityType(Dialog.ModalityType.DOCUMENT_MODAL);
        ((Window)object).setLocation(this.f.AboutDialog((double)(this.f.FPanel.AboutDialog.AboutDialog.width / 2)) - 200, this.f.b((double)(this.f.FPanel.AboutDialog.AboutDialog.height / 2)) - 100);
        ((Dialog)object).setVisible(true);
    }

    private int h(Card qu2) {
        int n2 = 0;
        if (this.f.ar != null) {
            int[] nArray = this.xHandler.d();
            n2 = this.f.ar.AboutDialog(qu2, nArray);
        }
        return n2;
    }

    final void AboutDialog(int[] nArray, int n2) {
        if (this.f.uPanel) {
            if (this.f.l.c == 6 && n2 >= 0) {
                this.f.ar.b(nArray[n2]);
            }
            this.f.g();
        }
    }

    final int AboutDialog(qa qa2, Card qu2, boolean n2, boolean bl2, boolean bl3) {
        Object object;
        int n3;
        int n4;
        int n5;
        String string;
        Object object2;
        this.f.ak = true;
        this.f.al = n2;
        int n6 = -1;
        this.f.Y = qa2.h;
        this.uPanel = 0;
        this.v = 0;
        if (n2 != 0 && this.f.m == 3 && this.f.i == 2 && this.f.l.c == 6) {
            this.f.FPanel.q();
            this.f.AboutDialog(3000L, "Wait for deal");
            this.f.aY.h = 0;
            this.f.aD.AboutDialog();
            this.h();
            this.b(new GameMove(this.f, 0, -1), -1);
            if (!this.AboutDialog(0, 6000, "play retry")) {
                object2 = this.f.AboutDialog(this.f.CHandler, null);
                ((ErrorDialog)object2).AboutDialog("CardMismatch", true);
                string = "The cards do not match what is showing on the board";
                SolitaireGameEngine qo_02 = this.f;
                qo_02.AboutDialog(string, false);
            }
            this.f.X = 0;
        } else {
            this.f.X = 0;
            while (this.f.X < this.f.aY.h) {
                if (this.f.X >= this.f.Y || this.f.aY.d[this.f.X] != qa2.d[this.f.X]) break;
                ++this.f.X;
            }
            if (this.f.d <= 5) {
                this.f.g("Play mismatch from level " + this.f.aY.h + " back to " + this.f.X + " and on to level " + this.f.Y + ", finishing:" + (n2 != 0));
            }
            this.f.FPanel.AboutDialog(5, this.f.aY.h - 1, 0);
            this.xHandler.AboutDialog(5, this.f.aY, "Auto moves(pre)");
            this.xHandler.AboutDialog(5, qa2, "Target moves(post)");
            int n7 = this.f.X;
            n5 = this.f.aY.h;
            int[] nArray = new int[this.f.aY.h];
            long l2 = System.currentTimeMillis();
            int n8 = 3;
            MainWindow qb_02 = this.f.aq;
            qb_02.c(n8, null);
            if (this.f.uPanel && !bl3 && this.f.m != 1 && this.f.aY.h > this.f.X) {
                this.f.aq.e.AboutDialog("Undo these moves", this.f.aY.d, this.f.aY.h, this.f.X, this.f.aY.h - 1, true);
                this.f.aR = true;
                this.f.aq.AboutDialog(23);
            }
            if (this.f.aY.h > this.f.X) {
                this.f.AboutDialog(200L, "Pre-undo delay");
                this.f.AboutDialog(17, true);
                this.f.Z = this.f.aY.h;
                while (this.f.Z > this.f.X) {
                    if (this.f.d <= 4) {
                        this.f.g("Undo, start " + this.f.X + " playlocation " + this.f.Z + " depth " + this.f.aZ.h);
                    }
                    int n9 = 3;
                    Object object3 = this.f.aq;
                    ((MainWindow)object3).c(n9, null);
                    if (!bl3) {
                        if (this.f.uPanel && this.f.m != 1) {
                            BoardReader e_02 = this;
                            e_02.AboutDialog(e_02.f.aY.g, this.f.Z);
                            if (this.f.aq.e != null) {
                                this.f.aq.e.AboutDialog(this.f.aY.h - this.f.Z);
                            }
                        }
                        if (this.f.aR) {
                            this.f.aq.AboutDialog(7);
                        } else if (this.f.m != 1) {
                            this.f.AboutDialog(50L, "Undo minimum delay");
                        }
                        this.f.k("StartPlay");
                    }
                    if (!this.f.uPanel) {
                        this.f.FPanel.o();
                    }
                    BoardReader e_03 = this;
                    e_03.b(e_03.f.aY.d, this.f.Z - 1);
                    long l3 = System.currentTimeMillis();
                    nArray[this.f.Z - 1] = (int)(l3 - l2);
                    l2 = l3;
                    if (this.f.uPanel) {
                        this.f.ar.b(false);
                    } else if (n7 >= 0 && this.f.Z == this.f.X + 1) {
                        if (this.f.d <= 5) {
                            this.f.g("Testing state after undo, start " + n7 + " end " + n5);
                        }
                        this.f.aD.b(2000);
                        if (!this.AboutDialog(n7, 300, "undo")) {
                            this.f.g("Card state mismatch after undo, need to recover, start " + n7 + " end " + n5);
                            n4 = n5;
                            n3 = n7;
                            int[] nArray2 = nArray;
                            object = this;
                            boolean bl4 = false;
                            int n10 = -1;
                            if (n3 != ((BoardReader)object).m) {
                                String string2 = "Logic error - atMoveCurrentState is " + ((BoardReader)object).m + " but startUndo is " + n3;
                                object3 = ((BoardReader)object).f;
                                ((SolitaireGameEngine)object3).AboutDialog(string2, false);
                            }
                            int n11 = 3;
                            while (!bl4) {
                                int n12;
                                int n13;
                                ((BoardReader)object).f.AboutDialog(200L, "playMatchUndo");
                                Object object4 = ((BoardReader)object).i();
                                if (object4 == null) {
                                    ((BoardReader)object).f.FPanel.p();
                                    ((BoardReader)object).f.AboutDialog(1000L, "After dismiss");
                                    object4 = ((BoardReader)object).i();
                                    if (object4 == null) break;
                                }
                                if ((n13 = ((BoardReader)object).AboutDialog(0, n4, (int[])object4)) < 0) {
                                    if (n11 == 0) {
                                        SolitaireGameEngine qo_03 = ((BoardReader)object).f;
                                        String string3 = "Failed to match card states during undo operation";
                                        object4 = qo_03;
                                        qo_03.AboutDialog(string3, false);
                                    } else {
                                        if (((BoardReader)object).f.d <= 6) {
                                            ((BoardReader)object).f.g("Undo match failed - allowing single undo click and retry");
                                        }
                                        --n11;
                                        n13 = n3 + 1;
                                    }
                                }
                                if ((n12 = n13 - n3) > n10) {
                                    n10 = n12;
                                }
                                if (n12 <= 0) {
                                    bl4 = true;
                                    continue;
                                }
                                if (((BoardReader)object).f.d <= 5) {
                                    ((BoardReader)object).f.g("Undo got to level " + n13 + " so we need " + n12 + " more clicks");
                                }
                                int n14 = 0;
                                while (n14 < n12) {
                                    ((BoardReader)object).f.AboutDialog(((BoardReader)object).f.FPanel.uPanel);
                                    ((BoardReader)object).f.AboutDialog(200L, "playMatchUndo2");
                                    ++n14;
                                }
                            }
                            if (((BoardReader)object).f.d <= 6) {
                                ((BoardReader)object).f.g("Had to recover " + n10 + " steps for undo segment from " + n3 + " to " + n4);
                            }
                            int[] cfr_ignored_0 = ((BoardReader)object).f.aY.d;
                            n10 = n4;
                            n4 = n3;
                            int n15 = 6;
                            object = ((BoardReader)object).xHandler;
                            if (6 >= ((SolitaireSolver)object).d.d) {
                                StringBuffer stringBuffer = new StringBuffer();
                                while (n4 < n10) {
                                    stringBuffer.append(GameMove.AboutDialog(((SolitaireSolver)object).d.aZ.d[n4]));
                                    stringBuffer.append("(");
                                    stringBuffer.append(nArray2[n4]);
                                    stringBuffer.append(")");
                                    ++n4;
                                }
                                ((SolitaireSolver)object).d.g(stringBuffer.toString());
                            }
                            this.f.Z = n3;
                            this.f.g("After recovery, playdepth is " + this.f.Z + " playStart is " + this.f.X);
                            if (this.f.Z < this.f.X) {
                                this.f.g("playDepth less than playstart, reset for playback and break");
                                this.f.X = this.f.Z;
                                break;
                            }
                            ++this.f.Z;
                        }
                        if (this.f.d <= 4) {
                            this.f.g("Undo run tested OK, pause for 200");
                        }
                        this.f.AboutDialog(200L, "Post undo");
                    }
                    --this.f.Z;
                }
                this.f.AboutDialog(17, false);
            }
        }
        n5 = 1;
        if (bl3) {
            this.f.aq.e.AboutDialog("Your moves so far", qa2.d, 0, this.f.Y, this.f.Y - 1, false);
            this.f.aq.e.AboutDialog(this.f.Y - 1);
        } else {
            this.f.d();
            if (n2 != 0) {
                if (!this.f.aH || this.f.uPanel && this.f.m != 1) {
                    this.AboutDialog(qa2.g, this.f.X);
                    this.f.aq.e.AboutDialog("Solution in " + this.f.Y + " moves", qa2.d, 0, this.f.Y, this.f.X, false);
                    this.f.aq.e.AboutDialog(this.f.X);
                }
                if (!this.f.aG) {
                    this.f.aR = true;
                    this.f.aq.AboutDialog(1);
                }
            } else if (this.f.uPanel && this.f.m != 1 && this.f.Z >= this.f.X && this.f.Y > 0) {
                this.AboutDialog(qa2.g, this.f.X);
                this.f.aR = true;
                this.f.aq.e.AboutDialog("Make these moves to expose AboutDialog card", qa2.d, this.f.X, this.f.Y, this.f.Y - 1, false);
                this.f.aq.e.AboutDialog(this.f.X);
                n5 = 24;
                this.f.aq.AboutDialog(24);
            }
        }
        this.f.ba = this.f.m == 4 || this.f.aI < 500 ? 20.0 : (this.f.aI < 1000 ? 3.0 : 1.0);
        this.f.SPanel = this.c = System.currentTimeMillis();
        this.d = this.c;
        this.f.aa = this.f.X;
        if (n2 != 0) {
            int n16 = 6;
            MainWindow qb_03 = this.f.aq;
            qb_03.c(n16, null);
        }
        if (this.f.X < this.f.Y) {
            int n17 = this.f.Y - 1;
            while (n17 >= this.f.X) {
                int n18 = qa2.d[n17];
                if ((n18 >> 24 & 0x10) == 0) {
                    if (this.f.d > 4) break;
                    this.f.g("Found final non-auto move at " + n17);
                    break;
                }
                --n17;
            }
            --n17;
            if (this.f.d <= 4) {
                this.f.g("Penultimate play level is " + n17);
            }
            this.AboutDialog(n2 != 0);
            this.f.aP = true;
            this.f.Z = this.f.X;
            while (this.f.Z < this.f.Y) {
                int n19;
                this.d = System.currentTimeMillis();
                this.f.X = this.f.Z;
                if (this.f.d < 4) {
                    this.f.g("Playback, dialog start " + 0 + " playlocation " + this.f.Z + " depth " + this.f.aZ.h);
                }
                if (this.f.aq.e != null) {
                    this.f.aq.e.AboutDialog(this.f.Z);
                }
                if (this.f.uPanel) {
                    this.f.ar.b(false);
                }
                if (this.f.m != 1 && !bl3) {
                    int n20;
                    boolean bl5;
                    boolean bl6 = bl5 = !this.f.ae && this.f.i != 2 && ((n20 = qa2.d[this.f.Z]) >> 24 & 0x10) != 0;
                    if (this.f.aR) {
                        if (!bl5) {
                            this.f.ae = false;
                            this.f.aq.AboutDialog(n5);
                            this.f.aR = false;
                        }
                    } else if (!bl5) {
                        if (this.f.uPanel) {
                            n19 = this.f.aI / 11;
                            if (n19 < 10) {
                                n19 = 10;
                            }
                            int n21 = 0;
                            while (n21 < n19) {
                                this.f.AboutDialog(10L, "Standalone playback delay");
                                this.f.ar.b(false);
                                ++n21;
                            }
                        } else if (this.f.aI > 0) {
                            this.f.AboutDialog((long)this.f.aI, "MS mode playback delay");
                        }
                    }
                }
                if (!bl3) {
                    this.f.k("SingleStepPoint");
                }
                if (this.f.ac) {
                    if (this.f.d <= 5) {
                        this.f.g("Aborting playback");
                    }
                    this.f.Y = this.f.Z;
                    break;
                }
                if (this.f.ad) {
                    this.f.ad = false;
                    this.f.ae = true;
                    if (this.f.Z > 0) {
                        --this.f.Z;
                        this.b(qa2.d, this.f.Z);
                    }
                    --this.f.Z;
                } else {
                    if (!this.f.uPanel) {
                        this.f.FPanel.m();
                    }
                    this.n = null;
                    n4 = n2;
                    n3 = this.f.Z;
                    int[] nArray = qa2.d;
                    object = this;
                    this.rPanel = n3;
                    ((BoardReader)object).s = nArray[((BoardReader)object).rPanel];
                    object2 = new GameMove(((BoardReader)object).f, ((BoardReader)object).s, ((BoardReader)object).rPanel);
                    if (!((BoardReader)object).f.f) {
                        long l4 = (long)((double)((BoardReader)object).f.Q * ((BoardReader)object).c());
                        if (l4 > 300L) {
                            l4 = 300L;
                        }
                        ((BoardReader)object).f.AboutDialog(l4, "Playback stabilization");
                    }
                    ((BoardReader)object).f.FPanel.AboutDialog(5, ((BoardReader)object).rPanel, ((BoardReader)object).s, "playMove");
                    ((BoardReader)object).AboutDialog((GameMove)object2, nArray, ((BoardReader)object).rPanel, ((BoardReader)object).f.Y, n4 != 0);
                    this.f.SPanel = System.currentTimeMillis();
                    this.f.Q = this.f.SPanel - this.d;
                    boolean bl7 = false;
                    if (((GameMove)object2).rPanel != 0) {
                        if (((GameMove)object2).rPanel == 2) {
                            if (this.f.Z != this.f.Y - 1) {
                                this.f.g("***Got no more moves but not final play segment?");
                            } else if (this.f.d <= 5) {
                                this.f.g("Got no more moves, flag to abort read of card");
                            }
                            this.f.V = true;
                            break;
                        }
                        if (this.f.d <= 6) {
                            this.f.g("doMove failed, initiating recovery, move was:" + GameMove.AboutDialog(((GameMove)object2).AboutDialog) + " status:" + ((GameMove)object2).q);
                        }
                        bl7 = true;
                    } else {
                        this.f.aY.d[this.f.Z] = qa2.d[this.f.Z];
                        this.f.aY.g[this.f.Z] = qa2.g[this.f.Z];
                        Object object5 = object2;
                        this.b((GameMove)object5, ((GameMove)object5).j);
                        if (this.f.uPanel && this.f.l.c == 6) {
                            this.f.ar.b(qa2.g[this.f.Z + 1]);
                        }
                        if (this.uPanel > 0) {
                            --this.uPanel;
                            if (this.f.d <= 5) {
                                this.f.g("Imposing recovery delay of " + this.v + " counter now " + this.uPanel);
                            }
                            this.f.AboutDialog((long)this.v, "Post recovery delay");
                            this.v = this.v * 3 / 4;
                        }
                        if (!this.f.uPanel && n2 != 0 && this.f.Z == n17) {
                            if (this.f.d <= 5) {
                                this.f.g("Next move is final so check state now");
                            }
                            if (!this.AboutDialog(qa2.d, this.f.Z, this.f.Y, 2000, "final move")) {
                                if (this.f.d <= 6) {
                                    this.f.g("Penultimate card state failure, need to recover");
                                }
                                bl7 = true;
                                this.f.AboutDialog(500L, "Penultimate recovery");
                            } else if (this.f.d <= 5) {
                                this.f.g("Penultimate state check OK");
                            }
                        } else if (this.f.Z == this.f.Y - 1) {
                            if (this.f.d <= 5) {
                                this.f.g("Final play segment");
                            }
                            if (qu2 != null) {
                                n6 = this.AboutDialog(qu2, (GameMove)object2, qa2.g, bl2);
                                if (this.f.V) {
                                    if (this.f.d <= 5) {
                                        this.f.g("Auto is aborting read card");
                                    }
                                    break;
                                }
                                if (n6 <= 0) {
                                    bl7 = true;
                                } else if (this.f.d <= 5) {
                                    this.f.g("Read card " + n6 + " from screen/user");
                                }
                            }
                            if (n2 != 0 && !bl7 && !this.f.uPanel) {
                                this.AboutDialog(true);
                                if (this.f.m == 4) {
                                    if (this.f.f) {
                                        this.f.AboutDialog(500L, "Pre finish tests");
                                    } else {
                                        this.f.AboutDialog(1000L, "Pre finish tests");
                                    }
                                } else {
                                    this.f.AboutDialog(2000L, "Pre finish tests");
                                    n19 = 0;
                                    int n22 = 0;
                                    while (n22 < 10) {
                                        if (this.f.d <= 5) {
                                            this.f.g("Checking that table not still visible (error or new board)");
                                        }
                                        if (this.f.FPanel.b(500) && this.f.FPanel.b(true)) {
                                            n19 = 1;
                                            if (this.f.FPanel.b(500) && this.f.FPanel.b(true)) {
                                                if (this.f.d > 5) break;
                                                this.f.g("Table stable for 500 ms so delay no longer");
                                                break;
                                            }
                                            if (this.f.d <= 4) {
                                                this.f.g("Finishing and table persisting but not stable, retry");
                                            }
                                        } else if (this.f.d <= 5) {
                                            this.f.g("Table is not stable or not present");
                                        }
                                        ++n22;
                                    }
                                    if (n19 != 0 && this.f.FPanel.c(false) == 2) {
                                        if (((GameMove)object2).o && (this.f.i == 4 || this.f.i == 5)) {
                                            if (this.f.d <= 6) {
                                                this.f.g("Final auto move has left undo enabled so we could not deal");
                                            }
                                            string = "This board is not solvable and no more deals are available??";
                                            SolitaireGameEngine qo_04 = this.f;
                                            qo_04.AboutDialog(string, false);
                                        } else {
                                            if (this.f.d <= 5) {
                                                this.f.g("Undo is enabled so check card state");
                                            }
                                            BoardReader e_04 = this;
                                            if (!e_04.AboutDialog(e_04.f.Z, 2000, "final move")) {
                                                if (this.f.d <= 6) {
                                                    this.f.g("Card state failure, need to recover");
                                                }
                                                bl7 = true;
                                            } else if (((GameMove)object2).o && this.f.i == 1) {
                                                this.f.g("Trying to reissue final Klondike move");
                                                --this.f.Z;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (bl7) {
                        if (this.f.d <= 6) {
                            this.f.g("Recovering move");
                        }
                        this.f.Z = this.AboutDialog(qa2.d);
                    }
                    long l5 = System.currentTimeMillis();
                    this.f.R = this.d;
                    this.f.SPanel = l5;
                    this.f.Q = l5 - this.d;
                    if (this.f.d <= 5) {
                        String string4 = "Click";
                        if (((GameMove)object2).o) {
                            string4 = "Auto";
                        } else if ((((GameMove)object2).q & 1) != 0) {
                            string4 = "Drag";
                        }
                        this.f.g(String.format("***%s move %s completed after %d %s", string4, GameMove.AboutDialog(((GameMove)object2).AboutDialog), this.f.Q, (((GameMove)object2).q & 2) != 0 ? "exposing AboutDialog card" : ""));
                    }
                    if (this.f.aY.f != null) {
                        this.f.aY.f[((GameMove)object2).j] = (int)this.f.Q;
                    }
                    if (this.f.m != 4) {
                        this.AboutDialog(n2 != 0);
                    }
                }
                ++this.f.Z;
            }
        } else {
            if (qu2 != null) {
                object2 = this.f.Y > 0 ? new GameMove(this.f, qa2.d[this.f.Y - 1], this.f.Y - 1) : new GameMove(this.f, 0, 0);
                n6 = this.AboutDialog(qu2, (GameMove)object2, qa2.g, bl2);
            }
            this.AboutDialog(n2 != 0);
        }
        this.f.X = this.f.Z;
        this.f.aY.h = this.f.Y;
        this.f.aP = false;
        this.f.aR = false;
        int n23 = n2 != 0 ? 7 : 5;
        MainWindow qb_04 = this.f.aq;
        qb_04.c(n23, null);
        this.AboutDialog(qa2.g, this.f.Y);
        if (!bl3 && n2 == 0) {
            this.f.d();
        }
        this.f.ak = false;
        return n6;
    }

    private GameMove b(int[] nArray, int n2) {
        if (this.f.d < 4) {
            this.f.g("Undo move=" + GameMove.AboutDialog(nArray[n2]));
        }
        GameMove pJ2 = new GameMove(this.f, nArray[n2], n2);
        this.f.FPanel.AboutDialog(5, n2, nArray[n2], "playUndo");
        this.AboutDialog(pJ2, this.f.uPanel);
        this.rPanel = n2;
        this.s = nArray[n2];
        return pJ2;
    }

    final int AboutDialog(Card object, GameMove pJ2, int[] nArray, boolean bl2) {
        int n2;
        if (this.f.d <= 5) {
            this.f.g("Read exposed card on stack " + ((Card)object).c);
        }
        if (this.f.uPanel) {
            n2 = -1;
            if (this.f.m != 1) {
                this.AboutDialog(nArray, this.f.Z);
                n2 = this.h((Card)object);
            }
            if (n2 <= 0) {
                if (this.f.d <= 6) {
                    this.f.g("User indicated no more cards known");
                }
                this.f.V = true;
                this.f.W = true;
                n2 = -1;
            } else {
                this.AboutDialog((Card)object, pJ2, n2);
                this.AboutDialog(nArray, this.f.Z);
            }
        } else {
            this.f.aD.AboutDialog();
            n2 = this.AboutDialog(pJ2, (Card)object);
            if (n2 <= 0 && bl2) {
                if (this.f.V) {
                    if (this.f.d <= 6) {
                        this.f.g("Aborted read of card on stack " + ((Card)object).c + " at level " + this.f.Y);
                    }
                    n2 = -1;
                } else {
                    if (this.f.d <= 6) {
                        this.f.g("readExposedCard failed - need recovery");
                    }
                    n2 = 0;
                }
            } else {
                boolean bl3 = false;
                if (!this.f.FPanel.v) {
                    BoardReader e_02 = this;
                    if (!e_02.AboutDialog(e_02.f.Z, 2000, "readfromScreenOrUser")) {
                        bl3 = true;
                    }
                }
                if (bl3 && this.f.FPanel.n && this.f.i == 2) {
                    bl3 = false;
                    this.f.FPanel.n = false;
                    this.g.AboutDialog(true);
                    this.f.FPanel.b(-10, true);
                    if (!this.f.FPanel.v) {
                        BoardReader e_03 = this;
                        if (!e_03.AboutDialog(e_03.f.Z, 2000, "readfromScreenOrUser")) {
                            bl3 = true;
                        }
                    }
                }
                if (bl3) {
                    if (this.f.d <= 6) {
                        this.f.g("No dialog and state does not match after reading card, need to recover");
                    }
                    n2 = 0;
                    object = ((Card)object).d.c[0];
                    ((CardImage)object).AboutDialog(0);
                }
            }
        }
        return n2;
    }

    private void AboutDialog(boolean bl2) {
        if (this.f.m == 4) {
            return;
        }
        if (bl2) {
            int n2 = 6;
            MainWindow qb_02 = this.f.aq;
            qb_02.c(n2, null);
            return;
        }
        int n3 = 4;
        MainWindow qb_03 = this.f.aq;
        qb_03.c(n3, null);
    }

    int AboutDialog(GameMove pJ2, Card object) {
        Object object2 = this.f.aY.AboutDialog[((Card)object).b.AboutDialog];
        object2 = ((CardStack)object2).f[((Card)object).c];
        int n2 = this.AboutDialog((Card)object2, -1, true);
        if (n2 <= 0) {
            if (this.f.FPanel.v) {
                this.f.V = true;
                if (this.f.d <= 6) {
                    this.f.g("In playback the read for unknown card on stack " + String.valueOf(object) + " failed with dialog up");
                }
            } else if (this.f.d <= 6) {
                this.f.g("In playback the read for unknown card on stack " + String.valueOf(object) + " failed to return value - try recovery");
            }
        } else {
            int n3 = ((Card)object).b();
            if (n3 != 0 && n3 != n2 && (((Card)object).o || n3 % 100 != n2 % 100)) {
                String string = "In playback for AboutDialog card, the existing value does not match read";
                object = this.f;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
            }
            this.AboutDialog((Card)object2, pJ2, n2);
        }
        return n2;
    }

    private void AboutDialog(Card qu2, GameMove pJ2, int n2) {
        if ((qu2.b.d & 2) != 0) {
            if (qu2.b.AboutDialog != this.h && qu2.b.AboutDialog != this.i) {
                this.b = qu2.b.AboutDialog;
                this.AboutDialog = qu2.c;
                if (this.f.d <= 5) {
                    this.f.g("Readexposedcard, horizontal stack " + qu2.c + " so playrow is " + this.b + " and playcolumn " + this.AboutDialog + " for card" + n2);
                }
                this.f.aY.AboutDialog[this.b].f[this.AboutDialog].d.AboutDialog(n2);
                this.xHandler.g[this.b][this.AboutDialog] = n2;
            }
        } else {
            this.b = qu2.e.size() - 1;
            this.AboutDialog = qu2.c;
            if (this.f.d <= 5) {
                this.f.g("Readexposedcard, vertical stack " + qu2.c + " so playrow is " + this.b + " and playcolumn " + this.AboutDialog + " for card " + n2);
            }
            Card qu3 = this.f.aY.AboutDialog[qu2.b.AboutDialog].f[this.AboutDialog];
            if (qu3.e.size() != this.b + 1) {
                String string = "Stack " + qu3.c + " has " + qu3.e.size() + " runs but new card row is " + this.b;
                SolitaireGameEngine qo_02 = this.f;
                qo_02.AboutDialog(string, false);
            }
            qu3.d.AboutDialog(n2);
            this.xHandler.g[this.b][this.AboutDialog] = n2;
        }
        this.AboutDialog(pJ2, qu2.c, n2);
        this.xHandler.AboutDialog(qu2);
        if (this.n != null && qu2.c == this.n.c) {
            if (this.f.d <= 5) {
                this.f.g("Clearing unknown card stack");
            }
            this.n = null;
        }
    }

    final int AboutDialog(int[] nArray) {
        int n2;
        int n3;
        while (true) {
            SolitaireGameEngine qo_02;
            String string;
            int[] nArray2;
            n3 = -1;
            this.f.aD.AboutDialog();
            this.f.b(5, "Auto.recoverMove");
            boolean bl2 = false;
            int n4 = this.m;
            while (n4 >= 0) {
                nArray2 = this.i();
                if (nArray2 == null) {
                    this.f.FPanel.p();
                    this.f.AboutDialog(1000L, "After dismiss");
                    nArray2 = this.i();
                    if (nArray2 == null) break;
                }
                if ((n3 = this.AboutDialog(0, this.m, nArray2)) >= 0) break;
                if (this.f.d <= 5) {
                    this.f.g("No matching move state for level " + n4 + " so undoing cards by one level to try again");
                }
                this.f.FPanel.m();
                if (!bl2) {
                    this.f.AboutDialog(17, true);
                }
                bl2 = true;
                this.f.FPanel.k();
                this.f.AboutDialog(700L, "recoverMove");
                --n4;
            }
            if (n3 < 0) {
                n4 = 0;
                while (n4 < 10) {
                    if (this.f.FPanel.c(false) == 2) {
                        if (this.f.d <= 5) {
                            this.f.g("Undo is still enabled, try another undo");
                        }
                        this.f.FPanel.k();
                        this.f.AboutDialog(1000L, "recoverMove");
                        nArray2 = this.i();
                        if (nArray2 == null) {
                            string = "Could not read cards trying to recover from failed move";
                            qo_02 = this.f;
                            qo_02.AboutDialog(string, false);
                        }
                        if ((n3 = this.AboutDialog(0, this.m, nArray2)) >= 0) {
                            break;
                        }
                    } else {
                        string = "Could not recover, no match after undo to start";
                        qo_02 = this.f;
                        qo_02.AboutDialog(string, false);
                        break;
                    }
                    ++n4;
                }
            }
            if (bl2) {
                this.f.AboutDialog(17, false);
            }
            this.f.n();
            if (n3 < 0) {
                string = "No matching cards when recovering from failed move";
                qo_02 = this.f;
                qo_02.AboutDialog(string, false);
            }
            if (this.f.d <= 6) {
                this.f.g("Found AboutDialog move recovery match at state level " + n3);
            }
            n4 = this.m - n3;
            if (this.f.d <= 6) {
                this.f.g("We need " + n4 + " undos from state level " + this.m + " to level " + n3);
            }
            n2 = 0;
            while (n2 < n4) {
                GameMove pJ2 = new GameMove(this.f, nArray[this.m - 1], this.m - 1);
                this.f.FPanel.AboutDialog(6, this.m, pJ2.AboutDialog, "Backing out auto stacksets to match card state");
                this.AboutDialog(pJ2, true);
                if (this.f.d <= 6) {
                    BoardReader e_02 = this;
                    this.f.g("State entry:" + e_02.AboutDialog(e_02.m));
                }
                ++n2;
            }
            this.f.c(this.g.AboutDialog.AboutDialog() + 4.0, this.g.AboutDialog.b() + this.g.AboutDialog.d() / 2.0);
            if (this.AboutDialog(n3, 2000, "recoverMove")) break;
            if (this.f.d <= 6) {
                this.f.g("Recovery failed so click undo and try one last time");
            }
            this.f.AboutDialog(this.f.FPanel.uPanel);
            this.f.AboutDialog(1000L, "TryFinalUndo");
        }
        n2 = n3 - 1;
        if (this.f.d <= 6) {
            this.f.g("Move recovery complete, we are now back at MOVE level " + n2 + " (state level - 1), last MOVE recovery level " + this.yHandler + " count " + this.z);
        }
        if (n2 == this.yHandler) {
            ++this.z;
            if (this.f.d <= 5) {
                this.f.g("Imposing post recovery delay of " + 100 * this.z);
            }
            this.f.AboutDialog((long)(100 * this.z), "Post repeat recovery");
            if (this.z > 2) {
                this.f.g("Looks like AboutDialog repetetive recovery situation");
                if (n2 == this.j) {
                    if (this.f.d <= 5) {
                        this.f.g("Recovered to first click level multiple times - issue warning");
                    }
                    BoardReader e_03 = this;
                    e_03.AboutDialog(e_03.f.ao.AboutDialog());
                    this.j = -2;
                }
            }
        } else {
            this.z = 0;
        }
        this.yHandler = n2;
        this.uPanel = this.z + 1;
        this.v = 100 * this.uPanel + 100;
        if (this.v > 1500) {
            this.v = 1500;
        }
        this.e = true;
        this.f.SPanel = System.currentTimeMillis();
        return n2;
    }

    String AboutDialog(int n2, int n3) {
        Object object;
        if ((n3 & 8) != 0) {
            if ((n3 & 0x10) != 0) {
                object = this.f.uPanel ? String.format("You can do the rest!", new Object[0]) : String.format("Click on 'Solve'", new Object[0]);
            } else {
                int n4 = n2;
                if ((n4 & 0xF0000) >> 16 > 0) {
                    object = String.format("Recycle deal", new Object[0]);
                } else {
                    object = String.format("Deal", new Object[0]);
                    if (this.f.i == 2 && (n2 & 0xF3F) != 0) {
                        object = (String)object + " (removes suit)";
                    }
                }
            }
        } else {
            int n5;
            String string;
            int n6 = n2;
            int n7 = n6 >> 8 & 0xFF;
            n6 = n2;
            int n8 = n6 & 0xFF;
            n6 = n2;
            n2 = (n6 & 0xF0000) >> 16;
            String string2 = string = (n3 & 1) != 0 ? "Split " : "Move";
            if (this.f.i != 2) {
                object = (n3 & 0x10) != 0 ? "(Auto) " : "";
            } else {
                n5 = (n3 & 0xF0) >> 4;
                switch (n5) {
                    case 0: {
                        object = "";
                        break;
                    }
                    default: {
                        object = "(suit)";
                    }
                }
            }
            n5 = this.b((int)n7).f.length;
            int n9 = this.b((int)n8).f.length;
            Object object2 = "";
            if (n5 > 1) {
                object2 = ":" + n7 % 10;
            }
            Object object3 = "";
            if (n9 > 1) {
                object3 = ":" + n8 % 10;
            }
            object = String.format("%s %d from %s%s to %s%s %s", string, n2, this.b((int)n7).b, object2, this.b((int)n8).b, object3, object);
        }
        return object;
    }

    final boolean AboutDialog(int n2, int n3, String string) {
        return (n2 = this.b(n2, n3, string)) == 1;
    }

    private int b(int n2, int n3, String string) {
        Object object;
        if (this.f.d <= 5) {
            this.f.g("===== Card state check started: " + string + ", timeout " + n3);
        }
        this.f.aD.AboutDialog();
        int n4 = -1;
        long l2 = System.currentTimeMillis() + (long)n3;
        int[] nArray = object = this.b();
        int n5 = ((int[])object).length;
        int n6 = 0;
        while (n6 < n5) {
            int n7 = nArray[n6];
            CardStack qv2 = this.f.aY.AboutDialog[n7];
            object = qv2;
            if (qv2 != null && (n4 = this.AboutDialog(n2, (CardStack)object, l2)) != 1) break;
            ++n6;
        }
        if (this.f.d <= 5) {
            if (n4 == 1) {
                this.f.g("===== Card state checked OK");
            } else if (n4 == 0) {
                this.f.g("===== Card did not match state");
                this.f.FPanel.AboutDialog(3, n2, 0, "Expected state");
            } else {
                this.f.g("===== Card state check failed");
                this.f.FPanel.AboutDialog(3, n2, 0, "Expected state");
            }
        }
        return n4;
    }

    final int AboutDialog(int n2, CardStack qv2, long l2) {
        int n3;
        block14: {
            n3 = 1;
            if ((qv2.d & 0x40) != 0) {
                int n4 = this.b(qv2);
                while (true) {
                    int n5;
                    if ((n5 = this.AboutDialog(qv2)) == n4) {
                        if ((qv2.d & 0x40) != 0 && n4 != -1) {
                            this.g.n = false;
                        }
                        break block14;
                    }
                    if (this.f.d <= 5) {
                        this.f.g("Spider suit mismatch, expected " + n4 + " read " + n5);
                    }
                    if (this.f.FPanel.v) {
                        if (this.f.d <= 5) {
                            this.f.g("No moves dialog in spider state test");
                        }
                        n3 = -1;
                        break block14;
                    }
                    if (this.g.n && n4 != -1) {
                        this.f.FPanel.b(-10, true);
                        if (this.f.d <= 5) {
                            this.f.g("Trying reversed layout");
                        }
                        if ((n5 = this.AboutDialog(qv2)) == n4) {
                            this.g.n = false;
                            break block14;
                        }
                        if (this.f.d <= 5) {
                            this.f.g("Back to normal layout");
                        }
                        this.f.FPanel.b(-10, false);
                    }
                    if (System.currentTimeMillis() > l2) {
                        if (this.f.d <= 5) {
                            this.f.g("Spider suit mismatch, abort for recovery");
                        }
                        n3 = -1;
                        break block14;
                    }
                    this.f.AboutDialog(200L, "RetrySpiderSuits");
                }
            }
            Card[] quArray = qv2.f;
            int n6 = qv2.f.length;
            int n7 = 0;
            while (n7 < n6) {
                Card qu2 = quArray[n7];
                if (!qu2.h && (n3 = this.AboutDialog(n2, qu2, l2)) != 1) break;
                ++n7;
            }
        }
        return n3;
    }

    private int AboutDialog(int n2, Card qu2, long l2) {
        int n3;
        CardStack qv2 = qu2.b;
        int n4 = n3 = (qv2.d & 0x20) != 0 && qu2.d != null && qu2.d.b ? 1 : 0;
        if (qu2.h() && qu2.d != null) {
            if (n3 == 0) {
                n3 = qu2.d.c[qu2.d.AboutDialog - 1].g;
                int n5 = this.c(qu2, -1, n3);
                while (true) {
                    if (n5 == n3) {
                        if (this.f.d <= 4) {
                            this.f.g("Matched card " + n3 + " on stack " + String.valueOf(qu2));
                        }
                        break;
                    }
                    if (n3 == 0 && n5 > 0) {
                        if (this.f.d <= 5) {
                            this.f.g("Accepted unknown card " + n5 + " on stack " + String.valueOf(qu2));
                        }
                        break;
                    }
                    if (this.f.d <= 5) {
                        this.f.g("Card mismatch, matchcard " + n3 + " but read " + String.valueOf(qu2) + " giving " + n5);
                    }
                    if (this.f.FPanel.v) {
                        if (this.f.d <= 6) {
                            this.f.g("Returning because no moves");
                        }
                        return -1;
                    }
                    if (System.currentTimeMillis() > l2) {
                        if (this.f.d <= 6) {
                            this.f.g("Stack check failed at level " + n2 + " on stack " + String.valueOf(qu2) + " expected card " + n3 + " but got " + n5);
                        }
                        if (this.f.d <= 4) {
                            this.f.b(2, "checkStackState");
                            n5 = this.c(qu2, -1, n3);
                            this.f.n();
                        }
                        if (n5 > 0) {
                            return 0;
                        }
                        return -1;
                    }
                    this.f.AboutDialog(20, "Wait for card match");
                    this.f.aD.AboutDialog();
                    n5 = this.c(qu2, -1, n3);
                }
            }
        } else {
            if (this.f.d < 3) {
                this.f.g("Checking no visible card on stack " + String.valueOf(qu2));
            }
            n3 = this.c(qu2, -1, -1);
            while (n3 != -1) {
                if (this.f.FPanel.v) {
                    if (this.f.d <= 6) {
                        this.f.g("Returning because no moves");
                    }
                    return -1;
                }
                if (System.currentTimeMillis() > l2) {
                    if (n3 > 0) {
                        if (this.f.d <= 5) {
                            this.f.g("Match miss, card existing on empty stack " + String.valueOf(qu2) + ", read " + n3);
                        }
                        return 0;
                    }
                    if (this.f.d <= 5) {
                        this.f.g("Timeout checking no card on stack " + String.valueOf(qu2) + ", result " + n3);
                    }
                    return -1;
                }
                this.f.AboutDialog(50L, "Wait for card to disappear");
                this.f.aD.AboutDialog();
                n3 = this.c(qu2, -1, -1);
            }
            if (this.f.d <= 4) {
                this.f.g("Matched empty stack " + String.valueOf(qu2));
            }
        }
        return 1;
    }

    private String AboutDialog(int n2) {
        pK pK2 = this.l[n2];
        int[] nArray = pK2.f;
        Object object = "";
        if (pK2.b) {
            object = (String)object + "~";
        }
        if (pK2.c) {
            object = (String)object + "X";
        }
        if (pK2.d) {
            object = (String)object + "CHandler";
        }
        if (pK2.e) {
            object = (String)object + "DHandler";
        }
        return String.format("prior move %8s%4s elapsed%4d level%3d cards %s", GameMove.AboutDialog(pK2.AboutDialog), object, pK2.h, n2, BoardReader.b(nArray));
    }

    private static String b(int[] nArray) {
        StringBuffer stringBuffer = new StringBuffer();
        int[] nArray2 = nArray;
        int n2 = nArray.length;
        int n3 = 0;
        while (n3 < n2) {
            int n4 = nArray2[n3];
            stringBuffer.append(String.format("%3d,", n4));
            ++n3;
        }
        return stringBuffer.toString();
    }

    private CardStack b(int n2) {
        return this.f.aY.AboutDialog[n2 / 10];
    }

    final qw_0 f(Card object) {
        qw_0 qw_02 = this.AboutDialog((Card)object);
        if (qw_02 != null) {
            this.f.ao.i[((Card)object).c] = 0;
            Object object2 = qw_02.b;
            int n2 = qw_02.b.length;
            int n3 = 0;
            while (n3 < n2) {
                s_0 s_02 = object2[n3];
                if (s_02.o) {
                    int n4 = ((Card)object).c;
                    this.f.ao.i[n4] = this.f.ao.i[n4] + 1;
                }
                ++n3;
            }
            this.xHandler.h[((Card)object).c] = qw_02.b.length;
            int n5 = 0;
            while (n5 < qw_02.b.length) {
                n3 = 0;
                if (n5 >= this.f.ao.i[((Card)object).c]) {
                    n3 = this.c((Card)object, n5, 0);
                }
                if (this.f.d <= 5) {
                    this.f.g("Read stack " + String.valueOf(object) + " card " + n5 + " value " + n3);
                }
                if (n3 <= 0 || n3 / 100 == 0) {
                    var5_5 = new CardRun(this.xHandler.b((Card)object, 0));
                    ((Card)object).AboutDialog(var5_5);
                    if (n5 < this.f.ao.i[((Card)object).c]) {
                        if (this.f.d <= 5) {
                            this.f.g("Card " + n5 + " is face down");
                        }
                        var5_5.b = true;
                        int n6 = ((Card)object).c;
                        this.l[0].g[n6] = this.l[0].g[n6] + 1;
                    }
                } else {
                    var5_5 = ((Card)object).d;
                    object2 = new CardRun(this.xHandler.b((Card)object, n3));
                    if (var5_5 == null) {
                        ((Card)object).AboutDialog((CardRun)object2);
                    } else {
                        int n7 = ((Card)object).AboutDialog(var5_5, (CardRun)object2, false, true);
                        if (n7 > 0) {
                            var5_5.AboutDialog((CardRun)object2, n7);
                        } else {
                            ((Card)object).AboutDialog((CardRun)object2);
                        }
                    }
                    this.xHandler.g[n5][((Card)object).c] = n3;
                }
                this.f.aq.o();
                ++n5;
            }
            ((Card)object).o = qw_02.c;
        } else {
            String string = "Failure reading stack " + String.valueOf(object);
            object = this.f;
            ((SolitaireGameEngine)object).AboutDialog(string, false);
        }
        return qw_02;
    }

    static int AboutDialog(int[] nArray, int[] nArray2, int n2) {
        int n3 = 0;
        while (n3 < n2) {
            nArray2[n3] = nArray[n3];
            ++n3;
        }
        return n2;
    }

    final int AboutDialog(GameMove pJ2, Card qu2, int n2) {
        int n3;
        CardRun qm_02 = qu2.d;
        if (pJ2.i < qm_02.AboutDialog) {
            n3 = qm_02.c[qm_02.AboutDialog - pJ2.i - 1].g;
        } else {
            qm_02 = qu2.k();
            if (qm_02 == null) {
                n3 = -1;
            } else {
                int n4;
                n3 = qm_02.c[qm_02.AboutDialog - 1].g;
                if (n3 == 0 && (qm_02 = pJ2.e.d) != null && (n4 = qm_02.c[qm_02.AboutDialog - 1].g) == n2) {
                    pJ2.q |= 0x10;
                }
            }
        }
        if (this.f.d <= 4) {
            this.f.g("Test click result is " + n3);
        }
        return n3;
    }

    void AboutDialog(int n2, CardRun qm_02) {
    }

    void AboutDialog(int n2, int n3, int n4) {
    }

    void h() {
    }

    /*
     * Unable to fully structure code
     */
    final void AboutDialog(Card var1_1, int var2_2) {
        if (var1_1.o) {
            return;
        }
        var3_5 = this.f.aY.AboutDialog[0];
        var4_6 = var1_1.c;
        var3_5 = var3_5.f[var4_6];
        this.f.aD.AboutDialog();
        var5_8 = this.AboutDialog((Card)var3_5);
        if (var5_8 == null) {
            var7_9 = "Null edges after flipping AboutDialog card";
            var6_14 = this.f;
            var6_14.AboutDialog((String)var7_9, false);
        }
        if (this.f.FPanel.v) {
            return;
        }
        var6_15 = 0;
        var10_19 = var5_8.b;
        var9_21 = var5_8.b.length;
        var8_23 = 0;
        while (var8_23 < var9_21) {
            var7_9 = var10_19[var8_23];
            if (var7_9.o) {
                ++var6_15;
            }
            ++var8_23;
        }
        var7_10 = var3_5.q();
        var8_23 = var5_8.b.length - var7_10;
        if (var8_23 < 0) {
            var7_11 = "Expected stack " + var3_5.c + " to have " + var7_10 + " cards but found " + var5_8.b.length + " during playback";
            var6_16 = this.f;
            var6_16.AboutDialog(var7_11, false);
        } else if (var8_23 > 0) {
            var9_21 = var6_15 - this.l[var2_2].g[var4_6];
            if (var9_21 <= 0) {
                if (this.f.d <= 5) {
                    this.f.g("Extra facedown count on stack " + var4_6 + " not correct " + var9_21 + " assume misread");
                }
                return;
            }
            if (this.f.d <= 5) {
                this.f.g("Adding " + var8_23 + " extra cards to stack " + var4_6 + " increasing facedown from " + this.l[var2_2].g[var4_6] + " to " + var6_15);
            }
            v0 = var4_6;
            this.f.ao.i[v0] = this.f.ao.i[v0] + var9_21;
            v1 = var4_6;
            this.xHandler.h[v1] = this.xHandler.h[v1] + var8_23;
            var10_20 = this.xHandler.h[var4_6] - 1;
            while (var10_20 >= 0) {
                if (var10_20 < var8_23 || this.xHandler.g[var10_20 - var8_23][var4_6] / 100 == 0) {
                    if (this.f.d <= 5) {
                        this.f.g("Inserting read value " + var5_8.b[var10_20].d + " into stack init card " + var10_20);
                    }
                    this.xHandler.g[var10_20][var4_6] = var5_8.b[var10_20].d;
                } else {
                    if (this.f.d <= 5) {
                        this.f.g("Copying known value  " + this.xHandler.g[var10_20 - var8_23][var4_6] + " from " + (var10_20 - var8_23) + " to " + var10_20);
                    }
                    this.xHandler.g[var10_20][var4_6] = this.xHandler.g[var10_20 - var8_23][var4_6];
                }
                --var10_20;
            }
            var10_20 = 0;
            while (var10_20 <= var2_2) {
                v2 = var4_6;
                this.l[var10_20].g[v2] = this.l[var10_20].g[v2] + var9_21;
                ++var10_20;
            }
            var10_20 = 0;
            while (var10_20 < var8_23) {
                var2_3 = new CardRun(this.xHandler.b((Card)var3_5, 0));
                var3_5.c(var2_3);
                var1_1.c(new CardRun(var2_3));
                this.AboutDialog(var4_6, var2_3);
                ++var10_20;
            }
        }
        var9_21 = 0;
        var10_19 = var3_5.e.iterator();
        var2_4 = var1_1.e.iterator();
        while (var10_19.hasNext()) {
            var6_17 = (CardRun)var10_19.next();
            var7_12 = (CardRun)var2_4.next();
            if (var6_17.c[0].g / 100 > 0) break;
            var11_26 = var5_8.b[var9_21].d;
            if (var11_26 <= 0) {
                if (this.f.d <= 5) {
                    this.f.g("Got residual compressed card " + var11_26 + " at index " + var9_21 + " when reading uncompressed stack");
                }
                var6_17.b = true;
                var7_12.b = true;
            } else {
                if (this.f.d <= 5) {
                    this.f.g("Setting value " + var11_26 + " into auto stacks " + var1_1.c + " init card " + var9_21);
                }
                if (var11_26 / 100 <= 0) {
                    if (this.f.d <= 5) {
                        this.f.g("Got value-only card " + var11_26 + " at index " + var9_21 + " when reading uncompressed stack");
                    }
                } else {
                    this.xHandler.g[var9_21][var4_6] = var11_26;
                    var6_17.c[0].AboutDialog(var11_26);
                    var6_17.b = false;
                    var7_12.c[0].AboutDialog(var11_26);
                    var7_12.b = false;
                    this.AboutDialog(var4_6, var9_21, var11_26);
                }
            }
            ++var9_21;
        }
        if (this.f.d <= 5) {
            this.f.g("Inserted " + var8_23 + " compressed cards on stack " + var4_6);
        }
        var10_19 = var3_5.e.iterator();
        var2_4 = var1_1.e.iterator();
        var6_18 = null;
        var7_13 = null;
        while (var10_19.hasNext()) {
            block33: {
                block35: {
                    block37: {
                        block36: {
                            block34: {
                                var11_27 = (CardRun)var10_19.next();
                                var4_7 = (CardRun)var2_4.next();
                                if (var11_27.b) continue;
                                if (var6_18 == null) break block33;
                                var12_28 = var11_27;
                                var9_22 = var6_18;
                                var8_24 = var3_5;
                                if (var9_22 != null && var9_22.AboutDialog != 0) break block34;
                                v3 = false;
                                break block35;
                            }
                            if (var12_28 != null && var12_28.AboutDialog != 0) break block36;
                            v3 = false;
                            break block35;
                        }
                        var12_28 = var12_28.c[0];
                        if (var12_28 == null) break;
                        var9_22 = var9_22.c[var9_22.AboutDialog - 1];
                        if (!var8_24.g) break block37;
                        if (var9_22.f != var12_28.f + 1 || !CardRun.AboutDialog((CardImage)var12_28, (CardImage)var9_22)) break;
                        v3 = true;
                        break block35;
                    }
                    if (var9_22.g == var12_28.g + 1) {
                        v3 = true;
                    } else {
                    // 3 sources

                    {
                        v3 = false;
                    }
                }
                if (v3) {
                    if (this.f.d <= 5) {
                        this.f.g("Joining " + var11_27.c[0].g + " to " + var6_18.c[var6_18.AboutDialog - 1].g);
                    }
                    var8_25 = var11_27.AboutDialog;
                    var6_18.AboutDialog(var11_27, var8_25);
                    var10_19.remove();
                    var7_13.AboutDialog(var4_7, var8_25);
                    var2_4.remove();
                    continue;
                }
            }
            var6_18 = var11_27;
            var7_13 = var4_7;
        }
        var3_5.d = (CardRun)var3_5.e.getLast();
        var1_1.d = (CardRun)var1_1.e.getLast();
        if (var5_8.c) {
            var1_1.o = true;
        }
        this.f.aq.o();
    }
}
}
