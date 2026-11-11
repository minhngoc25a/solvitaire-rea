/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rQ
 */
final class rq_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rq_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        if (this.AboutDialog.d.ar.ah) {
            this.AboutDialog.d.ar.ah = false;
            this.AboutDialog.J.setIcon(this.AboutDialog.NHandler);
        } else {
            this.AboutDialog.d.ar.ah = true;
            this.AboutDialog.J.setIcon(this.AboutDialog.OHandler);
        }
        this.AboutDialog.A.repaint();
    }
}

