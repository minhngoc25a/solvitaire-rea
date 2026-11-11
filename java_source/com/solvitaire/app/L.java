/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class L
implements ActionListener {
    private /* synthetic */ g_0 a;

    L(g_0 g_02) {
        this.a = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.a.bi = this.a.r.isSelected();
        this.a.a.g("modeRemembered now set to " + this.a.a.bi);
        this.a.a.aq.a("modeRemembered", this.a.a.bi);
        this.a.a.aq.t();
    }
}

