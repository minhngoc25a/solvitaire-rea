/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.k_0Panel;
import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.qT
 */
final class qt_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    qt_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        if (this.AboutDialog.d.FPanel.rPanel == null) {
            return;
        }
        this.AboutDialog.d.aD.AboutDialog();
        this.AboutDialog.d.FPanel.f();
        new k_0Panel(this.AboutDialog.d, this.AboutDialog.d.FPanel.q, "Board snapshot");
    }
}

