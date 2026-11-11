/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.solver;

import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.util.qa;
import com.solvitaire.solitaire.reader.qi_0BoardReader;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import java.io.File;
import java.util.HashMap;

final class KlondikeSolver
extends SolitaireSolver {
    private int AboutDialog;

    KlondikeSolver(SolitaireGameEngine qo_02) {
        super(qo_02, 330);
        this.f = 7;
        this.rPanel = false;
        this.o = 1;
        this.p = 52;
    }

    @Override
    final String AboutDialog() {
        return "Pyramid";
    }

    @Override
    final boolean b() {
        this.i();
        this.e = this.d.au + "pyramid" + File.separator;
        this.g = new int[this.f][this.f];
        this.t = new int[this.f][this.f];
        this.B = new int[24][1];
        if (this.FPanel) {
            if (this.d.d <= 4) {
                this.d.g("Running Pyramid");
            }
            this.d.ap = new qi_0BoardReader(this);
            if (this.d.d <= 3) {
                this.d.g("Auto constructed");
            }
            this.d.ap.d();
        }
        if (!this.d.ap.e()) {
            return false;
        }
        this.d.aZ = new qa(this.d.aY, true);
        this.J = 0;
        this.KHandler = 0;
        this.AboutDialog = this.d.l.m;
        if (this.d.d <= 5 && this.AboutDialog > 0) {
            this.d.g("Current score is now " + this.AboutDialog);
        }
        return true;
    }

    @Override
    final void AboutDialog(int n2, int n3) {
        this.AboutDialog(n2, n3, 7);
    }

    private void AboutDialog(int n2, int n3, int n4) {
        int n5;
        this.l();
        if (this.d.aZ.h > this.yHandler) {
            return;
        }
        if (this.d.PPanel++ % 100000L == 0L) {
            this.b(4);
        }
        if (!this.EHandler) {
            if (this.d.U < 0) {
                KlondikeSolver qh2 = this;
                n5 = qh2.AboutDialog(qh2.d.aZ, n2, true);
                if (!this.I && this.d.uPanel && this.d.m != 1 && this.d.m != 3) {
                    n5 = 0;
                }
                if (!(this.d.l.b || this.I || this.d.uPanel)) {
                    if (n5 != 2) {
                        if (this.d.l.c == 3) {
                            this.d.l.n += this.KHandler;
                        } else if (this.d.l.c == 6) {
                            this.d.l.m = this.J;
                            if (this.d.d <= 5) {
                                this.d.g("Using best score as accumulated score giving " + this.d.l.m);
                            }
                        } else if (this.d.l.c != 4) {
                            String string = "Could not find AboutDialog solution";
                            SolitaireGameEngine qo_02 = this.d;
                            qo_02.AboutDialog(string, false);
                            return;
                        }
                    }
                    this.d.g("*** ALLOWING BOARD NOT COMPLETED");
                    this.d.ap.AboutDialog(this.d.bd, null, false, true, false);
                    Card qu2 = this.d.aY.AboutDialog[7].f[0];
                    Card qu3 = this.d.aY.AboutDialog[8].f[0];
                    if (qu2.d == null && qu3.d == null) {
                        if (this.d.d <= 5) {
                            this.d.g("Feed and pile both null so redeal immediately");
                        }
                    } else {
                        KlondikeSolver qh3 = this;
                        int n6 = qh3.AboutDialog(qh3.d.bd.d, this.d.bd.h);
                        if (this.d.d <= 5) {
                            this.d.g("There are " + n6 + " flips in bestMoves");
                        }
                        n6 = 3 - n6;
                        int n7 = 0;
                        while (n6 > 0) {
                            n5 = this.AboutDialog(qu2, qu3, false);
                            if (this.d.d <= 5) {
                                this.d.g(String.format("Dealt %08x to get to reHandler-deal icon", n5));
                            }
                            this.d.bd.d[this.d.bd.h] = n5;
                            if (this.d.bd.h > 0) {
                                this.d.bd.g[this.d.bd.h] = this.d.bd.g[this.d.bd.h - 1];
                            }
                            ++this.d.bd.h;
                            if ((n5 >> 16 & 0xFF) > 0) {
                                --n6;
                            }
                            ++n7;
                        }
                        n5 = 0;
                        while (n5 < n7) {
                            KlondikeSolver qh4 = this;
                            qh4.AboutDialog(qh4.d.bd.d[this.d.bd.h - n5 - 1], qu2, qu3, false);
                            ++n5;
                        }
                        int n8 = this.d.bd.h - 1;
                        this.d.bd.d[n8] = this.d.bd.d[n8] & 0xFF00FFFF;
                    }
                    this.d.bd.d[this.d.bd.h] = GameMove.AboutDialog(24, 0, null, null);
                    ++this.d.bd.h;
                    this.b(false);
                    if (this.d.d <= 5) {
                        this.d.g("Issuing play to invoke new deal");
                    }
                    this.d.ao.AboutDialog(5, this.d.bd, "Best moves(board incomplete)");
                    this.d.ap.AboutDialog(this.d.bd, null, true, true, false);
                    if (this.d.d <= 5) {
                        this.d.g("Flagging SOLVED to exit and process new deal");
                    }
                    n5 = 2;
                    this.EHandler = true;
                }
            } else {
                KlondikeSolver qh5 = this;
                n5 = qh5.b(qh5.d.aZ, n2);
            }
            if (n5 == 2) {
                if (this.d.d <= 5) {
                    this.d.g("***testSolved says solved, initialCredit was " + this.d.U);
                }
                this.G = 999;
            } else if (n5 == 1) {
                return;
            }
        }
        if (this.G < 0 && !this.l(n4)) {
            if (this.G < 0 && (n4 & 1) != 0) {
                if (this.d.d <= 2) {
                    this.d.g("Depth " + this.d.aZ.h + " try pyramid join");
                }
                this.c(1, n2);
            }
            if (this.G < 0 && (n4 & 4) != 0) {
                if (this.d.d <= 2) {
                    this.d.g("Depth " + this.d.aZ.h + " try from pile");
                }
                this.c(3, n2);
            }
            if (this.G < 0 && (n4 & 2) != 0) {
                if (this.d.d <= 2) {
                    this.d.g("Depth " + this.d.aZ.h + " try from feed");
                }
                this.c(2, n2);
            }
            if (this.G < 0 && (n4 & 2) != 0) {
                if (this.d.d <= 2) {
                    this.d.g("Depth " + this.d.aZ.h + " try from pile to feed");
                }
                this.c(4, n2);
            }
            if (this.G < 0) {
                if (this.d.d <= 3) {
                    this.d.g("At level " + this.d.aZ.h + " dealindex " + this.d.aZ.b + " try AboutDialog deal");
                }
                KlondikeSolver qh6 = this;
                n5 = qh6.AboutDialog(qh6.d.aZ.AboutDialog[7].f[0], this.d.aZ.AboutDialog[8].f[0], true);
                if (n5 > 0) {
                    this.d.aZ.d[this.d.aZ.h] = n5;
                    ++this.d.aZ.h;
                    if (this.d.d <= 3) {
                        this.d.g("Recursing after deal move:" + GameMove.AboutDialog(n5));
                    }
                    this.AboutDialog(-1, n3, 2);
                    if (this.d.d <= 3) {
                        this.d.g("Returned after trying deal move:" + GameMove.AboutDialog(n5) + " with index " + this.d.aZ.b + " backout " + this.G);
                    }
                    --this.d.aZ.h;
                    this.AboutDialog(n5, this.d.aZ.AboutDialog[7].f[0], this.d.aZ.AboutDialog[8].f[0], true);
                }
            }
        }
        if (this.G >= 0) {
            --this.G;
            if (this.d.d <= 1) {
                this.d.g("Backout now " + this.G);
            }
        }
    }

    private boolean b(Card qu2, boolean bl2) {
        Card qu3 = this.AboutDialog(true);
        while (qu3 != null) {
            if (qu2.c == qu3.c && qu2.b.AboutDialog == qu3.b.AboutDialog) break;
            qu3 = this.AboutDialog(qu3, true);
        }
        return qu3 != null;
    }

    final Card AboutDialog(boolean bl2) {
        Card qu2 = bl2 ? this.d.aY.AboutDialog[this.f - 1].f[0] : this.d.aZ.AboutDialog[this.f - 1].f[0];
        if (!qu2.h()) {
            qu2 = this.AboutDialog(qu2, bl2);
        }
        return qu2;
    }

    @Override
    final long c() {
        long l2 = 0L;
        for (Object object : this.d.aZ.AboutDialog[7].f[0].e) {
            int n2 = 0;
            while (n2 < 24) {
                if (((CardRun)object).c[0].g == this.B[n2][0]) {
                    l2 |= 1L << n2;
                    break;
                }
                ++n2;
            }
            if (n2 != 24) continue;
            String string = "Logic error processing deck";
            object = this.d;
            ((SolitaireGameEngine)object).AboutDialog(string, false);
        }
        for (Object object : this.d.aZ.AboutDialog[8].f[0].e) {
            int n3 = 0;
            while (n3 < 24) {
                if (((CardRun)object).c[0].g == this.B[n3][0]) {
                    l2 |= 1L << n3;
                    break;
                }
                ++n3;
            }
            if (n3 != 24) continue;
            String string = "Logic error processing deck";
            object = this.d;
            ((SolitaireGameEngine)object).AboutDialog(string, false);
        }
        l2 <<= 2;
        l2 |= (long)this.d.aZ.b;
        l2 <<= 5;
        l2 |= (long)this.d.aZ.AboutDialog[8].f[0].e.size();
        l2 <<= 28;
        long l3 = 1L;
        int n4 = 0;
        while (n4 < 7) {
            int n5 = 0;
            while (n5 <= n4) {
                if (this.d.aZ.AboutDialog[n4].f[n5].h()) {
                    l2 |= l3;
                }
                l3 <<= 1;
                ++n5;
            }
            ++n4;
        }
        return l2;
    }

    final Card AboutDialog(Card qu2, boolean bl2) {
        Card qu3 = null;
        CardStack[] qvArray = bl2 ? this.d.aY.AboutDialog : this.d.aZ.AboutDialog;
        int n2 = qu2.b.AboutDialog;
        while (n2 >= 0) {
            int n3 = 0;
            while (n3 < qvArray[n2].f.length) {
                if (!(n2 == qu2.b.AboutDialog && n3 <= qu2.c || !qvArray[n2].f[n3].h() || n2 != this.f - 1 && (qvArray[n2 + 1].f[n3].h() || qvArray[n2 + 1].f[n3 + 1].h()))) {
                    qu3 = qvArray[n2].f[n3];
                    break;
                }
                ++n3;
            }
            if (qu3 != null) break;
            --n2;
        }
        return qu3;
    }

    static void c(Card qu2) {
        int n2 = qu2.b.AboutDialog;
        if (n2 == 7 || n2 == 8) {
            qu2.b.f[1].AboutDialog(qu2.e());
            return;
        }
        qu2.j();
    }

    static void d(Card qu2) {
        int n2 = qu2.b.AboutDialog;
        if (n2 == 7 || n2 == 8) {
            Card qu3 = qu2;
            qu3.AboutDialog(qu3.b.f[1].e());
            return;
        }
        qu2.i();
    }

    private boolean c(Card qu2, int n2) {
        boolean bl2 = false;
        int n3 = qu2.c();
        if (n3 == 13) {
            bl2 = true;
            int n4 = GameMove.AboutDialog(qu2);
            KlondikeSolver.c(qu2);
            if (this.d.d <= 2) {
                this.d.g("King " + n3 + " on " + qu2.c + " hidden");
            }
            this.d.aZ.d[this.d.aZ.h] = n4;
            ++this.d.aZ.h;
            this.AboutDialog += 5;
            this.AboutDialog(n4, 0, n2);
            this.AboutDialog -= 5;
            --this.d.aZ.h;
            KlondikeSolver.d(qu2);
            if (this.d.d <= 2) {
                this.d.g("King " + n3 + " on " + qu2.c + " made visible again");
            }
        }
        if (this.G >= 0) {
            --this.G;
            if (this.d.d <= 1) {
                this.d.g("Backout now " + this.G);
            }
        }
        return bl2;
    }

    private boolean l(int n2) {
        KlondikeSolver qh2 = this;
        boolean bl2 = qh2.c(qh2.d.aZ.AboutDialog[7].f[0], n2);
        if (!bl2 && (n2 & 1) != 0) {
            Object object = this.AboutDialog(false);
            while (object != null) {
                if (this.G > 0 || (bl2 = this.c((Card)object, 7))) break;
                Card qu2 = object;
                object = this;
                object = ((KlondikeSolver)object).AboutDialog(qu2, false);
            }
        }
        return bl2;
    }

    private void c(int n2, int n3) {
        block12: {
            if (this.d.d <= 3) {
                this.d.g("Entered dojoins for mode " + n2);
            }
            if (n2 == 1) {
                Card qu2 = this.AboutDialog(false);
                while (qu2 != null) {
                    if (this.G <= 0) {
                        Object object = qu2;
                        Object object2 = this;
                        object2 = ((KlondikeSolver)object2).AboutDialog((Card)object, false);
                        while (object2 != null) {
                            if (this.G > 0) break;
                            this.AboutDialog((Card)object2, qu2, n2, 7);
                            object = object2;
                            object2 = this;
                            object2 = ((KlondikeSolver)object2).AboutDialog((Card)object, false);
                        }
                        object = qu2;
                        object2 = this;
                        qu2 = ((KlondikeSolver)object2).AboutDialog((Card)object, false);
                        continue;
                    }
                    break block12;
                }
                return;
            }
            if (n2 == 3) {
                Card qu3 = this.AboutDialog(false);
                while (qu3 != null) {
                    if (this.G <= 0) {
                        this.AboutDialog(qu3, this.d.aZ.AboutDialog[8].f[0], n2, 7);
                        Card qu4 = qu3;
                        KlondikeSolver qh2 = this;
                        qu3 = qh2.AboutDialog(qu4, false);
                        continue;
                    }
                    break block12;
                }
                return;
            }
            if (n2 == 2) {
                Card qu5 = this.AboutDialog(false);
                while (qu5 != null) {
                    if (this.G <= 0) {
                        this.AboutDialog(qu5, this.d.aZ.AboutDialog[7].f[0], n2, 7);
                        Card qu6 = qu5;
                        KlondikeSolver qh3 = this;
                        qu5 = qh3.AboutDialog(qu6, false);
                        continue;
                    }
                    break block12;
                }
                return;
            }
            if (n2 == 4) {
                KlondikeSolver qh4 = this;
                qh4.AboutDialog(qh4.d.aZ.AboutDialog[8].f[0], this.d.aZ.AboutDialog[7].f[0], n2, 6);
                return;
            }
            String string = "Invalid mode " + n2;
            SolitaireGameEngine qo_02 = this.d;
            qo_02.AboutDialog(string, false);
        }
    }

    private void AboutDialog(Card qu2, Card qu3, int n2, int n3) {
        if (qu2 == qu3) {
            return;
        }
        if (qu3.d == null) {
            return;
        }
        int n4 = qu3.d.AboutDialog;
        if (qu2.c() + qu3.c() == 13) {
            if (this.d.d <= 3) {
                this.d.g("Paired " + String.valueOf(qu2) + ":" + qu2.b() + " and " + String.valueOf(qu3) + ":" + qu3.b());
            }
            KlondikeSolver.c(qu3);
            KlondikeSolver.c(qu2);
            this.d.aZ.d[this.d.aZ.h] = n4 = GameMove.AboutDialog(n4, qu3, qu2);
            ++this.d.aZ.h;
            long l2 = this.c();
            if (this.b(l2) < 0) {
                this.AboutDialog(l2);
                if (this.d.d <= 3) {
                    this.d.g("Join mode " + n2 + " productive for src " + String.valueOf(qu3) + " and dest " + String.valueOf(qu2));
                }
                this.AboutDialog += 5;
                this.AboutDialog(n4, 0, n3);
                this.AboutDialog -= 5;
            }
            --this.d.aZ.h;
            if (this.d.d <= 3) {
                this.d.g("Restored " + String.valueOf(qu2) + ":" + qu2.b() + " and " + String.valueOf(qu3) + ":" + qu3.b() + " backout " + this.G);
            }
            KlondikeSolver.d(qu2);
            KlondikeSolver.d(qu3);
        }
    }

    @Override
    final void AboutDialog(int n2, boolean bl2) {
        if (this.d.d <= n2) {
            this.b(n2);
            this.AboutDialog(n2, this.d.aZ.AboutDialog[7]);
            this.AboutDialog(n2, this.d.aZ.AboutDialog[8]);
            n2 = 0;
            while (n2 < this.f) {
                StringBuffer stringBuffer = new StringBuffer();
                int n3 = 0;
                while (n3 < 7 - n2) {
                    stringBuffer.append("  ");
                    ++n3;
                }
                n3 = 0;
                while (n3 <= n2) {
                    if (this.d.aZ.AboutDialog[n2].f[n3].h() && this.d.aZ.AboutDialog[n2].f[n3].d != null) {
                        stringBuffer.append(this.d.aZ.AboutDialog[n2].f[n3].d.c[0]);
                    } else {
                        stringBuffer.append("   ");
                    }
                    stringBuffer.append(" ");
                    ++n3;
                }
                this.d.g(stringBuffer.toString());
                ++n2;
            }
        }
    }

    @Override
    final int AboutDialog(Card qu2) {
        return 0;
    }

    @Override
    final boolean AboutDialog(Card qu2, Card qu3) {
        return false;
    }

    /*
     * WARNING - void declaration
     */
    @Override
    final int AboutDialog(qa qa2, boolean bl2, int n2, int n3) {
        void var2_6;
        void var4_8;
        void var3_7;
        if (bl2) {
            return 0;
        }
        if (qa2 == null) {
            return 0;
        }
        if (qa2.AboutDialog == null) {
            return 0;
        }
        int n4 = var3_7 > 0 ? 1 : 4;
        int n5 = 6;
        while (n5 >= 0) {
            int n6 = 0;
            while (n6 < 7) {
                void var2_4;
                if (n6 > n5) break;
                Card qu2 = qa2.AboutDialog[n5].f[n6];
                if (qu2.h() && KlondikeSolver.AboutDialog(qu2.d.c[0], (int)var3_7, (int)var4_8) && --var2_4 == false) {
                    return 0;
                }
                ++n6;
            }
            --n5;
        }
        for (CardRun qm_02 : qa2.AboutDialog[7].f[0].e) {
            void var2_5;
            if (!KlondikeSolver.AboutDialog(qm_02.c[0], (int)var3_7, (int)var4_8) || --var2_5 != false) continue;
            return 0;
        }
        for (CardRun qm_03 : qa2.AboutDialog[8].f[0].e) {
            if (!KlondikeSolver.AboutDialog(qm_03.c[0], (int)var3_7, (int)var4_8) || --var2_6 != false) continue;
            return 0;
        }
        return (int)var2_6;
    }

    @Override
    final boolean f() {
        return true;
    }

    @Override
    final int AboutDialog(qa qa2, boolean bl2) {
        if (bl2) {
            return 0;
        }
        if (qa2 == null) {
            return 0;
        }
        if (qa2.AboutDialog == null) {
            return 0;
        }
        bl2 = false;
        int[] nArray = new int[]{500, 250, 150, 100, 75, 50, 25};
        int n2 = 6;
        while (n2 >= 0) {
            int n3 = 0;
            while (n3 < 7) {
                if (n3 > n2 || qa2 == null || qa2.AboutDialog[n2].f[n3].h()) break;
                ++n3;
            }
            if (n3 <= n2) break;
            bl2 += nArray[n2];
            --n2;
        }
        int n4 = this.AboutDialog + bl2;
        if (this.d.d <= 3) {
            this.b(9);
            this.d.g("Current score is " + n4);
        }
        return n4;
    }

    @Override
    final boolean AboutDialog(qa qa2, int n2) {
        if (qa2 == null) {
            return false;
        }
        if (qa2.AboutDialog == null) {
            return false;
        }
        boolean bl2 = !qa2.AboutDialog[0].f[0].h();
        return bl2;
    }

    @Override
    final boolean AboutDialog(String object, String[] stringArray, int n2) {
        Object object2;
        int n3;
        if (n2 != 9) {
            String string = "Pyramid input file must have 8 rows of cards";
            object = this.d;
            ((SolitaireGameEngine)object).AboutDialog(string, false);
        }
        int n4 = 0;
        while (n4 < 7) {
            String[] stringArray2 = stringArray[n4 + 1].split(",");
            int n5 = 0;
            while (n5 < 7) {
                n3 = 0;
                if (n5 <= n4) {
                    object2 = stringArray2[n5];
                    n3 = this.d.c((String)object2);
                    if (this.d.d <= 2) {
                        this.d.g("Loading card " + n3 + " into pyramid " + (n4 * 10 + n5));
                    }
                    object2 = this.d.aY.AboutDialog[n4].f[n5];
                    ((Card)object2).AboutDialog(new CardRun(this.b((Card)object2, n3)));
                }
                this.g[n4][n5] = n3;
                ++n5;
            }
            ++n4;
        }
        try {
            String[] stringArray3 = stringArray[8].split(",");
            n2 = 0;
            while (n2 < 24) {
                String string = stringArray3[n2];
                this.B[n2][0] = n3 = this.d.c(string);
                if (this.d.d <= 2) {
                    this.d.g("Loading card " + n3 + " into deck level " + n2);
                }
                object2 = this.d.aY.AboutDialog[7].f[0];
                ((Card)object2).c(new CardRun(this.b((Card)object2, n3)));
                ++n2;
            }
        }
        catch (ArrayIndexOutOfBoundsException arrayIndexOutOfBoundsException) {
            String string = "Less than 24 cards in the deal pile";
            SolitaireGameEngine qo_02 = this.d;
            qo_02.AboutDialog(string, false);
        }
        return this.b(1, true);
    }

    @Override
    final void AboutDialog(HashMap hashMap, int n2, String string) {
        int n3;
        Integer n4 = n2;
        Integer n5 = (Integer)hashMap.get(n4);
        if (n5 == null) {
            n3 = 1;
        } else {
            n3 = n5;
            ++n3;
        }
        if (this.d.d <= 2) {
            this.d.g("Adding " + string + " card " + n2 + " giving " + n3);
        }
        hashMap.put(n4, n3);
    }

    @Override
    final void AboutDialog(StringBuffer stringBuffer) {
        stringBuffer.append(SolitaireGameEngine.j[this.d.i] + "\n# Stacks:\n");
        int n2 = 0;
        while (n2 < this.f) {
            int n3 = this.f - n2 - 1;
            while (n3 > 0) {
                stringBuffer.append("   ");
                --n3;
            }
            n3 = 0;
            while (n3 < 7) {
                if (this.g[n2][n3] == 0) break;
                stringBuffer.append(KlondikeSolver.i(this.g[n2][n3]));
                stringBuffer.append(", ");
                ++n3;
            }
            stringBuffer.append("\n");
            ++n2;
        }
        stringBuffer.append("# Deck:\n");
        n2 = 0;
        while (n2 < 24) {
            stringBuffer.append(KlondikeSolver.i(this.B[n2][0]));
            stringBuffer.append(",");
            ++n2;
        }
    }

    @Override
    final StringBuffer AboutDialog(String string, int n2) {
        return new StringBuffer(string + "[" + n2 + "]: ");
    }

    @Override
    final void AboutDialog(int n2) {
    }

    private int c(Card qu2, Card qu3) {
        int n2 = 0;
        if (qu2.d != null) {
            String string = "Cannot restore feed to non-empty feedstack";
            Object object = this.d;
            ((SolitaireGameEngine)object).AboutDialog(string, false);
        }
        for (Object object : qu3.e) {
            ++n2;
            qu2.c((CardRun)object);
        }
        qu3.f();
        return n2;
    }

    private void d(Card qu2, Card qu3) {
        if (qu3.d != null) {
            String string = "Cannot unrestore feed to non-empty pilestack";
            Object object = this.d;
            ((SolitaireGameEngine)object).AboutDialog(string, false);
        }
        for (Object object : qu2.e) {
            qu3.c((CardRun)object);
        }
        qu2.f();
    }

    final int AboutDialog(Card qu2, Card qu3, boolean bl2) {
        int n2;
        int n3 = bl2 ? (this.d.aZ.b == 2 ? 1 : 0) : (n2 = this.d.aY.b == 2 ? 1 : 0);
        if (bl2 && n2 != 0 && qu2.e.size() < 2) {
            if (this.d.d <= 3) {
                this.d.g("End of deal tries");
            }
            return -1;
        }
        n2 = 0;
        int n4 = 0;
        int n5 = 0;
        CardRun qm_02 = qu2.e();
        if (qm_02 != null) {
            qu3.AboutDialog(qm_02);
            n2 = qm_02.c[0].f;
            if (this.d.d <= 3) {
                this.d.g("Moving " + String.valueOf(qm_02.c[0]) + " to pile");
            }
        } else {
            ++n4;
        }
        if (qu2.d == null) {
            if (qu3.d == null) {
                if (this.d.d <= 3) {
                    this.d.g(" Pilestack empty? " + (qu3.d == null) + " = retracing");
                }
                return -1;
            }
            if (bl2) {
                ++this.d.aZ.b;
            } else {
                ++this.d.aY.b;
            }
            n5 = this.c(qu2, qu3);
            if (this.d.d <= 3) {
                this.d.g("Deal index now work:" + this.d.aZ.b + " auto:" + this.d.aY.b + " flipping pile remaining of " + n5 + " cards");
            }
            ++n4;
        }
        return GameMove.AboutDialog(8, n4, n5, n2);
    }

    final void AboutDialog(int n2, Card qu2, Card qu3, boolean bl2) {
        if ((n2 = n2 >> 16 & 0xFF) != 0) {
            this.d(qu2, qu3);
            if (bl2) {
                --this.d.aZ.b;
            } else {
                --this.d.aY.b;
            }
        }
        if (n2 < 2) {
            CardRun qm_02 = qu3.e();
            if (this.d.d <= 3) {
                this.d.g("Undeal card " + String.valueOf(qm_02.c[0]));
            }
            qu2.AboutDialog(qm_02);
        }
    }

    @Override
    final int AboutDialog(HashMap hashMap) {
        int n2 = 0;
        int n3 = 0;
        while (n3 < this.f) {
            int n4 = 0;
            while (n4 < this.f) {
                if (n4 <= n3) {
                    ++n2;
                    this.AboutDialog(hashMap, this.d.aY.AboutDialog[n3].f[n4].b(), "pyramid");
                }
                ++n4;
            }
            ++n3;
        }
        n3 = 0;
        while (n3 < 24) {
            if (this.B[n3][0] == 0) break;
            this.AboutDialog(hashMap, this.B[n3][0], "deal ");
            ++n2;
            ++n3;
        }
        return n2;
    }

    @Override
    final void g() {
        int n2 = 0;
        while (n2 < 7) {
            if (this.d.aY.AboutDialog[n2] == null) {
                return;
            }
            int n3 = 0;
            while (n3 < this.d.aY.AboutDialog[n2].f.length) {
                Object object = this.d.aY.AboutDialog[n2].f[n3];
                if (((Card)object).h()) {
                    object = ((Card)object).d;
                    if (object != null && ((CardRun)object).AboutDialog > 0) {
                        this.t[n3][n2] = ((CardRun)object).c[0].g == 0 ? (!this.EHandler && n3 == this.d.ap.AboutDialog && n2 == this.d.ap.b ? 3 : 2) : 4;
                    }
                } else {
                    this.t[n3][n2] = 0;
                }
                ++n3;
            }
            ++n2;
        }
    }

    @Override
    final int[] d() {
        String string = "Pyramid does not support unknown cards";
        SolitaireGameEngine qo_02 = this.d;
        qo_02.AboutDialog(string, false);
        return null;
    }

    @Override
    final int AboutDialog(Card qu2, Card qu3, int n2) {
        if (qu2.h() && qu3.h()) {
            if (qu2.b.AboutDialog < 7 && !this.b(qu2, true)) {
                return -1;
            }
            if (qu3.b.AboutDialog < 7 && !this.b(qu3, true)) {
                return -1;
            }
            if (qu2.c() + qu3.c() == 13) {
                int n3 = GameMove.AboutDialog(1, qu2, qu3);
                this.k(n3);
                return n3;
            }
            if (qu2.b.AboutDialog == 7 && qu3.b.AboutDialog == 8 || qu2.b.AboutDialog == 8 && qu3.b.AboutDialog == 7) {
                int n4;
                int n5 = n4 = this.h();
                if ((n4 >> 16 & 0xFF) > 0) {
                    this.d.ar.h();
                }
                return n4;
            }
        }
        return -1;
    }

    @Override
    final int b(Card qu2) {
        int n2 = -1;
        if (qu2.h()) {
            if (qu2.b.AboutDialog < 7 && !this.b(qu2, true)) {
                return -1;
            }
            if (qu2.d != null && qu2.d.c[0].f == 13) {
                n2 = GameMove.AboutDialog(qu2);
                this.k(n2);
            }
        } else {
            n2 = this.h();
        }
        return n2;
    }

    private int AboutDialog(int[] nArray, int n2) {
        int n3 = 0;
        --n2;
        while (n2 >= 0) {
            int n4 = nArray[n2];
            int n5 = n4;
            n5 = n4;
            if ((n4 >> 24 & 8) != 0 && ((n5 = this.d.aY.d[n2]) >> 16 & 0xFF) > 0) {
                ++n3;
            }
            --n2;
        }
        return n3;
    }

    private int n() {
        if (this.d.ak) {
            KlondikeSolver qh2 = this;
            return qh2.AboutDialog(qh2.d.aY.d, this.d.Z);
        }
        KlondikeSolver qh3 = this;
        return qh3.AboutDialog(qh3.d.be.d, this.d.be.h);
    }

    @Override
    final int h() {
        if (this.d.d <= 4) {
            this.d.g("Pyramid try deal");
        }
        Card qu2 = this.d.aY.AboutDialog[7].f[0];
        Card qu3 = this.d.aY.AboutDialog[8].f[0];
        int n2 = 0;
        int n3 = 0;
        int n4 = 0;
        int n5 = qu2.e.size();
        int n6 = qu3.e.size();
        if (n5 > 0) {
            n2 = qu2.d.c[0].f;
            if (n5 == 1) {
                n3 = 1;
                n4 = n6 + 1;
                if (this.n() > 1) {
                    if (this.d.d <= 4) {
                        this.d.g("Pyramid flip count " + this.n() + " so returning");
                    }
                    return -1;
                }
            }
        } else {
            n3 = 2;
            if (n6 == 0) {
                if (this.d.d <= 4) {
                    this.d.g("Deal stacks both empty, deal not possible");
                }
                return -1;
            }
            n4 = n6;
            if (this.n() > 1) {
                if (this.d.d <= 4) {
                    this.d.g("Pyramid flip count " + this.n() + " so returning");
                }
                return -1;
            }
        }
        int n7 = GameMove.AboutDialog(8, n3, n4, n2);
        this.k(n7);
        return n7;
    }

    @Override
    final boolean b(int n2, int n3) {
        if (n2 == n3) {
            return true;
        }
        n3 = n2 & 0xFF;
        int n4 = n2 & 0xFF00;
        int n5 = n2 & 0xFF;
        return n4 == n5 && n3 == (n2 &= 0xFF00);
    }
}

