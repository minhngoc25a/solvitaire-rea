/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JCheckBoxMenuItem;

/*
 * Renamed from com.solvitaire.app.rR
 */
public final class rr_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rr_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        JCheckBoxMenuItem jCheckBoxMenuItem = this.AboutDialog.s;
        String string = "reversedBoard";
        object = this.AboutDialog;
        this.AboutDialog.d.aX = ((MainWindow)object).AboutDialog(string, jCheckBoxMenuItem, false);
    }
}

