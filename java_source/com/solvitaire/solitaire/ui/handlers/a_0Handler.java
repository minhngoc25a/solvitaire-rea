/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.uPanel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.A
 */
final class a_0Handler
implements ActionListener {
    private /* synthetic */ uPanel AboutDialog;

    a_0Handler(uPanel u2) {
        this.AboutDialog = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.AboutDialog(!this.AboutDialog.b.yHandler, false);
        this.AboutDialog.d.repaint();
    }
}

