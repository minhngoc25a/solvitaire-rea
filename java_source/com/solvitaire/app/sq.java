/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.e_0;
import com.solvitaire.app.pJ;
import com.solvitaire.app.qb_0;
import com.solvitaire.app.qm_0;
import com.solvitaire.app.qu;
import com.solvitaire.app.qv;
import com.solvitaire.app.sp;
import java.util.LinkedList;

final class sq
extends e_0 {
    static final double[] p = new double[]{771.0, 781.5};
    private sp q;
    private LinkedList r = new LinkedList();
    private qv[] s;
    private qv t;
    private qu u;
    private qv v;
    private qu w;

    sq(sp sp2) {
        super(sp2);
        this.q = sp2;
        this.h = 7;
        this.i = 8;
    }

    @Override
    final boolean a() {
        this.s = new qv[4];
        this.s[0] = this.f.aY.a[0];
        this.s[1] = this.f.aY.a[1];
        this.s[2] = this.f.aY.a[2];
        this.s[3] = this.f.aY.a[3];
        this.t = this.f.aY.a[7];
        this.v = this.f.aY.a[8];
        this.u = this.t.f[0];
        this.w = this.v.f[0];
        if (this.f.m != 4) {
            qm_0 qm_02;
            int n2 = 0;
            while (n2 < 3) {
                int n3 = 0;
                while (n3 < this.s[n2].f.length) {
                    qu qu2 = this.s[n2].f[n3];
                    if (qu2.h()) {
                        qm_02 = new qm_0(this.q.b(qu2, 0));
                        qu2.a(qm_02);
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
                qu qu3 = this.s[3].f[n2];
                int n4 = this.c(qu3, 0, -1);
                this.f.aq.q();
                if (n4 <= 0) {
                    this.f.b(2, "TripeaksAuto.subPrime");
                    this.f.aD.a();
                    this.f.w = true;
                    n4 = this.c(qu3, 0, -1);
                    this.f.i("Failed to read card at pyramid position " + (n2 + 30));
                    this.f.n();
                }
                if (this.f.d <= 5) {
                    this.f.g("Read level 3 card " + n2 + " value " + n4);
                }
                this.q.g[3][n2] = n4;
                qm_02 = new qm_0(this.q.b(qu3, n4));
                qu3.a(qm_02);
                ++n2;
            }
            int n5 = 2;
            qb_0 qb_02 = this.f.aq;
            qb_02.c(n5, null);
            int n6 = 0;
            sq sq2 = this;
            n5 = sq2.c(sq2.w, 0, -1);
            if (n5 <= 0) {
                this.f.i("Error reading initial deal card");
            }
            if (this.f.d <= 5) {
                this.f.g("Read deck card " + 0 + " value " + n5);
            }
            int n7 = n5;
            this.w.c(new qm_0(this.q.b(this.w, n7)));
            ++n6;
            this.q.B[0][0] = n5;
            int n8 = 0;
            while (n8 < 22) {
                this.f.k("TriPeaksReadingCards");
                this.k();
                this.f.a(200L, "TripeaksDeal");
                sq sq3 = this;
                n5 = sq3.a(sq3.w, 0, n7, -1, false);
                if (this.f.d <= 5) {
                    this.f.g("First read of deck card " + n6 + " gives value " + n5);
                }
                int n9 = 0;
                while (n9 < 10) {
                    this.f.a(100L, "Second read");
                    this.f.aD.a();
                    sq sq4 = this;
                    int n10 = sq4.a(sq4.w, 0, n7, -1, false);
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
                    this.f.aD.a(3000);
                    sq sq5 = this;
                    n5 = sq5.a(sq5.w, 0, n7, -1, false);
                    if (n5 < 0) {
                        this.f.i("Failed to read a deck card");
                    }
                }
                n7 = n5;
                if (this.f.d <= 5) {
                    this.f.g("Read deck card " + n6 + " value " + n5);
                }
                this.u.c(new qm_0(this.q.b(this.u, n5)));
                this.q.B[n6++][0] = n5;
                this.f.aq.o();
                ++n8;
            }
            this.u.c(new qm_0(this.q.b(this.u, 0)));
            this.r.clear();
            n8 = 1;
            while (n8 < 14) {
                this.r.add(n8);
                ++n8;
            }
            this.f.F.d(false);
            this.f.aq.q();
            this.f.a((long)(200 + this.f.aI), "Let tripeaks stabilize");
        }
        sq sq6 = this;
        sq6.c((pJ)null);
        return true;
    }

    final boolean i() {
        boolean bl2 = false;
        this.f.ao.a(5, true);
        qu qu2 = this.q.a(this.f.aY.a);
        while (qu2 != null) {
            int n2 = qu2.c();
            for (Integer n3 : this.r) {
                int n4 = n3;
                if (n2 != (n4 + 1) % 13 && (n2 + 1) % 13 != n4) continue;
                if (this.f.d <= 5) {
                    this.f.g("Candidates:" + String.valueOf(this.r));
                }
                if (this.f.d <= 5) {
                    this.f.g("Could pair candidate card " + n4 + " with " + n2);
                }
                bl2 = true;
                break;
            }
            if (bl2) break;
            qu2 = sp.a(this.f.aY.a, qu2);
        }
        return bl2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    final void a(pJ object, int[] object2, int n2, int n3, boolean bl2) {
        ((pJ)object).q = 0;
        ((pJ)object).r = 0;
        this.u = this.f.aY.a[7].f[0];
        this.w = this.f.aY.a[8].f[0];
        if (((pJ)object).n) {
            int n4;
            if (this.f.d <= 4) {
                this.f.g("***Dealing (" + ((pJ)object).l + " restored) at level " + n2);
            }
            if (this.f.u) {
                this.q.a(this.u, this.w, false);
                sq sq2 = this;
                sq2.c((pJ)null);
                return;
            }
            if (((pJ)object).o) {
                this.f.a((long)(300 + this.f.aI), "Pre new deal");
                this.f.c(this.w.m - (double)((int)(this.f.F.b / 2.0)) + this.g.a.a(), this.v.g.y + this.f.F.a.b() + (double)(this.f.F.c / 6));
                return;
            }
            this.f.a((long)(50 + this.f.aI / 2));
            this.f.d(this.t.g.x + 20.0, this.t.g.y + 20.0);
            this.q.a(this.u, this.w, false);
            sq sq3 = this;
            sq3.c((pJ)null);
            if (this.f.m == 4 || n2 != n3 - 1 || ((n4 = ((pJ)object).a) & 0xFF) != 99) return;
            this.f.a(1000L);
            n3 = -1;
            if (!this.f.F.o()) {
                sq sq4 = this;
                n3 = sq4.a(sq4.w, -1, false);
            }
            if (!this.f.F.v && n3 > 0) {
                this.q.B[23][0] = n3;
                qm_0 qm_02 = this.w.d;
                if (qm_02.c[0].g != 0) {
                    this.f.i("ERROR - Request for expose of deal card when already set");
                }
                qm_02.a(n3);
                ((pJ)object).a = pJ.a(8, 0, 0, n3 / 100);
                object2[n2] = ((pJ)object).a;
                if (this.f.d > 4) return;
                this.f.g("Final deal card is " + n3 + " replaced in move at level " + n2);
                return;
            }
            if (this.f.d <= 5) {
                this.f.g("Updating last deck candidates after nomore dialog");
            }
            object = this;
            ((e_0)object).f.ao.a(5, true);
            object2 = ((sq)object).q.a(((e_0)object).f.aY.a);
            while (object2 != null) {
                n2 = 0;
                n3 = ((qu)object2).c();
                for (Integer n5 : ((sq)object).r) {
                    int n6 = n5;
                    if (n3 != (n6 + 11) % 13 + 1 && n3 != n6 % 13 + 1) continue;
                    if (((e_0)object).f.d <= 5) {
                        ((e_0)object).f.g("Paired candidate card " + n6 + " with " + n3 + ", removing as a candidate");
                    }
                    ((sq)object).r.remove(n5);
                    n2 = 1;
                    break;
                }
                if (n2 != 0) continue;
                sp cfr_ignored_0 = ((sq)object).q;
                object2 = sp.a(((e_0)object).f.aY.a, (qu)object2);
            }
            if (((e_0)object).f.d <= 5) {
                ((e_0)object).f.g("There are now " + ((sq)object).r.size() + " candidates remaining:" + String.valueOf(((sq)object).r));
            }
            if (((sq)object).r.size() == 0) {
                ((e_0)object).f.i("ERROR - Ran out of candidates for last card in deck");
            }
            this.f.F.p();
            return;
        }
        if (this.f.u) {
            qm_0 qm_03 = ((pJ)object).e.e();
            this.f.aY.a[8].f[0].a(qm_03);
            Object object3 = ((pJ)object).e;
            ((qu)object3).j();
            this.c((pJ)object);
            if (!this.f.u || this.f.m == 1) return;
            object3 = this.f.aY.a[0];
            if (((qv)object3).f[0].h() || ((qv)object3).f[3].h() || ((qv)object3).f[6].h()) return;
            int n7 = 0;
            while (n7 < 100) {
                this.f.ar.b(false);
                this.f.a(10L);
                ++n7;
            }
            return;
        }
        if (this.f.d <= 5) {
            this.f.g("Synch stack to be clicked " + String.valueOf(((pJ)object).e));
        }
        if (!this.a(((pJ)object).e, ((pJ)object).e.a().g, this.f.aI)) {
            ((pJ)object).r = 1;
            return;
        }
        this.f.a(10L, "PostSynch");
        n3 = (int)(((pJ)object).e.b.g.y + this.f.F.a.b() + 3.0);
        bl2 = (int)(((pJ)object).e.b.g.y + this.f.F.a.b() + (double)this.g.c - 3.0);
        int n8 = (int)(((pJ)object).e.m + 5.0 + this.g.a.a());
        n2 = (int)(((pJ)object).e.m + this.g.b - 5.0 + this.g.a.a());
        this.f.c((double)n8, (double)n3);
        this.f.c((double)n2, (double)n3);
        this.f.c((double)n8, (double)bl2);
        this.f.c((double)n2, (double)bl2);
        this.f.S = System.currentTimeMillis();
        qm_0 qm_04 = ((pJ)object).e.e();
        this.w.a(qm_04);
        Object object4 = ((pJ)object).e;
        ((qu)object4).j();
        object4 = this;
        ((sq)object4).c((pJ)null);
    }

    final void j() {
        this.c((pJ)null);
    }

    private void c(pJ pJ2) {
        Object object;
        qv[] qvArray = this.f.aY.a;
        int n2 = this.f.aY.a.length;
        int n3 = 0;
        while (n3 < n2) {
            object = qvArray[n3];
            if (object == null || ((qv)object).a > 3) break;
            qu[] quArray = ((qv)object).f;
            int n4 = ((qv)object).f.length;
            int n5 = 0;
            while (n5 < n4) {
                object = quArray[n5];
                if (!((qu)object).h && ((qu)object).d != null && ((qu)object).h()) {
                    ((qu)object).d.b = true;
                }
                ++n5;
            }
            ++n3;
        }
        object = this.q.a(this.f.aY.a);
        while (object != null) {
            if (!((qu)object).h && ((qu)object).d != null && ((qu)object).h()) {
                ((qu)object).d.b = false;
                if (pJ2 != null && ((qu)object).a().g == 0) {
                    if (this.f.d <= 5) {
                        this.f.g("Open stack scan shows stack " + ((qu)object).c + " has newly exposed card");
                    }
                    this.n = object;
                    this.o = pJ2;
                }
            }
            object = sp.a(this.f.aY.a, (qu)object);
        }
        this.f.aY.a[7].f[0].a(true);
        this.f.aY.a[8].f[0].a(false);
    }

    @Override
    final void a(pJ pJ2, boolean bl2) {
        this.u = this.f.aY.a[7].f[0];
        this.w = this.f.aY.a[8].f[0];
        if (pJ2.n) {
            if (!bl2) {
                int sq2 = pJ2.a;
                if ((sq2 & 0xFF) == 99) {
                    if (this.f.d <= 5) {
                        this.f.g("Skipping undo of 99 deal after nomore dialog");
                    }
                } else {
                    this.f.F.k();
                }
            }
            int cfr_ignored_0 = pJ2.k;
            this.q.c(this.u, this.w);
            sq object = this;
            object.c((pJ)null);
            this.b(pJ2);
            return;
        }
        if (!bl2) {
            if (this.f.F.v) {
                if (this.f.d <= 6) {
                    this.f.g("No more moves dialog is up during undo so use dismiss rather than undo");
                }
                this.f.F.p();
            } else {
                this.f.F.k();
            }
        }
        qm_0 n2 = this.w.e();
        pJ2.e.a(n2);
        qu qu2 = pJ2.e;
        qu2.i();
        this.b(pJ2);
        int n3 = pJ2.e.b.a;
        int n32 = pJ2.e.c;
        if (n3 > 0) {
            qm_0 qm_02;
            if (n32 > 0 && (qm_02 = this.f.aY.a[n3 - 1].f[n32 - 1].d) != null) {
                qm_02.b = true;
            }
            if (n32 < n3 + 6 && (qm_02 = this.f.aY.a[n3 - 1].f[n32].d) != null) {
                qm_02.b = true;
            }
        }
    }

    private void k() {
        sq sq2 = this;
        sq2.b(sq2.u);
    }

    @Override
    final String a(int n2, int n3) {
        Object object;
        if ((n3 & 8) != 0) {
            object = String.format("Deal", new Object[0]);
        } else {
            qv qv2 = this.f.aY.a[(n2 &= 0xFF) / 10];
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
    final boolean a(int[] nArray, int n2, int n3, int n4, String string) {
        int n5;
        if (this.f.d <= 5) {
            this.f.g("===== Card state check started: " + string);
        }
        this.f.aD.a();
        n4 = 1;
        long l2 = System.currentTimeMillis() + 2000L;
        int n6 = 0;
        while (n6 < 4) {
            int n7;
            qv qv2 = this.f.aY.a[n6];
            if (qv2 != null && ((n7 = this.a(n3, qv2, l2)) != 1 || System.currentTimeMillis() > l2)) {
                n4 = 0;
                break;
            }
            ++n6;
        }
        if (n2 > 0 && ((n5 = nArray[n2 - 1]) >> 24 & 8) != 0) {
            qv qv3;
            int n8;
            if (this.f.d <= 5) {
                this.f.g("Previous move was a deal, need synch on pile");
            }
            if ((n8 = this.a(n3, qv3 = this.f.aY.a[this.i], l2)) != 1) {
                n4 = 0;
            }
        }
        if (this.f.d <= 5) {
            this.f.g(n4 != 0 ? "===== Card state check completed OK" : "===== Card state check failed");
        }
        return n4 != 0;
    }
}

