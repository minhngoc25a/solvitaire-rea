/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.ModeSelector;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.challenge.ChallengeSolver;
import com.solvitaire.solitaire.util.qy_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class OHandler
implements ActionListener {
    private /* synthetic */ ModeSelector AboutDialog;

    OHandler(ModeSelector g_02) {
        this.AboutDialog = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        boolean bl2 = this.AboutDialog.AboutDialog.aq.d("Clear Statistics", "Do you want to delete these statistics?");
        if (bl2) {
            ChallengeSolver qx_02 = this.AboutDialog.AboutDialog.br;
            SolitaireGameEngine cfr_ignored_0 = qx_02.AboutDialog;
            SolitaireGameEngine.h(qx_02.o);
            qx_02.o = "";
            qx_02.j = new qy_0(qx_02);
            qx_02.AboutDialog();
            qx_02.AboutDialog.aq.g();
        }
    }
}

