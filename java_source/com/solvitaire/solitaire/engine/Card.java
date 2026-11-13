/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.engine;

import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.util.qw_0;
import java.awt.Point;
import java.awt.Rectangle;
import java.awt.geom.Rectangle2D;
import java.util.LinkedList;

public final class Card {
    public SolitaireGameEngine AboutDialog;
    public CardStack b;
    int c;
    public CardRun d = null;
    public LinkedList e = new LinkedList();
    public int f;
    boolean g;
    public boolean h;
    private boolean q;
    public boolean i = false;
    public boolean j = false;
    long k;
    long l;
    double m;
    boolean n;
    boolean o;
    public qw_0 p;

    Card(SolitaireGameEngine qo_02, CardStack qv2, int n2, boolean bl2) {
        this.AboutDialog = qo_02;
        this.b = qv2;
        this.c = n2;
        this.f = 0;
        this.g = bl2;
        this.f();
    }

    Card(CardStack object2, Card qu2) {
        this.AboutDialog = qu2.AboutDialog;
        this.c = qu2.c;
        this.f = qu2.f;
        this.g = qu2.g;
        this.h = qu2.h;
        this.f();
        this.b = object2;
        for (Object object2 : qu2.e) {
            object2 = new CardRun((CardRun)object2);
            v0.d = this;
            this.e.add(object2);
        }
        this.d = this.e.isEmpty() ? null : (CardRun)this.e.getLast();
        this.q = qu2.q;
        this.m = qu2.m;
        this.n = qu2.n;
        this.o = qu2.o;
        this.i = qu2.i;
    }

    final CardImage AboutDialog() {
        if (this.d == null || this.d.AboutDialog == 0) {
            return null;
        }
        return this.d.c[this.d.AboutDialog - 1];
    }

    final int b() {
        if (this.d == null || this.d.AboutDialog == 0) {
            return -1;
        }
        return this.d.c[this.d.AboutDialog - 1].g;
    }

    final int c() {
        if (this.d == null || this.d.AboutDialog == 0) {
            return 0;
        }
        return this.d.c[this.d.AboutDialog - 1].f;
    }

    final CardRun AboutDialog(CardRun qm_02) {
        if (qm_02.AboutDialog == 0) {
            this.AboutDialog.i("ERROR adding empty run to stack");
        }
        if (this.d == null && this.b != null) {
            --this.b.e;
        }
        this.e.add(qm_02);
        qm_02.d = this;
        this.d = qm_02;
        return this.d;
    }

    final void b(CardRun qm_02) {
        this.e.remove(qm_02);
        if (this.e.isEmpty()) {
            this.d = null;
            if (this.b != null) {
                ++this.b.e;
                return;
            }
        } else {
            this.d = (CardRun)this.e.getLast();
        }
    }

    final CardRun d() {
        CardRun qm_02 = null;
        if (!this.e.isEmpty()) {
            qm_02 = (CardRun)this.e.removeFirst();
            if (this.e.isEmpty()) {
                this.d = null;
                if (this.b != null) {
                    ++this.b.e;
                }
            } else {
                this.d = (CardRun)this.e.getLast();
            }
        }
        return qm_02;
    }

    final CardRun e() {
        CardRun qm_02 = null;
        if (!this.e.isEmpty()) {
            qm_02 = (CardRun)this.e.removeLast();
            if (this.e.isEmpty()) {
                this.d = null;
                if (this.b != null) {
                    ++this.b.e;
                }
            } else {
                this.d = (CardRun)this.e.getLast();
            }
        }
        return qm_02;
    }

    final void c(CardRun qm_02) {
        if (this.e.isEmpty()) {
            this.AboutDialog(qm_02);
            if (this.b != null) {
                --this.b.e;
            }
        } else {
            this.e.offerFirst(qm_02);
        }
        qm_02.d = this;
        this.d = (CardRun)this.e.getLast();
    }

    public final void f() {
        this.e = new LinkedList();
        this.d = null;
        if (this.b != null) {
            this.b.e = this.b.f.length;
        }
        if (!this.h) {
            this.q = true;
        }
        this.i = false;
        this.o = false;
    }

    public final void g() {
        this.h = true;
        this.q = false;
    }

    public final boolean h() {
        return this.q;
    }

    final void i() {
        if (!this.h) {
            this.q = true;
        }
    }

    final void j() {
        this.q = false;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    final int AboutDialog(Card object, int n2, boolean n3) {
        int n4 = -1;
        if (((Card)object).d == null) {
            return -1;
        }
        if (n2 == 2 || n2 == 6) {
            if (this.d != null) return n4;
            if (n2 != 6) return ((Card)object).d.AboutDialog;
            if (((Card)object).d.AboutDialog == 1) return 0;
            return 1;
        }
        if (n2 == 1) {
            Card qu2 = this;
            int n5 = qu2.AboutDialog(qu2.d, ((Card)object).d, false, n3 != 0);
            if (n5 <= 0) return n4;
            return n5;
        }
        if (n2 != 3) {
            Card qu3 = this;
            int n6 = qu3.AboutDialog(qu3.d, ((Card)object).d, true, n3 != 0);
            if (n3 != 0) {
                return n6;
            }
            if (n6 < 0) return n4;
            if (n6 <= 0) {
                n3 = ((Card)object).e.size();
                if (n3 < 2) {
                    return -1;
                }
                n4 = 0;
                Object object2 = (CardRun)((Card)object).e.get(n3 - 2);
                object = ((Card)object).d;
                object2 = ((CardRun)object2).c[((CardRun)object2).AboutDialog - 1];
                object = ((CardRun)object).c[0];
                if (((CardImage)object2).f == ((CardImage)object).f + 1) {
                    n4 = 1;
                }
                if (n4 != 0) {
                    if (n2 == 4) return -1;
                }
                if (n4 != 0) return 0;
                if (n2 != 5) return 0;
                return -1;
            }
        } else {
            if (((Card)object).e.size() != 1) return n4;
            Card qu4 = this;
            int n7 = qu4.AboutDialog(qu4.d, ((Card)object).d, false, n3 != 0);
            if (n7 > 0) {
                return n7;
            }
            Card qu5 = this;
            n7 = qu5.AboutDialog(qu5.d, ((Card)object).d, true, n3 != 0);
            if (n7 != 0) return n4;
            return 0;
        }
        this.AboutDialog.i("Mismatched join caused split");
        return n4;
    }

    final int AboutDialog(CardRun qm_02, CardRun qm_03, boolean bl2, boolean bl3) {
        int n2 = -1;
        CardImage pV2 = qm_03.c[qm_03.AboutDialog - 1];
        if (pV2 == null) {
            return -1;
        }
        if (this.f != 0) {
            if (qm_02 == null) {
                if (this.f > 0) {
                    if (pV2.g == this.f * 100 + 1) {
                        n2 = 1;
                    }
                } else if (pV2.f == 1) {
                    n2 = 1;
                }
            } else if (pV2.g == qm_02.c[qm_02.AboutDialog - 1].g + 1) {
                n2 = 1;
            }
        } else if (qm_02 != null) {
            CardImage pV3 = qm_02.c[qm_02.AboutDialog - 1];
            if (qm_03.AboutDialog > 0) {
                if (!this.g) {
                    if (!bl2) {
                        n2 = qm_02.AboutDialog(pV3, pV2, qm_03.AboutDialog, true);
                        if (!bl3 && n2 + qm_02.AboutDialog <= qm_03.AboutDialog) {
                            n2 = -1;
                        }
                    } else {
                        n2 = qm_02.AboutDialog(pV3, pV2, qm_03.AboutDialog, false);
                        if (n2 != qm_03.AboutDialog) {
                            if (!bl3) {
                                n2 = -1;
                            }
                        } else {
                            n2 = 0;
                        }
                    }
                } else {
                    boolean bl4;
                    n2 = qm_02.AboutDialog(pV3, pV2, qm_03.AboutDialog, false);
                    if (n2 > 0 && !(bl4 = n2 % 2 == 0 ^ CardRun.AboutDialog(pV3, pV2))) {
                        n2 = -1;
                    }
                }
            }
        }
        return n2;
    }

    final int AboutDialog(Card qu2, int n2, CardStack qv2) {
        if (n2 > 0) {
            CardRun qm_02;
            if (this.d == null) {
                qm_02 = new CardRun();
                n2 = qm_02.AboutDialog(qu2.d, n2);
                this.AboutDialog(qm_02);
            } else {
                if (this.AboutDialog.d <= 2) {
                    this.AboutDialog.g("Joining card " + String.valueOf(this.d.c[this.d.AboutDialog - 1]) + " with card " + String.valueOf(qu2.d.c[0]));
                }
                n2 = this.d.AboutDialog(qu2.d, n2);
            }
            if (this.d.AboutDialog == 13 && qv2 != null) {
                n2 += 100 * this.d.c[0].e;
                qm_02 = this.e();
                qv2.AboutDialog(qm_02);
            }
        } else {
            this.AboutDialog(qu2.d);
        }
        if (n2 > 0 && n2 % 20 < qu2.d.AboutDialog) {
            qu2.d.AboutDialog -= n2 % 20;
        } else {
            Card qu3 = qu2;
            qu3.b(qu3.d);
        }
        return n2;
    }

    final void b(Card qu2, int n2, CardStack object) {
        block10: {
            block11: {
                block9: {
                    int n3;
                    if (n2 <= 0 || n2 == 20) break block9;
                    if (n2 > 100) {
                        n3 = n2 / 100;
                        n2 %= 100;
                        object = ((CardStack)object).AboutDialog();
                        if (((CardRun)object).c[0].e != n3) {
                            this.AboutDialog.i("Logic error - move says remove suit " + n3 + " but suit stack is " + ((CardRun)object).c[0].e);
                        }
                        this.AboutDialog((CardRun)object);
                    }
                    if (n2 > 20) {
                        n2 -= 20;
                        n3 = 0;
                        while (n3 < n2) {
                            qu2.d.c[qu2.d.AboutDialog + n3] = this.d.c[this.d.AboutDialog - n2 + n3];
                            ++n3;
                        }
                        qu2.d.AboutDialog += n2;
                    } else {
                        CardRun qm_02 = new CardRun();
                        int n4 = 0;
                        while (n4 < n2) {
                            qm_02.c[n4] = this.d.c[this.d.AboutDialog - n2 + n4];
                            ++n4;
                        }
                        qm_02.AboutDialog = n2;
                        qu2.AboutDialog(qm_02);
                    }
                    this.d.AboutDialog -= n2;
                    if (this.d.AboutDialog != 0) break block10;
                    break block11;
                }
                if (n2 == 20) {
                    int n5 = 0;
                    while (n5 < this.d.AboutDialog) {
                        qu2.d.c[qu2.d.AboutDialog++] = this.d.c[n5];
                        ++n5;
                    }
                } else {
                    qu2.AboutDialog(this.d);
                }
            }
            Card qu3 = this;
            qu3.b(qu3.d);
        }
    }

    final CardRun k() {
        int n2 = this.e.size();
        if (n2 < 2) {
            return null;
        }
        return (CardRun)this.e.get(n2 - 2);
    }

    final Rectangle2D.Double l() {
        Rectangle2D.Double double_ = this.o();
        double_.xHandler += this.AboutDialog.FPanel.AboutDialog.AboutDialog();
        double_.yHandler += this.AboutDialog.FPanel.AboutDialog.b();
        return double_;
    }

    final Rectangle m() {
        Rectangle2D.Double double_ = this.l();
        return new Rectangle((int)double_.xHandler, (int)double_.yHandler, (int)double_.width, (int)double_.height);
    }

    final Rectangle n() {
        Rectangle2D.Double double_ = this.o();
        return new Rectangle((int)double_.xHandler, (int)double_.yHandler, (int)double_.width, (int)double_.height);
    }

    final Rectangle2D.Double o() {
        if (this.b.h < (double)(this.AboutDialog.FPanel.c / 2)) {
            this.AboutDialog.i("Error, stack " + this.b.b + " height is less than half the card Height");
        }
        if (this.b.g == null) {
            this.AboutDialog.i("StackSet " + this.b.b + " origin has not been set yet");
        }
        Rectangle2D.Double double_ = new Rectangle2D.Double();
        new Rectangle2D.Double().xHandler = this.m;
        double_.yHandler = this.b.g.yHandler;
        if ((this.b.d & 0x10) != 0) {
            double_.width = this.AboutDialog.FPanel.b * 1.45;
            double_.height = this.b.h;
            if (this.AboutDialog.d <= 3) {
                this.AboutDialog.g("Triplet stack " + String.valueOf(this) + " bounds " + SolitaireGameEngine.AboutDialog(double_));
            }
        } else if ((this.b.d & 0x40) != 0) {
            double_.width = this.AboutDialog.FPanel.b;
            double_.height = this.b.h;
            if (this.AboutDialog.d <= 3) {
                this.AboutDialog.g("Spider suits stack " + String.valueOf(this) + " bounds " + SolitaireGameEngine.AboutDialog(double_));
            }
        } else {
            double_.width = this.AboutDialog.FPanel.b;
            if ((this.b.d & 2) != 0) {
                double_.height = (int)this.b.h;
                if (this.AboutDialog.d <= 3) {
                    this.AboutDialog.g("Horizontal stack " + String.valueOf(this) + " bounds " + SolitaireGameEngine.AboutDialog(double_));
                }
            } else {
                double_.height = (int)this.b.h;
                if (this.AboutDialog.d <= 3) {
                    this.AboutDialog.g("Standard stack " + String.valueOf(this) + " bounds " + SolitaireGameEngine.AboutDialog(double_) + " cards: " + String.valueOf(this.p));
                }
            }
        }
        return double_;
    }

    static void AboutDialog(Card qu2, Card qu3) {
        LinkedList linkedList = qu2.e;
        qu2.e = qu3.e;
        qu3.e = linkedList;
        qu2.d = qu2.e.isEmpty() ? null : (CardRun)qu2.e.getLast();
        qu3.d = qu3.e.isEmpty() ? null : (CardRun)qu3.e.getLast();
    }

    final int p() {
        if (this.i) {
            this.AboutDialog.AboutDialog("Call to len function on on work stack");
            this.AboutDialog.i("Cannot get the card count of AboutDialog work stack");
        }
        if (!this.q) {
            return 0;
        }
        int n2 = 0;
        for (CardRun qm_02 : this.e) {
            n2 += qm_02.AboutDialog;
        }
        return n2;
    }

    final int q() {
        if (!this.q) {
            return 0;
        }
        int n2 = 0;
        for (CardRun qm_02 : this.e) {
            n2 += qm_02.AboutDialog;
        }
        return n2;
    }

    final CardImage AboutDialog(int n2) {
        CardImage pV2 = null;
        for (CardRun qm_02 : this.e) {
            if (n2 - qm_02.AboutDialog < 0) {
                if (n2 < 0) {
                    return null;
                }
                pV2 = qm_02.c[n2];
                qm_02.c[n2].k = qm_02.b;
                break;
            }
            n2 -= qm_02.AboutDialog;
        }
        return pV2;
    }

    final boolean b(int n2) {
        for (CardRun qm_02 : this.e) {
            int n3 = 0;
            while (n3 < qm_02.AboutDialog) {
                CardImage pV2 = qm_02.c[n3];
                if (pV2.g == n2) {
                    return true;
                }
                ++n3;
            }
        }
        return false;
    }

    final void AboutDialog(boolean bl2) {
        if (this.d != null) {
            this.d.b = bl2;
        }
    }

    final int rPanel() {
        if (this.i) {
            this.AboutDialog.i("Cannot get the card count of AboutDialog work stack");
        }
        int n2 = 0;
        for (CardRun qm_02 : this.e) {
            if (!qm_02.b) continue;
            ++n2;
        }
        return n2;
    }

    final boolean AboutDialog(Point point, int n2, int n3) {
        double d2 = this.m;
        double d3 = this.b.g.yHandler;
        Rectangle2D.Double double_ = new Rectangle2D.Double(d2, d3, n2, n3);
        if (double_.contains(point)) {
            if (this.AboutDialog.d <= 5) {
                this.AboutDialog.g("Hit on stack " + this.c);
            }
            return true;
        }
        return false;
    }

    public final String toString() {
        return (this.i ? "Work" : "") + this.b.b + ":" + this.c % 10;
    }
}

