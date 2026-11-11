/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.reader;

import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.reader.BoardReader;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.solver.KlondikeSolver;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.util.qw_0;
import java.awt.Rectangle;

/*
 * Renamed from com.solvitaire.app.qi
 */
public final class qi_0BoardReader
extends BoardReader {
    static final double[] p = new double[]{771.0, 781.0};
    private KlondikeSolver q;
    private CardStack[] rPanel;
    private CardStack s;
    private CardStack t;
    private Card uPanel;
    private Card v;
    private long wHandler = 0L;

    qi_0BoardReader(KlondikeSolver qh2) {
        super(qh2);
        this.q = qh2;
        this.h = 7;
        this.i = 8;
    }

    @Override
    final boolean AboutDialog() {
        this.rPanel = new CardStack[7];
        this.rPanel[0] = this.f.aY.AboutDialog[0];
        this.rPanel[1] = this.f.aY.AboutDialog[1];
        this.rPanel[2] = this.f.aY.AboutDialog[2];
        this.rPanel[3] = this.f.aY.AboutDialog[3];
        this.rPanel[4] = this.f.aY.AboutDialog[4];
        this.rPanel[5] = this.f.aY.AboutDialog[5];
        this.rPanel[6] = this.f.aY.AboutDialog[6];
        this.s = this.f.aY.AboutDialog[7];
        this.t = this.f.aY.AboutDialog[8];
        this.uPanel = this.s.f[0];
        this.v = this.t.f[0];
        if (this.f.m != 4) {
            int n2;
            int n3 = 2;
            Object object = this.f.aq;
            ((MainWindow)object).c(n3, null);
            int n4 = 0;
            while (n4 < this.q.f) {
                if (this.f.d <= 3) {
                    this.f.g("Reading cards on pyramid at level " + n4);
                }
                n2 = 0;
                while (n2 <= n4) {
                    Object object2;
                    qi_0BoardReader qi_02 = this;
                    int n5 = qi_02.AboutDialog(qi_02.rPanel[n4].f[n2], 0, false, false, false);
                    if (n5 <= 0) {
                        object2 = "Failed to read card at pyramid position " + (n4 * 10 + n2);
                        object = this.f;
                        ((SolitaireGameEngine)object).AboutDialog((String)object2, false);
                    }
                    if (this.f.d <= 5) {
                        this.f.g("Read stack " + n4 + " card " + n2 + " value " + n5);
                    }
                    this.q.g[n4][n2] = n5;
                    object2 = this.rPanel[n4].f[n2];
                    CardRun qm_02 = new CardRun(this.q.b((Card)object2, n5));
                    ((Card)object2).AboutDialog(qm_02);
                    this.f.aq.o();
                    ++n2;
                }
                ++n4;
            }
            qi_0BoardReader qi_03 = this;
            qw_0 qw_02 = qi_03.AboutDialog(qi_03.uPanel);
            if (this.f.d <= 5) {
                this.f.g("Initial moreDeck " + String.valueOf(qw_02));
            }
            qi_0BoardReader qi_04 = this;
            n2 = qi_04.c(qi_04.uPanel, 0, -1);
            this.uPanel.c(new CardRun(this.q.b(this.uPanel, n2)));
            this.q.B[0][0] = n2;
            if (this.f.d < 5) {
                this.f.g("Read feed card 0 value " + n2);
            }
            int n6 = n2;
            this.i();
            n3 = 1;
            while (qw_02.b != null && qw_02.b.length > 0) {
                this.f.k("PyramidReadingCards");
                qi_0BoardReader qi_05 = this;
                n2 = qi_05.AboutDialog(qi_05.uPanel, 0, n6, -1, true);
                if (n2 == -2) {
                    if (this.f.d <= 5) {
                        this.f.g("Second attempt on getNonDupCard");
                    }
                    this.i();
                    this.f.aD.AboutDialog(3000);
                    qi_0BoardReader qi_06 = this;
                    n2 = qi_06.AboutDialog(qi_06.uPanel, 0, n6, -1, true);
                }
                n6 = n2;
                if (this.f.d <= 5) {
                    this.f.g("Read feed card " + n3 + " value " + n2);
                }
                if (n2 < 0) break;
                this.uPanel.c(new CardRun(this.q.b(this.uPanel, n2)));
                this.q.B[n3++][0] = n2;
                object = this.f.aq;
                ((MainWindow)object).d(false);
                if (this.f.d <= 3) {
                    this.f.g("Next deal");
                }
                this.i();
                this.f.aD.AboutDialog();
                qi_0BoardReader qi_07 = this;
                qw_02 = qi_07.AboutDialog(qi_07.uPanel);
                if (this.f.d > 3) continue;
                this.f.g("Moredeck now " + String.valueOf(qw_02 == null ? "null" : Integer.valueOf(qw_02.b.length)));
            }
            if (n3 != 24) {
                String string = "Error, only read " + n3 + " deal cards";
                object = this.f;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
            }
            this.f.FPanel.d(false);
            this.q.b(1, true);
        }
        return true;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    final void AboutDialog(GameMove var1_1, int[] var2_3, int var3_4, int var4_6, boolean var5_10) {
        block75: {
            block74: {
                var1_1.q = 0;
                var1_1.rPanel = 0;
                if (this.f.d <= 4) {
                    this.f.g("Move " + GameMove.AboutDialog(var1_1.AboutDialog) + " at " + (System.currentTimeMillis() - this.c));
                }
                if (var1_1.n) {
                    if (this.f.uPanel) {
                        this.q.AboutDialog(var1_1.g, var1_1.e, false);
                        return;
                    }
                    if (var1_1.o) {
                        this.f.AboutDialog(300L, "Pre new deal");
                        this.f.d(this.f.FPanel.AboutDialog.c() / 2.0, this.s.g.yHandler + (double)(this.f.FPanel.c * 3 / 4));
                        return;
                    }
                    if (var1_1.m != 2) {
                        this.f.d(this.f.FPanel.AboutDialog.c() / 2.0, this.s.g.yHandler + (double)this.f.FPanel.f);
                        if (this.f.d <= 4) {
                            this.f.g("Done AboutDialog deal");
                        }
                    }
                    if (var1_1.m != 0) {
                        this.f.d(this.f.FPanel.AboutDialog.c() / 2.0, this.s.g.yHandler + (double)this.f.FPanel.f);
                    }
                    this.q.AboutDialog(var1_1.g, var1_1.e, false);
                    if (var1_1.m != 0) {
                        v0 = this;
                        if (!v0.AboutDialog(v0.f.Z, 1500, "PostFlip")) {
                            if (this.f.d <= 5) {
                                this.f.g("State check failed after flip deal at " + this.f.Z + " doing undeal");
                            }
                            this.q.AboutDialog(var1_1.AboutDialog, var1_1.g, var1_1.e, false);
                            var1_1.rPanel = 1;
                            return;
                        }
                    }
                    this.wHandler = System.currentTimeMillis();
                    return;
                }
                if (!this.f.uPanel) break block74;
                if (var1_1.g != null) {
                    KlondikeSolver.c(var1_1.g);
                }
                KlondikeSolver.c(var1_1.e);
                if (this.f.uPanel && this.f.m != 1 && (var1_1 = this.q.AboutDialog(true)) == null) {
                    var1_2 = 0;
                    while (var1_2 < 100) {
                        this.f.ar.b(false);
                        this.f.AboutDialog(10L);
                        ++var1_2;
                    }
                    return;
                }
                break block75;
            }
            this.f.AboutDialog((long)(this.f.aI + 30), "Pyramid playback delay");
            var5_10 = var3_4;
            var4_7 = var2_3;
            var3_5 = var1_1;
            var2_3 = this;
            var6_13 = 0;
            var7_14 = 0;
            var8_15 = 0;
            var9_16 = 1;
            var16_17 = System.currentTimeMillis();
            var18_18 = var16_17 + 1200L;
            var20_19 = var18_18 + 5000L;
            var10_20 = false;
            if (var5_10 > 0) {
                if (var2_3.f.Z == var2_3.f.Y - 1) {
                    if (var2_3.f.d <= 5) {
                        var2_3.f.g("Final move so synch on feed");
                    }
                    var10_20 = true;
                } else {
                    var4_8 = var4_7[var5_10 - 1];
                    if ((var4_8 >> 24 & 8) != 0) {
                        if (var2_3.f.d <= 5) {
                            var2_3.f.g("Previous move was AboutDialog deal, may need synch");
                        }
                        var10_20 = true;
                    }
                }
            }
            var4_9 = false;
            if (var3_5.e.b.AboutDialog == var2_3.i) {
                if (var2_3.f.d <= 5) {
                    var2_3.f.g("Pile move so need to check Pile stack after move");
                }
                var4_9 = true;
                if (var3_5.g != null && var3_5.g.b.AboutDialog == var2_3.h) {
                    if (var2_3.f.d <= 5) {
                        var2_3.f.g("Feed/Pile move so need to check feed stack after move as well");
                    }
                    var10_20 = true;
                }
            }
            while (true) {
                block76: {
                    block80: {
                        block77: {
                            block79: {
                                block78: {
                                    if ((var24_27 = System.currentTimeMillis()) > var18_18) {
                                        v1 = false;
                                        break;
                                    }
                                    if (var2_3.f.d <= 5) {
                                        var2_3.f.g("initiatePyramidMove, state:" + var9_16 + " retry:" + var6_13);
                                    }
                                    if (var2_3.f.FPanel.v) {
                                        if (var2_3.f.d <= 6) {
                                            var2_3.f.g("Nomove dialog detected");
                                        }
                                        v1 = false;
                                        break;
                                    }
                                    if (var9_16 == 2 && var24_27 > var20_19) {
                                        var5_10 = var2_3.c(var3_5.g, -1, 0);
                                        var11_21 = var2_3.c(var3_5.e, -1, 0);
                                        if (var2_3.f.d <= 5) {
                                            var2_3.f.g("Post click testing timed out, src " + var5_10 + " dest " + var11_21 + " retry the click");
                                        }
                                        var20_19 += 200L;
                                        var9_16 = 1;
                                        ++var6_13;
                                    }
                                    var2_3.f.aD.AboutDialog();
                                    if (var9_16 != 1) break block76;
                                    var5_10 = var3_5.g != null ? 1 : 0;
                                    var11_21 = 1;
                                    if (var10_20 && var5_10 != 0 && var3_5.g.b.AboutDialog == var2_3.h || var3_5.e.b.AboutDialog == var2_3.h) {
                                        var12_22 = var2_3.uPanel.b();
                                        var13_24 = var2_3.AboutDialog(var3_5, var2_3.uPanel, -2);
                                        v2 = var2_3;
                                        var30_28 = v2.c(v2.uPanel, -1, var12_22);
                                        if (var30_28 == var12_22) {
                                            if (var2_3.f.d <= 5) {
                                                var2_3.f.g("Src is in good state for click, read " + var30_28 + " on stack " + String.valueOf(var2_3.uPanel));
                                            }
                                            var20_19 = System.currentTimeMillis() + 200L;
                                            var2_3.f.AboutDialog(10L, "PostSynch");
                                        } else if (var30_28 == var13_24) {
                                            if (var6_13 == 0) {
                                                var2_3.f.g("Should not get post value (not equal to pre value) when not AboutDialog retry, assume transient");
                                            } else {
                                                if (var2_3.f.d <= 5) {
                                                    var2_3.f.g("Src showing post card, read " + var30_28 + " on stack " + String.valueOf(var2_3.uPanel) + ", expected " + var12_22);
                                                }
                                                var9_16 = 2;
                                            }
                                            var11_21 = 0;
                                        } else {
                                            if (var2_3.f.FPanel.v) {
                                                v1 = false;
                                                break;
                                            }
                                            if (var2_3.f.d <= 5) {
                                                var2_3.f.g("Src not in good state for click, read " + var30_28 + " on stack " + String.valueOf(var2_3.uPanel) + ", expected " + var12_22);
                                            }
                                            var11_21 = 0;
                                        }
                                    }
                                    if (var11_21 == 0) break block76;
                                    if (var5_10 == 0) break block77;
                                    var12_22 = 0;
                                    v3 = var13_25 = var6_13 % 2 == 0 ? var3_5.g : var3_5.e;
                                    if (var6_13 == 0) {
                                        if (var13_25.b.AboutDialog == var2_3.i && (var30_29 = System.currentTimeMillis() - var2_3.wHandler) < 300L) {
                                            if (var2_3.f.d <= 5) {
                                                var2_3.f.g("Synch pile because move too soon after last deal: " + var30_29);
                                            }
                                            var12_22 = 1;
                                        }
                                    } else {
                                        var2_3.f.c(var2_3.g.AboutDialog.AboutDialog() + 4.0, var2_3.g.AboutDialog.b() + var2_3.g.AboutDialog.d() / 2.0);
                                    }
                                    if (var2_3.f.d <= 5) {
                                        var2_3.f.g("Clicking on first:" + String.valueOf(var13_25));
                                    }
                                    if (var12_22 == 0) break block78;
                                    var5_10 = 100;
                                    var12_23 = var13_25;
                                    var5_11 = var2_3;
                                    if (var12_23.b.AboutDialog != var5_11.h && var12_23.b.AboutDialog != var5_11.i) break;
                                    if (var5_11.f.d <= 4) {
                                        var5_11.f.g("Using stable click on feed/pile:" + String.valueOf(var12_23));
                                    }
                                    if (!var5_11.AboutDialog(var12_23, var13_26 = var12_23.AboutDialog().g, 100)) {
                                        v4 = false;
                                    } else {
                                    // 2 sources

                                    {
                                        v4 = var5_11.b(var12_23);
                                    }
                                    var30_28 = (int)v4;
                                    break block79;
                                }
                                var30_28 = (int)var2_3.b(var13_25);
                            }
                            if (var30_28 == 0) {
                                if (var2_3.f.d <= 6) {
                                    var2_3.f.g("Misread first click location, keep trying");
                                }
                                var11_21 = 0;
                            } else {
                                v5 = var31_30 = var6_13 % 2 == 0 ? var3_5.e : var3_5.g;
                                if (var2_3.f.d <= 5) {
                                    var2_3.f.g("Clicking on second:" + String.valueOf(var31_30));
                                }
                                var2_3.b(var31_30);
                            }
                            break block80;
                        }
                        if (var2_3.f.d <= 5) {
                            var2_3.f.g("Clicking on solo dest");
                        }
                        var2_3.b(var3_5.e);
                    }
                    if (var11_21 != 0) {
                        var9_16 = 2;
                        var20_19 = System.currentTimeMillis() + 200L;
                    }
                }
                if (var9_16 == 2) {
                    var5_12 = true;
                    if (var10_20 && var3_5.g != null && var3_5.g.b.AboutDialog == var2_3.h || var3_5.e.b.AboutDialog == var2_3.h) {
                        var11_21 = var2_3.uPanel.b();
                        var12_22 = var2_3.AboutDialog(var3_5, var2_3.uPanel, -2);
                        v6 = var2_3;
                        var13_24 = v6.AboutDialog(v6.uPanel, -1, 0, 0, 0L, true);
                        if (var13_24 <= 0) {
                            v7 = var2_3;
                            var13_24 = v7.c(v7.uPanel, -1, 0);
                        }
                        if (var2_3.f.d <= 5 && var13_24 != var7_14) {
                            var7_14 = var13_24;
                            var2_3.f.g("Read " + var13_24 + " after clickup on feed stack, pre " + var11_21 + " post " + var12_22);
                        }
                        if (var13_24 == var12_22) {
                            if (var2_3.f.d <= 5) {
                                var2_3.f.g("Card matches " + var12_22 + " after feed click (pre was " + var11_21 + ") retries: " + var6_13);
                            }
                        } else {
                            var5_12 = false;
                            if (var2_3.f.FPanel.v) {
                                v1 = false;
                                break;
                            }
                            if (var2_3.f.d <= 5) {
                                var2_3.f.g("Read feed card " + var13_24 + " continue waiting");
                            }
                        }
                    }
                    if (var5_12 && var4_9 && var3_5.e.b.AboutDialog == var2_3.i) {
                        var11_21 = var2_3.v.b();
                        var12_22 = var2_3.AboutDialog(var3_5, var2_3.v, -2);
                        v8 = var2_3;
                        var13_24 = v8.c(v8.v, -1, 0);
                        if (var2_3.f.d <= 5 && var13_24 != var8_15) {
                            var8_15 = var13_24;
                            var2_3.f.g("Read " + var13_24 + " after clickup on pile stack, pre " + var11_21 + " post " + var12_22);
                        }
                        if (var13_24 == var12_22) {
                            if (var2_3.f.d <= 5) {
                                var2_3.f.g("Card matches " + var12_22 + " after pile click (pre was " + var11_21 + ") retries: " + var6_13);
                            }
                        } else {
                            var20_19 = var18_18 + 5000L;
                            var5_12 = false;
                            if (var2_3.f.FPanel.v) {
                                v1 = false;
                                break;
                            }
                            if (var2_3.f.d <= 5) {
                                var2_3.f.g("Read pile card " + var13_24 + " continue waiting");
                            }
                        }
                    }
                    if (var5_12) {
                        v1 = true;
                        break;
                    }
                }
                var2_3.f.AboutDialog(10, "Wait for clickdown to be stable");
            }
            if (!v1) {
                var1_1.rPanel = 1;
                return;
            }
            if (var1_1.g != null) {
                KlondikeSolver.c(var1_1.g);
            }
            KlondikeSolver.c(var1_1.e);
        }
    }

    @Override
    final void AboutDialog(GameMove pJ2, boolean bl2) {
        if (!bl2) {
            this.f.FPanel.k();
        }
        if (this.f.d <= 4) {
            this.f.g("Undo move " + GameMove.AboutDialog(pJ2.AboutDialog) + " at " + (System.currentTimeMillis() - this.c));
        }
        if (pJ2.n) {
            this.q.AboutDialog(pJ2.AboutDialog, pJ2.g, pJ2.e, false);
        } else {
            if (pJ2.d != null) {
                KlondikeSolver.d(pJ2.g);
            }
            KlondikeSolver.d(pJ2.e);
        }
        this.b(pJ2);
    }

    private void i() {
        Rectangle rectangle = this.v.n();
        ErrorDialog al_02 = this.f.aD.AboutDialog(rectangle, "preDeal");
        this.f.d(this.f.FPanel.AboutDialog.c() / 2.0, this.s.g.yHandler + 10.0);
        this.f.aD.AboutDialog();
        ErrorDialog.AboutDialog(this.f, rectangle, al_02, "deal");
    }

    @Override
    final String AboutDialog(int n2, int n3) {
        Object object;
        if ((n3 & 8) != 0) {
            int n4 = n2;
            object = (n4 & 0xF0000) >> 16 > 0 ? String.format("Recycle deal", new Object[0]) : String.format("Deal", new Object[0]);
        } else {
            int n5 = n2;
            n3 = n5 >> 8 & 0xFF;
            n5 = n2;
            n2 = n5 & 0xFF;
            CardStack qv2 = this.f.aY.AboutDialog[n2 / 10];
            Object object2 = object = qv2.AboutDialog < 7 ? qv2.b + " col " + n2 % 10 : qv2.b;
            if (n3 != 99) {
                qv2 = this.f.aY.AboutDialog[n3 / 10];
                String string = qv2.AboutDialog < 7 ? qv2.b + " col " + n3 % 10 : qv2.b;
                object = "Match " + string + " with " + (String)object;
            } else {
                object = "Discard king from " + (String)object;
            }
        }
        return object;
    }

    @Override
    final int[] b() {
        int[] nArray = new int[9];
        nArray[1] = 1;
        nArray[2] = 2;
        nArray[3] = 3;
        nArray[4] = 4;
        nArray[5] = 5;
        nArray[6] = 6;
        nArray[7] = 7;
        nArray[8] = 8;
        int[] nArray2 = nArray;
        return nArray;
    }

    @Override
    final double c() {
        return 0.2;
    }

    @Override
    final boolean AboutDialog(int[] object, int n2, int n3, int n4, String string) {
        if (this.f.d <= 5) {
            this.f.g("===== Card state check started: " + string);
        }
        this.f.aD.AboutDialog();
        object = this.q.AboutDialog(true);
        while (object != null) {
            if (object.b.AboutDialog < 6) {
                n2 = object.b.AboutDialog + 1;
                n3 = object.c;
                Card qu2 = this.f.aY.AboutDialog[n2].f[n3];
                Card qu3 = this.f.aY.AboutDialog[n2].f[n3 + 1];
                n3 = 0;
                int n5 = 0;
                while (n5 < 100) {
                    n3 = this.d(qu2);
                    if (n3 == -1) break;
                    this.f.aD.AboutDialog();
                    this.f.AboutDialog(10L, "checkFinal1");
                    ++n5;
                }
                if (n3 != -1) {
                    if (this.f.d <= 5) {
                        this.f.g("Testing open card at " + object.b.AboutDialog + "," + object.c + " found card present or read error below left, value " + n3);
                    }
                    return false;
                }
                n5 = 0;
                while (n5 < 100) {
                    n3 = this.d(qu3);
                    if (n3 == -1) break;
                    this.f.aD.AboutDialog();
                    this.f.AboutDialog(10L, "checkFinal2");
                    ++n5;
                }
                if (n3 != -1) {
                    if (this.f.d <= 5) {
                        this.f.g("Testing open card at " + object.b.AboutDialog + "," + object.c + " found card present or read error below right, value " + n3);
                    }
                    return false;
                }
            }
            object = this.q.AboutDialog((Card)object, true);
        }
        if (this.f.d <= 5) {
            this.f.g("===== Card state check completed OK");
        }
        return true;
    }
}

