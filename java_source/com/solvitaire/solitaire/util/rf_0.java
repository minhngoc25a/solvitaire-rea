/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ComponentAdapter;
import java.awt.event.ComponentEvent;

/*
 * Renamed from com.solvitaire.app.rF
 */
final class rf_0
extends ComponentAdapter {
    private /* synthetic */ MainWindow AboutDialog;

    rf_0(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void componentShown(ComponentEvent componentEvent) {
        if (this.AboutDialog.d.d <= 5) {
            this.AboutDialog.d.g("componentShown triggered for status window frame");
        }
        this.AboutDialog.b();
    }

    @Override
    public final void componentMoved(ComponentEvent componentEvent) {
        if (this.AboutDialog.d.d <= 5) {
            this.AboutDialog.d.g("componentMoved triggered for status window frame");
        }
        this.AboutDialog.b();
    }

    @Override
    public final void componentResized(ComponentEvent componentEvent) {
        if (this.AboutDialog.d.d <= 5) {
            this.AboutDialog.d.g("componentResized triggered for status window frame");
        }
        this.AboutDialog.b();
    }
}

