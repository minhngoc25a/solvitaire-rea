/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.panels.k_0Panel;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Image;
import javax.swing.JPanel;

/*
 * Renamed from com.solvitaire.app.p
 */
public final class p_0Panel
extends JPanel {
    public Image AboutDialog;
    public int b;
    public int c;
    private /* synthetic */ k_0Panel d;

    p_0Panel(k_0Panel object, int n2, int n3) {
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
        graphics.drawImage(this.AboutDialog, 0, 0, this.b, this.c, null);
    }
}

