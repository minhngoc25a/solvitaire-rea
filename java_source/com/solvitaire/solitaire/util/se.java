/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.util.sc;
import javax.swing.JRadioButtonMenuItem;

public final class se
extends JRadioButtonMenuItem {
    int AboutDialog;
    private /* synthetic */ MainWindow b;

    se(MainWindow qb_02, sc sc2, int n2, String string) {
        this.b = qb_02;
        super(string);
        sc2.add(this);
        this.addActionListener(sc2.AboutDialog);
        this.AboutDialog = n2;
    }
}

