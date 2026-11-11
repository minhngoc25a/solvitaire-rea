/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pX;
import com.solvitaire.app.pY;
import com.solvitaire.app.s_0;
import com.solvitaire.app.u;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class x
implements ActionListener {
    private /* synthetic */ u a;

    x(u u2) {
        this.a = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        String string = ((ActionEvent)object).getActionCommand();
        object = string;
        object = string;
        int n2 = -1;
        switch (string.hashCode()) {
            case 60: {
                if (((String)object).equals("<")) {
                    n2 = 1;
                }
                break;
            }
            case 62: {
                if (((String)object).equals(">")) {
                    n2 = 2;
                }
                break;
            }
            case 94: {
                if (((String)object).equals("^")) {
                    n2 = 3;
                }
                break;
            }
            case 118: {
                if (((String)object).equals("v")) {
                    n2 = 4;
                }
                break;
            }
        }
        switch (n2) {
            case 3: {
                --this.a.f;
                break;
            }
            case 4: {
                ++this.a.f;
                break;
            }
            case 1: {
                --this.a.e;
                break;
            }
            case 2: {
                ++this.a.e;
            }
        }
        int n3 = this.a.d.i;
        if (n3 < 0) {
            n3 = 0;
        }
        pX pX2 = this.a.c;
        pX2.getClass();
        this.a.g = new pY(pX2);
        this.a.g.e = this.a.d.j;
        s_0 s_02 = this.a.a.bu.b.b[n3];
        this.a.c.a(this.a.g, this.a.d.a.a(), 0, 0, n3, this.a.c.y.height, s_02.l + this.a.e, s_02.m + this.a.f);
        this.a.h = this.a.g.b[n3];
        this.a.b();
        this.a.d.repaint();
    }
}

