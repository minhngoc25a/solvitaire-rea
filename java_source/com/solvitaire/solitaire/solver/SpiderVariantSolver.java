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
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.reader.sqBoardReader;
import java.io.File;
import java.util.HashMap;

public final class SpiderVariantSolver
extends SolitaireSolver {
    private int AboutDialog;
    private int b;
    private CardStack[] c;

    SpiderVariantSolver(SolitaireGameEngine qo_02) {
        super(qo_02, 500);
        this.f = 10;
        this.o = 1;
        this.p = 52;
        this.rPanel = false;
        this.s = true;
    }

    @Override
    final String AboutDialog() {
        return "TriPeaks";
    }

    @Override
    final boolean b() {
        this.i();
        this.e = this.d.au + "tripeaks" + File.separator;
        if (this.d.d <= 5) {
            this.d.g("Checkpoint directory is " + this.e);
        }
        this.g = new int[4][this.f];
        this.i = new int[this.f];
        this.t = new int[this.f][4];
        this.B = new int[24][1];
        this.c = new CardStack[4];
        if (this.FPanel) {
            if (this.d.d <= 4) {
                this.d.g("Running TriPeaks");
            }
            this.d.ap = new sqBoardReader(this);
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
        this.AboutDialog = 0;
        this.b = this.d.l.m;
        return true;
    }

    @Override
    final void AboutDialog(int n2, int n3) {
        Object object;
        int n4;
        this.l();
        if (this.d.aZ.h > this.yHandler) {
            return;
        }
        if (this.d.PPanel++ % 100000L == 0L) {
            this.b(4);
        }
        this.AboutDialog = n3;
        if (!this.EHandler) {
            if (this.d.U <= -this.z + 30) {
                SpiderVariantSolver sp2 = this;
                n2 = sp2.AboutDialog(sp2.d.aZ, n2, true);
                if (!this.I && this.d.uPanel && this.d.m != 1 && this.d.m != 3) {
                    n2 = 0;
                }
                if (!(this.d.l.b || this.I || this.d.uPanel)) {
                    if (n2 != 2 && this.d.l.c != 3 && this.d.l.c != 6) {
                        this.d.i("Could not find AboutDialog solution");
                        return;
                    }
                    if (n2 != 2) {
                        if (this.d.l.c == 3) {
                            this.d.l.n += this.KHandler;
                        } else {
                            this.d.l.m = this.J;
                            if (this.d.d <= 5) {
                                this.d.g("Using best score as accumulated score giving " + this.d.l.m);
                            }
                        }
                    }
                    this.d.g("*** ALLOWING BOARD NOT COMPLETED, play best solution");
                    this.d.ap.AboutDialog(this.d.bd, null, false, true, false);
                    int n5 = 0;
                    n4 = 0;
                    Card qu2 = this.d.aY.AboutDialog[this.d.ap.h].f[0];
                    object = this.d.aY.AboutDialog[this.d.ap.i].f[0];
                    while (n4 >= 0) {
                        n4 = this.AboutDialog(qu2, (Card)object, false);
                        if (n4 >= 0) {
                            this.d.bd.d[this.d.bd.h] = GameMove.AboutDialog(8, 0, 0, n4);
                            if (this.d.bd.h > 0) {
                                this.d.bd.g[this.d.bd.h] = this.d.bd.g[this.d.bd.h - 1];
                            }
                            ++this.d.bd.h;
                            ++n5;
                            continue;
                        }
                        if (this.d.d > 5) continue;
                        this.d.g("Dealt another card to get to reHandler-deal icon, count " + n5);
                    }
                    n4 = 0;
                    while (n4 < n5) {
                        SpiderVariantSolver sp3 = this;
                        int cfr_ignored_0 = sp3.d.bd.d[this.d.bd.h - n4 - 1];
                        sp3.c(qu2, (Card)object);
                        ++n4;
                    }
                    this.d.bd.d[this.d.bd.h] = GameMove.AboutDialog(24, 0, 0, 0);
                    ++this.d.bd.h;
                    this.b(false);
                    if (this.d.d <= 5) {
                        this.d.g("Flagging SOLVED to exit and process new deal");
                    }
                    n2 = 2;
                    this.EHandler = true;
                }
            } else {
                SpiderVariantSolver sp4 = this;
                n2 = sp4.b(sp4.d.aZ, n2);
            }
            if (n2 == 2) {
                this.G = 999;
            } else if (n2 == 1) {
                return;
            }
        }
        if (this.d.d <= 3) {
            this.d.g("Entered depth " + this.d.aZ.h);
        }
        if (this.G < 0) {
            if (this.d.d <= 2) {
                this.d.g("Depth " + this.d.aZ.h + " try chaining");
            }
            n2 = this.d.T;
            this.d.T += -10 * (1 + n3 / 3);
            if (this.d.T < 0) {
                if (this.d.d <= 3) {
                    this.d.g("Depth " + this.d.aZ.h + " complexity " + this.d.T + " try chaining");
                }
                n4 = n3;
                SpiderVariantSolver sp5 = this;
                object = sp5.d.aZ.AboutDialog[8].f[0].AboutDialog();
                int n6 = ((CardImage)object).f - 1;
                SpiderVariantSolver sp6 = sp5;
                Card qu3 = sp6.AboutDialog(sp6.d.aZ.AboutDialog);
                while (qu3 != null) {
                    if (sp5.G > 0) break;
                    Object object2 = qu3.AboutDialog();
                    int n7 = ((CardImage)object2).f - 1;
                    if (n7 == (n6 + 1) % 13 || (n7 + 1) % 13 == n6) {
                        long l2;
                        int n8;
                        if (sp5.d.d <= 3) {
                            sp5.d.g("Paired " + String.valueOf(object) + " with " + String.valueOf(object2));
                        }
                        object2 = qu3.d;
                        Card qu4 = qu3;
                        qu4.j();
                        sp5.d.aZ.AboutDialog[8].f[0].AboutDialog((CardRun)object2);
                        sp5.d.aZ.d[sp5.d.aZ.h] = n8 = GameMove.AboutDialog(qu3);
                        ++sp5.d.aZ.h;
                        int n9 = qu3.b.AboutDialog;
                        int n10 = qu3.c;
                        boolean bl2 = false;
                        if (n9 > 0) {
                            int n11;
                            Card qu5;
                            if (n10 > 0) {
                                qu5 = sp5.d.aZ.AboutDialog[n9 - 1].f[n10 - 1];
                                if (!qu5.h && qu5.b() == 0 && !sp5.d.aZ.AboutDialog[n9].f[n10 - 1].h()) {
                                    if (sp5.d.d <= 4) {
                                        sp5.d.g("Open stack " + qu5.c + " has AboutDialog zero card triggering getNextCard");
                                    }
                                    sp5.AboutDialog = n4 + 1;
                                    n11 = sp5.e(qu5);
                                    if (n11 <= 0) {
                                        if (sp5.d.d <= 5) {
                                            sp5.d.g("Getnextcard failed, dialog up:" + sp5.d.FPanel.v);
                                        }
                                        bl2 = true;
                                    } else {
                                        qu5.d.AboutDialog(n11);
                                        if (sp5.d.d < 5) {
                                            sp5.d.g("Read unknown card on stack" + qu5.c + " value " + n11);
                                        }
                                        sp5.AboutDialog(qu5);
                                    }
                                }
                            }
                            if (n10 < n9 + 6) {
                                qu5 = sp5.d.aZ.AboutDialog[n9 - 1].f[n10];
                                if (!qu5.h && qu5.b() == 0 && !sp5.d.aZ.AboutDialog[n9].f[n10 + 1].h()) {
                                    if (sp5.d.d <= 4) {
                                        sp5.d.g("Open stack " + qu5.c + " has AboutDialog zero card triggering getNextCard");
                                    }
                                    sp5.AboutDialog = n4 + 1;
                                    n11 = sp5.e(qu5);
                                    if (n11 <= 0) {
                                        if (sp5.d.d <= 5) {
                                            sp5.d.g("Getnextcard failed, dialog up:" + sp5.d.FPanel.v);
                                        }
                                        bl2 = true;
                                    } else {
                                        qu5.d.AboutDialog(n11);
                                        sp5.AboutDialog(qu5);
                                    }
                                }
                            }
                        }
                        if (!bl2 && sp5.b(l2 = sp5.c()) < 0) {
                            sp5.AboutDialog(l2);
                            if (sp5.d.d <= 3) {
                                sp5.d.g("Chaining productive for dest " + String.valueOf(qu3));
                            }
                            if (sp5.d.d <= 3) {
                                sp5.d.g("Entering solve with chain length of " + (n4 + 1));
                            }
                            sp5.AboutDialog(n8, n4 + 1);
                        }
                        --sp5.d.aZ.h;
                        if (sp5.d.d <= 3) {
                            sp5.d.g("Restored " + String.valueOf(qu3) + ":" + String.valueOf(qu3.AboutDialog()) + " backout " + sp5.G);
                        }
                        sp5.d.aZ.AboutDialog[8].f[0].e();
                        Card qu6 = qu3;
                        qu6.i();
                    }
                    qu3 = SpiderVariantSolver.AboutDialog(sp5.d.aZ.AboutDialog, qu3);
                }
            }
            this.d.T = n2;
        }
        if (this.G < 0) {
            n2 = this.d.T;
            this.d.T += 20;
            if (this.d.T < 0) {
                if (this.d.d <= 3) {
                    this.d.g("Depth " + this.d.aZ.h + " complexity " + this.d.T + " dealindex " + this.d.aZ.b + " try AboutDialog deal");
                }
                SpiderVariantSolver sp7 = this;
                int n12 = sp7.AboutDialog(sp7.d.aZ.AboutDialog[7].f[0], this.d.aZ.AboutDialog[8].f[0], true);
                if (n12 >= 0) {
                    this.d.aZ.d[this.d.aZ.h] = GameMove.AboutDialog(8, 0, 0, n12);
                    ++this.d.aZ.h;
                    if (this.d.d <= 3) {
                        this.d.g("Recursing after deal of " + n12);
                    }
                    int n13 = n3;
                    n4 = n13 * n13 * 100;
                    this.b += n4;
                    if (this.d.d <= 3) {
                        this.d.g("Dealing with chain of " + n3 + " score now " + this.b);
                    }
                    this.AboutDialog(-1, 0);
                    this.b -= n4;
                    if (this.d.d <= 3) {
                        this.d.g("Undone deal with chain of " + n3 + " score back to " + this.b);
                    }
                    --this.d.aZ.h;
                    SpiderVariantSolver sp8 = this;
                    sp8.c(sp8.d.aZ.AboutDialog[7].f[0], this.d.aZ.AboutDialog[8].f[0]);
                }
            }
            this.d.T = n2;
        }
        if (this.G >= 0) {
            --this.G;
            if (this.d.d <= 1) {
                this.d.g("Backout now " + this.G);
            }
        }
        if (this.d.d <= 3) {
            this.d.g("Leaving depth " + this.d.aZ.h);
        }
    }

    @Override
    final long c() {
        int n2 = 0;
        this.n = 0;
        int n3 = 0;
        while (n3 < 4) {
            int n4 = 0;
            while (n4 < this.d.aZ.AboutDialog[n3].f.length) {
                if (this.d.aZ.AboutDialog[n3].f[n4].h()) {
                    SpiderVariantSolver sp2 = this;
                    n2 = (int)((long)n2 + sp2.AboutDialog(sp2.d.aZ.AboutDialog[n3].f[n4], (long)n2, false, false));
                }
                ++n4;
            }
            ++n3;
        }
        n3 = this.d.aZ.AboutDialog[8].f[0].b();
        if (n3 != 0) {
            n2 = (int)((long)n2 + this.AboutDialog(n3, this.d.aZ.AboutDialog[8].f[0].c, (long)n2, false));
        }
        SpiderVariantSolver sp3 = this;
        n2 = (int)((long)n2 + sp3.AboutDialog(sp3.d.aZ.AboutDialog[7].f[0], (long)n2, false, false));
        return n2;
    }

    final Card AboutDialog(CardStack[] qvArray) {
        Card qu2 = qvArray[3].f[0];
        if (qu2.h || !qu2.h()) {
            qu2 = SpiderVariantSolver.AboutDialog(qvArray, qu2);
        } else if (this.d.d <= 3) {
            this.d.g("Pyramid at " + qu2.c + " is available for pairing");
        }
        return qu2;
    }

    static Card AboutDialog(CardStack[] qvArray, Card qu2) {
        Card qu3 = null;
        int n2 = qu2.b.AboutDialog;
        while (n2 >= 0) {
            int n3 = 0;
            while (n3 < qvArray[n2].f.length) {
                if (!(n2 == qu2.b.AboutDialog && n3 <= qu2.c || !qvArray[n2].f[n3].h() || n2 != 3 && (qvArray[n2 + 1].f[n3].h() || qvArray[n2 + 1].f[n3 + 1].h()))) {
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

    @Override
    final void AboutDialog(int n2, boolean bl2) {
        if (this.d.d <= n2) {
            this.b(n2);
            CardStack[] qvArray = bl2 ? this.d.aY.AboutDialog : this.d.aZ.AboutDialog;
            this.AboutDialog(n2, qvArray[7]);
            this.AboutDialog(n2, qvArray[8]);
            n2 = 0;
            while (n2 < 4) {
                StringBuffer stringBuffer = new StringBuffer();
                int n3 = 0;
                while (n3 < 10 - qvArray[n2].f.length) {
                    stringBuffer.append("  ");
                    ++n3;
                }
                n3 = 0;
                while (n3 < qvArray[n2].f.length) {
                    if (qvArray[n2].f[n3].h()) {
                        int n4 = qvArray[n2].f[n3].d.c[0].g;
                        if (n4 != 0) {
                            stringBuffer.append(n4);
                        } else {
                            stringBuffer.append("???");
                        }
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
    final int AboutDialog(Card object) {
        object = this.n();
        int n2 = ((HashMap)object).size();
        if (n2 == 51) {
            object = this.b((HashMap)object, 1);
            int n3 = 0;
            int n4 = 0;
            while (n4 < 13) {
                int n5 = 0;
                while (n5 < 4) {
                    if (object[n5 * 13 + n4] != false) {
                        n3 = (n5 + 1) * 100 + n4 + 1;
                        break;
                    }
                    ++n5;
                }
                ++n4;
            }
            if (this.d.d <= 5) {
                this.d.g("Final card value is " + n3);
            }
            Object object2 = null;
            if (!this.d.aZ.AboutDialog[7].f[0].e.isEmpty()) {
                object2 = (CardRun)this.d.aZ.AboutDialog[7].f[0].e.getFirst();
            }
            if (object2 != null && ((CardRun)object2).c[0].g == 0) {
                if (this.B[23][0] != 0) {
                    this.d.i("Feed stack needs card, but deck already has " + this.B[23][0]);
                }
                this.B[23][0] = n3;
                ((CardRun)object2).AboutDialog(n3);
            } else {
                Object object3 = null;
                int n6 = 0;
                while (n6 < 4) {
                    object2 = this.d.aZ.AboutDialog[n6];
                    Card[] quArray = ((CardStack)object2).f;
                    int n7 = ((CardStack)object2).f.length;
                    int n8 = 0;
                    while (n8 < n7) {
                        object2 = quArray[n8];
                        if (((Card)object2).h() && ((Card)object2).d.c[0].g == 0) {
                            object3 = object2;
                            break;
                        }
                        ++n8;
                    }
                    if (object3 != null) break;
                    ++n6;
                }
                if (object3 != null) {
                    this.g[((Card)object3).b.AboutDialog][((Card)object3).c] = n3;
                    ((Card)object3).d.AboutDialog(n3);
                } else {
                    this.d.i("51 cards remaining but no postion free for inferred card");
                }
            }
            ++n2;
        }
        return n2;
    }

    @Override
    final int[] d() {
        SpiderVariantSolver sp2 = this;
        return sp2.b(sp2.n(), 1);
    }

    private HashMap n() {
        HashMap hashMap = new HashMap(52);
        this.c[0] = this.d.aZ.AboutDialog[0];
        this.c[1] = this.d.aZ.AboutDialog[1];
        this.c[2] = this.d.aZ.AboutDialog[2];
        this.c[3] = this.d.aZ.AboutDialog[3];
        CardStack[] qvArray = this.c;
        int n2 = this.c.length;
        int n3 = 0;
        while (n3 < n2) {
            Object object = qvArray[n3];
            Card[] quArray = ((CardStack)object).f;
            int n4 = ((CardStack)object).f.length;
            int n5 = 0;
            while (n5 < n4) {
                object = quArray[n5];
                if (((Card)object).h()) {
                    int n6;
                    object = ((Card)object).d;
                    if (((CardRun)object).c[0].g != 0 && (n6 = this.AboutDialog(hashMap, ((CardRun)object).c[0].g)) > 1) {
                        this.d.bu.AboutDialog();
                        CardImage pV2 = ((CardRun)object).c[0];
                        CardImage pV3 = pV2;
                        pV3 = ((CardRun)object).c[0];
                        this.d.i("ERROR - Too many " + SolitaireSolver.f(pV2.g) + " of " + SolitaireSolver.d(pV3.g) + "s in the pyramids");
                    }
                }
                ++n5;
            }
            ++n3;
        }
        for (Object object : this.d.aZ.AboutDialog[7].f[0].e) {
            if (((CardRun)object).c[0].g == 0 || (n2 = this.AboutDialog(hashMap, ((CardRun)object).c[0].g)) <= 1) continue;
            this.d.bu.AboutDialog();
            CardImage pV4 = ((CardRun)object).c[0];
            CardImage pV5 = pV4;
            pV5 = ((CardRun)object).c[0];
            this.d.i("ERROR - Too many " + SolitaireSolver.f(pV4.g) + " of " + SolitaireSolver.d(pV5.g) + "s in the feed");
        }
        for (Object object : this.d.aZ.AboutDialog[8].f[0].e) {
            n2 = this.AboutDialog(hashMap, ((CardRun)object).c[0].g);
            if (n2 <= 1) continue;
            this.d.bu.AboutDialog();
            CardImage pV6 = ((CardRun)object).c[0];
            CardImage pV7 = pV6;
            pV7 = ((CardRun)object).c[0];
            this.d.i("ERROR - Too many " + SolitaireSolver.f(pV6.g) + " of " + SolitaireSolver.d(pV7.g) + "s in the pile");
        }
        return hashMap;
    }

    @Override
    final boolean AboutDialog(Card qu2, Card qu3) {
        return false;
    }

    @Override
    final int AboutDialog(qa qa2, boolean bl2, int n2, int n3) {
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
        int n4 = 0;
        while (n4 < 4) {
            int n5 = 0;
            while (n5 < 10) {
                if (n5 > n4 + 6) break;
                Card qu2 = qa2.AboutDialog[n4].f[n5];
                if (!qu2.h && !qu2.h() && SpiderVariantSolver.AboutDialog(qu2.d.c[0], n2, n3)) {
                    bl2 += 1;
                }
                ++n5;
            }
            ++n4;
        }
        return bl2 ? 1 : 0;
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
        if (!qa2.AboutDialog[0].f[0].h()) {
            bl2 += 1;
        }
        if (!qa2.AboutDialog[0].f[3].h()) {
            bl2 += 1;
        }
        if (!qa2.AboutDialog[0].f[6].h()) {
            bl2 += 1;
        }
        int n2 = 0;
        switch (bl2 ? 1 : 0) {
            case 1: {
                n2 = 500;
                break;
            }
            case 2: {
                n2 = 1500;
                break;
            }
            case 3: {
                n2 = 6500;
            }
        }
        n2 = this.b + this.AboutDialog * this.AboutDialog * 100 + n2;
        if (this.d.d <= 3) {
            this.b(9);
            this.d.g("Current score is " + n2);
        }
        return n2;
    }

    @Override
    final boolean AboutDialog(qa qa2, int n2) {
        if (qa2 == null) {
            return false;
        }
        if (qa2.AboutDialog == null) {
            return false;
        }
        boolean bl2 = !qa2.AboutDialog[0].f[0].h() && !qa2.AboutDialog[0].f[3].h() && !qa2.AboutDialog[0].f[6].h();
        return bl2;
    }

    private void AboutDialog(int n2, int n3, int n4) {
        if (this.d.d <= 4) {
            this.d.g("Loading card " + n4 + " into pyramid " + (n2 * 10 + n3));
        }
        Card qu2 = this.d.aY.AboutDialog[n2].f[n3];
        qu2.AboutDialog(new CardRun(this.b(qu2, n4)));
        this.g[n2][n3] = n4;
    }

    @Override
    final boolean AboutDialog(String string, String[] object, int n2) {
        if (this.d.d <= 4) {
            this.d.g("Loading from checkpoint " + string);
        }
        if (n2 != 6) {
            this.d.i("TriPeaks input file must have 5 rows of cards");
        }
        int n3 = 0;
        try {
            String[] stringArray = object[1].split(",");
            this.AboutDialog(0, 0, this.d.c(stringArray[0]));
            this.AboutDialog(0, 3, this.d.c(stringArray[1]));
            this.AboutDialog(0, 6, this.d.c(stringArray[2]));
            ++n3;
            stringArray = object[2].split(",");
            this.AboutDialog(1, 0, this.d.c(stringArray[0]));
            this.AboutDialog(1, 1, this.d.c(stringArray[1]));
            this.AboutDialog(1, 3, this.d.c(stringArray[2]));
            this.AboutDialog(1, 4, this.d.c(stringArray[3]));
            this.AboutDialog(1, 6, this.d.c(stringArray[4]));
            this.AboutDialog(1, 7, this.d.c(stringArray[5]));
            ++n3;
            stringArray = ((String)object[3]).split(",");
            int n4 = 0;
            while (n4 < 9) {
                this.AboutDialog(2, n4, this.d.c(stringArray[n4]));
                ++n4;
            }
            ++n3;
            stringArray = ((String)object[4]).split(",");
            n4 = 0;
            while (n4 < 10) {
                this.AboutDialog(3, n4, this.d.c(stringArray[n4]));
                ++n4;
            }
        }
        catch (ArrayIndexOutOfBoundsException arrayIndexOutOfBoundsException) {
            this.d.i("Row " + n3 + " has too few cards");
        }
        try {
            String[] stringArray = object[5].split(",");
            String string2 = stringArray[0];
            this.B[0][0] = n3 = this.d.c(string2);
            object = this.d.aY.AboutDialog[this.d.ap.i].f[0];
            ((Card)object).c(new CardRun(this.b((Card)object, n3)));
            if (this.d.d <= 4) {
                this.d.g("Loading card " + n3 + " into deck level 0 and pile");
            }
            int n5 = 1;
            while (n5 < 24) {
                string2 = stringArray[n5];
                this.B[n5][0] = n3 = this.d.c(string2);
                object = this.d.aY.AboutDialog[this.d.ap.h].f[0];
                if (this.d.d <= 4) {
                    this.d.g("Loading card " + n3 + " into deck level " + n5);
                }
                ((Card)object).c(new CardRun(this.b((Card)object, n3)));
                ++n5;
            }
        }
        catch (ArrayIndexOutOfBoundsException arrayIndexOutOfBoundsException) {
            this.d.i("Less than 24 cards in the deal pile");
        }
        ((sqBoardReader)this.d.ap).j();
        return this.b(1, false);
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
        if (this.d.d <= 5) {
            this.d.g("Adding " + string + " card " + n2 + " giving " + n3);
        }
        hashMap.put(n4, n3);
    }

    @Override
    final void AboutDialog(StringBuffer stringBuffer) {
        stringBuffer.append(SolitaireGameEngine.j[this.d.i] + "\n# Stacks:\n");
        int n2 = 0;
        while (n2 < 4) {
            int n3 = 3 - n2;
            while (n3 > 0) {
                stringBuffer.append("   ");
                --n3;
            }
            n3 = 0;
            while (n3 < 10) {
                if (n3 > n2 + 6) break;
                if (this.d.aY.AboutDialog[n2].f[n3].h) {
                    stringBuffer.append("     ");
                } else {
                    stringBuffer.append(SpiderVariantSolver.i(this.g[n2][n3]));
                    stringBuffer.append(", ");
                }
                ++n3;
            }
            stringBuffer.append("\n");
            ++n2;
        }
        stringBuffer.append("# Deck:\n");
        n2 = 0;
        while (n2 < 24) {
            stringBuffer.append(SpiderVariantSolver.i(this.B[n2][0]));
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

    final int AboutDialog(Card qu2, Card qu3, boolean bl2) {
        if (qu2.e.size() == 0) {
            if (this.d.d <= 3) {
                this.d.g("End of deal tries");
            }
            return -1;
        }
        int n2 = 0;
        CardRun qm_02 = qu2.e();
        if (qm_02 != null) {
            qu3.AboutDialog(qm_02);
            if (bl2 && qm_02.c[0].g == 0) {
                if (this.d.d <= 5) {
                    this.d.g("We are dealing the final unknown card - check if this is actually permitted");
                }
                if (((sqBoardReader)this.d.ap).i()) {
                    if (this.d.d <= 5) {
                        this.d.g("Play is permitted so play up to the unknown card");
                    }
                    this.d.ap.AboutDialog(this.d.aZ, null, false, false, false);
                    this.d.aZ.d[this.d.aZ.h++] = GameMove.AboutDialog(8, 0, 0, 99);
                    this.d.ap.AboutDialog(this.d.aZ, null, false, false, false);
                    --this.d.aZ.h;
                    if (this.B[23][0] != 0) {
                        qm_02.c[0].AboutDialog(this.B[23][0]);
                        this.AboutDialog(qu3);
                    } else {
                        qm_02.c[0].AboutDialog(0);
                        if (this.d.d <= 5) {
                            this.d.g("Card not read, setting card to 0");
                        }
                    }
                }
                if (qm_02.c[0].g == 0) {
                    if (this.d.d <= 5) {
                        this.d.g("Denying play of last card because no candidate or it triggered nomore");
                    }
                    qu3.e();
                    qu2.AboutDialog(qm_02);
                    return -1;
                }
            }
            n2 = qm_02.c[0].f;
            if (this.d.d <= 3) {
                this.d.g("Moving " + String.valueOf(qm_02.c[0]) + " to pile");
            }
        }
        return n2;
    }

    final void c(Card qu2, Card object) {
        object = ((Card)object).e();
        if (this.d.d <= 3) {
            this.d.g("Undeal card " + String.valueOf(((CardRun)object).c[0]));
        }
        qu2.AboutDialog((CardRun)object);
    }

    @Override
    final int AboutDialog(HashMap hashMap) {
        int n2 = 0;
        int n3 = 0;
        while (n3 < 4) {
            int n4 = 0;
            while (n4 < this.d.aY.AboutDialog[n3].f.length) {
                Card qu2 = this.d.aY.AboutDialog[n3].f[n4];
                if (qu2.h()) {
                    ++n2;
                    this.AboutDialog(hashMap, this.d.aY.AboutDialog[n3].f[n4].b(), "pyramid");
                }
                ++n4;
            }
            ++n3;
        }
        n3 = 0;
        while (n3 < 24) {
            this.AboutDialog(hashMap, this.B[n3][0], "deal ");
            ++n2;
            ++n3;
        }
        return n2;
    }

    @Override
    final void g() {
        int n2 = 0;
        while (n2 < 4) {
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
    final int b(Card qu2) {
        int n2 = -1;
        if (qu2.b.AboutDialog < 7) {
            Object object;
            if (qu2.h() && (object = qu2.d) != null && !((CardRun)object).b) {
                object = this.d.aY.AboutDialog[8].f[0];
                int n3 = ((Card)object).c() - 1;
                int n4 = qu2.c() - 1;
                if (n4 == (n3 + 1) % 13 || (n4 + 1) % 13 == n3) {
                    if (this.d.d <= 4) {
                        this.d.g("Paired " + n3 + " with " + n4);
                    }
                    n2 = GameMove.AboutDialog(qu2);
                    this.k(n2);
                }
            }
        } else if (qu2.b.AboutDialog == 7) {
            Object object = this.d.aY.AboutDialog[7].f[0];
            if ((object = ((Card)object).AboutDialog()) != null) {
                n2 = GameMove.AboutDialog(8, 0, 0, ((CardImage)object).f);
                this.k(n2);
            }
        }
        return n2;
    }
}

