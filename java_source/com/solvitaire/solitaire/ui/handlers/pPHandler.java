/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class pPHandler
implements ActionListener {
    private /* synthetic */ pLPanel AboutDialog;
    private final /* synthetic */ SolitaireGameEngine b;

    pPHandler(pLPanel pL2, SolitaireGameEngine qo_02) {
        this.AboutDialog = pL2;
        this.b = qo_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.B = 0;
        this.AboutDialog.CHandler = false;
        this.AboutDialog.DHandler = true;
        this.b.aO = false;
    }
}

