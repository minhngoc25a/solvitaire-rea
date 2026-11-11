/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pL;
import java.awt.event.ActionEvent;
import javax.swing.AbstractAction;

final class pN
extends AbstractAction {
    private /* synthetic */ pL a;

    pN(pL pL2) {
        this.a = pL2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.i();
    }
}

