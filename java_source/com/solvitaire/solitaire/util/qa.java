/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.engine.CardStack;
import java.util.Arrays;

public final class qa {
    public CardStack[] AboutDialog = new CardStack[10];
    public int b;
    public int c;
    int[] d;
    int[] e;
    int[] f;
    private int[] j;
    public int[] g;
    public int h;
    public int i;

    public qa() {
        this.d = new int[350];
        this.e = new int[350];
        this.f = new int[350];
        this.j = new int[350];
        this.g = new int[350];
    }

    public qa(qa qa2, boolean bl2) {
        int n2 = 0;
        while (n2 < 10) {
            if (qa2.AboutDialog[n2] != null) {
                this.AboutDialog[n2] = new CardStack(qa2.AboutDialog[n2], bl2);
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

    public final void AboutDialog() {
        this.b = 0;
        this.c = 0;
        this.h = 0;
        this.i = 0;
    }
}

