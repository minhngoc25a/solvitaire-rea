/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

final class ru
extends WindowAdapter {
    private /* synthetic */ MainWindow AboutDialog;

    ru(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void windowGainedFocus(WindowEvent windowEvent) {
        if (this.AboutDialog.d.uPanel && this.AboutDialog.d.br != null && this.AboutDialog.d.br.j != null) {
            this.AboutDialog.d.br.j.AboutDialog(this.AboutDialog.d, true);
        }
    }

    @Override
    public final void windowLostFocus(WindowEvent windowEvent) {
        if (this.AboutDialog.d.uPanel && this.AboutDialog.d.br != null && this.AboutDialog.d.br.j != null) {
            this.AboutDialog.d.br.j.AboutDialog(this.AboutDialog.d, false);
        }
    }
}

