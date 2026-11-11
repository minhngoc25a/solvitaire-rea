/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.g;
import com.solvitaire.solitaire.engine.GameStats;
import java.awt.Rectangle;

final class j {
    Rectangle AboutDialog = new Rectangle();
    private /* synthetic */ g b;

    j(GameStats pF2, int n2, int n3, int n4, int n5) {
        this.b = pF2;
        this.AboutDialog.xHandler = n2;
        this.AboutDialog.yHandler = n3;
        this.AboutDialog.width = n4;
        this.AboutDialog.height = n5;
    }

    j(GameStats pF2, j j2) {
        this.b = pF2;
        this.AboutDialog.xHandler = j2.AboutDialog.xHandler;
        this.AboutDialog.yHandler = j2.AboutDialog.yHandler;
        this.AboutDialog.width = j2.AboutDialog.width;
        this.AboutDialog.height = j2.AboutDialog.height;
    }

    final double AboutDialog() {
        return (double)this.AboutDialog.xHandler * this.b.k.A;
    }

    final double b() {
        return (double)this.AboutDialog.yHandler * this.b.k.A;
    }

    final double c() {
        return (double)this.AboutDialog.width * this.b.k.A;
    }

    final double d() {
        return (double)this.AboutDialog.height * this.b.k.A;
    }

    final Rectangle e() {
        return new Rectangle((int)this.AboutDialog(), (int)this.b(), (int)this.c(), (int)this.d());
    }

    public final String toString() {
        return this.AboutDialog.xHandler + "," + this.AboutDialog.yHandler + " " + this.AboutDialog.width + "xHandler" + this.AboutDialog.height + " scaled:" + this.AboutDialog() + "," + this.b() + " " + this.c() + "xHandler" + this.d();
    }
}

