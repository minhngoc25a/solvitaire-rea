/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import com.solvitaire.app.sc;
import javax.swing.JRadioButtonMenuItem;

final class se
extends JRadioButtonMenuItem {
    int a;
    private /* synthetic */ qb_0 b;

    se(qb_0 qb_02, sc sc2, int n2, String string) {
        this.b = qb_02;
        super(string);
        sc2.add(this);
        this.addActionListener(sc2.a);
        this.a = n2;
    }
}

