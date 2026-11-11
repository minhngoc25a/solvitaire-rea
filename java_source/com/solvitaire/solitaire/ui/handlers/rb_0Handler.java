/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rB
 */
final class rb_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rb_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        if (this.AboutDialog.d.uPanel) {
            this.AboutDialog.d.ar.i();
            return;
        }
        this.AboutDialog.d.FPanel.l();
    }
}

