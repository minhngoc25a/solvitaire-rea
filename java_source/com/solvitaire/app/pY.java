/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pX;
import com.solvitaire.app.s_0;

final class pY {
    s_0 a;
    s_0[] b = new s_0[52];
    int c;
    double d;
    boolean e;
    int f;
    private /* synthetic */ pX g;

    pY(pX pX2) {
        this.g = pX2;
        int n2 = 0;
        while (n2 < 52) {
            this.b[n2] = new s_0(pX2.a, pX2, n2);
            ++n2;
        }
        this.a = this.b[0];
    }
}

