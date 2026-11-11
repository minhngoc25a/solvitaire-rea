/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.w_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JRadioButton;

/*
 * Renamed from com.solvitaire.app.X
 */
final class x_0
implements ActionListener {
    private /* synthetic */ w_0 a;

    x_0(w_0 w_02) {
        this.a = w_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = this.a.g.getElements();
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
        this.a.a();
        this.a.b.g("GameChallenge set to " + n3 + " due to radiobutton click");
        switch (n3) {
            case 1: {
                this.a.b.l.c = 1;
                return;
            }
            case 2: {
                this.a.b.l.c = 2;
                this.a.m.setEnabled(true);
                return;
            }
            case 3: {
                this.a.b.l.c = 3;
                this.a.k.setEnabled(true);
                this.a.n.setEnabled(true);
                return;
            }
            case 4: {
                this.a.b.l.c = 4;
                this.a.p.setEnabled(true);
                this.a.o.setEnabled(true);
                return;
            }
            case 5: {
                this.a.b.l.c = 5;
                this.a.l.setEnabled(true);
                return;
            }
            case 6: {
                this.a.b.l.c = 6;
                this.a.e.setEnabled(true);
                this.a.d.setEnabled(true);
            }
        }
    }
}

