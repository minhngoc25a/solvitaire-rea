/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.reader;

import com.solvitaire.solitaire.reader.BoardReader;
import com.solvitaire.solitaire.util.f_0;
import com.solvitaire.solitaire.solver.pBSolver;
import com.solvitaire.solitaire.engine.GameStats;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.util.qw_0;
import com.solvitaire.solitaire.util.s_0;

public final class pCBoardReader
extends BoardReader {
    public static final double[] p = new double[]{841.5, 841.5};
    private pBSolver rPanel;
    public s_0[] q = new s_0[20];
    private CardStack s;
    private CardStack t;
    private CardStack uPanel;
    private int v;

    pCBoardReader(pBSolver pB2) {
        super(pB2);
        this.rPanel = pB2;
    }

    @Override
    final boolean AboutDialog() {
        int n2;
        this.k = true;
        int n3 = 0;
        this.s = this.f.aY.AboutDialog[0];
        int n4 = 2;
        MainWindow qb_02 = this.f.aq;
        qb_02.c(n4, null);
        int n5 = 0;
        while (n5 < this.rPanel.f) {
            pCBoardReader pC2 = this;
            pC2.f(pC2.s.f[n5]);
            for (CardRun qm_02 : this.s.f[n5].e) {
                if (qm_02.c[qm_02.AboutDialog - 1].g != 0) continue;
                ++n3;
            }
            ++n5;
        }
        n5 = 0;
        int n6 = 0;
        int n7 = 0;
        int n8 = 0;
        boolean bl2 = false;
        n4 = 0;
        while (n4 < 4 && !bl2) {
            int n9;
            pCBoardReader pC3 = this;
            n2 = pC3.d(pC3.f.aY.AboutDialog[1].f[n4]);
            if (n2 < 0) {
                ++n5;
                n7 += this.g.AboutDialog(1, n4);
            } else if (n2 > 0) {
                if (n2 % 100 == 1) {
                    if (this.f.d <= 5) {
                        this.f.g("Ace found in left stack so this is reversed layout");
                    }
                    this.g.h();
                    bl2 = true;
                } else {
                    n9 = n2 - 1;
                    while (n9 % 100 > 0) {
                        if (this.AboutDialog(n9)) {
                            bl2 = true;
                            if (this.f.d > 5) break;
                            this.f.g("Card " + n9 + " found in main stack so this is normal layout");
                            break;
                        }
                        --n9;
                    }
                }
            }
            if (!bl2) {
                pCBoardReader pC4 = this;
                n2 = pC4.d(pC4.f.aY.AboutDialog[2].f[n4]);
                if (n2 < 0) {
                    ++n6;
                    n8 += this.g.AboutDialog(2, n4);
                } else if (n2 > 0) {
                    if (n2 % 100 == 1) {
                        if (this.f.d <= 5) {
                            this.f.g("Ace found in right stack so this is normal layout");
                        }
                        bl2 = true;
                    } else {
                        n9 = n2 - 1;
                        while (n9 % 100 > 0) {
                            if (this.AboutDialog(n9)) {
                                bl2 = true;
                                if (this.f.d <= 5) {
                                    this.f.g("Card " + n9 + " found in main stack so this is reversed layout");
                                }
                                this.g.h();
                                break;
                            }
                            --n9;
                        }
                    }
                }
            }
            ++n4;
        }
        if (!bl2) {
            String string = "FreeCell layout test";
            GameStats pF2 = this.g;
            pF2.AboutDialog(string, false);
            if (n5 < 4 && n6 == 4) {
                if (this.f.d <= 5) {
                    this.f.g("There are only " + n5 + " empty slots in ss1 so ss1 is aces and layout is reversed");
                }
                this.g.h();
            } else if (n6 < 4 && n5 == 4) {
                if (this.f.d <= 5) {
                    this.f.g("There are only " + n6 + " empty slots in ss2 so ss2 is aces and layout is normal");
                }
            } else if (n5 == 0 || n6 == 0) {
                this.f.aq.c("Problem determining layout", "Cannot determine layout without empty slots in workarea and aces\n Assume  normal layout");
            } else if ((n7 /= n5) > (n8 /= n6)) {
                if (this.f.d <= 5) {
                    this.f.g("ss1 variance " + n7 + " ss2 variance " + n8 + " indicates layout is incorrect, currently reversed? " + this.f.FPanel.c());
                }
                this.g.h();
            }
        }
        if (this.f.m == 4) {
            int n10 = 0;
            while (n10 < this.rPanel.f) {
                this.s.f[n10].f();
                ++n10;
            }
            this.rPanel.DHandler = 0;
        }
        this.t = this.f.aY.AboutDialog[1];
        this.uPanel = this.f.aY.AboutDialog[2];
        if (this.f.m != 4) {
            int n11 = 0;
            while (n11 < 4) {
                pCBoardReader pC5 = this;
                n2 = pC5.d(pC5.t.f[n11]);
                if (n2 > 0) {
                    this.rPanel.c[n11] = n2;
                    if (this.f.d <= 5) {
                        this.f.g("Adding work area card" + n2);
                    }
                    Card qu2 = this.t.f[n11];
                    this.t.f[n11].AboutDialog(new CardRun(this.rPanel.b(qu2, n2)));
                }
                ++n11;
            }
            n11 = 0;
            while (n11 < 4) {
                pCBoardReader pC6 = this;
                n2 = pC6.d(pC6.uPanel.f[n11]);
                if (n2 > 0) {
                    this.rPanel.b[n11] = n2;
                    if (this.f.d <= 5) {
                        this.f.g("Adding cards to ace up to " + n2);
                    }
                    int n12 = n2 / 100;
                    n5 = n2 % 100;
                    Card qu3 = this.uPanel.f[n11];
                    CardRun qm_03 = new CardRun(this.rPanel.b(qu3, n12 * 100 + 1));
                    qu3.AboutDialog(qm_03);
                    n8 = 2;
                    while (n8 <= n5) {
                        qm_03.AboutDialog(new CardRun(this.rPanel.b(qu3, n12 * 100 + n8)), 1);
                        ++n8;
                    }
                }
                ++n11;
            }
            Object object = this.f.aq;
            ((MainWindow)object).d(false);
            if (this.rPanel.DHandler > 52) {
                String string = "Expected 52 but found " + this.rPanel.DHandler + " cards";
                object = this.f;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
            }
            this.rPanel.AboutDialog(1, true, n3);
        }
        return true;
    }

    private boolean AboutDialog(int n2) {
        Card[] quArray = this.s.f;
        int n3 = this.s.f.length;
        int n4 = 0;
        while (n4 < n3) {
            Card qu2 = quArray[n4];
            if (qu2.b(n2)) {
                return true;
            }
            ++n4;
        }
        return false;
    }

    @Override
    final void AboutDialog(GameMove pJ2, int[] nArray, int n2, int n3, boolean bl2) {
        pJ2.q = 0;
        pJ2.rPanel = 0;
        if (this.f.d <= 4) {
            this.f.g("*** At " + n2 + " move " + String.valueOf(pJ2));
        }
        if (this.f.uPanel) {
            this.AboutDialog(pJ2, (CardStack)null);
            if (this.f.m != 1) {
                int n4 = 0;
                int n5 = 0;
                while (n5 < 4) {
                    Card qu2 = this.f.aY.AboutDialog[2].f[n5];
                    int n6 = qu2.q();
                    if (n6 < 13) {
                        return;
                    }
                    n4 += n6;
                    ++n5;
                }
                if (n4 == 52) {
                    n5 = 0;
                    while (n5 < 100) {
                        this.f.ar.b(false);
                        this.f.AboutDialog(10L);
                        ++n5;
                    }
                    return;
                }
            }
        } else {
            Object object;
            Object object2;
            boolean bl3 = this.f.g;
            if (pJ2.c.g == null) {
                object2 = "Stackset " + pJ2.c.b + " has not yet been located";
                object = this.f;
                ((SolitaireGameEngine)object).AboutDialog((String)object2, false);
            }
            if (!pJ2.o || this.e) {
                this.e = false;
                if (pJ2.c.AboutDialog != 2) {
                    object2 = pJ2.g.d.c[pJ2.g.d.AboutDialog - pJ2.i];
                    if (pJ2.i == 1) {
                        if (((CardImage)object2).f == 1) {
                            if (this.f.aY.AboutDialog[2].f[pBSolver.AboutDialog[((CardImage)object2).e]].d == null) {
                                bl3 = false;
                            }
                        } else {
                            int n7 = 0;
                            while (n7 < 4) {
                                if (this.f.aY.AboutDialog[2].f[n7].b() == ((CardImage)object2).g - 1) {
                                    bl3 = false;
                                }
                                ++n7;
                            }
                        }
                    }
                    if (bl3) {
                        CardImage pV2 = pJ2.e.AboutDialog();
                        Object object3 = object2;
                        object = this;
                        object = new f_0((BoardReader)object);
                        int n8 = ((CardImage)object3).f;
                        if (n8 < 13) {
                            ++n8;
                            switch (((CardImage)object3).e) {
                                case 1: 
                                case 4: {
                                    ((f_0)object).AboutDialog = n8 + 200;
                                    ((f_0)object).b = n8 + 300;
                                    break;
                                }
                                case 2: 
                                case 3: {
                                    ((f_0)object).AboutDialog = n8 + 100;
                                    ((f_0)object).b = n8 + 400;
                                }
                            }
                        } else {
                            ((f_0)object).AboutDialog = 0;
                            ((f_0)object).b = 0;
                        }
                        if (pJ2.c.AboutDialog == 1) {
                            int n9 = 0;
                            while (n9 < 8) {
                                object3 = this.f.aY.AboutDialog[0].f[n9].AboutDialog();
                                if (object3 == null || ((CardImage)object3).g == ((f_0)object).AboutDialog || ((CardImage)object3).g == ((f_0)object).b) {
                                    if (this.f.d <= 4) {
                                        this.f.g("Click to work area denied because of match to " + String.valueOf(object3));
                                    }
                                    bl3 = false;
                                    break;
                                }
                                ++n9;
                            }
                            n9 = 0;
                            while (n9 < pJ2.f) {
                                object3 = this.f.aY.AboutDialog[1].f[n9].AboutDialog();
                                if (object3 == null) {
                                    if (this.f.d <= 4) {
                                        this.f.g("Click to work area denied because of prior empty space");
                                    }
                                    bl3 = false;
                                    break;
                                }
                                ++n9;
                            }
                        } else {
                            if (pV2 == null && ((CardImage)object2).f != 13) {
                                int n10 = 0;
                                while (n10 < 8) {
                                    object3 = this.f.aY.AboutDialog[0].f[n10].AboutDialog();
                                    if (object3 != null && (((CardImage)object3).g == ((f_0)object).AboutDialog || ((CardImage)object3).g == ((f_0)object).b)) {
                                        if (this.f.d <= 4) {
                                            this.f.g("Click to space in main area denied because of match to " + String.valueOf(object3));
                                        }
                                        bl3 = false;
                                        break;
                                    }
                                    ++n10;
                                }
                            }
                            int n11 = 0;
                            while (n11 < pJ2.f) {
                                object3 = this.f.aY.AboutDialog[0].f[n11].AboutDialog();
                                if (object3 != null && (((CardImage)object3).g == ((f_0)object).AboutDialog || ((CardImage)object3).g == ((f_0)object).b) || pV2 == null && object3 == null) {
                                    if (this.f.d <= 4) {
                                        this.f.g("Click to main area denied because of prior match to " + String.valueOf(object3));
                                    }
                                    bl3 = false;
                                    break;
                                }
                                ++n11;
                            }
                        }
                    }
                }
                if (bl3) {
                    if (!this.AboutDialog(pJ2)) {
                        boolean bl4 = true;
                        if (!this.f.uPanel && bl2 && pJ2.rPanel != 3) {
                            bl4 = false;
                            int n12 = n2 + 1;
                            while (n12 < n3 - 1) {
                                int n13 = nArray[n12];
                                if ((n13 >> 24 & 0x10) == 0) {
                                    bl4 = true;
                                    break;
                                }
                                ++n12;
                            }
                        }
                        if (bl4) {
                            if (this.f.d <= 6) {
                                this.f.g("Click stack failed, rcHandler " + pJ2.rPanel + "- need to attempt recovery");
                            }
                            pJ2.rPanel = 1;
                            return;
                        }
                        if (this.f.d <= 6) {
                            this.f.g("Standalone (" + this.f.uPanel + ") or final move, so ignore click failure");
                        }
                        pJ2.rPanel = 0;
                    }
                    if (this.k) {
                        if (this.f.d <= 5) {
                            this.f.g("Recovery level before first click is " + (n2 - 1));
                        }
                        this.j = n2 - 1;
                        this.k = false;
                    }
                    if (this.f.d <= 4) {
                        this.f.g("Done click");
                    }
                    pJ2.g.l = System.currentTimeMillis() + 300L;
                } else {
                    int n14 = 0;
                    if (pJ2.g.j) {
                        if (this.f.d <= 4) {
                            this.f.g("Src stack flagged as needing adjustment");
                        }
                        pJ2.g.j = false;
                        this.e(pJ2.g);
                        qw_0 qw_02 = this.AboutDialog(pJ2.g);
                        if (qw_02.b == null || qw_02.b.length == 0) {
                            if (this.f.d <= 6) {
                                this.f.g("getstackCardsRetried on src gave null or none - need to attempt recovery");
                            }
                            pJ2.rPanel = 1;
                            return;
                        }
                        int n15 = 0;
                        if (pJ2.d.AboutDialog == 0) {
                            n15 = this.q[qw_02.b.length - 1].c() - qw_02.b[qw_02.b.length - 1].c();
                            if (this.f.d <= 3) {
                                this.f.g("Stack " + pJ2.h + " discrepancy is " + n15 + " with " + qw_02.b.length + " edges");
                            }
                        }
                        if (n15 > 10) {
                            if (qw_02.b.length < 10) {
                                n14 = this.q[qw_02.b.length - pJ2.i].c() - qw_02.b[qw_02.b.length - pJ2.i].c();
                                if (this.f.d <= 3) {
                                    this.f.g("Stack length " + qw_02.b.length + " means rearrange to initial pos " + String.valueOf(this.q[qw_02.b.length - pJ2.i]));
                                }
                            } else {
                                n14 = (int)(this.f.FPanel.AboutDialog.b() + this.f.FPanel.AboutDialog.d() - (double)this.f.FPanel.c * 0.75 - (double)qw_02.b[qw_02.b.length - 1].c());
                                if (this.f.d <= 3) {
                                    this.f.g("Compressed stack " + pJ2.h + " final card " + (qw_02.b.length - 1) + " at " + String.valueOf(qw_02.b[qw_02.b.length - 1]) + " cardHeight " + this.f.FPanel.c + " end table " + (this.f.FPanel.AboutDialog.b() + this.f.FPanel.AboutDialog.d()) + " give adjustment of " + n14);
                                }
                            }
                            if (this.f.d <= 5) {
                                this.f.g("Stack " + pJ2.h + " requires adjustment of " + n14);
                            }
                        }
                    }
                    if (!this.AboutDialog(pJ2, -n14)) {
                        if (this.f.d <= 6) {
                            this.f.g("Move stack failed - need to attempt recovery");
                        }
                        pJ2.rPanel = 1;
                        return;
                    }
                    this.f.aD.AboutDialog();
                    pJ2.g.l = System.currentTimeMillis() + 100L;
                }
                if (this.AboutDialog(pJ2, (CardStack)null) && this.f.d <= 5) {
                    this.f.g("Move " + String.valueOf(pJ2) + " will expose AboutDialog card");
                }
            } else {
                int n16;
                int n17;
                if (this.f.d <= 2) {
                    this.f.g("Auto so skip move from " + String.valueOf(pJ2.g) + " to " + String.valueOf(pJ2.e));
                }
                if (pJ2.g.p() > 9) {
                    pJ2.g.j = true;
                }
                ++this.v;
                int n18 = this.v == 1 ? 300 : (this.v == 2 ? 250 : (this.v == 3 ? 200 : (n17 = this.v == 4 ? 150 : 120)));
                if (this.f.d <= 4) {
                    this.f.g("Sleep " + n17 + " for auto count " + this.v);
                }
                this.f.AboutDialog((long)n17, "Auto move " + this.v);
                this.f.aD.AboutDialog();
                this.AboutDialog(pJ2, (CardStack)null);
                if (n2 < n3 - 1 && ((n16 = nArray[n2 + 1]) >> 24 & 0x10) == 0) {
                    n17 = this.v == 1 ? 500 : (this.v == 2 ? 600 : (this.v == 3 ? 700 : 1500));
                    int n19 = pJ2.g.b();
                    if (this.f.d <= 5) {
                        this.f.g("End of auto run of " + this.v + " so check card is " + n19 + ", timeout:" + n17);
                    }
                    if (!this.b(pJ2.g, n19, n17)) {
                        if (this.f.d <= 6) {
                            this.f.g("Stack state check failed, storing last state and asking for recovery");
                        }
                        this.b(pJ2, n2);
                        pJ2.rPanel = 1;
                        return;
                    }
                    this.v = 0;
                }
            }
            if (!bl3) {
                pJ2.q |= 1;
            }
        }
    }

    @Override
    final void AboutDialog(GameMove pJ2, boolean bl2) {
        if (this.f.d <= 4) {
            this.f.g("***Undoing move of " + String.valueOf(pJ2) + " atmoveonly " + bl2);
        }
        if (!bl2) {
            this.f.FPanel.k();
            if (pJ2.c.AboutDialog == 1) {
                this.f.AboutDialog(150L, "Undo work");
            } else if (pJ2.c.AboutDialog == 2) {
                this.f.AboutDialog(150L, "Undo ace");
            } else {
                this.f.AboutDialog(150L, "Undo stack");
            }
        }
        this.AboutDialog(pJ2, 0, null);
    }

    @Override
    final int[] b() {
        int[] nArray = new int[3];
        nArray[1] = 1;
        nArray[2] = 2;
        int[] nArray2 = nArray;
        return nArray;
    }

    @Override
    final double c() {
        return 0.1;
    }
}

