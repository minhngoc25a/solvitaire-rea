/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JCheckBoxMenuItem;

/*
 * Renamed from com.solvitaire.app.rN
 */
final class rn_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rn_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        JCheckBoxMenuItem jCheckBoxMenuItem = this.a.v;
        String string = "testImages";
        object = this.a;
        this.a.d.w = ((qb_0)object).a(string, jCheckBoxMenuItem, false);
    }
}

