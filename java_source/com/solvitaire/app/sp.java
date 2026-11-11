/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pJ;
import com.solvitaire.app.pV;
import com.solvitaire.app.qa;
import com.solvitaire.app.qm_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qr;
import com.solvitaire.app.qu;
import com.solvitaire.app.qv;
import com.solvitaire.app.sq;
import java.io.File;
import java.util.HashMap;

final class sp
extends qr {
    private int a;
    private int b;
    private qv[] c;

    sp(qo_0 qo_02) {
        super(qo_02, 500);
        this.f = 10;
        this.o = 1;
        this.p = 52;
        this.r = false;
        this.s = true;
    }

    @Override
    final String a() {
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
        this.c = new qv[4];
        if (this.F) {
            if (this.d.d <= 4) {
                this.d.g("Running TriPeaks");
            }
            this.d.ap = new sq(this);
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
        this.K = 0;
        this.a = 0;
        this.b = this.d.l.m;
        return true;
    }

    @Override
    final void a(int n2, int n3) {
        Object object;
        int n4;
        this.l();
        if (this.d.aZ.h > this.y) {
            return;
        }
        if (this.d.P++ % 100000L == 0L) {
            this.b(4);
        }
        this.a = n3;
        if (!this.E) {
            if (this.d.U <= -this.z + 30) {
                sp sp2 = this;
                n2 = sp2.a(sp2.d.aZ, n2, true);
                if (!this.I && this.d.u && this.d.m != 1 && this.d.m != 3) {
                    n2 = 0;
                }
                if (!(this.d.l.b || this.I || this.d.u)) {
                    if (n2 != 2 && this.d.l.c != 3 && this.d.l.c != 6) {
                        this.d.i("Could not find a solution");
                        return;
                    }
                    if (n2 != 2) {
                        if (this.d.l.c == 3) {
                            this.d.l.n += this.K;
                        } else {
                            this.d.l.m = this.J;
                            if (this.d.d <= 5) {
                                this.d.g("Using best score as accumulated score giving " + this.d.l.m);
                            }
                        }
                    }
                    this.d.g("*** ALLOWING BOARD NOT COMPLETED, play best solution");
                    this.d.ap.a(this.d.bd, null, false, true, false);
                    int n5 = 0;
                    n4 = 0;
                    qu qu2 = this.d.aY.a[this.d.ap.h].f[0];
                    object = this.d.aY.a[this.d.ap.i].f[0];
                    while (n4 >= 0) {
                        n4 = this.a(qu2, (qu)object, false);
                        if (n4 >= 0) {
                            this.d.bd.d[this.d.bd.h] = pJ.a(8, 0, 0, n4);
                            if (this.d.bd.h > 0) {
                                this.d.bd.g[this.d.bd.h] = this.d.bd.g[this.d.bd.h - 1];
                            }
                            ++this.d.bd.h;
                            ++n5;
                            continue;
                        }
                        if (this.d.d > 5) continue;
                        this.d.g("Dealt another card to get to re-deal icon, count " + n5);
                    }
                    n4 = 0;
                    while (n4 < n5) {
                        sp sp3 = this;
                        int cfr_ignored_0 = sp3.d.bd.d[this.d.bd.h - n4 - 1];
                        sp3.c(qu2, (qu)object);
                        ++n4;
                    }
                    this.d.bd.d[this.d.bd.h] = pJ.a(24, 0, 0, 0);
                    ++this.d.bd.h;
                    this.b(false);
                    if (this.d.d <= 5) {
                        this.d.g("Flagging SOLVED to exit and process new deal");
                    }
                    n2 = 2;
                    this.E = true;
                }
            } else {
                sp sp4 = this;
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
                sp sp5 = this;
                object = sp5.d.aZ.a[8].f[0].a();
                int n6 = ((pV)object).f - 1;
                sp sp6 = sp5;
                qu qu3 = sp6.a(sp6.d.aZ.a);
                while (qu3 != null) {
                    if (sp5.G > 0) break;
                    Object object2 = qu3.a();
                    int n7 = ((pV)object2).f - 1;
                    if (n7 == (n6 + 1) % 13 || (n7 + 1) % 13 == n6) {
                        long l2;
                        int n8;
                        if (sp5.d.d <= 3) {
                            sp5.d.g("Paired " + String.valueOf(object) + " with " + String.valueOf(object2));
                        }
                        object2 = qu3.d;
                        qu qu4 = qu3;
                        qu4.j();
                        sp5.d.aZ.a[8].f[0].a((qm_0)object2);
                        sp5.d.aZ.d[sp5.d.aZ.h] = n8 = pJ.a(qu3);
                        ++sp5.d.aZ.h;
                        int n9 = qu3.b.a;
                        int n10 = qu3.c;
                        boolean bl2 = false;
                        if (n9 > 0) {
                            int n11;
                            qu qu5;
                            if (n10 > 0) {
                                qu5 = sp5.d.aZ.a[n9 - 1].f[n10 - 1];
                                if (!qu5.h && qu5.b() == 0 && !sp5.d.aZ.a[n9].f[n10 - 1].h()) {
                                    if (sp5.d.d <= 4) {
                                        sp5.d.g("Open stack " + qu5.c + " has a zero card triggering getNextCard");
                                    }
                                    sp5.a = n4 + 1;
                                    n11 = sp5.e(qu5);
                                    if (n11 <= 0) {
                                        if (sp5.d.d <= 5) {
                                            sp5.d.g("Getnextcard failed, dialog up:" + sp5.d.F.v);
                                        }
                                        bl2 = true;
                                    } else {
                                        qu5.d.a(n11);
                                        if (sp5.d.d < 5) {
                                            sp5.d.g("Read unknown card on stack" + qu5.c + " value " + n11);
                                        }
                                        sp5.a(qu5);
                                    }
                                }
                            }
                            if (n10 < n9 + 6) {
                                qu5 = sp5.d.aZ.a[n9 - 1].f[n10];
                                if (!qu5.h && qu5.b() == 0 && !sp5.d.aZ.a[n9].f[n10 + 1].h()) {
                                    if (sp5.d.d <= 4) {
                                        sp5.d.g("Open stack " + qu5.c + " has a zero card triggering getNextCard");
                                    }
                                    sp5.a = n4 + 1;
                                    n11 = sp5.e(qu5);
                                    if (n11 <= 0) {
                                        if (sp5.d.d <= 5) {
                                            sp5.d.g("Getnextcard failed, dialog up:" + sp5.d.F.v);
                                        }
                                        bl2 = true;
                                    } else {
                                        qu5.d.a(n11);
                                        sp5.a(qu5);
                                    }
                                }
                            }
                        }
                        if (!bl2 && sp5.b(l2 = sp5.c()) < 0) {
                            sp5.a(l2);
                            if (sp5.d.d <= 3) {
                                sp5.d.g("Chaining productive for dest " + String.valueOf(qu3));
                            }
                            if (sp5.d.d <= 3) {
                                sp5.d.g("Entering solve with chain length of " + (n4 + 1));
                            }
                            sp5.a(n8, n4 + 1);
                        }
                        --sp5.d.aZ.h;
                        if (sp5.d.d <= 3) {
                            sp5.d.g("Restored " + String.valueOf(qu3) + ":" + String.valueOf(qu3.a()) + " backout " + sp5.G);
                        }
                        sp5.d.aZ.a[8].f[0].e();
                        qu qu6 = qu3;
                        qu6.i();
                    }
                    qu3 = sp.a(sp5.d.aZ.a, qu3);
                }
            }
            this.d.T = n2;
        }
        if (this.G < 0) {
            n2 = this.d.T;
            this.d.T += 20;
            if (this.d.T < 0) {
                if (this.d.d <= 3) {
                    this.d.g("Depth " + this.d.aZ.h + " complexity " + this.d.T + " dealindex " + this.d.aZ.b + " try a deal");
                }
                sp sp7 = this;
                int n12 = sp7.a(sp7.d.aZ.a[7].f[0], this.d.aZ.a[8].f[0], true);
                if (n12 >= 0) {
                    this.d.aZ.d[this.d.aZ.h] = pJ.a(8, 0, 0, n12);
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
                    this.a(-1, 0);
                    this.b -= n4;
                    if (this.d.d <= 3) {
                        this.d.g("Undone deal with chain of " + n3 + " score back to " + this.b);
                    }
                    --this.d.aZ.h;
                    sp sp8 = this;
                    sp8.c(sp8.d.aZ.a[7].f[0], this.d.aZ.a[8].f[0]);
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
            while (n4 < this.d.aZ.a[n3].f.length) {
                if (this.d.aZ.a[n3].f[n4].h()) {
                    sp sp2 = this;
                    n2 = (int)((long)n2 + sp2.a(sp2.d.aZ.a[n3].f[n4], (long)n2, false, false));
                }
                ++n4;
            }
            ++n3;
        }
        n3 = this.d.aZ.a[8].f[0].b();
        if (n3 != 0) {
            n2 = (int)((long)n2 + this.a(n3, this.d.aZ.a[8].f[0].c, (long)n2, false));
        }
        sp sp3 = this;
        n2 = (int)((long)n2 + sp3.a(sp3.d.aZ.a[7].f[0], (long)n2, false, false));
        return n2;
    }

    final qu a(qv[] qvArray) {
        qu qu2 = qvArray[3].f[0];
        if (qu2.h || !qu2.h()) {
            qu2 = sp.a(qvArray, qu2);
        } else if (this.d.d <= 3) {
            this.d.g("Pyramid at " + qu2.c + " is available for pairing");
        }
        return qu2;
    }

    static qu a(qv[] qvArray, qu qu2) {
        qu qu3 = null;
        int n2 = qu2.b.a;
        while (n2 >= 0) {
            int n3 = 0;
            while (n3 < qvArray[n2].f.length) {
                if (!(n2 == qu2.b.a && n3 <= qu2.c || !qvArray[n2].f[n3].h() || n2 != 3 && (qvArray[n2 + 1].f[n3].h() || qvArray[n2 + 1].f[n3 + 1].h()))) {
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
    final void a(int n2, boolean bl2) {
        if (this.d.d <= n2) {
            this.b(n2);
            qv[] qvArray = bl2 ? this.d.aY.a : this.d.aZ.a;
            this.a(n2, qvArray[7]);
            this.a(n2, qvArray[8]);
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
    final int a(qu object) {
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
            if (!this.d.aZ.a[7].f[0].e.isEmpty()) {
                object2 = (qm_0)this.d.aZ.a[7].f[0].e.getFirst();
            }
            if (object2 != null && ((qm_0)object2).c[0].g == 0) {
                if (this.B[23][0] != 0) {
                    this.d.i("Feed stack needs card, but deck already has " + this.B[23][0]);
                }
                this.B[23][0] = n3;
                ((qm_0)object2).a(n3);
            } else {
                Object object3 = null;
                int n6 = 0;
                while (n6 < 4) {
                    object2 = this.d.aZ.a[n6];
                    qu[] quArray = ((qv)object2).f;
                    int n7 = ((qv)object2).f.length;
                    int n8 = 0;
                    while (n8 < n7) {
                        object2 = quArray[n8];
                        if (((qu)object2).h() && ((qu)object2).d.c[0].g == 0) {
                            object3 = object2;
                            break;
                        }
                        ++n8;
                    }
                    if (object3 != null) break;
                    ++n6;
                }
                if (object3 != null) {
                    this.g[((qu)object3).b.a][((qu)object3).c] = n3;
                    ((qu)object3).d.a(n3);
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
        sp sp2 = this;
        return sp2.b(sp2.n(), 1);
    }

    private HashMap n() {
        HashMap hashMap = new HashMap(52);
        this.c[0] = this.d.aZ.a[0];
        this.c[1] = this.d.aZ.a[1];
        this.c[2] = this.d.aZ.a[2];
        this.c[3] = this.d.aZ.a[3];
        qv[] qvArray = this.c;
        int n2 = this.c.length;
        int n3 = 0;
        while (n3 < n2) {
            Object object = qvArray[n3];
            qu[] quArray = ((qv)object).f;
            int n4 = ((qv)object).f.length;
            int n5 = 0;
            while (n5 < n4) {
                object = quArray[n5];
                if (((qu)object).h()) {
                    int n6;
                    object = ((qu)object).d;
                    if (((qm_0)object).c[0].g != 0 && (n6 = this.a(hashMap, ((qm_0)object).c[0].g)) > 1) {
                        this.d.bu.a();
                        pV pV2 = ((qm_0)object).c[0];
                        pV pV3 = pV2;
                        pV3 = ((qm_0)object).c[0];
                        this.d.i("ERROR - Too many " + qr.f(pV2.g) + " of " + qr.d(pV3.g) + "s in the pyramids");
                    }
                }
                ++n5;
            }
            ++n3;
        }
        for (Object object : this.d.aZ.a[7].f[0].e) {
            if (((qm_0)object).c[0].g == 0 || (n2 = this.a(hashMap, ((qm_0)object).c[0].g)) <= 1) continue;
            this.d.bu.a();
            pV pV4 = ((qm_0)object).c[0];
            pV pV5 = pV4;
            pV5 = ((qm_0)object).c[0];
            this.d.i("ERROR - Too many " + qr.f(pV4.g) + " of " + qr.d(pV5.g) + "s in the feed");
        }
        for (Object object : this.d.aZ.a[8].f[0].e) {
            n2 = this.a(hashMap, ((qm_0)object).c[0].g);
            if (n2 <= 1) continue;
            this.d.bu.a();
            pV pV6 = ((qm_0)object).c[0];
            pV pV7 = pV6;
            pV7 = ((qm_0)object).c[0];
            this.d.i("ERROR - Too many " + qr.f(pV6.g) + " of " + qr.d(pV7.g) + "s in the pile");
        }
        return hashMap;
    }

    @Override
    final boolean a(qu qu2, qu qu3) {
        return false;
    }

    @Override
    final int a(qa qa2, boolean bl2, int n2, int n3) {
        if (bl2) {
            return 0;
        }
        if (qa2 == null) {
            return 0;
        }
        if (qa2.a == null) {
            return 0;
        }
        bl2 = false;
        int n4 = 0;
        while (n4 < 4) {
            int n5 = 0;
            while (n5 < 10) {
                if (n5 > n4 + 6) break;
                qu qu2 = qa2.a[n4].f[n5];
                if (!qu2.h && !qu2.h() && sp.a(qu2.d.c[0], n2, n3)) {
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
    final int a(qa qa2, boolean bl2) {
        if (bl2) {
            return 0;
        }
        if (qa2 == null) {
            return 0;
        }
        if (qa2.a == null) {
            return 0;
        }
        bl2 = false;
        if (!qa2.a[0].f[0].h()) {
            bl2 += 1;
        }
        if (!qa2.a[0].f[3].h()) {
            bl2 += 1;
        }
        if (!qa2.a[0].f[6].h()) {
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
        n2 = this.b + this.a * this.a * 100 + n2;
        if (this.d.d <= 3) {
            this.b(9);
            this.d.g("Current score is " + n2);
        }
        return n2;
    }

    @Override
    final boolean a(qa qa2, int n2) {
        if (qa2 == null) {
            return false;
        }
        if (qa2.a == null) {
            return false;
        }
        boolean bl2 = !qa2.a[0].f[0].h() && !qa2.a[0].f[3].h() && !qa2.a[0].f[6].h();
        return bl2;
    }

    private void a(int n2, int n3, int n4) {
        if (this.d.d <= 4) {
            this.d.g("Loading card " + n4 + " into pyramid " + (n2 * 10 + n3));
        }
        qu qu2 = this.d.aY.a[n2].f[n3];
        qu2.a(new qm_0(this.b(qu2, n4)));
        this.g[n2][n3] = n4;
    }

    @Override
    final boolean a(String string, String[] object, int n2) {
        if (this.d.d <= 4) {
            this.d.g("Loading from checkpoint " + string);
        }
        if (n2 != 6) {
            this.d.i("TriPeaks input file must have 5 rows of cards");
        }
        int n3 = 0;
        try {
            String[] stringArray = object[1].split(",");
            this.a(0, 0, this.d.c(stringArray[0]));
            this.a(0, 3, this.d.c(stringArray[1]));
            this.a(0, 6, this.d.c(stringArray[2]));
            ++n3;
            stringArray = object[2].split(",");
            this.a(1, 0, this.d.c(stringArray[0]));
            this.a(1, 1, this.d.c(stringArray[1]));
            this.a(1, 3, this.d.c(stringArray[2]));
            this.a(1, 4, this.d.c(stringArray[3]));
            this.a(1, 6, this.d.c(stringArray[4]));
            this.a(1, 7, this.d.c(stringArray[5]));
            ++n3;
            stringArray = ((String)object[3]).split(",");
            int n4 = 0;
            while (n4 < 9) {
                this.a(2, n4, this.d.c(stringArray[n4]));
                ++n4;
            }
            ++n3;
            stringArray = ((String)object[4]).split(",");
            n4 = 0;
            while (n4 < 10) {
                this.a(3, n4, this.d.c(stringArray[n4]));
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
            object = this.d.aY.a[this.d.ap.i].f[0];
            ((qu)object).c(new qm_0(this.b((qu)object, n3)));
            if (this.d.d <= 4) {
                this.d.g("Loading card " + n3 + " into deck level 0 and pile");
            }
            int n5 = 1;
            while (n5 < 24) {
                string2 = stringArray[n5];
                this.B[n5][0] = n3 = this.d.c(string2);
                object = this.d.aY.a[this.d.ap.h].f[0];
                if (this.d.d <= 4) {
                    this.d.g("Loading card " + n3 + " into deck level " + n5);
                }
                ((qu)object).c(new qm_0(this.b((qu)object, n3)));
                ++n5;
            }
        }
        catch (ArrayIndexOutOfBoundsException arrayIndexOutOfBoundsException) {
            this.d.i("Less than 24 cards in the deal pile");
        }
        ((sq)this.d.ap).j();
        return this.b(1, false);
    }

    @Override
    final void a(HashMap hashMap, int n2, String string) {
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
    final void a(StringBuffer stringBuffer) {
        stringBuffer.append(qo_0.j[this.d.i] + "\n# Stacks:\n");
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
                if (this.d.aY.a[n2].f[n3].h) {
                    stringBuffer.append("     ");
                } else {
                    stringBuffer.append(sp.i(this.g[n2][n3]));
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
            stringBuffer.append(sp.i(this.B[n2][0]));
            stringBuffer.append(",");
            ++n2;
        }
    }

    @Override
    final StringBuffer a(String string, int n2) {
        return new StringBuffer(string + "[" + n2 + "]: ");
    }

    @Override
    final void a(int n2) {
    }

    final int a(qu qu2, qu qu3, boolean bl2) {
        if (qu2.e.size() == 0) {
            if (this.d.d <= 3) {
                this.d.g("End of deal tries");
            }
            return -1;
        }
        int n2 = 0;
        qm_0 qm_02 = qu2.e();
        if (qm_02 != null) {
            qu3.a(qm_02);
            if (bl2 && qm_02.c[0].g == 0) {
                if (this.d.d <= 5) {
                    this.d.g("We are dealing the final unknown card - check if this is actually permitted");
                }
                if (((sq)this.d.ap).i()) {
                    if (this.d.d <= 5) {
                        this.d.g("Play is permitted so play up to the unknown card");
                    }
                    this.d.ap.a(this.d.aZ, null, false, false, false);
                    this.d.aZ.d[this.d.aZ.h++] = pJ.a(8, 0, 0, 99);
                    this.d.ap.a(this.d.aZ, null, false, false, false);
                    --this.d.aZ.h;
                    if (this.B[23][0] != 0) {
                        qm_02.c[0].a(this.B[23][0]);
                        this.a(qu3);
                    } else {
                        qm_02.c[0].a(0);
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
                    qu2.a(qm_02);
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

    final void c(qu qu2, qu object) {
        object = ((qu)object).e();
        if (this.d.d <= 3) {
            this.d.g("Undeal card " + String.valueOf(((qm_0)object).c[0]));
        }
        qu2.a((qm_0)object);
    }

    @Override
    final int a(HashMap hashMap) {
        int n2 = 0;
        int n3 = 0;
        while (n3 < 4) {
            int n4 = 0;
            while (n4 < this.d.aY.a[n3].f.length) {
                qu qu2 = this.d.aY.a[n3].f[n4];
                if (qu2.h()) {
                    ++n2;
                    this.a(hashMap, this.d.aY.a[n3].f[n4].b(), "pyramid");
                }
                ++n4;
            }
            ++n3;
        }
        n3 = 0;
        while (n3 < 24) {
            this.a(hashMap, this.B[n3][0], "deal ");
            ++n2;
            ++n3;
        }
        return n2;
    }

    @Override
    final void g() {
        int n2 = 0;
        while (n2 < 4) {
            if (this.d.aY.a[n2] == null) {
                return;
            }
            int n3 = 0;
            while (n3 < this.d.aY.a[n2].f.length) {
                Object object = this.d.aY.a[n2].f[n3];
                if (((qu)object).h()) {
                    object = ((qu)object).d;
                    if (object != null && ((qm_0)object).a > 0) {
                        this.t[n3][n2] = ((qm_0)object).c[0].g == 0 ? (!this.E && n3 == this.d.ap.a && n2 == this.d.ap.b ? 3 : 2) : 4;
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
    final int b(qu qu2) {
        int n2 = -1;
        if (qu2.b.a < 7) {
            Object object;
            if (qu2.h() && (object = qu2.d) != null && !((qm_0)object).b) {
                object = this.d.aY.a[8].f[0];
                int n3 = ((qu)object).c() - 1;
                int n4 = qu2.c() - 1;
                if (n4 == (n3 + 1) % 13 || (n4 + 1) % 13 == n3) {
                    if (this.d.d <= 4) {
                        this.d.g("Paired " + n3 + " with " + n4);
                    }
                    n2 = pJ.a(qu2);
                    this.k(n2);
                }
            }
        } else if (qu2.b.a == 7) {
            Object object = this.d.aY.a[7].f[0];
            if ((object = ((qu)object).a()) != null) {
                n2 = pJ.a(8, 0, 0, ((pV)object).f);
                this.k(n2);
            }
        }
        return n2;
    }
}

