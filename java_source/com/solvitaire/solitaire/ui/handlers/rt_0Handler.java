/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rT
 */
public final class rt_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rt_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.d.m = 4;
        if (this.AboutDialog.d.uPanel) {
            this.AboutDialog.b(7, null);
            return;
        }
        this.AboutDialog.b(3, null);
    }
}

