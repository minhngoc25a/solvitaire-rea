/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g;
import com.solvitaire.app.pF;

final class i {
    int a;
    private /* synthetic */ g b;

    i(pF pF2, int n2) {
        this.b = pF2;
        this.a = n2;
    }

    final double a() {
        return (double)this.a * this.b.k.A;
    }

    public final String toString() {
        return String.format("%d, scaled:%d", this.a, (int)this.a());
    }
}

