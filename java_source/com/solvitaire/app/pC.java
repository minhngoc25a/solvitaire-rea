/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.e_0;
import com.solvitaire.app.f_0;
import com.solvitaire.app.pB;
import com.solvitaire.app.pF;
import com.solvitaire.app.pJ;
import com.solvitaire.app.pV;
import com.solvitaire.app.qb_0;
import com.solvitaire.app.qm_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qu;
import com.solvitaire.app.qv;
import com.solvitaire.app.qw_0;
import com.solvitaire.app.s_0;

final class pC
extends e_0 {
    static final double[] p = new double[]{841.5, 841.5};
    private pB r;
    s_0[] q = new s_0[20];
    private qv s;
    private qv t;
    private qv u;
    private int v;

    pC(pB pB2) {
        super(pB2);
        this.r = pB2;
    }

    @Override
    final boolean a() {
        int n2;
        this.k = true;
        int n3 = 0;
        this.s = this.f.aY.a[0];
        int n4 = 2;
        qb_0 qb_02 = this.f.aq;
        qb_02.c(n4, null);
        int n5 = 0;
        while (n5 < this.r.f) {
            pC pC2 = this;
            pC2.f(pC2.s.f[n5]);
            for (qm_0 qm_02 : this.s.f[n5].e) {
                if (qm_02.c[qm_02.a - 1].g != 0) continue;
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
            pC pC3 = this;
            n2 = pC3.d(pC3.f.aY.a[1].f[n4]);
            if (n2 < 0) {
                ++n5;
                n7 += this.g.a(1, n4);
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
                        if (this.a(n9)) {
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
                pC pC4 = this;
                n2 = pC4.d(pC4.f.aY.a[2].f[n4]);
                if (n2 < 0) {
                    ++n6;
                    n8 += this.g.a(2, n4);
                } else if (n2 > 0) {
                    if (n2 % 100 == 1) {
                        if (this.f.d <= 5) {
                            this.f.g("Ace found in right stack so this is normal layout");
                        }
                        bl2 = true;
                    } else {
                        n9 = n2 - 1;
                        while (n9 % 100 > 0) {
                            if (this.a(n9)) {
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
            pF pF2 = this.g;
            pF2.a(string, false);
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
                    this.f.g("ss1 variance " + n7 + " ss2 variance " + n8 + " indicates layout is incorrect, currently reversed? " + this.f.F.c());
                }
                this.g.h();
            }
        }
        if (this.f.m == 4) {
            int n10 = 0;
            while (n10 < this.r.f) {
                this.s.f[n10].f();
                ++n10;
            }
            this.r.D = 0;
        }
        this.t = this.f.aY.a[1];
        this.u = this.f.aY.a[2];
        if (this.f.m != 4) {
            int n11 = 0;
            while (n11 < 4) {
                pC pC5 = this;
                n2 = pC5.d(pC5.t.f[n11]);
                if (n2 > 0) {
                    this.r.c[n11] = n2;
                    if (this.f.d <= 5) {
                        this.f.g("Adding work area card" + n2);
                    }
                    qu qu2 = this.t.f[n11];
                    this.t.f[n11].a(new qm_0(this.r.b(qu2, n2)));
                }
                ++n11;
            }
            n11 = 0;
            while (n11 < 4) {
                pC pC6 = this;
                n2 = pC6.d(pC6.u.f[n11]);
                if (n2 > 0) {
                    this.r.b[n11] = n2;
                    if (this.f.d <= 5) {
                        this.f.g("Adding cards to ace up to " + n2);
                    }
                    int n12 = n2 / 100;
                    n5 = n2 % 100;
                    qu qu3 = this.u.f[n11];
                    qm_0 qm_03 = new qm_0(this.r.b(qu3, n12 * 100 + 1));
                    qu3.a(qm_03);
                    n8 = 2;
                    while (n8 <= n5) {
                        qm_03.a(new qm_0(this.r.b(qu3, n12 * 100 + n8)), 1);
                        ++n8;
                    }
                }
                ++n11;
            }
            Object object = this.f.aq;
            ((qb_0)object).d(false);
            if (this.r.D > 52) {
                String string = "Expected 52 but found " + this.r.D + " cards";
                object = this.f;
                ((qo_0)object).a(string, false);
            }
            this.r.a(1, true, n3);
        }
        return true;
    }

    private boolean a(int n2) {
        qu[] quArray = this.s.f;
        int n3 = this.s.f.length;
        int n4 = 0;
        while (n4 < n3) {
            qu qu2 = quArray[n4];
            if (qu2.b(n2)) {
                return true;
            }
            ++n4;
        }
        return false;
    }

    @Override
    final void a(pJ pJ2, int[] nArray, int n2, int n3, boolean bl2) {
        pJ2.q = 0;
        pJ2.r = 0;
        if (this.f.d <= 4) {
            this.f.g("*** At " + n2 + " move " + String.valueOf(pJ2));
        }
        if (this.f.u) {
            this.a(pJ2, (qv)null);
            if (this.f.m != 1) {
                int n4 = 0;
                int n5 = 0;
                while (n5 < 4) {
                    qu qu2 = this.f.aY.a[2].f[n5];
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
                        this.f.a(10L);
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
                ((qo_0)object).a((String)object2, false);
            }
            if (!pJ2.o || this.e) {
                this.e = false;
                if (pJ2.c.a != 2) {
                    object2 = pJ2.g.d.c[pJ2.g.d.a - pJ2.i];
                    if (pJ2.i == 1) {
                        if (((pV)object2).f == 1) {
                            if (this.f.aY.a[2].f[pB.a[((pV)object2).e]].d == null) {
                                bl3 = false;
                            }
                        } else {
                            int n7 = 0;
                            while (n7 < 4) {
                                if (this.f.aY.a[2].f[n7].b() == ((pV)object2).g - 1) {
                                    bl3 = false;
                                }
                                ++n7;
                            }
                        }
                    }
                    if (bl3) {
                        pV pV2 = pJ2.e.a();
                        Object object3 = object2;
                        object = this;
                        object = new f_0((e_0)object);
                        int n8 = ((pV)object3).f;
                        if (n8 < 13) {
                            ++n8;
                            switch (((pV)object3).e) {
                                case 1: 
                                case 4: {
                                    ((f_0)object).a = n8 + 200;
                                    ((f_0)object).b = n8 + 300;
                                    break;
                                }
                                case 2: 
                                case 3: {
                                    ((f_0)object).a = n8 + 100;
                                    ((f_0)object).b = n8 + 400;
                                }
                            }
                        } else {
                            ((f_0)object).a = 0;
                            ((f_0)object).b = 0;
                        }
                        if (pJ2.c.a == 1) {
                            int n9 = 0;
                            while (n9 < 8) {
                                object3 = this.f.aY.a[0].f[n9].a();
                                if (object3 == null || ((pV)object3).g == ((f_0)object).a || ((pV)object3).g == ((f_0)object).b) {
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
                                object3 = this.f.aY.a[1].f[n9].a();
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
                            if (pV2 == null && ((pV)object2).f != 13) {
                                int n10 = 0;
                                while (n10 < 8) {
                                    object3 = this.f.aY.a[0].f[n10].a();
                                    if (object3 != null && (((pV)object3).g == ((f_0)object).a || ((pV)object3).g == ((f_0)object).b)) {
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
                                object3 = this.f.aY.a[0].f[n11].a();
                                if (object3 != null && (((pV)object3).g == ((f_0)object).a || ((pV)object3).g == ((f_0)object).b) || pV2 == null && object3 == null) {
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
                    if (!this.a(pJ2)) {
                        boolean bl4 = true;
                        if (!this.f.u && bl2 && pJ2.r != 3) {
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
                                this.f.g("Click stack failed, rc " + pJ2.r + "- need to attempt recovery");
                            }
                            pJ2.r = 1;
                            return;
                        }
                        if (this.f.d <= 6) {
                            this.f.g("Standalone (" + this.f.u + ") or final move, so ignore click failure");
                        }
                        pJ2.r = 0;
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
                        qw_0 qw_02 = this.a(pJ2.g);
                        if (qw_02.b == null || qw_02.b.length == 0) {
                            if (this.f.d <= 6) {
                                this.f.g("getstackCardsRetried on src gave null or none - need to attempt recovery");
                            }
                            pJ2.r = 1;
                            return;
                        }
                        int n15 = 0;
                        if (pJ2.d.a == 0) {
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
                                n14 = (int)(this.f.F.a.b() + this.f.F.a.d() - (double)this.f.F.c * 0.75 - (double)qw_02.b[qw_02.b.length - 1].c());
                                if (this.f.d <= 3) {
                                    this.f.g("Compressed stack " + pJ2.h + " final card " + (qw_02.b.length - 1) + " at " + String.valueOf(qw_02.b[qw_02.b.length - 1]) + " cardHeight " + this.f.F.c + " end table " + (this.f.F.a.b() + this.f.F.a.d()) + " give adjustment of " + n14);
                                }
                            }
                            if (this.f.d <= 5) {
                                this.f.g("Stack " + pJ2.h + " requires adjustment of " + n14);
                            }
                        }
                    }
                    if (!this.a(pJ2, -n14)) {
                        if (this.f.d <= 6) {
                            this.f.g("Move stack failed - need to attempt recovery");
                        }
                        pJ2.r = 1;
                        return;
                    }
                    this.f.aD.a();
                    pJ2.g.l = System.currentTimeMillis() + 100L;
                }
                if (this.a(pJ2, (qv)null) && this.f.d <= 5) {
                    this.f.g("Move " + String.valueOf(pJ2) + " will expose a card");
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
                this.f.a((long)n17, "Auto move " + this.v);
                this.f.aD.a();
                this.a(pJ2, (qv)null);
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
                        pJ2.r = 1;
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
    final void a(pJ pJ2, boolean bl2) {
        if (this.f.d <= 4) {
            this.f.g("***Undoing move of " + String.valueOf(pJ2) + " atmoveonly " + bl2);
        }
        if (!bl2) {
            this.f.F.k();
            if (pJ2.c.a == 1) {
                this.f.a(150L, "Undo work");
            } else if (pJ2.c.a == 2) {
                this.f.a(150L, "Undo ace");
            } else {
                this.f.a(150L, "Undo stack");
            }
        }
        this.a(pJ2, 0, null);
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

