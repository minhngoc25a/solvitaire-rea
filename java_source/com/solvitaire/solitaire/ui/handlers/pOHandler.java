/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class pOHandler
implements ActionListener {
    private /* synthetic */ pLPanel AboutDialog;
    private final /* synthetic */ SolitaireGameEngine b;

    pOHandler(pLPanel pL2, SolitaireGameEngine qo_02) {
        this.AboutDialog = pL2;
        this.b = qo_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.b.m = 0;
        this.b.aq.b(2, null);
    }
}

