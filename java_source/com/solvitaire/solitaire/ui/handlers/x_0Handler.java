/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.w_0Frame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JRadioButton;

/*
 * Renamed from com.solvitaire.app.X
 */
final class x_0Handler
implements ActionListener {
    private /* synthetic */ w_0Frame AboutDialog;

    x_0Handler(w_0Frame w_02) {
        this.AboutDialog = w_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = this.AboutDialog.g.getElements();
        int n2 = 1;
        int n3 = 0;
        while (object.hasMoreElements()) {
            JRadioButton jRadioButton = (JRadioButton)object.nextElement();
            if (jRadioButton.isSelected()) {
                n3 = n2;
                break;
            }
            ++n2;
        }
        this.AboutDialog.AboutDialog();
        this.AboutDialog.b.g("GameChallenge set to " + n3 + " due to radiobutton click");
        switch (n3) {
            case 1: {
                this.AboutDialog.b.l.c = 1;
                return;
            }
            case 2: {
                this.AboutDialog.b.l.c = 2;
                this.AboutDialog.m.setEnabled(true);
                return;
            }
            case 3: {
                this.AboutDialog.b.l.c = 3;
                this.AboutDialog.k.setEnabled(true);
                this.AboutDialog.n.setEnabled(true);
                return;
            }
            case 4: {
                this.AboutDialog.b.l.c = 4;
                this.AboutDialog.p.setEnabled(true);
                this.AboutDialog.o.setEnabled(true);
                return;
            }
            case 5: {
                this.AboutDialog.b.l.c = 5;
                this.AboutDialog.l.setEnabled(true);
                return;
            }
            case 6: {
                this.AboutDialog.b.l.c = 6;
                this.AboutDialog.e.setEnabled(true);
                this.AboutDialog.d.setEnabled(true);
            }
        }
    }
}

