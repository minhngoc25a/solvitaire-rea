/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JCheckBoxMenuItem;

/*
 * Renamed from com.solvitaire.app.rM
 */
final class rm_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rm_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        JCheckBoxMenuItem jCheckBoxMenuItem = this.a.u;
        String string = "noMouseDetection";
        object = this.a;
        this.a.d.aV = ((qb_0)object).a(string, jCheckBoxMenuItem, false);
    }
}

