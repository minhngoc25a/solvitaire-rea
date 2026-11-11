/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JCheckBoxMenuItem;

/*
 * Renamed from com.solvitaire.app.rH
 */
final class rh_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rh_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        JCheckBoxMenuItem jCheckBoxMenuItem = this.a.p;
        String string = "hideMoves";
        object = this.a;
        this.a.d.aH = ((qb_0)object).a(string, jCheckBoxMenuItem, false);
        if (this.a.e != null) {
            this.a.e.a();
        }
    }
}

