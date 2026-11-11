/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.Color;
import java.awt.Dimension;
import javax.swing.BorderFactory;
import javax.swing.JPanel;

final class saPanel
extends JPanel {
    private int AboutDialog;
    private /* synthetic */ MainWindow b;

    saPanel(MainWindow qb_02, int n2, int n3) {
        this.b = qb_02;
        this.setMaximumSize(new Dimension(n2, n3));
        this.setPreferredSize(new Dimension(n2, n3));
        this.setOpaque(false);
    }

    final void AboutDialog(int n2, boolean bl2) {
        if (bl2) {
            n2 = 0;
        }
        if (n2 == this.AboutDialog) {
            return;
        }
        switch (n2) {
            case 0: {
                this.setBorder(BorderFactory.createEmptyBorder());
                this.setOpaque(false);
                break;
            }
            case 2: {
                this.setOpaque(true);
                this.setBackground(MainWindow.b);
                this.setBorder(BorderFactory.createBevelBorder(1));
                break;
            }
            case 3: {
                this.setOpaque(true);
                this.setBackground(MainWindow.AboutDialog);
                this.setBorder(BorderFactory.createBevelBorder(1));
                break;
            }
            case 4: {
                this.setOpaque(true);
                this.setBackground(MainWindow.c);
                this.setBorder(BorderFactory.createBevelBorder(1));
                break;
            }
            case 1: {
                this.setOpaque(true);
                this.setBackground(Color.LIGHT_GRAY);
                this.setBorder(BorderFactory.createBevelBorder(1));
            }
        }
        this.AboutDialog = n2;
    }
}

