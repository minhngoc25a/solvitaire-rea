/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import java.awt.event.ActionEvent;
import javax.swing.AbstractAction;

final class pNHandler
extends AbstractAction {
    private /* synthetic */ pLPanel AboutDialog;

    pNHandler(pLPanel pL2) {
        this.AboutDialog = pL2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.i();
    }
}

