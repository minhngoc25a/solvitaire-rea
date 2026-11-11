/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.ah_0Panel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.ai
 */
final class ai_0Handler
implements ActionListener {
    private /* synthetic */ ah_0Panel AboutDialog;

    ai_0Handler(ah_0Panel ah_02) {
        this.AboutDialog = ah_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        if (this.AboutDialog.AboutDialog.isSelected()) {
            object = this.AboutDialog;
            ((ah_0Panel)object).b.f.setText("0");
            object = this.AboutDialog;
            ((ah_0Panel)object).b.f.setEnabled(true);
            return;
        }
        object = this.AboutDialog;
        ((ah_0Panel)object).b.f.setText("999");
        object = this.AboutDialog;
        ((ah_0Panel)object).b.f.setEnabled(false);
    }
}

