/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JCheckBoxMenuItem;

/*
 * Renamed from com.solvitaire.app.rH
 */
public final class rh_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rh_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        JCheckBoxMenuItem jCheckBoxMenuItem = this.AboutDialog.p;
        String string = "hideMoves";
        object = this.AboutDialog;
        this.AboutDialog.d.aH = ((MainWindow)object).AboutDialog(string, jCheckBoxMenuItem, false);
        if (this.AboutDialog.e != null) {
            this.AboutDialog.e.AboutDialog();
        }
    }
}

