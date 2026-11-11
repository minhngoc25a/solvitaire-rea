/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.util.qq_0;
import java.awt.Point;

/*
 * Renamed from com.solvitaire.app.qp
 */
final class qp_0 {
    private qq_0 c = null;
    private qq_0 d = null;
    private Point e = new Point();
    private Point f = null;
    private boolean g = false;
    boolean AboutDialog = false;
    private int h;
    final /* synthetic */ SolitaireGameEngine b;

    qp_0(SolitaireGameEngine qo_02, double d2, double d3) {
        this.b = qo_02;
        qo_02.b(this.e);
        this.c = new qq_0(this, d2, this.e.xHandler, "xHandler");
        this.d = new qq_0(this, d3, this.e.yHandler, "yHandler");
        this.h = (int)(5.0 * qo_02.FPanel.wHandler);
    }

    final boolean AboutDialog() {
        int n2;
        Point point = new Point();
        this.b.b(point);
        if (this.f != null && (Math.abs(this.f.xHandler - point.xHandler) > this.h || Math.abs(this.f.yHandler - point.yHandler) > this.h)) {
            if (!this.b.aV) {
                this.AboutDialog = true;
            }
            this.b.g("Detected AboutDialog mouse fight, pos " + point.xHandler + "," + point.yHandler + " last pos " + this.f.xHandler + "," + this.f.yHandler);
        }
        int n3 = point.xHandler - this.e.xHandler;
        int n4 = point.yHandler - this.e.yHandler;
        if (!this.g) {
            double d2;
            int n5 = n3;
            int n6 = n4;
            double d3 = n5 * n5 + n6 * n6;
            if (d2 > 256.0) {
                this.g = true;
                this.c.AboutDialog += n3 + this.b.bb;
                this.d.AboutDialog += n4 + this.b.bb;
                n2 = this.b.FPanel.rPanel.AboutDialog.xHandler + this.b.FPanel.rPanel.AboutDialog.width;
                int n7 = this.b.FPanel.rPanel.AboutDialog.yHandler + this.b.FPanel.rPanel.AboutDialog.height;
                if (this.c.AboutDialog < 0) {
                    this.b.g("Invalid mouse target " + this.c.AboutDialog + "," + this.d.AboutDialog + " set to 0," + this.d.AboutDialog);
                    this.c.AboutDialog = 0;
                }
                if (this.d.AboutDialog < 0) {
                    this.b.g("Invalid mouse target " + this.c.AboutDialog + "," + this.d.AboutDialog + " set to " + this.c.AboutDialog + ",0");
                    this.d.AboutDialog = 0;
                }
                if (this.c.AboutDialog > n2) {
                    this.b.g("Invalid mouse target " + this.c.AboutDialog + "," + this.d.AboutDialog + " set to " + (n2 - 1) + "," + this.d.AboutDialog);
                    this.c.AboutDialog = n2 - 1;
                }
                if (this.d.AboutDialog > n7) {
                    this.b.g("Invalid mouse target " + this.c.AboutDialog + "," + this.d.AboutDialog + " set to " + this.c.AboutDialog + "," + (n7 - 1));
                    this.d.AboutDialog = n7 - 1;
                }
            }
        }
        int n8 = this.c.AboutDialog(n3);
        int n9 = this.d.AboutDialog(n4);
        this.f = new Point();
        this.b.b(this.f);
        while (this.f.xHandler != n8 || this.f.yHandler != n9) {
            this.b.AboutDialog(n8, n9);
            this.b.AboutDialog(2L, "Wait for move to take effect");
            this.b.b(this.f);
        }
        n2 = this.c.b && this.d.b ? 0 : 1;
        return n2 != 0;
    }
}

