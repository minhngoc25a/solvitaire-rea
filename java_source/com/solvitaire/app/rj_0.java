/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JCheckBoxMenuItem;

/*
 * Renamed from com.solvitaire.app.rJ
 */
final class rj_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rj_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        JCheckBoxMenuItem jCheckBoxMenuItem = this.a.m;
        String string = "useSingleClick";
        object = this.a;
        this.a.d.g = ((qb_0)object).a(string, jCheckBoxMenuItem, false);
    }
}

