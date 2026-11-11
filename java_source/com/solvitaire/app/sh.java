/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import javax.swing.JPanel;

final class sh
extends JPanel {
    private int a;
    private /* synthetic */ qb_0 b;

    sh(qb_0 qb_02) {
        this.b = qb_02;
    }

    @Override
    public final void doLayout() {
        int n2 = (int)((double)this.getWidth() * 0.48);
        if (n2 != this.a) {
            this.a = n2;
            this.b.b(n2);
        }
        super.doLayout();
    }
}

