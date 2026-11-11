/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.Color;
import java.awt.Component;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Insets;
import javax.swing.JPanel;

final class sf
extends JPanel {
    private Component c;
    private int d;
    private int e;
    private int f;
    private int g;
    int a;
    int b;
    private /* synthetic */ qb_0 h;

    sf(qb_0 qb_02, Component component, int n2) {
        this.h = qb_02;
        this.d = n2;
        this.c = component;
    }

    final void a(int n2, int n3, int n4) {
        this.e = n2;
        this.f = n3;
        this.g = n4;
    }

    @Override
    public final void paintComponent(Graphics graphics) {
        super.paintComponent(graphics);
        graphics = (Graphics2D)graphics;
        Dimension dimension = this.getSize();
        Insets insets = this.getInsets();
        int n2 = dimension.width - insets.left - insets.right;
        int n3 = dimension.height - insets.top - insets.bottom;
        int n4 = 0;
        switch (this.d) {
            case 1: 
            case 2: {
                graphics.setColor(qb_0.W);
                graphics.fillRect(insets.left, insets.top, this.e, n3);
                n4 = this.e;
                break;
            }
            case 4: {
                graphics.setColor(qb_0.W);
                graphics.fillRect(insets.left, insets.top, this.e, n3);
                if (this.f > this.e) {
                    graphics.setColor(Color.ORANGE);
                    graphics.fillRect(insets.left + this.e, insets.top, this.f - this.e, n3);
                    graphics.setColor(Color.BLACK);
                    graphics.fillRect(insets.left + this.f, insets.top, 2, n3);
                    n4 = this.f + 2;
                    break;
                }
                int n5 = this.e - this.f;
                graphics.setColor(Color.BLACK);
                graphics.fillRect(insets.left + this.e, insets.top, 2, n3);
                n4 = this.e + 2;
                if ((n5 -= 2) <= 0) break;
                graphics.setColor(qb_0.W);
                graphics.fillRect(insets.left + this.e + 2, insets.top, n5, n3);
                n4 += n5;
                break;
            }
            case 3: {
                graphics.setColor(qb_0.W);
                graphics.fillRect(insets.left, insets.top, this.g, n3);
                if (this.e > this.f) {
                    graphics.setColor(qb_0.b);
                    graphics.fillRect(insets.left + this.g, insets.top, this.f - this.g, n3);
                    graphics.setColor(qb_0.a);
                    graphics.fillRect(insets.left + this.f, insets.top, this.e - this.f, n3);
                    graphics.setColor(Color.BLACK);
                    graphics.fillRect(insets.left + this.e, insets.top, 2, n3);
                    n4 = this.e + 2;
                    break;
                }
                int n6 = this.e - this.g;
                graphics.setColor(qb_0.b);
                graphics.fillRect(insets.left + this.g, insets.top, n6, n3);
                graphics.setColor(Color.BLACK);
                graphics.fillRect(insets.left + this.e, insets.top, 2, n3);
                n4 = this.e + 2;
                n6 = this.f - (this.e + 2);
                if (n6 <= 0) break;
                graphics.setColor(qb_0.b);
                graphics.fillRect(insets.left + this.e + 2, insets.top, n6, n3);
                n4 += n6;
            }
        }
        graphics.setColor(this.c.getBackground());
        graphics.fillRect(insets.left + n4, insets.top, n2 - n4, n3);
    }
}

