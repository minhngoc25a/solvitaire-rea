/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import java.awt.event.FocusAdapter;
import java.awt.event.FocusEvent;

final class pS
extends FocusAdapter {
    private /* synthetic */ pLPanel AboutDialog;
    private final /* synthetic */ SolitaireGameEngine b;

    pS(pLPanel pL2, SolitaireGameEngine qo_02) {
        this.AboutDialog = pL2;
        this.b = qo_02;
    }

    @Override
    public final void focusGained(FocusEvent focusEvent) {
        if (this.b.d <= 5) {
            this.b.g("Cardpanel gained focus");
        }
        this.AboutDialog.z.AboutDialog(true);
    }

    @Override
    public final void focusLost(FocusEvent focusEvent) {
        if (this.b.d <= 5) {
            this.b.g("Cardpanel lost focus");
        }
        this.AboutDialog.z.AboutDialog(false);
    }
}

