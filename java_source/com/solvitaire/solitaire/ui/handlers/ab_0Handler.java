/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.w_0Frame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.ab
 */
final class ab_0Handler
implements ActionListener {
    private /* synthetic */ w_0Frame AboutDialog;

    ab_0Handler(w_0Frame w_02) {
        this.AboutDialog = w_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        int n2 = this.AboutDialog.i.getSelectedIndex();
        this.AboutDialog.AboutDialog(n2 + 1, false);
    }
}

