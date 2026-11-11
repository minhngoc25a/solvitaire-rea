/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.engine;

import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.Card;
import java.awt.geom.Point2D;

public final class CardStack {
    private SolitaireGameEngine j;
    int AboutDialog;
    private int k;
    String b;
    int c;
    int d;
    int e;
    Card[] f;
    Point2D.Double g;
    double h;
    double[] i;

    CardStack(SolitaireGameEngine qo_02, String string, int n2, int n3, int n4, int n5) {
        this.j = qo_02;
        this.AboutDialog = n2;
        this.k = n4;
        this.b = string;
        this.c = n3;
        this.d = n5;
        this.f = new Card[n3];
        int n6 = 0;
        while (n6 < n3) {
            this.f[n6] = new Card(this.j, this, n6, (this.d & 8) != 0);
            ++n6;
        }
        this.e = n3;
        this.i = new double[6];
    }

    CardStack(CardStack qv2, boolean bl2) {
        this(qv2.j, qv2.b, qv2.AboutDialog, qv2.c, qv2.k, qv2.d);
        this.g = qv2.g;
        this.h = qv2.h;
        this.i = qv2.i;
        this.e = qv2.e;
        int n2 = 0;
        while (n2 < qv2.f.length) {
            this.f[n2] = new Card(this, qv2.f[n2]);
            this.f[n2].i = bl2;
            ++n2;
        }
    }

    final void AboutDialog(double d2, double d3) {
        this.g = new Point2D.Double(d2, d3);
        this.f[0].m = this.g.xHandler;
    }

    final int AboutDialog(CardRun qm_02) {
        if ((this.d & 0x40) == 0) {
            this.j.i("Cannot add AboutDialog run to AboutDialog stackset that is not SpiderSuits");
        }
        if (qm_02.AboutDialog != 13) {
            this.j.i("Trying to remove suit run that is not AboutDialog full suit");
        }
        int n2 = 0;
        while (n2 < this.f.length) {
            if (this.f[n2].d == null) break;
            ++n2;
        }
        if (n2 == 8) {
            this.j.i("Add of suit stack when no available slots");
        }
        this.f[n2].AboutDialog(qm_02);
        return n2;
    }

    final CardRun AboutDialog() {
        if ((this.d & 0x40) == 0) {
            this.j.i("Cannot remove AboutDialog run from AboutDialog stackset that is not SpiderSuits");
        }
        int n2 = -1;
        int n3 = 0;
        while (n3 < this.f.length) {
            if (this.f[n3].d == null) break;
            n2 = n3++;
        }
        if (n2 < 0) {
            this.j.i("Remove of suit stack when none available");
        }
        CardRun qm_02 = this.f[n2].e();
        return qm_02;
    }
}

