/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qo_0;
import com.solvitaire.app.qy_0;
import java.io.File;
import java.util.ArrayList;
import java.util.List;

/*
 * Renamed from com.solvitaire.app.qx
 */
public final class qx_0 {
    qo_0 a;
    String b;
    String c;
    int d;
    private int q;
    public List e;
    public List f;
    public List g;
    public List h;
    public List i;
    qy_0 j;
    int k = 99999999;
    int l;
    int m = 99999999;
    int n;
    String o;
    boolean p;

    qx_0(qo_0 qo_02) {
        this.a = qo_02;
        this.j = new qy_0(this);
    }

    final void a(String string) {
        this.b = string;
        this.a();
    }

    final void a(String string, int n2, String string2) {
        this.c = string;
        this.d = n2;
        this.b = string2;
        this.a();
    }

    final void a() {
        String string;
        if (this.c == null) {
            this.c = this.a.l.q;
            this.d = this.a.bl;
        }
        if (!(string = this.a.as + qo_0.o + this.c + String.valueOf(this.d > 0 ? Integer.valueOf(this.d) : "") + File.separator + "stats" + this.b + ".txt").equals(this.o)) {
            this.k = 99999999;
            this.m = 99999999;
            Object object = this.a.l(string);
            if (object == null) {
                object = "";
            }
            object = object.split("\n");
            this.e = new ArrayList(((String[])object).length + 100);
            this.f = new ArrayList(((String[])object).length + 100);
            this.g = new ArrayList(((String[])object).length + 100);
            this.h = new ArrayList(((String[])object).length + 100);
            this.i = new ArrayList(((String[])object).length + 100);
            int n2 = 0;
            this.q = 0;
            String[] stringArray = object;
            int n3 = ((String[])object).length;
            int n4 = 0;
            while (n4 < n3) {
                object = stringArray[n4];
                if (object.length() != 0) {
                    qx_0 qx_02 = this;
                    object = new qy_0(qx_02, qx_02.a, (String)object);
                    this.e.add(object.a);
                    this.f.add(object.b);
                    this.g.add(object.c);
                    this.h.add(object.d);
                    this.i.add(object.e);
                    this.a((qy_0)object);
                    n2 = object.a;
                    this.q = object.e;
                }
                ++n4;
            }
            this.j.a = n2 + 1;
            if (n2 < 20) {
                int n5 = n2;
                while (n5 < 20) {
                    this.e.add(n5 + 1);
                    this.f.add(0);
                    this.g.add(0);
                    this.h.add(0);
                    this.i.add(0);
                    ++n5;
                }
            }
            this.o = string;
        }
    }

    final void b() {
        this.j.f = 0L;
        this.j.b = 0;
        this.j.c = 0;
        this.j.d = 0;
    }

    final void a(qy_0 qy_02) {
        int n2;
        if (qy_02.c <= this.m) {
            this.m = qy_02.c;
            this.n = qy_02.a;
        }
        if ((n2 = qy_02.a()) <= this.k) {
            this.k = n2;
            this.l = qy_02.a;
        }
    }

    final void c() {
        qx_0 qx_02 = this;
        qx_02.a(qx_02.a.bj, this.a.bl, this.a.bk);
        this.a.bo = this.a.bq.a(this.a.bj, this.a.bl, this.a.bk, this.q);
    }
}

