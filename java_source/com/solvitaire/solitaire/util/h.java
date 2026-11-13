/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.g;
import com.solvitaire.solitaire.engine.GameStats;

public final class h {
    private int AboutDialog;
    private int b;
    private /* synthetic */ g c;

    public h(GameStats pF2, int n2, int n3) {
        this.c = pF2;
        this.AboutDialog = n2;
        this.b = n3;
    }

    public int AboutDialog() {
        return (int)((double)this.AboutDialog * this.c.k.A);
    }

    public int b() {
        return (int)((double)this.b * this.c.k.A);
    }
}

