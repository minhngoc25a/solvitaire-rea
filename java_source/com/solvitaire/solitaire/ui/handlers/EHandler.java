/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.FPanel;
import com.solvitaire.solitaire.ui.panels.uPanel;
import com.solvitaire.solitaire.util.u_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class EHandler
implements ActionListener {
    private /* synthetic */ uPanel AboutDialog;

    EHandler(uPanel u2) {
        this.AboutDialog = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent serializable) {
        if (this.AboutDialog.AboutDialog("", "Are you sure")) {
            this.AboutDialog.c.p = new byte[52][][];
            serializable = this.AboutDialog.d;
            this.AboutDialog.d.i = -1;
            ((FPanel)serializable).e = new u_0();
            ((FPanel)serializable).h = new u_0();
            ((FPanel)serializable).f = new u_0();
            ((FPanel)serializable).g = new u_0();
            ((FPanel)serializable).AboutDialog();
        }
        this.AboutDialog.b();
    }
}

