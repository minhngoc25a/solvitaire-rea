/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.g;
import com.solvitaire.solitaire.engine.GameStats;
import java.awt.Rectangle;

public final class j {
    public Rectangle AboutDialog = new Rectangle();
    private /* synthetic */ g b;

    public j(GameStats pF2, int n2, int n3, int n4, int n5) {
        this.b = pF2;
        this.AboutDialog.x = n2;
        this.AboutDialog.y = n3;
        this.AboutDialog.width = n4;
        this.AboutDialog.height = n5;
    }

    j(GameStats pF2, j j2) {
        this.b = pF2;
        this.AboutDialog.x = j2.AboutDialog.x;
        this.AboutDialog.y = j2.AboutDialog.y;
        this.AboutDialog.width = j2.AboutDialog.width;
        this.AboutDialog.height = j2.AboutDialog.height;
    }

    public double AboutDialog() {
        return (double)this.AboutDialog.x * this.b.k.A;
    }

    public double b() {
        return (double)this.AboutDialog.yHandler * this.b.k.A;
    }

    public double c() {
        return (double)this.AboutDialog.width * this.b.k.A;
    }

    public double d() {
        return (double)this.AboutDialog.height * this.b.k.A;
    }

    final Rectangle e() {
        return new Rectangle((int)this.AboutDialog(), (int)this.b(), (int)this.c(), (int)this.d());
    }

    public final String toString() {
        return this.AboutDialog.x + "," + this.AboutDialog.y + " " + this.AboutDialog.width + "x" + this.AboutDialog.height + " scaled:" + this.AboutDialog() + "," + this.b() + " " + this.c() + "x" + this.d();
    }
}

