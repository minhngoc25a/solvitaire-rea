/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.solver;

import com.solvitaire.solitaire.reader.pEBoardReader;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.util.qa;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import java.io.File;
import java.util.HashMap;

public final class pDSolver
extends SolitaireSolver {
    private int b;
    private boolean c;
    private boolean LHandler;
    private boolean MHandler;
    private int NHandler;
    private int OHandler;
    private int PPanel;
    private int Q = 0;
    private int R = 0;
    private int SPanel = 0;
    private int T = 0;
    private int U = 0;
    private int V = 0;
    private int W = 0;
    private int X = 0;
    private int Y = 21;
    private long[][] Z;
    private long[][] aa;
    int[] AboutDialog;
    private int ab;
    private boolean ac = true;

    pDSolver(SolitaireGameEngine qo_02) {
        super(qo_02, 2000);
        this.f = 7;
        this.o = 1;
        this.p = 52;
        this.rPanel = true;
    }

    @Override
    final String AboutDialog() {
        return "Klondike";
    }

    @Override
    final boolean b() {
        this.i();
        this.e = this.d.au + "klondike" + File.separator;
        this.b = 0;
        this.g = new int[50][this.f];
        this.h = new int[this.f];
        this.i = new int[this.f];
        this.B = new int[24][1];
        this.AboutDialog = new int[4];
        this.t = new int[this.f][10];
        if (this.d.d <= 3) {
            this.d.g("Constructed stacks");
        }
        if (this.FPanel) {
            if (this.d.d <= 4) {
                this.d.g("Running Klondike");
            }
            this.d.ap = new pEBoardReader(this);
            if (this.d.d <= 3) {
                this.d.g("Auto constructed");
            }
            this.d.ap.d();
        }
        this.c = false;
        if (!this.d.ap.e()) {
            return false;
        }
        this.d.aZ = new qa(this.d.aY, true);
        int n2 = 0;
        while (n2 < 7) {
            for (CardRun qm_02 : this.d.aZ.AboutDialog[0].f[n2].e) {
                if (qm_02 == this.d.aZ.AboutDialog[0].f[n2].d) continue;
                qm_02.b = true;
            }
            ++n2;
        }
        this.Z = new long[7][7];
        this.aa = new long[7][7];
        this.LHandler = false;
        this.J = 0;
        this.KHandler = 0;
        this.ab = this.d.l.m;
        this.MHandler = false;
        return true;
    }

    private double c(int n2, int n3) {
        double d2 = this.Z[n2][n3];
        if (this.aa[n2][n3] >= 0L) {
            d2 += (double)(this.d.PPanel - this.aa[n2][n3]);
        }
        return d2;
    }

    private int d(int n2, int n3) {
        double d2 = this.c(n2, n3);
        d2 = 1.0 / (1.1 - d2 / (double)this.d.PPanel) - 0.9090909090909091;
        n2 = (int)(d2 * -6.0);
        return n2;
    }

    @Override
    final void AboutDialog(int n2, boolean bl2) {
        if (this.d.d <= n2) {
            this.b(n2);
            if (bl2) {
                this.AboutDialog(n2, this.d.aY.AboutDialog[3]);
                this.AboutDialog(n2, this.d.aY.AboutDialog[1]);
                this.AboutDialog(n2, this.d.aY.AboutDialog[2]);
                this.AboutDialog(n2, this.d.aY.AboutDialog[0]);
                return;
            }
            this.AboutDialog(n2, this.d.aZ.AboutDialog[3]);
            this.AboutDialog(n2, this.d.aZ.AboutDialog[1]);
            this.AboutDialog(n2, this.d.aZ.AboutDialog[2]);
            this.AboutDialog(n2, this.d.aZ.AboutDialog[0]);
            this.d.g(String.format("Hidden counts: %f  %f,%f  %f,%f,%f  %f,%f,%f,%f  %f,%f,%f,%f,%f  %f,%f,%f,%f,%f,%f", this.c(1, 0), this.c(2, 0), this.c(2, 1), this.c(3, 0), this.c(3, 1), this.c(3, 2), this.c(4, 0), this.c(4, 1), this.c(4, 2), this.c(4, 3), this.c(5, 0), this.c(5, 1), this.c(5, 2), this.c(5, 3), this.c(5, 4), this.c(6, 0), this.c(6, 1), this.c(6, 2), this.c(6, 3), this.c(6, 4), this.c(6, 5)));
            this.d.g(String.format("Hidden factors: %d  %d,%d  %d,%d,%d  %d,%d,%d,%d  %d,%d,%d,%d,%d  %d,%d,%d,%d,%d,%d", this.d(1, 0), this.d(2, 0), this.d(2, 1), this.d(3, 0), this.d(3, 1), this.d(3, 2), this.d(4, 0), this.d(4, 1), this.d(4, 2), this.d(4, 3), this.d(5, 0), this.d(5, 1), this.d(5, 2), this.d(5, 3), this.d(5, 4), this.d(6, 0), this.d(6, 1), this.d(6, 2), this.d(6, 3), this.d(6, 4), this.d(6, 5)));
        }
    }

    @Override
    final void AboutDialog(int n2, int n3) {
        if (this.d.l.c == 6) {
            this.NHandler = -1;
            this.OHandler = -3;
            this.PPanel = 0;
        } else {
            this.NHandler = 0;
            this.OHandler = 0;
            this.PPanel = -3;
        }
        n3 = this.d.aZ.AboutDialog[1].f[0].e.size();
        if (this.d.PPanel > 100000L && !this.LHandler) {
            this.LHandler = true;
            this.d.U += 30;
            this.d.T = this.d.U;
        }
        if (this.d.aZ.AboutDialog[2].f[0].d == null && this.d.aZ.AboutDialog[1].f[0].d != null) {
            this.AboutDialog(n2, n3, false, false);
            return;
        }
        this.AboutDialog(n2, n3, false, false, false);
    }

    private boolean e(int n2, int n3) {
        this.d.T = n2 + n3;
        return this.d.T <= 0;
    }

    private boolean c(CardImage pV2) {
        boolean bl2;
        if (pV2.f < 3) {
            bl2 = true;
        } else {
            bl2 = true;
            int n2 = 0;
            while (n2 < 4) {
                CardImage pV3 = this.d.aZ.AboutDialog[3].f[n2].AboutDialog();
                if (pV3 == null || pV3.e != pV2.e && pV3.f < pV2.f) {
                    bl2 = false;
                    break;
                }
                ++n2;
            }
        }
        return bl2;
    }

    private void AboutDialog(int n2, int n3, boolean bl2, boolean bl3, boolean bl4) {
        Object object;
        int n4;
        Object object2;
        int n5;
        int n6 = this.d.T;
        this.l();
        if (this.d.aZ.h > this.yHandler) {
            return;
        }
        if (this.d.PPanel++ % 5000000L == 0L) {
            this.b(4);
            this.AboutDialog(4, false);
        }
        if (this.d.PPanel == 8155L) {
            this.d.d = 2;
        }
        if (this.d.PPanel == 9000L) {
            this.d.d = 5;
        }
        if (!this.EHandler && this.G < 0) {
            pDSolver pD2 = this;
            n5 = pD2.b(pD2.d.aZ, n2);
            if (n5 != 2 && this.d.aZ.h > 0 && this.d.aZ.d[this.d.aZ.h - 1] == GameMove.AboutDialog(24, 0, 0, 0)) {
                --this.d.aZ.h;
            }
            if (n5 == 2 || n5 == 1) {
                return;
            }
        }
        if (!this.EHandler && this.G < 0 && !bl4 && this.e(n6, this.OHandler)) {
            this.f(n2, n3);
        }
        if (!this.EHandler && this.G < 0 && this.e(n6, this.NHandler)) {
            this.g(n2, n3);
        }
        if (!this.EHandler && this.G < 0 && !bl4 && this.e(n6, -3)) {
            n5 = 0;
            while (n5 < 7) {
                object2 = this.d.aZ.AboutDialog[0].f[n5];
                n4 = this.AboutDialog(n2, (Card)object2, n3);
                if (n4 != 0) {
                    object = ((Card)object2).d.c[0];
                    if (this.d.FPanel.l == 1 && this.c((CardImage)object)) {
                        return;
                    }
                }
                ++n5;
            }
        }
        if (!this.EHandler && this.G < 0 && this.e(n6, this.PPanel)) {
            boolean bl5 = this.h(n2, n3);
            n5 = bl5 ? 1 : 0;
            if (bl5 && (object2 = this.d.aZ.AboutDialog[2].f[0].AboutDialog()) != null && this.d.FPanel.l == 1 && this.c((CardImage)object2)) {
                return;
            }
        }
        if (!this.EHandler && this.G < 0 && !bl4 && this.e(n6, 0)) {
            ++this.U;
            if (this.d.d <= 2) {
                this.d.g("Try split run");
            }
            n5 = 0;
            while (n5 < 7) {
                object2 = this.d.aZ.AboutDialog[0].f[n5];
                n4 = 0;
                while (n4 < 7) {
                    object = this.d.aZ.AboutDialog[0].f[n4];
                    this.AboutDialog((Card)object, (Card)object2, 5, n2, n3);
                    ++n4;
                }
                ++n5;
            }
            if (this.d.d <= 2) {
                this.d.g("After split run");
            }
            --this.U;
        }
        if (!this.EHandler && this.G < 0 && !bl3) {
            this.d.T = n6;
            if (bl2) {
                this.e(n6, 2);
                this.AboutDialog(n2, n3, true, true);
            } else {
                int cfr_ignored_0 = this.d.FPanel.l;
                if (this.e(n6, 15)) {
                    this.AboutDialog(n2, n3, true, true);
                }
            }
        }
        if (!(this.EHandler || this.G >= 0 || bl4 || this.d.h)) {
            this.d.T = n6 + 3;
            if (this.d.T < 0) {
                ++this.V;
                if (this.d.d <= 2) {
                    this.d.g("Try ace to stack");
                }
                n5 = 0;
                while (n5 < 4) {
                    object2 = this.d.aZ.AboutDialog[3].f[n5];
                    n4 = 0;
                    while (n4 < 7) {
                        object = this.d.aZ.AboutDialog[0].f[n4];
                        this.ab -= 10;
                        this.AboutDialog((Card)object, (Card)object2, 6, n2, n3);
                        this.ab += 10;
                        ++n4;
                    }
                    ++n5;
                }
                if (this.d.d <= 2) {
                    this.d.g("After ace to stack");
                }
                --this.V;
            }
        }
        this.d.T = n6;
    }

    @Override
    final int AboutDialog(qa qa2) {
        int n2;
        this.MHandler = true;
        int n3 = 0;
        if (qa2.AboutDialog[1].f[0] == null || qa2.AboutDialog[2].f[0] == null) {
            this.MHandler = false;
            return qa2.h + 1;
        }
        if (qa2.AboutDialog[1].f[0].d != null || qa2.AboutDialog[2].f[0].d != null) {
            this.MHandler = false;
            return qa2.h + 1;
        }
        Card[] quArray = qa2.AboutDialog[0].f;
        int n4 = qa2.AboutDialog[0].f.length;
        int n5 = 0;
        while (n5 < n4) {
            Card qu2 = quArray[n5];
            CardRun qm_02 = qu2.d;
            if (qm_02 != null) {
                if (qu2.e.size() == 1) {
                    n3 += qm_02.AboutDialog;
                } else {
                    this.MHandler = false;
                    return qa2.h + 1;
                }
            }
            ++n5;
        }
        if (this.d.l.k == 999) {
            if (this.d.d <= 3) {
                this.d.g("No max moves so return solve depth of " + (qa2.h + 1));
            }
            return qa2.h + 1;
        }
        if (this.d.l.c == 1 || this.d.l.c == 2) {
            n2 = qa2.h + n3;
        } else {
            n2 = qa2.h + n3;
            if (n2 > this.d.l.k) {
                this.MHandler = false;
                n2 = qa2.h + 1;
            }
        }
        return n2;
    }

    private int b(qa qa2) {
        int n2 = this.AboutDialog(qa2);
        return this.b(qa2, n2, false);
    }

    private int b(qa qa2, int n2, boolean bl2) {
        if (!this.MHandler) {
            return -1;
        }
        if (n2 > this.d.l.k) {
            this.MHandler = false;
            return -1;
        }
        qa2.i = n2;
        n2 -= qa2.h;
        if (bl2) {
            qa2.d[qa2.h] = GameMove.AboutDialog(24, 0, 0, 0);
            ++qa2.h;
        }
        return n2;
    }

    private void f(int n2, int n3) {
        ++this.SPanel;
        if (this.d.d <= 2) {
            this.d.g("Try stack to stack");
        }
        int n4 = 0;
        while (n4 < 7) {
            block11: {
                Card qu2;
                block12: {
                    qu2 = this.d.aZ.AboutDialog[0].f[n4];
                    if (qu2.d == null) break block11;
                    if (qu2.d.AboutDialog != 1) break block12;
                    CardImage pV2 = qu2.d.c[0];
                    if (pV2.g == 0) {
                        int n5 = this.e(qu2);
                        if (n5 > 0) {
                            qu2.d.c[0].AboutDialog(n5);
                        } else if (this.d.uPanel && this.d.m == 1) {
                            this.d.g("Skipping because not all cards known");
                            this.EHandler = true;
                            return;
                        }
                    }
                    if (pV2.f == 1) break block11;
                }
                int n6 = 0;
                while (n6 < 7) {
                    Card qu3 = this.d.aZ.AboutDialog[0].f[n6];
                    this.AboutDialog(qu3, qu2, 3, n2, n3);
                    ++n6;
                }
            }
            ++n4;
        }
        if (this.d.d <= 2) {
            this.d.g("After stack to stack");
        }
        --this.SPanel;
    }

    private void g(int n2, int n3) {
        if (this.d.aZ.AboutDialog[2].f[0].d == null) {
            return;
        }
        ++this.R;
        if (this.d.d <= 2) {
            this.d.g("Try pile to stack");
        }
        Card qu2 = this.d.aZ.AboutDialog[2].f[0];
        int n4 = 0;
        while (n4 < 7) {
            Card qu3 = this.d.aZ.AboutDialog[0].f[n4];
            this.ab += 5;
            this.AboutDialog(qu3, qu2, 2, n2, n3);
            this.ab -= 5;
            ++n4;
        }
        if (this.d.d <= 2) {
            this.d.g("After pile to stack");
        }
        --this.R;
    }

    private boolean h(int n2, int n3) {
        boolean bl2 = false;
        if (this.d.aZ.AboutDialog[2].f[0].d == null) {
            return false;
        }
        ++this.T;
        if (this.d.d <= 2) {
            this.d.g("Try pile to ace");
        }
        int n4 = 0;
        while (n4 < 4) {
            Card qu2 = this.d.aZ.AboutDialog[3].f[n4];
            this.ab += 10;
            bl2 = this.AboutDialog(qu2, this.d.aZ.AboutDialog[2].f[0], 4, n2, n3);
            this.ab -= 10;
            if (bl2 || qu2.d == null && this.d.aZ.AboutDialog[2].f[0].c() == 1) break;
            ++n4;
        }
        if (this.d.d <= 2) {
            this.d.g("After pile to ace");
        }
        --this.T;
        return bl2;
    }

    private boolean AboutDialog(int n2, Card qu2, int n3) {
        boolean bl2 = false;
        ++this.Q;
        if (this.d.d <= 2) {
            this.d.g("Try stack to aces for stack " + qu2.c);
        }
        int n4 = 0;
        while (n4 < 4) {
            Card qu3 = this.d.aZ.AboutDialog[3].f[n4];
            this.ab += 10;
            bl2 = this.AboutDialog(qu3, qu2, 1, n2, n3);
            this.ab -= 10;
            if (bl2 || qu3.d == null && qu2.c() == 1) break;
            ++n4;
        }
        if (this.d.d <= 2) {
            this.d.g("After stack to aces");
        }
        --this.Q;
        return bl2;
    }

    private void AboutDialog(int n2, int n3, boolean bl2, boolean bl3) {
        ++this.W;
        int n4 = this.AboutDialog(n3, this.d.aZ.AboutDialog[1].f[0], this.d.aZ.AboutDialog[2].f[0], true);
        if (n4 > 0) {
            int n5 = n4;
            if ((n5 >> 16 & 0xFF) != 0) {
                n3 |= 0x80;
            }
            this.d.aZ.d[this.d.aZ.h] = n4;
            ++this.d.aZ.h;
            long l2 = 0L;
            if (this.d.FPanel.l > 1) {
                l2 = this.c();
                this.G = this.b(l2);
            }
            if (this.G < 0) {
                if (this.d.FPanel.l > 1) {
                    this.AboutDialog(l2);
                }
                if (this.d.d <= 3) {
                    this.d.g("Recursing after deal: " + GameMove.AboutDialog(n4) + " index " + this.d.aZ.b);
                }
                this.AboutDialog(n2, n3, bl2, false, bl3);
                if (this.d.d <= 3) {
                    this.d.g("Returned after trying deal " + GameMove.AboutDialog(n4) + " with index " + this.d.aZ.b);
                }
            }
            if (this.G >= 0) {
                --this.G;
            }
            --this.d.aZ.h;
            this.b(n4, this.d.aZ.AboutDialog[1].f[0], this.d.aZ.AboutDialog[2].f[0], true);
        }
        --this.W;
    }

    @Override
    final long c() {
        long l2 = 0L;
        this.n = 0;
        int n2 = 0;
        while (n2 < 4) {
            pDSolver pD2 = this;
            l2 += pD2.AboutDialog(pD2.d.aZ.AboutDialog[3].f[n2], l2, false, false);
            ++n2;
        }
        if (this.d.FPanel.l > 1) {
            pDSolver pD3 = this;
            long l3 = pD3.AboutDialog(pD3.d.aZ.AboutDialog[2].f[0], l2, false, false);
            pDSolver pD4 = this;
            long l4 = pD4.AboutDialog(pD4.d.aZ.AboutDialog[1].f[0], l2 += l3, false, false);
            l2 += l4;
            n2 = this.d.aZ.b & 0xFF;
            l2 += 1000003L * this.H[n2];
        }
        n2 = 0;
        while (n2 < this.f) {
            pDSolver pD5 = this;
            l2 += pD5.AboutDialog(pD5.d.aZ.AboutDialog[0].f[n2], l2, true, false);
            ++n2;
        }
        boolean cfr_ignored_0 = this.d.AboutDialog;
        return l2;
    }

    private boolean AboutDialog(Card qu2, Card qu3, int n2, int n3, int n4) {
        int n5;
        int n6;
        if (this.G >= 0) {
            return false;
        }
        boolean bl2 = false;
        if (qu2 == qu3) {
            return false;
        }
        if (qu3.d == null) {
            return false;
        }
        int n7 = qu3.d.AboutDialog;
        boolean bl3 = false;
        int n8 = 1;
        if (qu2.b.AboutDialog == 0 && qu2.d == null) {
            if (qu3.b.AboutDialog == 0 && qu3.e.size() == 1) {
                return false;
            }
            if (qu3.d.c[0].f == 13) {
                n8 = 2;
            }
        }
        if ((n8 = qu2.AboutDialog(qu3, n8, false)) > 0) {
            if (n3 > 0) {
                n6 = n3;
                n5 = n6 & 0xFF;
                n6 = n3;
                if (n8 == (n6 = (n6 & 0xF0000) >> 16) && qu3.b.AboutDialog * 10 + qu3.c == n5) {
                    return false;
                }
            }
            if (n8 > 0) {
                switch (n2) {
                    case 3: {
                        if (n8 >= qu3.d.AboutDialog) break;
                        n8 = -1;
                        break;
                    }
                    case 2: {
                        if (qu3.d.c[0].f != 1) break;
                        n8 = -1;
                        break;
                    }
                    case 5: {
                        if (n8 == qu3.d.AboutDialog) {
                            n8 = -1;
                            break;
                        }
                        n5 = qu3.d.c[qu3.d.AboutDialog - n8 - 1].g;
                        if (this.d.aZ.AboutDialog[3].f[0].b() + 1 != n5 && this.d.aZ.AboutDialog[3].f[1].b() + 1 != n5 && this.d.aZ.AboutDialog[3].f[2].b() + 1 != n5 && this.d.aZ.AboutDialog[3].f[3].b() + 1 != n5) {
                            n8 = -1;
                            break;
                        }
                        if (this.d.d > 3) break;
                        this.d.g("Productive split");
                        break;
                    }
                    case 6: {
                        bl2 = true;
                        if (n8 != 1) {
                            n8 = -1;
                            break;
                        }
                        if (qu3.d.c[qu3.d.AboutDialog - 1].f >= 3) break;
                        n8 = -1;
                    }
                }
            }
        }
        if (n8 >= 0) {
            n5 = n8 > 0 && qu2.d != null ? 1 : 0;
            if ((n8 = qu2.AboutDialog(qu3, n8, null)) >= 0) {
                if (this.d.d <= 2) {
                    this.d.g("Completed join with split of " + n8);
                }
                this.d.aZ.d[this.d.aZ.h] = n6 = GameMove.AboutDialog(n8, n7, qu3, qu2, n5 != 0);
                ++this.d.aZ.h;
                if (!this.b(qu2, qu3)) {
                    bl3 = true;
                    long l2 = this.c();
                    this.G = this.b(l2);
                    if (this.G < 0) {
                        this.AboutDialog(l2);
                        n7 = this.d.T;
                        if (this.d.d <= 3) {
                            this.d.g("Join mode " + n2 + " productive for src " + String.valueOf(qu3) + " and dest " + String.valueOf(qu2));
                        }
                        if (qu3.b.AboutDialog == this.d.ap.i) {
                            n4 = this.d.aZ.AboutDialog[1].f[0].e.size();
                        }
                        n2 = 0;
                        n5 = qu3.e.size() - 1;
                        if (n5 >= 0 && qu3.b.AboutDialog == 0 && qu3.d.b) {
                            qu3.d.b = false;
                            n2 = 1;
                            --this.Y;
                            this.ab += 5;
                            long l3 = this.d.PPanel - this.aa[qu3.c][n5];
                            long[] lArray = this.Z[qu3.c];
                            int n9 = n5;
                            lArray[n9] = lArray[n9] + l3;
                            this.aa[qu3.c][n5] = -1L;
                            if (this.LHandler) {
                                this.d.T += this.d(qu3.c, n5);
                            }
                        }
                        if (!this.EHandler) {
                            if (!this.AboutDialog(qu3, n3) && !this.d.ac) {
                                if (this.d.d <= 5) {
                                    this.d.g("Skipping call to solve because checkReadCard failed");
                                }
                                this.G = 0;
                            } else if (!this.EHandler) {
                                this.AboutDialog(n6, n4, false, bl2, false);
                            }
                        }
                        if (n2 != 0) {
                            this.ab -= 5;
                            qu3.d.b = true;
                            ++this.Y;
                            this.aa[qu3.c][n5] = this.d.PPanel;
                        }
                        this.d.T = n7;
                    }
                    if (this.G >= 0) {
                        --this.G;
                    }
                }
                --this.d.aZ.h;
                qu2.b(qu3, n8, null);
            }
        }
        return bl3;
    }

    @Override
    final int[] d() {
        pDSolver pD2 = this;
        return pD2.b(pD2.n(), 1);
    }

    private HashMap n() {
        HashMap hashMap = new HashMap(52);
        this.AboutDialog(hashMap, this.d.aZ.AboutDialog[0], 1);
        this.AboutDialog(hashMap, this.d.aZ.AboutDialog[3], 1);
        this.AboutDialog(hashMap, this.d.aZ.AboutDialog[1], 1);
        this.AboutDialog(hashMap, this.d.aZ.AboutDialog[2], 1);
        return hashMap;
    }

    @Override
    final int AboutDialog(Card object) {
        object = this.n();
        int n2 = ((HashMap)object).size();
        if (n2 == 51) {
            int n3 = 1;
            while (n3 < 14) {
                int n4 = 1;
                while (n4 < 5) {
                    int n5 = n4 * 100 + n3;
                    if (!((HashMap)object).containsKey(n5)) {
                        if (this.d.d <= 4) {
                            this.d.g("Final card must be " + n5);
                        }
                        Card[] quArray = this.d.aZ.AboutDialog[0].f;
                        int n6 = this.d.aZ.AboutDialog[0].f.length;
                        int n7 = 0;
                        while (n7 < n6) {
                            Card qu2 = quArray[n7];
                            if (qu2.e.size() != 0) {
                                CardRun qm_02 = (CardRun)qu2.e.getFirst();
                                if (qm_02.AboutDialog > 0 && qm_02.c[0].g == 0) {
                                    if (this.d.d <= 6) {
                                        this.d.g("***Final card (on stack " + qu2.c + ") must be " + n5);
                                    }
                                    this.g[0][qu2.c] = n5;
                                    qm_02.AboutDialog(n5);
                                    qm_02 = (CardRun)this.d.aY.AboutDialog[0].f[qu2.c].e.getFirst();
                                    qm_02.AboutDialog(n5);
                                }
                            }
                            ++n7;
                        }
                    }
                    ++n4;
                }
                ++n3;
            }
        }
        return n2;
    }

    @Override
    final boolean AboutDialog(Card qu2, Card qu3) {
        return false;
    }

    @Override
    final int AboutDialog(qa object, boolean n2, int n3, int n4) {
        if (n2) {
            return 0;
        }
        if (object == null) {
            return 0;
        }
        if (((qa)object).AboutDialog[3] == null) {
            return 0;
        }
        n2 = 0;
        if (this.b((qa)object) >= 0) {
            n2 = n3 > 0 ? 1 : 4;
        } else {
            Card[] quArray = ((qa)object).AboutDialog[3].f;
            int n5 = ((qa)object).AboutDialog[3].f.length;
            int n6 = 0;
            while (n6 < n5) {
                object = quArray[n6];
                if (((Card)object).d != null && ((Card)object).d.AboutDialog >= n4 && (n3 == 0 || ((Card)object).d.c[((Card)object).d.AboutDialog - 1].e == n3)) {
                    n2 += 1;
                }
                ++n6;
            }
        }
        return n2;
    }

    @Override
    final boolean AboutDialog(qa qa2, int n2) {
        return this.b(qa2, n2, true) >= 0;
    }

    @Override
    final boolean AboutDialog(String stringArray, String[] stringArray2, int n2) {
        Object object;
        int n3;
        SolitaireGameEngine qo_02;
        String string;
        boolean bl2 = false;
        CardStack qv2 = this.d.aY.AboutDialog[0];
        Card qu2 = this.d.aY.AboutDialog[this.d.ap.h].f[0];
        Card qu3 = this.d.aY.AboutDialog[this.d.ap.i].f[0];
        if (stringArray == null) {
            string = "You must specify deal option 1 or 3 for Klondike";
            qo_02 = this.d;
            qo_02.AboutDialog(string, false);
        }
        this.d.aY.b = 0;
        this.uPanel = 24;
        this.v = 24;
        int n4 = 0;
        while (n4 < 7) {
            int n5 = n4++;
            this.h[n5] = n5 + 1;
        }
        int[] nArray = new int[7];
        nArray[1] = 1;
        nArray[2] = 2;
        nArray[3] = 3;
        nArray[4] = 4;
        nArray[5] = 5;
        nArray[6] = 6;
        int[] nArray2 = nArray;
        int n6 = 7;
        if (stringArray != null) {
            stringArray = stringArray.trim().split(":");
            try {
                this.d.FPanel.l = Integer.parseInt(stringArray[0]);
                if (this.d.FPanel.l != 1 && this.d.FPanel.l != 3) {
                    string = "You must specify deal option 1 or 3 for Klondike";
                    qo_02 = this.d;
                    qo_02.AboutDialog(string, false);
                }
                if (stringArray.length == 1) {
                    if (n2 != 9) {
                        string = "Klondike input file must have 8 rows of cards";
                        qo_02 = this.d;
                        qo_02.AboutDialog(string, false);
                    }
                } else {
                    bl2 = true;
                    n6 = 0;
                    this.uPanel = Integer.parseInt(stringArray[1]);
                    this.v = Integer.parseInt(stringArray[2]);
                    n2 = 0;
                    while (n2 < 7) {
                        int n7 = Integer.parseInt(stringArray[n2 + 3]);
                        int n8 = n7 % 100;
                        n3 = n7 / 100;
                        this.h[n2] = n8;
                        nArray2[n2] = n3;
                        if (n8 > n6) {
                            n6 = n8;
                        }
                        ++n2;
                    }
                }
            }
            catch (NumberFormatException numberFormatException) {
                string = "Error parsing Klondike options for partially completed deck";
                qo_02 = this.d;
                qo_02.AboutDialog(string, false);
            }
        }
        int n9 = 0;
        while (n9 < n6) {
            String[] stringArray3 = stringArray2[n9 + 1].split(",");
            int n10 = 0;
            while (n10 < 7) {
                Object object2;
                Card qu4 = qv2.f[n10];
                n3 = -1;
                if (bl2) {
                    if (n9 < this.h[n10]) {
                        object2 = stringArray3[n10];
                        n3 = this.d.c((String)object2);
                    }
                } else if (n10 >= n9) {
                    object2 = stringArray3[n10 - n9];
                    n3 = this.d.c((String)object2);
                }
                if (n3 >= 0) {
                    if (this.d.d <= 3) {
                        this.d.g("Loading card " + n3 + " into initcards " + n10 + "," + n9);
                    }
                    this.g[n9][n10] = n3;
                    if (nArray2[n10] > n9) {
                        object2 = new CardRun(this.b(qu4, n3));
                        qu4.AboutDialog((CardRun)object2);
                        ((CardRun)object2).b = true;
                    } else {
                        if (this.d.d <= 2) {
                            this.d.g("Loading card " + n3 + " into stack " + n10 + " level " + n9);
                        }
                        object2 = qu4.d;
                        object = new CardRun(this.b(qu4, n3));
                        int n11 = 0;
                        if (bl2 && object2 != null) {
                            n11 = qu4.AboutDialog((CardRun)object2, (CardRun)object, false, false);
                        }
                        if (n11 > 0) {
                            ((CardRun)object2).AboutDialog((CardRun)object, n11);
                        } else {
                            qu4.AboutDialog((CardRun)object);
                        }
                    }
                }
                ++n10;
            }
            ++n9;
        }
        this.d.ap.g();
        String[] stringArray4 = stringArray2[n6 + 1].split(",");
        try {
            int n12 = 0;
            while (n12 < this.uPanel) {
                int n13;
                String string2 = stringArray4[n12];
                this.B[n12][0] = n13 = this.d.c(string2);
                if (this.d.d <= 2) {
                    this.d.g("Loading card " + n13 + " into deck level " + n12);
                }
                if (n12 < this.uPanel - this.v) {
                    qu3.AboutDialog(new CardRun(this.b(qu3, n13)));
                } else {
                    CardRun qm_02 = new CardRun(this.b(qu2, n13));
                    qu2.AboutDialog(qm_02);
                    qm_02.b = true;
                }
                ++n12;
            }
        }
        catch (ArrayIndexOutOfBoundsException arrayIndexOutOfBoundsException) {
            String string3 = "Too few cards in the deal pile";
            SolitaireGameEngine qo_03 = this.d;
            qo_03.AboutDialog(string3, false);
        }
        if (bl2) {
            stringArray4 = stringArray2.length > n6 + 2 ? stringArray2[n6 + 2].split(",") : "??,??,??,??,".split(",");
            int n14 = 0;
            while (n14 < 4) {
                int n15;
                String string4 = stringArray4[n14];
                this.AboutDialog[n14] = n15 = this.d.c(string4);
                if (n15 > 0) {
                    int n16 = n15 / 100;
                    int n17 = n15 % 100;
                    object = this.d.aY.AboutDialog[3].f[n14];
                    CardRun qm_03 = new CardRun(this.b((Card)object, n16 * 100 + 1));
                    ((Card)object).AboutDialog(qm_03);
                    int n18 = 2;
                    while (n18 <= n17) {
                        qm_03.AboutDialog(new CardRun(this.b((Card)object, n16 * 100 + n18)), 1);
                        ++n18;
                    }
                }
                ++n14;
            }
        }
        boolean bl3 = this.b(1, false);
        return bl3;
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
        while (n4 < this.uPanel) {
            if (this.B[n4][0] == 0) break;
            this.AboutDialog(hashMap, this.B[n4][0], "deal ");
            ++n3;
            ++n4;
        }
        n4 = 0;
        while (n4 < 4) {
            if (this.AboutDialog[n4] != 0) {
                n2 = this.AboutDialog[n4];
                int n5 = n2 / 100;
                n2 %= 100;
                int n6 = 1;
                while (n6 <= n2) {
                    this.AboutDialog(hashMap, n5 * 100 + n6, "aces ");
                    ++n3;
                    ++n6;
                }
            }
            ++n4;
        }
        return n3;
    }

    @Override
    final void AboutDialog(StringBuffer stringBuffer) {
        int n2;
        int n3;
        stringBuffer.append(SolitaireGameEngine.j[this.d.i]);
        int n4 = 0;
        int[] nArray = new int[this.f];
        int n5 = 0;
        while (n5 < 49) {
            n3 = 1;
            n2 = 0;
            while (n2 < this.f) {
                if (this.g[n5][n2] != 0) {
                    nArray[n2] = n5 + 1;
                    n3 = 0;
                }
                ++n2;
            }
            if (n3 != 0) break;
            ++n5;
        }
        n3 = 0;
        while (n3 < 7) {
            if (nArray[n3] != n3 + 1) {
                n4 = 1;
                break;
            }
            ++n3;
        }
        stringBuffer.append(",");
        stringBuffer.append(this.d.FPanel.l);
        n3 = n4 == 0 && this.uPanel == 24 && this.v == 24 ? 0 : 1;
        if (n3 != 0) {
            stringBuffer.append(":");
            stringBuffer.append(this.uPanel);
            stringBuffer.append(":");
            stringBuffer.append(this.v);
            n2 = 0;
            while (n2 < 7) {
                stringBuffer.append(":" + (this.i[n2] * 100 + nArray[n2]));
                ++n2;
            }
        }
        stringBuffer.append("\n# Stacks:\n");
        n2 = 0;
        while (n2 < n5) {
            n4 = 0;
            while (n4 < this.f) {
                if (n3 == 0 && n4 < n2) {
                    stringBuffer.append("     ");
                } else {
                    stringBuffer.append(pDSolver.i(this.g[n2][n4]));
                    stringBuffer.append(",");
                }
                ++n4;
            }
            stringBuffer.append("\n");
            ++n2;
        }
        stringBuffer.append("# Deck:\n");
        n2 = 0;
        while (n2 < this.uPanel) {
            stringBuffer.append(pDSolver.i(this.B[n2][0]));
            stringBuffer.append(",");
            ++n2;
        }
        if (n3 != 0) {
            stringBuffer.append("\n# Aces:\n");
            n2 = 0;
            while (n2 < 4) {
                stringBuffer.append(pDSolver.i(this.AboutDialog[n2]));
                stringBuffer.append(",");
                ++n2;
            }
        }
    }

    @Override
    final StringBuffer AboutDialog(String string, int n2) {
        return new StringBuffer(String.format("%s[%03d:%02d,%02d,%02d,%02d,%02d,%02d,%02d,%02d]: ", string, n2, this.Q, this.R, this.SPanel, this.T, this.U, this.V, this.W, this.Y));
    }

    @Override
    final void AboutDialog(int n2) {
    }

    final int AboutDialog(int n2, Card qu2, Card qu3, boolean bl2) {
        int n3 = 0;
        int n4 = 0;
        int n5 = 0;
        int n6 = n2 & 0xFFFFFF7F;
        if (qu2.d == null) {
            if (bl2) {
                if (qu3.d == null) {
                    if (this.d.d <= 3) {
                        this.d.g("Pilestack empty so rejecting deal switch");
                    }
                    return -1;
                }
                if ((n2 & 0x80) != 0) {
                    if (this.d.d <= 3) {
                        this.d.g("Hit end feed after flip with nothing productive since so reject another flip");
                    }
                    return -1;
                }
                if (this.X + 1 >= this.d.aE) {
                    if (this.d.d <= 2) {
                        this.d.g("Hit deal pass limit, prevent another deal");
                    }
                    return -1;
                }
                ++this.X;
            }
            n2 = qu3.e.size();
            if (this.d.d <= 3) {
                this.d.g("Flipping pile remaining of " + n2 + " cards");
            }
            Card.AboutDialog(qu2, qu3);
            if (bl2) {
                n5 = n2;
                ++n4;
            }
        }
        n2 = 0;
        while (n2 < this.d.FPanel.l) {
            if (qu2.d != null) {
                CardRun qm_02 = qu2.d();
                if (this.d.d <= 3) {
                    this.d.g("Moving " + String.valueOf(qm_02.c[0]) + " to pile");
                }
                if (qm_02.c[0].g == 0) {
                    this.d.g("Logic error - moving unknown card");
                }
                qu3.AboutDialog(qm_02);
                ++n3;
            }
            ++n2;
        }
        n2 = -1;
        if (bl2) {
            ++this.d.aZ.b;
            n2 = GameMove.AboutDialog(8, n4, n5, n3);
            int n7 = qu2.e.size();
            if (n6 == n7) {
                if (this.d.d <= 3) {
                    this.d.g("Hit unproductive point while working, back out deal and reject attempt");
                }
                this.b(n2, qu2, qu3, true);
                return -1;
            }
        }
        return n2;
    }

    final void b(int n2, Card qu2, Card qu3, boolean bl2) {
        int n3 = n2;
        n3 &= 0xFF;
        int n4 = 0;
        while (n4 < n3) {
            CardRun qm_02 = qu3.e();
            if (this.d.d <= 4) {
                this.d.g("Undeal card " + String.valueOf(qm_02.c[0]) + " dealt " + n3);
            }
            qu2.c(qm_02);
            ++n4;
        }
        n3 = n2;
        if ((n3 >> 8 & 0xFF) > 0) {
            Card.AboutDialog(qu2, qu3);
            if (bl2) {
                --this.X;
            }
            this.d.FPanel.AboutDialog(4, 0, n2, "State after switching deal stacks (ignore level)");
        }
        if (bl2) {
            --this.d.aZ.b;
        }
    }

    @Override
    final int AboutDialog(qa qa2, boolean bl2) {
        int n2;
        if (bl2) {
            return 0;
        }
        int n3 = this.ab;
        int n4 = this.b(qa2) * 10;
        if (n4 > 0) {
            qa2.g[qa2.h - 1] = n3;
            n2 = n3 + n4;
        }
        return n2;
    }

    @Override
    final int AboutDialog(Card qu2, Card qu3, int n2) {
        return this.AboutDialog(qu2, qu3, n2, 0);
    }

    private int AboutDialog(Card qu2, Card qu3, int n2, int n3) {
        int n4 = -1;
        if (qu3.b.AboutDialog == 1 || qu3.b.AboutDialog == 2) {
            return -1;
        }
        if (qu3.b.AboutDialog >= 3 ? qu3.d == null && qu2.d.c[qu2.d.AboutDialog - 1].f != 1 : qu3.d == null && (qu2.b.AboutDialog >= 3 || qu2.d.c[0].f != 13)) {
            return -1;
        }
        int n5 = qu2.d.AboutDialog;
        int n6 = 1;
        if (qu3.d == null) {
            n6 = 2;
            if (qu3.b.AboutDialog == 0) {
                if (n3 != 0 && n3 != 1) {
                    return -1;
                }
                if (qu2.d.c[0].f != 13) {
                    return -1;
                }
            } else if (qu3.b.AboutDialog == 3) {
                n6 = 6;
            }
        }
        if ((n3 = qu3.AboutDialog(qu2, n6, true)) >= 0) {
            int n7 = n6 = n3 == 0 ? n5 : n3;
            if (n2 > 0 && n2 != n6) {
                return -1;
            }
            if (this.d.d <= 5) {
                this.d.g("User move will be permitted " + n3);
            }
            n2 = 0;
            if (n3 > 0) {
                n2 = qu3.d != null ? 2 : 0;
                n2 = n2 | (n3 < n5 ? 1 : 0);
            }
            n4 = GameMove.AboutDialog(n2, n6, qu2, qu3);
            this.k(n4);
            int n8 = n4;
            if ((n8 >> 24 & 8) == 0) {
                qa qa2 = new qa(this.d.aY, true);
                qa2.AboutDialog[GameMove.d((int)n4)].f[GameMove.e(n4)].AboutDialog(qa2.AboutDialog[GameMove.b((int)n4)].f[GameMove.c(n4)], n6, null);
                if (this.AboutDialog(qa2, n4, true) == 2) {
                    this.d.be.d[this.d.be.h] = GameMove.AboutDialog(24, 0, 0, 0);
                    ++this.d.be.h;
                }
            }
        }
        return n4;
    }

    @Override
    final int AboutDialog(CardImage object) {
        int n2;
        object = ((CardImage)object).o;
        if (((Card)object).b.AboutDialog == this.d.ap.h) {
            if (this.d.d <= 5) {
                this.d.g("Got double click on feed stack");
            }
            n2 = this.o();
        } else {
            Object object2 = object;
            object = this;
            int n3 = -1;
            if (((Card)object2).b.AboutDialog == 3) {
                n2 = -1;
            } else {
                Card[] quArray;
                Card[] quArray2 = ((SolitaireSolver)object).d.aY.AboutDialog[3].f;
                int n4 = ((SolitaireSolver)object).d.aY.AboutDialog[3].f.length;
                int n5 = 0;
                while (n5 < n4) {
                    Card qu2 = quArray2[n5];
                    n3 = ((pDSolver)object).AboutDialog((Card)object2, qu2, 1, 0);
                    if (n3 > 0) break;
                    ++n5;
                }
                int n6 = ((Card)object2).d.AboutDialog;
                if (n3 <= 0 && ((Card)object2).c < 30) {
                    quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
                    int n7 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
                    n4 = 0;
                    while (n4 < n7) {
                        Card qu3 = quArray[n4];
                        if (qu3 != object2 && (n3 = ((pDSolver)object).AboutDialog((Card)object2, qu3, n6, 2)) > 0) break;
                        ++n4;
                    }
                }
                if (n3 <= 0 && ((Card)object2).b.AboutDialog == 0) {
                    quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
                    int n8 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
                    n4 = 0;
                    while (n4 < n8) {
                        Card qu4 = quArray[n4];
                        if (qu4 != object2 && (n3 = ((pDSolver)object).AboutDialog((Card)object2, qu4, -1, 0)) > 0) break;
                        ++n4;
                    }
                }
                if (n3 <= 0 && ((Card)object2).c < 30) {
                    quArray = ((SolitaireSolver)object).d.aY.AboutDialog[0].f;
                    int n9 = ((SolitaireSolver)object).d.aY.AboutDialog[0].f.length;
                    n4 = 0;
                    while (n4 < n9) {
                        Card qu5 = quArray[n4];
                        if (qu5 != object2 && qu5.d == null && (n3 = ((pDSolver)object).AboutDialog((Card)object2, qu5, -1, 1)) > 0) break;
                        ++n4;
                    }
                }
                n2 = n3;
            }
        }
        int n10 = n2;
        return n2;
    }

    @Override
    final int b(Card qu2) {
        int n2 = -1;
        if (qu2.b.AboutDialog == this.d.ap.h) {
            if (this.d.d <= 5) {
                this.d.g("Trying AboutDialog deal " + qu2.c);
            }
            n2 = this.o();
        }
        return n2;
    }

    private int o() {
        int n2;
        Card qu2 = this.d.aY.AboutDialog[1].f[0];
        Card qu3 = this.d.aY.AboutDialog[2].f[0];
        int n3 = 0;
        int n4 = 0;
        if (qu2.d == null) {
            int n5;
            if (qu3.d == null) {
                if (this.d.d <= 3) {
                    this.d.g(" pilestack empty so rejecting deal switch");
                }
                return -1;
            }
            n2 = 0;
            if (this.d.ak) {
                n5 = this.d.Z - 1;
                while (n5 >= 0) {
                    n4 = this.d.aY.d[n5];
                    if ((n4 >> 24 & 8) != 0) {
                        ++n2;
                        --n5;
                        continue;
                    }
                    break;
                }
            } else {
                n5 = this.d.be.h - 1;
                while (n5 >= 0) {
                    n4 = this.d.be.d[n5];
                    if ((n4 >> 24 & 8) != 0) {
                        ++n2;
                        --n5;
                        continue;
                    }
                    break;
                }
            }
            if (n2 > (n5 = qu3.e.size()) / this.d.FPanel.l + 1) {
                if (this.d.d <= 3) {
                    this.d.g("More consecutive deals than cards so reject another deal");
                }
                return -1;
            }
            n4 = n5;
            ++n3;
            n2 = n5;
        } else {
            n2 = qu2.e.size();
        }
        if (n2 > this.d.FPanel.l) {
            n2 = this.d.FPanel.l;
        }
        n2 = GameMove.AboutDialog(8, n3, n4, n2);
        this.k(n2);
        return n2;
    }
}

