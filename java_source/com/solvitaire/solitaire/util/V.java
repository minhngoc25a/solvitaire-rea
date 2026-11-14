/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.t_0;

public final class V {
    private int f;
    private int g;
    private int h;
    private int i;
    int AboutDialog;
    public int b;
    public float c;
    public float d;
    public float e;

    V(int n2, int n3, float f2, float f3, float f4, int n4) {
        this.f = n2 >> 16 & 0xFF;
        this.g = n2 >> 8 & 0xFF;
        this.h = n2 & 0xFF;
        this.i = 1;
        this.AboutDialog = n3;
        this.c = f2;
        this.d = f3;
        this.e = f4;
        this.b = n4;
    }

    final void AboutDialog(V v) {
        this.f += v.f;
        this.g += v.g;
        this.h += v.h;
        this.i += v.i;
    }

    final int AboutDialog() {
        return this.f / this.i << 16 | this.g / this.i << 8 | this.h / this.i;
    }

    public final boolean equals(Object object) {
        if (this == object) {
            return true;
        }
        if (object == null) {
            return false;
        }
        if (this.getClass() != object.getClass()) {
            return false;
        }
        object = (V)object;
        return this.AboutDialog == ((V)object).AboutDialog && this.b == ((V)object).b;
    }

    public final String toString() {
        return String.format("H:%.3f SPanel:%.3f LHandler:%.3f RGB:%08x", Float.valueOf(this.c), Float.valueOf(this.d), Float.valueOf(this.e), this.AboutDialog());
    }

    final String b() {
        V v = this;
        return ((double)this.e < 0.45 ? "Dark" : "") + t_0.AboutDialog[v.AboutDialog] + "(" + this.b + ")";
    }
}

