/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.si;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class sk
implements ActionListener {
    private /* synthetic */ si a;

    sk(si si2) {
        this.a = si2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        int n2 = this.a.c();
        if (n2 >= 0) {
            this.a.e = n2;
        }
        this.a.c.setSelectionInterval(0, this.a.c.getModel().getSize() - 1);
    }
}

