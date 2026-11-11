/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.MainWindow;
import javax.swing.JPanel;

final class shPanel
extends JPanel {
    private int AboutDialog;
    private /* synthetic */ MainWindow b;

    shPanel(MainWindow qb_02) {
        this.b = qb_02;
    }

    @Override
    public final void doLayout() {
        int n2 = (int)((double)this.getWidth() * 0.48);
        if (n2 != this.AboutDialog) {
            this.AboutDialog = n2;
            this.b.b(n2);
        }
        super.doLayout();
    }
}

