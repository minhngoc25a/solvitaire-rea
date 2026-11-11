/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class qf
implements ActionListener {
    private /* synthetic */ qb a;

    qf(qb qb2) {
        this.a = qb2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.a();
    }
}

