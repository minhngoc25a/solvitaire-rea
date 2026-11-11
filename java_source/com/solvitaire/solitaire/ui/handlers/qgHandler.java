/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.qbFrame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public final class qgHandler
implements ActionListener {
    private /* synthetic */ qbFrame AboutDialog;

    qgHandler(qbFrame qb2) {
        this.AboutDialog = qb2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.AboutDialog();
    }
}

