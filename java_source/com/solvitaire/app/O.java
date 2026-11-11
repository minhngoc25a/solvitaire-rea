/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qx_0;
import com.solvitaire.app.qy_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class O
implements ActionListener {
    private /* synthetic */ g_0 a;

    O(g_0 g_02) {
        this.a = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        boolean bl2 = this.a.a.aq.d("Clear Statistics", "Do you want to delete these statistics?");
        if (bl2) {
            qx_0 qx_02 = this.a.a.br;
            qo_0 cfr_ignored_0 = qx_02.a;
            qo_0.h(qx_02.o);
            qx_02.o = "";
            qx_02.j = new qy_0(qx_02);
            qx_02.a();
            qx_02.a.aq.g();
        }
    }
}

