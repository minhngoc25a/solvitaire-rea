/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rC
 */
final class rc_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rc_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.b(5, null);
    }
}

