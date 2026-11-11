/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.u;
import com.solvitaire.app.u_0;
import java.awt.Point;
import java.awt.event.InputEvent;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

final class z
extends MouseAdapter {
    private /* synthetic */ u a;

    z(u u2) {
        this.a = u2;
    }

    @Override
    public final void mouseClicked(MouseEvent object) {
        if (((MouseEvent)object).getButton() == 1 || ((MouseEvent)object).getButton() == 2 || ((MouseEvent)object).getButton() == 3) {
            Point point = ((MouseEvent)object).getPoint();
            ((MouseEvent)object).getPoint().x = point.x / this.a.i;
            point.y /= this.a.i;
            int n2 = 255;
            int n3 = -1;
            int n4 = -1;
            int n5 = -1;
            if (((MouseEvent)object).getButton() == 1 && !((InputEvent)object).isShiftDown()) {
                if (this.a.a.F.y) {
                    if (this.a.h != null) {
                        n5 = point.y - this.a.c.c.y - this.a.h.m + this.a.h.n;
                        n4 = point.x - this.a.c.c.x - this.a.h.l;
                        n2 = this.a.c.q[this.a.h.a][n5][n4];
                        int n6 = n2 >> 24;
                        if (n6 > -4) {
                            --n6;
                        }
                        int[] nArray = this.a.c.q[this.a.h.a][n5];
                        int n7 = n4;
                        nArray[n7] = nArray[n7] & (n6 << 24 | 0xFFFFFF);
                        this.a.c.a();
                    } else {
                        this.a.a("Match must be found in order to change the sensitivity");
                    }
                } else {
                    object = new u_0(this.a.d.b.getRGB(point.x, point.y));
                    ((u_0)object).b(this.a.d.e, this.a.d.f);
                }
            } else if (((MouseEvent)object).getButton() == 1 || ((MouseEvent)object).getButton() == 2) {
                object = new u_0(this.a.d.b.getRGB(point.x, point.y));
                if (this.a.h != null) {
                    n4 = point.x - this.a.c.c.x - this.a.h.l;
                    n5 = point.y - this.a.c.c.y - this.a.h.m + this.a.h.n;
                    n2 = this.a.d.c[n5][n4];
                    if (this.a.h.i != null) {
                        n3 = this.a.h.i[n5][n4];
                    }
                }
                this.a.a.aq.c("", String.format("Pixel is %d, %d, %d\nLocation %d,%d\nMask is %02x\nMatch is %d", ((u_0)object).a, ((u_0)object).b, ((u_0)object).c, n4, n5, n2, n3));
            } else if (((MouseEvent)object).getButton() == 3) {
                if (this.a.a.F.y) {
                    if (this.a.h != null) {
                        n5 = point.y - this.a.c.c.y - this.a.h.m + this.a.h.n;
                        n4 = point.x - this.a.c.c.x - this.a.h.l;
                        n2 = this.a.c.q[this.a.h.a][n5][n4];
                        int n8 = n2 >> 24;
                        if (n8 < -1) {
                            int n9 = n8;
                            n8 = n9 - n9 / 2;
                        }
                        int[] nArray = this.a.c.q[this.a.h.a][n5];
                        int n10 = n4;
                        nArray[n10] = nArray[n10] | n8 << 24;
                        this.a.c.a();
                    } else {
                        this.a.a("Match must be found in order to change the sensitivity");
                    }
                } else {
                    object = new u_0(this.a.d.b.getRGB(point.x, point.y));
                    ((u_0)object).b(this.a.d.h, this.a.d.g);
                }
            }
            this.a.d.repaint();
        }
    }
}

