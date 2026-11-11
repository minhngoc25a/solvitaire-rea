/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.k_0Panel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.n
 */
final class n_0Handler
implements ActionListener {
    private /* synthetic */ k_0Panel AboutDialog;

    n_0Handler(k_0Panel k_02) {
        this.AboutDialog = k_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.b.g("BoardDialog got input event");
        this.AboutDialog.b.FPanel.xHandler = true;
        this.AboutDialog.b.aO = false;
        this.AboutDialog.AboutDialog.dispose();
    }
}

