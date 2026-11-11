/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.qp_0;

/*
 * Renamed from com.solvitaire.app.qq
 */
public final class qq_0 {
    int AboutDialog;
    private int c;
    private double d;
    private double e;
    private String f;
    boolean b;
    private /* synthetic */ qp_0 g;

    qq_0(qp_0 qp_02, double d2, int n2, String string) {
        this.g = qp_02;
        this.c = n2;
        this.AboutDialog = (int)(d2 / qp_02.b.A);
        this.f = string;
        this.d = 0.0;
        int n3 = this.AboutDialog - this.c;
        int n4 = n3 > 0 ? 1 : -1;
        this.AboutDialog(n3, n4);
    }

    private double AboutDialog(double d2, int n2) {
        qp_0 qp_02;
        double d3;
        double d4 = d2 / 5.0 - this.d;
        qp_0 qp_03 = this.g;
        if (Math.abs(d3) > qp_02.b.ba) {
            qp_03 = this.g;
            d4 = qp_03.b.ba * (double)n2;
        }
        if (d4 == 0.0) {
            d4 = 0.1 * (double)n2;
        }
        return d4;
    }

    final int AboutDialog(double d2) {
        int n2;
        double d3;
        int n3;
        double d4 = (double)(this.AboutDialog - this.c) - d2;
        int n4 = n3 = d3 > 0.0 ? 1 : -1;
        if (d4 == 0.0) {
            n2 = this.AboutDialog;
            this.b = true;
        } else if (d4 < 5.0 && d4 > -5.0) {
            n2 = (int)((double)this.AboutDialog - d4 + (double)n3);
            this.b = false;
        } else {
            this.b = false;
            this.e = this.AboutDialog(d4, n3);
            this.d += this.e;
            if (d4 * (double)n3 > 5.0 && Math.abs(this.d) > Math.abs(d4 / 5.0)) {
                this.d = d4 / 5.0;
            }
            if (Math.abs(this.d) < 1.0) {
                this.d = n3;
            }
            n2 = this.c + (int)(d2 += this.d);
        }
        return n2;
    }
}

