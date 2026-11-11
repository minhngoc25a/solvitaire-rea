/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.g;
import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public final class rj
extends WindowAdapter {
    private /* synthetic */ MainWindow AboutDialog;

    rj(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void windowClosing(WindowEvent windowEvent) {
        if (this.AboutDialog.d.d <= 5) {
            this.AboutDialog.d.g("Status window being closed");
        }
        this.AboutDialog.d.l();
        this.AboutDialog.d.AboutDialog(100L, "Shutdown1");
        this.AboutDialog.d.ai = true;
        this.AboutDialog.d.AboutDialog(250L, "Shutdown2");
        System.exit(0);
    }

    @Override
    public final void windowStateChanged(WindowEvent object) {
        if (this.AboutDialog.d.d <= 5) {
            this.AboutDialog.d.g("Window state changed");
        }
        if (this.AboutDialog.d.uPanel && this.AboutDialog.d.ar != null) {
            object = this.AboutDialog.d.ar;
            if (((g)object).k.d <= 5) {
                ((g)object).k.g("Into moveAndLayout");
            }
            ((pLPanel)object).ad.revalidate();
            ((pLPanel)object).ad.repaint();
        }
        if (this.AboutDialog.e != null) {
            this.AboutDialog.e.b();
        }
    }
}

