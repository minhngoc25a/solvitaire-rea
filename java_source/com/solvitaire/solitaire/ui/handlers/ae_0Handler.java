/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.w_0Frame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.ae
 */
public final class ae_0Handler
implements ActionListener {
    private /* synthetic */ w_0Frame AboutDialog;

    ae_0Handler(w_0Frame w_02) {
        this.AboutDialog = w_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.b();
    }
}

