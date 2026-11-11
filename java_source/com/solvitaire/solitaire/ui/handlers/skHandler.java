/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.util.si;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class skHandler
implements ActionListener {
    private /* synthetic */ si AboutDialog;

    skHandler(si si2) {
        this.AboutDialog = si2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        int n2 = this.AboutDialog.c();
        if (n2 >= 0) {
            this.AboutDialog.e = n2;
        }
        this.AboutDialog.c.setSelectionInterval(0, this.AboutDialog.c.getModel().getSize() - 1);
    }
}

