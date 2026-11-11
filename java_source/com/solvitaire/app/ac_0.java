/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.w_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.ac
 */
final class ac_0
implements ActionListener {
    private /* synthetic */ w_0 a;

    ac_0(w_0 w_02) {
        this.a = w_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        int n2 = this.a.i.getSelectedIndex();
        this.a.a(n2 + 1, false);
    }
}

