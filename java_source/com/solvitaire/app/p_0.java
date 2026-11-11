/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.k_0;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Image;
import javax.swing.JPanel;

/*
 * Renamed from com.solvitaire.app.p
 */
public final class p_0
extends JPanel {
    Image a;
    int b;
    int c;
    private /* synthetic */ k_0 d;

    p_0(k_0 object, int n2, int n3) {
        this.d = object;
        this.b = n2;
        this.c = n3;
        object = new Dimension(n2, n3);
        this.setPreferredSize((Dimension)object);
        this.setMaximumSize((Dimension)object);
    }

    @Override
    public final void paintComponent(Graphics graphics) {
        super.paintComponent(graphics);
        graphics.drawImage(this.a, 0, 0, this.b, this.c, null);
    }
}

