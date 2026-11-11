/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class qd
implements ActionListener {
    private /* synthetic */ qb a;

    qd(qb qb2) {
        this.a = qb2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.d();
    }
}

