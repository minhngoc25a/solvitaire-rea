/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.panels.uPanel;
import com.solvitaire.solitaire.util.u_0;
import java.awt.Point;
import java.awt.event.InputEvent;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

final class z
extends MouseAdapter {
    private /* synthetic */ uPanel AboutDialog;

    z(uPanel u2) {
        this.AboutDialog = u2;
    }

    @Override
    public final void mouseClicked(MouseEvent object) {
        if (((MouseEvent)object).getButton() == 1 || ((MouseEvent)object).getButton() == 2 || ((MouseEvent)object).getButton() == 3) {
            Point point = ((MouseEvent)object).getPoint();
            ((MouseEvent)object).getPoint().xHandler = point.xHandler / this.AboutDialog.i;
            point.yHandler /= this.AboutDialog.i;
            int n2 = 255;
            int n3 = -1;
            int n4 = -1;
            int n5 = -1;
            if (((MouseEvent)object).getButton() == 1 && !((InputEvent)object).isShiftDown()) {
                if (this.AboutDialog.AboutDialog.FPanel.yHandler) {
                    if (this.AboutDialog.h != null) {
                        n5 = point.yHandler - this.AboutDialog.c.c.yHandler - this.AboutDialog.h.m + this.AboutDialog.h.n;
                        n4 = point.xHandler - this.AboutDialog.c.c.xHandler - this.AboutDialog.h.l;
                        n2 = this.AboutDialog.c.q[this.AboutDialog.h.AboutDialog][n5][n4];
                        int n6 = n2 >> 24;
                        if (n6 > -4) {
                            --n6;
                        }
                        int[] nArray = this.AboutDialog.c.q[this.AboutDialog.h.AboutDialog][n5];
                        int n7 = n4;
                        nArray[n7] = nArray[n7] & (n6 << 24 | 0xFFFFFF);
                        this.AboutDialog.c.AboutDialog();
                    } else {
                        this.AboutDialog.AboutDialog("Match must be found in order to change the sensitivity");
                    }
                } else {
                    object = new u_0(this.AboutDialog.d.b.getRGB(point.xHandler, point.yHandler));
                    ((u_0)object).b(this.AboutDialog.d.e, this.AboutDialog.d.f);
                }
            } else if (((MouseEvent)object).getButton() == 1 || ((MouseEvent)object).getButton() == 2) {
                object = new u_0(this.AboutDialog.d.b.getRGB(point.xHandler, point.yHandler));
                if (this.AboutDialog.h != null) {
                    n4 = point.xHandler - this.AboutDialog.c.c.xHandler - this.AboutDialog.h.l;
                    n5 = point.yHandler - this.AboutDialog.c.c.yHandler - this.AboutDialog.h.m + this.AboutDialog.h.n;
                    n2 = this.AboutDialog.d.c[n5][n4];
                    if (this.AboutDialog.h.i != null) {
                        n3 = this.AboutDialog.h.i[n5][n4];
                    }
                }
                this.AboutDialog.AboutDialog.aq.c("", String.format("Pixel is %d, %d, %d\nLocation %d,%d\nMask is %02x\nMatch is %d", ((u_0)object).AboutDialog, ((u_0)object).b, ((u_0)object).c, n4, n5, n2, n3));
            } else if (((MouseEvent)object).getButton() == 3) {
                if (this.AboutDialog.AboutDialog.FPanel.yHandler) {
                    if (this.AboutDialog.h != null) {
                        n5 = point.yHandler - this.AboutDialog.c.c.yHandler - this.AboutDialog.h.m + this.AboutDialog.h.n;
                        n4 = point.xHandler - this.AboutDialog.c.c.xHandler - this.AboutDialog.h.l;
                        n2 = this.AboutDialog.c.q[this.AboutDialog.h.AboutDialog][n5][n4];
                        int n8 = n2 >> 24;
                        if (n8 < -1) {
                            int n9 = n8;
                            n8 = n9 - n9 / 2;
                        }
                        int[] nArray = this.AboutDialog.c.q[this.AboutDialog.h.AboutDialog][n5];
                        int n10 = n4;
                        nArray[n10] = nArray[n10] | n8 << 24;
                        this.AboutDialog.c.AboutDialog();
                    } else {
                        this.AboutDialog.AboutDialog("Match must be found in order to change the sensitivity");
                    }
                } else {
                    object = new u_0(this.AboutDialog.d.b.getRGB(point.xHandler, point.yHandler));
                    ((u_0)object).b(this.AboutDialog.d.h, this.AboutDialog.d.g);
                }
            }
            this.AboutDialog.d.repaint();
        }
    }
}

