/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qv;
import java.util.Arrays;

public final class qa {
    qv[] a = new qv[10];
    int b;
    int c;
    int[] d;
    int[] e;
    int[] f;
    private int[] j;
    int[] g;
    int h;
    int i;

    qa() {
        this.d = new int[350];
        this.e = new int[350];
        this.f = new int[350];
        this.j = new int[350];
        this.g = new int[350];
    }

    qa(qa qa2, boolean bl2) {
        int n2 = 0;
        while (n2 < 10) {
            if (qa2.a[n2] != null) {
                this.a[n2] = new qv(qa2.a[n2], bl2);
            }
            ++n2;
        }
        this.b = qa2.b;
        this.c = qa2.b;
        this.d = Arrays.copyOf(qa2.d, qa2.d.length);
        this.h = qa2.h;
        this.i = qa2.i;
        this.e = Arrays.copyOf(qa2.e, qa2.e.length);
        this.j = Arrays.copyOf(qa2.j, qa2.j.length);
        this.g = Arrays.copyOf(qa2.g, qa2.g.length);
    }

    final void a() {
        this.b = 0;
        this.c = 0;
        this.h = 0;
        this.i = 0;
    }
}

