/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pV;

final class pW {
    private int b;
    private int c;
    private double d;
    private double e;
    private double f;
    private String g;
    boolean a;
    private /* synthetic */ pV h;

    pW(pV pV2, int n2, int n3, String string) {
        this.h = pV2;
        this.c = n3;
        this.b = n2;
        this.g = string;
        this.e = 0.0;
        boolean cfr_ignored_0 = pV2.a;
        int n4 = this.b - this.c;
        n2 = n4 > 0 ? 1 : -1;
        this.a(n4, n2);
    }

    private double a(double d2, int n2) {
        double d3;
        double d4 = d2 / 5.0 - this.e;
        if (Math.abs(d3) > 3.0) {
            d4 = 3.0 * (double)n2;
        }
        if (d4 == 0.0) {
            d4 = 0.1 * (double)n2;
        }
        boolean cfr_ignored_0 = this.h.a;
        return d4;
    }

    final int a(long l2) {
        int n2;
        double d2;
        if (l2 > 20L) {
            l2 = 20L;
        }
        double d3 = (double)(this.b - this.c) - this.d;
        int n3 = d2 > 0.0 ? 1 : -1;
        boolean cfr_ignored_0 = this.h.a;
        if ((int)d3 == 0) {
            n2 = this.b;
            boolean cfr_ignored_1 = this.h.a;
            this.a = true;
        } else if (d3 < 5.0 && d3 > -5.0) {
            n2 = this.b - (int)d3 + n3;
            this.d += (double)n3;
            boolean cfr_ignored_2 = this.h.a;
            this.a = false;
        } else {
            this.a = false;
            this.f = this.a(d3, n3);
            this.e += this.f * (double)l2 / 10.0;
            if (d3 * (double)n3 > 5.0 && Math.abs(this.e) > Math.abs(d3 / 5.0)) {
                this.e = d3 / 5.0;
            }
            if (Math.abs(this.e) < 1.0) {
                this.e = n3;
            }
            this.d += this.e * (double)l2 / 10.0;
            n2 = this.c + (int)this.d;
            boolean cfr_ignored_3 = this.h.a;
        }
        return n2;
    }
}

