/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class rs
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rs(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent serializable) {
        serializable = this.a.cn;
        synchronized (serializable) {
            this.a.d.aq.cn.setProperty("modeChoice", "0");
            this.a.d.bg = 0;
            this.a.d.aq.t();
            this.a.d.c(14);
            return;
        }
    }
}

