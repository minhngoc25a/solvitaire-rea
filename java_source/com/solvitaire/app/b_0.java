/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.u;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.B
 */
final class b_0
implements ActionListener {
    private /* synthetic */ u a;

    b_0(u u2) {
        this.a = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.a(false, !this.a.b.z);
        this.a.d.repaint();
    }
}

