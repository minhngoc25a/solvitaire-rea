/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import com.solvitaire.app.sd;
import com.solvitaire.app.se;
import java.util.Enumeration;
import java.util.Properties;
import javax.swing.AbstractButton;
import javax.swing.ButtonGroup;

final class sc
extends ButtonGroup {
    sd a;
    String b;
    int c;
    private /* synthetic */ qb_0 d;

    sc(qb_0 qb_02, String string, int n2) {
        this.d = qb_02;
        this.b = string;
        this.c = n2;
        this.a = new sd(this);
    }

    final int a(String string) {
        Properties properties = this.d.cn;
        synchronized (properties) {
            string = this.d.cn.getProperty(this.b, string);
            if (this.d.d.d <= 4) {
                this.d.d.g("Read property " + this.b + " as " + string);
            }
            int n2 = Integer.parseInt(string);
            this.a(n2);
            return n2;
        }
    }

    final boolean a() {
        Properties properties = this.d.cn;
        synchronized (properties) {
            String string = this.d.cn.getProperty(this.b, "0");
            if (this.d.d.d <= 4) {
                this.d.d.g("Read property " + this.b + " as " + string);
            }
            int n2 = Integer.parseInt(string);
            this.a(n2);
            return n2 == 1;
        }
    }

    private void a(int n2) {
        Enumeration<AbstractButton> enumeration = this.getElements();
        while (enumeration.hasMoreElements()) {
            se se2 = (se)enumeration.nextElement();
            if (n2 != se2.a) continue;
            se2.setSelected(true);
        }
    }

    static /* synthetic */ qb_0 a(sc sc2) {
        return sc2.d;
    }
}

