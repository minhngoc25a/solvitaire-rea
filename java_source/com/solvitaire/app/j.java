/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g;
import com.solvitaire.app.pF;
import java.awt.Rectangle;

final class j {
    Rectangle a = new Rectangle();
    private /* synthetic */ g b;

    j(pF pF2, int n2, int n3, int n4, int n5) {
        this.b = pF2;
        this.a.x = n2;
        this.a.y = n3;
        this.a.width = n4;
        this.a.height = n5;
    }

    j(pF pF2, j j2) {
        this.b = pF2;
        this.a.x = j2.a.x;
        this.a.y = j2.a.y;
        this.a.width = j2.a.width;
        this.a.height = j2.a.height;
    }

    final double a() {
        return (double)this.a.x * this.b.k.A;
    }

    final double b() {
        return (double)this.a.y * this.b.k.A;
    }

    final double c() {
        return (double)this.a.width * this.b.k.A;
    }

    final double d() {
        return (double)this.a.height * this.b.k.A;
    }

    final Rectangle e() {
        return new Rectangle((int)this.a(), (int)this.b(), (int)this.c(), (int)this.d());
    }

    public final String toString() {
        return this.a.x + "," + this.a.y + " " + this.a.width + "x" + this.a.height + " scaled:" + this.a() + "," + this.b() + " " + this.c() + "x" + this.d();
    }
}

