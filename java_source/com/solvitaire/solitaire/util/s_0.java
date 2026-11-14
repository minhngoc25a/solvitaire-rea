/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.pX;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;

/*
 * Renamed from com.solvitaire.app.s
 */
public final class s_0 {
    private SolitaireGameEngine p;
    private pX q;
    int AboutDialog;
    public int b;
    public int c;
    public int d;
    public int e;
    public int f;
    public int g;
    public int h;
    public int[][] int[][] i;
    public int j;
    public int k;
    public int l;
    public int m;
    public int nt n;
    public boolean oolean o;

    s_0(SolitaireGameEngine qo_02, pX pX2, int n2) {
        this.p = qo_02;
        this.q = pX2;
        if (n2 == -1) {
            this.AboutDialog = -1;
            this.b = 0;
            this.c = 0;
            this.d = 0;
        } else {
            this.AboutDialog = n2;
            this.b = n2 / 13 + 1;
            this.c = n2 % 13 + 1;
            this.d = this.b * 100 + this.c;
        }
        this.AboutDialog();
    }

    public s_0(s_0 s_02) {
        this.p = s_02.p;
        this.AboutDialog = s_02.AboutDialog;
        this.b = s_02.b;
        this.c = s_02.c;
        this.d = s_02.d;
        this.e = s_02.e;
        this.f = s_02.f;
        this.g = s_02.g;
        this.h = s_02.h;
        this.q = s_02.q;
        this.j = s_02.j;
        this.k = s_02.k;
        this.l = s_02.l;
        this.m = s_02.m;
        this.n = s_02.n;
        this.o = s_02.o;
        this.i = s_02.i;
        s_02.i = new int[this.q.c.height][this.q.c.width];
    }

    final void AboutDialog(int n2, int n3) {
        this.j = n2;
        this.k = n3;
    }

    final void AboutDialog(int n2) {
        this.d = -2;
        this.c = -2 % 100;
        this.b = -2 / 100;
    }

    final void AboutDialog() {
        this.e = 0;
        this.f = 999999;
        this.g = 999999;
        this.h = 999999;
        this.i = new int[this.q.c.height][this.q.c.width];
        this.l = 0;
        this.m = 0;
    }

    final int b() {
        return this.j + this.l;
    }

    public int c() {
        return this.k + this.m;
    }

    public final String toString() {
        return "(xHandler=" + this.j + ",yHandler=" + this.k + "|suit=" + this.b + ",value=" + this.c + ")";
    }
}

