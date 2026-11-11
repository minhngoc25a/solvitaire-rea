/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.reader;

import com.solvitaire.solitaire.reader.BoardReader;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.solver.SpiderVariantSolver;
import java.util.LinkedList;

public final class sqBoardReader
extends BoardReader {
    static final double[] p = new double[]{771.0, 781.5};
    private SpiderVariantSolver q;
    private LinkedList rPanel = new LinkedList();
    private CardStack[] s;
    private CardStack t;
    private Card uPanel;
    private CardStack v;
    private Card wHandler;

    sqBoardReader(SpiderVariantSolver sp2) {
        super(sp2);
        this.q = sp2;
        this.h = 7;
        this.i = 8;
    }

    @Override
    final boolean AboutDialog() {
        this.s = new CardStack[4];
        this.s[0] = this.f.aY.AboutDialog[0];
        this.s[1] = this.f.aY.AboutDialog[1];
        this.s[2] = this.f.aY.AboutDialog[2];
        this.s[3] = this.f.aY.AboutDialog[3];
        this.t = this.f.aY.AboutDialog[7];
        this.v = this.f.aY.AboutDialog[8];
        this.uPanel = this.t.f[0];
        this.wHandler = this.v.f[0];
        if (this.f.m != 4) {
            CardRun qm_02;
            int n2 = 0;
            while (n2 < 3) {
                int n3 = 0;
                while (n3 < this.s[n2].f.length) {
                    Card qu2 = this.s[n2].f[n3];
                    if (qu2.h()) {
                        qm_02 = new CardRun(this.q.b(qu2, 0));
                        qu2.AboutDialog(qm_02);
                    }
                    ++n3;
                }
                ++n2;
            }
            if (this.f.d <= 3) {
                this.f.g("Reading cards on pyramid at level 3");
            }
            n2 = 0;
            while (n2 < this.s[3].f.length) {
                Card qu3 = this.s[3].f[n2];
                int n4 = this.c(qu3, 0, -1);
                this.f.aq.q();
                if (n4 <= 0) {
                    this.f.b(2, "TripeaksAuto.subPrime");
                    this.f.aD.AboutDialog();
                    this.f.wHandler = true;
                    n4 = this.c(qu3, 0, -1);
                    this.f.i("Failed to read card at pyramid position " + (n2 + 30));
                    this.f.n();
                }
                if (this.f.d <= 5) {
                    this.f.g("Read level 3 card " + n2 + " value " + n4);
                }
                this.q.g[3][n2] = n4;
                qm_02 = new CardRun(this.q.b(qu3, n4));
                qu3.AboutDialog(qm_02);
                ++n2;
            }
            int n5 = 2;
            MainWindow qb_02 = this.f.aq;
            qb_02.c(n5, null);
            int n6 = 0;
            sqBoardReader sq2 = this;
            n5 = sq2.c(sq2.wHandler, 0, -1);
            if (n5 <= 0) {
                this.f.i("Error reading initial deal card");
            }
            if (this.f.d <= 5) {
                this.f.g("Read deck card " + 0 + " value " + n5);
            }
            int n7 = n5;
            this.wHandler.c(new CardRun(this.q.b(this.wHandler, n7)));
            ++n6;
            this.q.B[0][0] = n5;
            int n8 = 0;
            while (n8 < 22) {
                this.f.k("TriPeaksReadingCards");
                this.k();
                this.f.AboutDialog(200L, "TripeaksDeal");
                sqBoardReader sq3 = this;
                n5 = sq3.AboutDialog(sq3.wHandler, 0, n7, -1, false);
                if (this.f.d <= 5) {
                    this.f.g("First read of deck card " + n6 + " gives value " + n5);
                }
                int n9 = 0;
                while (n9 < 10) {
                    this.f.AboutDialog(100L, "Second read");
                    this.f.aD.AboutDialog();
                    sqBoardReader sq4 = this;
                    int n10 = sq4.AboutDialog(sq4.wHandler, 0, n7, -1, false);
                    if (n5 == n10) break;
                    n5 = n10;
                    if (this.f.d <= 5) {
                        this.f.g("Retrying read because card changed to " + n5 + " on second read");
                    }
                    ++n9;
                }
                if (n5 == -2) {
                    if (this.f.d <= 5) {
                        this.f.g("Second attempt on getNonDupCard");
                    }
                    this.k();
                    this.f.aD.AboutDialog(3000);
                    sqBoardReader sq5 = this;
                    n5 = sq5.AboutDialog(sq5.wHandler, 0, n7, -1, false);
                    if (n5 < 0) {
                        this.f.i("Failed to read AboutDialog deck card");
                    }
                }
                n7 = n5;
                if (this.f.d <= 5) {
                    this.f.g("Read deck card " + n6 + " value " + n5);
                }
                this.uPanel.c(new CardRun(this.q.b(this.uPanel, n5)));
                this.q.B[n6++][0] = n5;
                this.f.aq.o();
                ++n8;
            }
            this.uPanel.c(new CardRun(this.q.b(this.uPanel, 0)));
            this.rPanel.clear();
            n8 = 1;
            while (n8 < 14) {
                this.rPanel.add(n8);
                ++n8;
            }
            this.f.FPanel.d(false);
            this.f.aq.q();
            this.f.AboutDialog((long)(200 + this.f.aI), "Let tripeaks stabilize");
        }
        sqBoardReader sq6 = this;
        sq6.c((GameMove)null);
        return true;
    }

    final boolean i() {
        boolean bl2 = false;
        this.f.ao.AboutDialog(5, true);
        Card qu2 = this.q.AboutDialog(this.f.aY.AboutDialog);
        while (qu2 != null) {
            int n2 = qu2.c();
            for (Integer n3 : this.rPanel) {
                int n4 = n3;
                if (n2 != (n4 + 1) % 13 && (n2 + 1) % 13 != n4) continue;
                if (this.f.d <= 5) {
                    this.f.g("Candidates:" + String.valueOf(this.rPanel));
                }
                if (this.f.d <= 5) {
                    this.f.g("Could pair candidate card " + n4 + " with " + n2);
                }
                bl2 = true;
                break;
            }
            if (bl2) break;
            qu2 = SpiderVariantSolver.AboutDialog(this.f.aY.AboutDialog, qu2);
        }
        return bl2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    final void AboutDialog(GameMove object, int[] object2, int n2, int n3, boolean bl2) {
        ((GameMove)object).q = 0;
        ((GameMove)object).rPanel = 0;
        this.uPanel = this.f.aY.AboutDialog[7].f[0];
        this.wHandler = this.f.aY.AboutDialog[8].f[0];
        if (((GameMove)object).n) {
            int n4;
            if (this.f.d <= 4) {
                this.f.g("***Dealing (" + ((GameMove)object).l + " restored) at level " + n2);
            }
            if (this.f.uPanel) {
                this.q.AboutDialog(this.uPanel, this.wHandler, false);
                sqBoardReader sq2 = this;
                sq2.c((GameMove)null);
                return;
            }
            if (((GameMove)object).o) {
                this.f.AboutDialog((long)(300 + this.f.aI), "Pre new deal");
                this.f.c(this.wHandler.m - (double)((int)(this.f.FPanel.b / 2.0)) + this.g.AboutDialog.AboutDialog(), this.v.g.yHandler + this.f.FPanel.AboutDialog.b() + (double)(this.f.FPanel.c / 6));
                return;
            }
            this.f.AboutDialog((long)(50 + this.f.aI / 2));
            this.f.d(this.t.g.xHandler + 20.0, this.t.g.yHandler + 20.0);
            this.q.AboutDialog(this.uPanel, this.wHandler, false);
            sqBoardReader sq3 = this;
            sq3.c((GameMove)null);
            if (this.f.m == 4 || n2 != n3 - 1 || ((n4 = ((GameMove)object).AboutDialog) & 0xFF) != 99) return;
            this.f.AboutDialog(1000L);
            n3 = -1;
            if (!this.f.FPanel.o()) {
                sqBoardReader sq4 = this;
                n3 = sq4.AboutDialog(sq4.wHandler, -1, false);
            }
            if (!this.f.FPanel.v && n3 > 0) {
                this.q.B[23][0] = n3;
                CardRun qm_02 = this.wHandler.d;
                if (qm_02.c[0].g != 0) {
                    this.f.i("ERROR - Request for expose of deal card when already set");
                }
                qm_02.AboutDialog(n3);
                ((GameMove)object).AboutDialog = GameMove.AboutDialog(8, 0, 0, n3 / 100);
                object2[n2] = ((GameMove)object).AboutDialog;
                if (this.f.d > 4) return;
                this.f.g("Final deal card is " + n3 + " replaced in move at level " + n2);
                return;
            }
            if (this.f.d <= 5) {
                this.f.g("Updating last deck candidates after nomore dialog");
            }
            object = this;
            ((BoardReader)object).f.ao.AboutDialog(5, true);
            object2 = ((sqBoardReader)object).q.AboutDialog(((BoardReader)object).f.aY.AboutDialog);
            while (object2 != null) {
                n2 = 0;
                n3 = ((Card)object2).c();
                for (Integer n5 : ((sqBoardReader)object).rPanel) {
                    int n6 = n5;
                    if (n3 != (n6 + 11) % 13 + 1 && n3 != n6 % 13 + 1) continue;
                    if (((BoardReader)object).f.d <= 5) {
                        ((BoardReader)object).f.g("Paired candidate card " + n6 + " with " + n3 + ", removing as AboutDialog candidate");
                    }
                    ((sqBoardReader)object).rPanel.remove(n5);
                    n2 = 1;
                    break;
                }
                if (n2 != 0) continue;
                SpiderVariantSolver cfr_ignored_0 = ((sqBoardReader)object).q;
                object2 = SpiderVariantSolver.AboutDialog(((BoardReader)object).f.aY.AboutDialog, (Card)object2);
            }
            if (((BoardReader)object).f.d <= 5) {
                ((BoardReader)object).f.g("There are now " + ((sqBoardReader)object).rPanel.size() + " candidates remaining:" + String.valueOf(((sqBoardReader)object).rPanel));
            }
            if (((sqBoardReader)object).rPanel.size() == 0) {
                ((BoardReader)object).f.i("ERROR - Ran out of candidates for last card in deck");
            }
            this.f.FPanel.p();
            return;
        }
        if (this.f.uPanel) {
            CardRun qm_03 = ((GameMove)object).e.e();
            this.f.aY.AboutDialog[8].f[0].AboutDialog(qm_03);
            Object object3 = ((GameMove)object).e;
            ((Card)object3).j();
            this.c((GameMove)object);
            if (!this.f.uPanel || this.f.m == 1) return;
            object3 = this.f.aY.AboutDialog[0];
            if (((CardStack)object3).f[0].h() || ((CardStack)object3).f[3].h() || ((CardStack)object3).f[6].h()) return;
            int n7 = 0;
            while (n7 < 100) {
                this.f.ar.b(false);
                this.f.AboutDialog(10L);
                ++n7;
            }
            return;
        }
        if (this.f.d <= 5) {
            this.f.g("Synch stack to be clicked " + String.valueOf(((GameMove)object).e));
        }
        if (!this.AboutDialog(((GameMove)object).e, ((GameMove)object).e.AboutDialog().g, this.f.aI)) {
            ((GameMove)object).rPanel = 1;
            return;
        }
        this.f.AboutDialog(10L, "PostSynch");
        n3 = (int)(((GameMove)object).e.b.g.yHandler + this.f.FPanel.AboutDialog.b() + 3.0);
        bl2 = (int)(((GameMove)object).e.b.g.yHandler + this.f.FPanel.AboutDialog.b() + (double)this.g.c - 3.0);
        int n8 = (int)(((GameMove)object).e.m + 5.0 + this.g.AboutDialog.AboutDialog());
        n2 = (int)(((GameMove)object).e.m + this.g.b - 5.0 + this.g.AboutDialog.AboutDialog());
        this.f.c((double)n8, (double)n3);
        this.f.c((double)n2, (double)n3);
        this.f.c((double)n8, (double)bl2);
        this.f.c((double)n2, (double)bl2);
        this.f.SPanel = System.currentTimeMillis();
        CardRun qm_04 = ((GameMove)object).e.e();
        this.wHandler.AboutDialog(qm_04);
        Object object4 = ((GameMove)object).e;
        ((Card)object4).j();
        object4 = this;
        ((sqBoardReader)object4).c((GameMove)null);
    }

    final void j() {
        this.c((GameMove)null);
    }

    private void c(GameMove pJ2) {
        Object object;
        CardStack[] qvArray = this.f.aY.AboutDialog;
        int n2 = this.f.aY.AboutDialog.length;
        int n3 = 0;
        while (n3 < n2) {
            object = qvArray[n3];
            if (object == null || ((CardStack)object).AboutDialog > 3) break;
            Card[] quArray = ((CardStack)object).f;
            int n4 = ((CardStack)object).f.length;
            int n5 = 0;
            while (n5 < n4) {
                object = quArray[n5];
                if (!((Card)object).h && ((Card)object).d != null && ((Card)object).h()) {
                    ((Card)object).d.b = true;
                }
                ++n5;
            }
            ++n3;
        }
        object = this.q.AboutDialog(this.f.aY.AboutDialog);
        while (object != null) {
            if (!((Card)object).h && ((Card)object).d != null && ((Card)object).h()) {
                ((Card)object).d.b = false;
                if (pJ2 != null && ((Card)object).AboutDialog().g == 0) {
                    if (this.f.d <= 5) {
                        this.f.g("Open stack scan shows stack " + ((Card)object).c + " has newly exposed card");
                    }
                    this.n = object;
                    this.o = pJ2;
                }
            }
            object = SpiderVariantSolver.AboutDialog(this.f.aY.AboutDialog, (Card)object);
        }
        this.f.aY.AboutDialog[7].f[0].AboutDialog(true);
        this.f.aY.AboutDialog[8].f[0].AboutDialog(false);
    }

    @Override
    final void AboutDialog(GameMove pJ2, boolean bl2) {
        this.uPanel = this.f.aY.AboutDialog[7].f[0];
        this.wHandler = this.f.aY.AboutDialog[8].f[0];
        if (pJ2.n) {
            if (!bl2) {
                int sq2 = pJ2.AboutDialog;
                if ((sq2 & 0xFF) == 99) {
                    if (this.f.d <= 5) {
                        this.f.g("Skipping undo of 99 deal after nomore dialog");
                    }
                } else {
                    this.f.FPanel.k();
                }
            }
            int cfr_ignored_0 = pJ2.k;
            this.q.c(this.uPanel, this.wHandler);
            sqBoardReader object = this;
            object.c((GameMove)null);
            this.b(pJ2);
            return;
        }
        if (!bl2) {
            if (this.f.FPanel.v) {
                if (this.f.d <= 6) {
                    this.f.g("No more moves dialog is up during undo so use dismiss rather than undo");
                }
                this.f.FPanel.p();
            } else {
                this.f.FPanel.k();
            }
        }
        CardRun n2 = this.wHandler.e();
        pJ2.e.AboutDialog(n2);
        Card qu2 = pJ2.e;
        qu2.i();
        this.b(pJ2);
        int n3 = pJ2.e.b.AboutDialog;
        int n32 = pJ2.e.c;
        if (n3 > 0) {
            CardRun qm_02;
            if (n32 > 0 && (qm_02 = this.f.aY.AboutDialog[n3 - 1].f[n32 - 1].d) != null) {
                qm_02.b = true;
            }
            if (n32 < n3 + 6 && (qm_02 = this.f.aY.AboutDialog[n3 - 1].f[n32].d) != null) {
                qm_02.b = true;
            }
        }
    }

    private void k() {
        sqBoardReader sq2 = this;
        sq2.b(sq2.uPanel);
    }

    @Override
    final String AboutDialog(int n2, int n3) {
        Object object;
        if ((n3 & 8) != 0) {
            object = String.format("Deal", new Object[0]);
        } else {
            CardStack qv2 = this.f.aY.AboutDialog[(n2 &= 0xFF) / 10];
            object = qv2.f.length > 1 ? qv2.b + " column " + n2 % 10 : qv2.b;
        }
        String string = object;
        return object;
    }

    @Override
    final int[] b() {
        int[] nArray = new int[5];
        nArray[1] = 1;
        nArray[2] = 2;
        nArray[3] = 3;
        nArray[4] = 8;
        int[] nArray2 = nArray;
        return nArray;
    }

    @Override
    final double c() {
        return 0.2;
    }

    @Override
    final boolean AboutDialog(int[] nArray, int n2, int n3, int n4, String string) {
        int n5;
        if (this.f.d <= 5) {
            this.f.g("===== Card state check started: " + string);
        }
        this.f.aD.AboutDialog();
        n4 = 1;
        long l2 = System.currentTimeMillis() + 2000L;
        int n6 = 0;
        while (n6 < 4) {
            int n7;
            CardStack qv2 = this.f.aY.AboutDialog[n6];
            if (qv2 != null && ((n7 = this.AboutDialog(n3, qv2, l2)) != 1 || System.currentTimeMillis() > l2)) {
                n4 = 0;
                break;
            }
            ++n6;
        }
        if (n2 > 0 && ((n5 = nArray[n2 - 1]) >> 24 & 8) != 0) {
            CardStack qv3;
            int n8;
            if (this.f.d <= 5) {
                this.f.g("Previous move was AboutDialog deal, need synch on pile");
            }
            if ((n8 = this.AboutDialog(n3, qv3 = this.f.aY.AboutDialog[this.i], l2)) != 1) {
                n4 = 0;
            }
        }
        if (this.f.d <= 5) {
            this.f.g(n4 != 0 ? "===== Card state check completed OK" : "===== Card state check failed");
        }
        return n4 != 0;
    }
}

