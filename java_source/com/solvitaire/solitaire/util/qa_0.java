/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.panels.qzPanel;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;

/*
 * Renamed from com.solvitaire.app.qA
 */
public final class qa_0
implements ChangeListener {
    private /* synthetic */ qzPanel AboutDialog;

    qa_0(qzPanel qz2) {
        this.AboutDialog = qz2;
    }

    @Override
    public final void stateChanged(ChangeEvent changeEvent) {
        int n2 = this.AboutDialog.b.getSelectedIndex();
        this.AboutDialog.AboutDialog.g("Tabbed pane index " + n2);
        switch (n2) {
            case 0: {
                this.AboutDialog.AboutDialog.br.AboutDialog("Easy");
                return;
            }
            case 1: {
                this.AboutDialog.AboutDialog.br.AboutDialog("Moderate");
                return;
            }
            case 2: {
                this.AboutDialog.AboutDialog.br.AboutDialog("Hard");
            }
        }
    }
}

