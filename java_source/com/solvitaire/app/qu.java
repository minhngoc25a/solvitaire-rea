/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pV;
import com.solvitaire.app.qm_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qv;
import com.solvitaire.app.qw_0;
import java.awt.Point;
import java.awt.Rectangle;
import java.awt.geom.Rectangle2D;
import java.util.LinkedList;

final class qu {
    qo_0 a;
    qv b;
    int c;
    qm_0 d = null;
    LinkedList e = new LinkedList();
    int f;
    boolean g;
    protected boolean h;
    private boolean q;
    boolean i = false;
    boolean j = false;
    long k;
    long l;
    double m;
    boolean n;
    boolean o;
    qw_0 p;

    qu(qo_0 qo_02, qv qv2, int n2, boolean bl2) {
        this.a = qo_02;
        this.b = qv2;
        this.c = n2;
        this.f = 0;
        this.g = bl2;
        this.f();
    }

    qu(qv object2, qu qu2) {
        this.a = qu2.a;
        this.c = qu2.c;
        this.f = qu2.f;
        this.g = qu2.g;
        this.h = qu2.h;
        this.f();
        this.b = object2;
        for (Object object2 : qu2.e) {
            object2 = new qm_0((qm_0)object2);
            v0.d = this;
            this.e.add(object2);
        }
        this.d = this.e.isEmpty() ? null : (qm_0)this.e.getLast();
        this.q = qu2.q;
        this.m = qu2.m;
        this.n = qu2.n;
        this.o = qu2.o;
        this.i = qu2.i;
    }

    final pV a() {
        if (this.d == null || this.d.a == 0) {
            return null;
        }
        return this.d.c[this.d.a - 1];
    }

    final int b() {
        if (this.d == null || this.d.a == 0) {
            return -1;
        }
        return this.d.c[this.d.a - 1].g;
    }

    final int c() {
        if (this.d == null || this.d.a == 0) {
            return 0;
        }
        return this.d.c[this.d.a - 1].f;
    }

    final qm_0 a(qm_0 qm_02) {
        if (qm_02.a == 0) {
            this.a.i("ERROR adding empty run to stack");
        }
        if (this.d == null && this.b != null) {
            --this.b.e;
        }
        this.e.add(qm_02);
        qm_02.d = this;
        this.d = qm_02;
        return this.d;
    }

    final void b(qm_0 qm_02) {
        this.e.remove(qm_02);
        if (this.e.isEmpty()) {
            this.d = null;
            if (this.b != null) {
                ++this.b.e;
                return;
            }
        } else {
            this.d = (qm_0)this.e.getLast();
        }
    }

    final qm_0 d() {
        qm_0 qm_02 = null;
        if (!this.e.isEmpty()) {
            qm_02 = (qm_0)this.e.removeFirst();
            if (this.e.isEmpty()) {
                this.d = null;
                if (this.b != null) {
                    ++this.b.e;
                }
            } else {
                this.d = (qm_0)this.e.getLast();
            }
        }
        return qm_02;
    }

    final qm_0 e() {
        qm_0 qm_02 = null;
        if (!this.e.isEmpty()) {
            qm_02 = (qm_0)this.e.removeLast();
            if (this.e.isEmpty()) {
                this.d = null;
                if (this.b != null) {
                    ++this.b.e;
                }
            } else {
                this.d = (qm_0)this.e.getLast();
            }
        }
        return qm_02;
    }

    final void c(qm_0 qm_02) {
        if (this.e.isEmpty()) {
            this.a(qm_02);
            if (this.b != null) {
                --this.b.e;
            }
        } else {
            this.e.offerFirst(qm_02);
        }
        qm_02.d = this;
        this.d = (qm_0)this.e.getLast();
    }

    final void f() {
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

    final void g() {
        this.h = true;
        this.q = false;
    }

    final boolean h() {
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
    final int a(qu object, int n2, boolean n3) {
        int n4 = -1;
        if (((qu)object).d == null) {
            return -1;
        }
        if (n2 == 2 || n2 == 6) {
            if (this.d != null) return n4;
            if (n2 != 6) return ((qu)object).d.a;
            if (((qu)object).d.a == 1) return 0;
            return 1;
        }
        if (n2 == 1) {
            qu qu2 = this;
            int n5 = qu2.a(qu2.d, ((qu)object).d, false, n3 != 0);
            if (n5 <= 0) return n4;
            return n5;
        }
        if (n2 != 3) {
            qu qu3 = this;
            int n6 = qu3.a(qu3.d, ((qu)object).d, true, n3 != 0);
            if (n3 != 0) {
                return n6;
            }
            if (n6 < 0) return n4;
            if (n6 <= 0) {
                n3 = ((qu)object).e.size();
                if (n3 < 2) {
                    return -1;
                }
                n4 = 0;
                Object object2 = (qm_0)((qu)object).e.get(n3 - 2);
                object = ((qu)object).d;
                object2 = ((qm_0)object2).c[((qm_0)object2).a - 1];
                object = ((qm_0)object).c[0];
                if (((pV)object2).f == ((pV)object).f + 1) {
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
            if (((qu)object).e.size() != 1) return n4;
            qu qu4 = this;
            int n7 = qu4.a(qu4.d, ((qu)object).d, false, n3 != 0);
            if (n7 > 0) {
                return n7;
            }
            qu qu5 = this;
            n7 = qu5.a(qu5.d, ((qu)object).d, true, n3 != 0);
            if (n7 != 0) return n4;
            return 0;
        }
        this.a.i("Mismatched join caused split");
        return n4;
    }

    final int a(qm_0 qm_02, qm_0 qm_03, boolean bl2, boolean bl3) {
        int n2 = -1;
        pV pV2 = qm_03.c[qm_03.a - 1];
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
            } else if (pV2.g == qm_02.c[qm_02.a - 1].g + 1) {
                n2 = 1;
            }
        } else if (qm_02 != null) {
            pV pV3 = qm_02.c[qm_02.a - 1];
            if (qm_03.a > 0) {
                if (!this.g) {
                    if (!bl2) {
                        n2 = qm_02.a(pV3, pV2, qm_03.a, true);
                        if (!bl3 && n2 + qm_02.a <= qm_03.a) {
                            n2 = -1;
                        }
                    } else {
                        n2 = qm_02.a(pV3, pV2, qm_03.a, false);
                        if (n2 != qm_03.a) {
                            if (!bl3) {
                                n2 = -1;
                            }
                        } else {
                            n2 = 0;
                        }
                    }
                } else {
                    boolean bl4;
                    n2 = qm_02.a(pV3, pV2, qm_03.a, false);
                    if (n2 > 0 && !(bl4 = n2 % 2 == 0 ^ qm_0.a(pV3, pV2))) {
                        n2 = -1;
                    }
                }
            }
        }
        return n2;
    }

    final int a(qu qu2, int n2, qv qv2) {
        if (n2 > 0) {
            qm_0 qm_02;
            if (this.d == null) {
                qm_02 = new qm_0();
                n2 = qm_02.a(qu2.d, n2);
                this.a(qm_02);
            } else {
                if (this.a.d <= 2) {
                    this.a.g("Joining card " + String.valueOf(this.d.c[this.d.a - 1]) + " with card " + String.valueOf(qu2.d.c[0]));
                }
                n2 = this.d.a(qu2.d, n2);
            }
            if (this.d.a == 13 && qv2 != null) {
                n2 += 100 * this.d.c[0].e;
                qm_02 = this.e();
                qv2.a(qm_02);
            }
        } else {
            this.a(qu2.d);
        }
        if (n2 > 0 && n2 % 20 < qu2.d.a) {
            qu2.d.a -= n2 % 20;
        } else {
            qu qu3 = qu2;
            qu3.b(qu3.d);
        }
        return n2;
    }

    final void b(qu qu2, int n2, qv object) {
        block10: {
            block11: {
                block9: {
                    int n3;
                    if (n2 <= 0 || n2 == 20) break block9;
                    if (n2 > 100) {
                        n3 = n2 / 100;
                        n2 %= 100;
                        object = ((qv)object).a();
                        if (((qm_0)object).c[0].e != n3) {
                            this.a.i("Logic error - move says remove suit " + n3 + " but suit stack is " + ((qm_0)object).c[0].e);
                        }
                        this.a((qm_0)object);
                    }
                    if (n2 > 20) {
                        n2 -= 20;
                        n3 = 0;
                        while (n3 < n2) {
                            qu2.d.c[qu2.d.a + n3] = this.d.c[this.d.a - n2 + n3];
                            ++n3;
                        }
                        qu2.d.a += n2;
                    } else {
                        qm_0 qm_02 = new qm_0();
                        int n4 = 0;
                        while (n4 < n2) {
                            qm_02.c[n4] = this.d.c[this.d.a - n2 + n4];
                            ++n4;
                        }
                        qm_02.a = n2;
                        qu2.a(qm_02);
                    }
                    this.d.a -= n2;
                    if (this.d.a != 0) break block10;
                    break block11;
                }
                if (n2 == 20) {
                    int n5 = 0;
                    while (n5 < this.d.a) {
                        qu2.d.c[qu2.d.a++] = this.d.c[n5];
                        ++n5;
                    }
                } else {
                    qu2.a(this.d);
                }
            }
            qu qu3 = this;
            qu3.b(qu3.d);
        }
    }

    final qm_0 k() {
        int n2 = this.e.size();
        if (n2 < 2) {
            return null;
        }
        return (qm_0)this.e.get(n2 - 2);
    }

    final Rectangle2D.Double l() {
        Rectangle2D.Double double_ = this.o();
        double_.x += this.a.F.a.a();
        double_.y += this.a.F.a.b();
        return double_;
    }

    final Rectangle m() {
        Rectangle2D.Double double_ = this.l();
        return new Rectangle((int)double_.x, (int)double_.y, (int)double_.width, (int)double_.height);
    }

    final Rectangle n() {
        Rectangle2D.Double double_ = this.o();
        return new Rectangle((int)double_.x, (int)double_.y, (int)double_.width, (int)double_.height);
    }

    final Rectangle2D.Double o() {
        if (this.b.h < (double)(this.a.F.c / 2)) {
            this.a.i("Error, stack " + this.b.b + " height is less than half the card Height");
        }
        if (this.b.g == null) {
            this.a.i("StackSet " + this.b.b + " origin has not been set yet");
        }
        Rectangle2D.Double double_ = new Rectangle2D.Double();
        new Rectangle2D.Double().x = this.m;
        double_.y = this.b.g.y;
        if ((this.b.d & 0x10) != 0) {
            double_.width = this.a.F.b * 1.45;
            double_.height = this.b.h;
            if (this.a.d <= 3) {
                this.a.g("Triplet stack " + String.valueOf(this) + " bounds " + qo_0.a(double_));
            }
        } else if ((this.b.d & 0x40) != 0) {
            double_.width = this.a.F.b;
            double_.height = this.b.h;
            if (this.a.d <= 3) {
                this.a.g("Spider suits stack " + String.valueOf(this) + " bounds " + qo_0.a(double_));
            }
        } else {
            double_.width = this.a.F.b;
            if ((this.b.d & 2) != 0) {
                double_.height = (int)this.b.h;
                if (this.a.d <= 3) {
                    this.a.g("Horizontal stack " + String.valueOf(this) + " bounds " + qo_0.a(double_));
                }
            } else {
                double_.height = (int)this.b.h;
                if (this.a.d <= 3) {
                    this.a.g("Standard stack " + String.valueOf(this) + " bounds " + qo_0.a(double_) + " cards: " + String.valueOf(this.p));
                }
            }
        }
        return double_;
    }

    static void a(qu qu2, qu qu3) {
        LinkedList linkedList = qu2.e;
        qu2.e = qu3.e;
        qu3.e = linkedList;
        qu2.d = qu2.e.isEmpty() ? null : (qm_0)qu2.e.getLast();
        qu3.d = qu3.e.isEmpty() ? null : (qm_0)qu3.e.getLast();
    }

    final int p() {
        if (this.i) {
            this.a.a("Call to len function on on work stack");
            this.a.i("Cannot get the card count of a work stack");
        }
        if (!this.q) {
            return 0;
        }
        int n2 = 0;
        for (qm_0 qm_02 : this.e) {
            n2 += qm_02.a;
        }
        return n2;
    }

    final int q() {
        if (!this.q) {
            return 0;
        }
        int n2 = 0;
        for (qm_0 qm_02 : this.e) {
            n2 += qm_02.a;
        }
        return n2;
    }

    final pV a(int n2) {
        pV pV2 = null;
        for (qm_0 qm_02 : this.e) {
            if (n2 - qm_02.a < 0) {
                if (n2 < 0) {
                    return null;
                }
                pV2 = qm_02.c[n2];
                qm_02.c[n2].k = qm_02.b;
                break;
            }
            n2 -= qm_02.a;
        }
        return pV2;
    }

    final boolean b(int n2) {
        for (qm_0 qm_02 : this.e) {
            int n3 = 0;
            while (n3 < qm_02.a) {
                pV pV2 = qm_02.c[n3];
                if (pV2.g == n2) {
                    return true;
                }
                ++n3;
            }
        }
        return false;
    }

    final void a(boolean bl2) {
        if (this.d != null) {
            this.d.b = bl2;
        }
    }

    final int r() {
        if (this.i) {
            this.a.i("Cannot get the card count of a work stack");
        }
        int n2 = 0;
        for (qm_0 qm_02 : this.e) {
            if (!qm_02.b) continue;
            ++n2;
        }
        return n2;
    }

    final boolean a(Point point, int n2, int n3) {
        double d2 = this.m;
        double d3 = this.b.g.y;
        Rectangle2D.Double double_ = new Rectangle2D.Double(d2, d3, n2, n3);
        if (double_.contains(point)) {
            if (this.a.d <= 5) {
                this.a.g("Hit on stack " + this.c);
            }
            return true;
        }
        return false;
    }

    public final String toString() {
        return (this.i ? "Work" : "") + this.b.b + ":" + this.c % 10;
    }
}

