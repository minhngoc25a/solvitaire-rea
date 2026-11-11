/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rU
 */
final class ru_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    ru_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = "https://solvitaire.com/solvitaire/order.jsp";
        String string = "?" + this.a.d.av.a();
        this.a.d.j((String)object + string);
    }
}

