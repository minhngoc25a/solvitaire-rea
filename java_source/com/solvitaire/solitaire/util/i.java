/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.g;
import com.solvitaire.solitaire.engine.GameStats;

public final class i {
    public int AboutDialog;
    private /* synthetic */ g b;

    public i(GameStats pF2, int n2) {
        this.b = pF2;
        this.AboutDialog = n2;
    }

    public final double AboutDialog() {
        return (double)this.AboutDialog * this.b.k.A;
    }

    public final String toString() {
        return String.format("%d, scaled:%d", this.AboutDialog, (int)this.AboutDialog());
    }
}

