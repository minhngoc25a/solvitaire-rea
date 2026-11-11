/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import java.awt.event.FocusAdapter;
import java.awt.event.FocusEvent;

public final class pM
extends FocusAdapter {
    private /* synthetic */ pLPanel AboutDialog;

    pM(pLPanel pL2) {
        this.AboutDialog = pL2;
    }

    @Override
    public final void focusGained(FocusEvent focusEvent) {
        if (this.AboutDialog.k.d <= 5) {
            this.AboutDialog.k.g("mainPanel gained focus");
        }
        this.AboutDialog.ae.AboutDialog(true);
    }

    @Override
    public final void focusLost(FocusEvent focusEvent) {
        if (this.AboutDialog.k.d <= 5) {
            this.AboutDialog.k.g("mainPanel lost focus");
        }
        this.AboutDialog.ae.AboutDialog(false);
    }
}

