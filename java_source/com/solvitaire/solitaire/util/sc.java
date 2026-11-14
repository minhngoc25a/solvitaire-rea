/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.ui.handlers.sdHandler;
import com.solvitaire.solitaire.util.se;
import java.util.Enumeration;
import java.util.Properties;
import javax.swing.AbstractButton;
import javax.swing.ButtonGroup;

public final class sc
extends ButtonGroup {
    public sdHandler AboutDialog;
    public String b;
    public int c;
    private /* synthetic */ MainWindow d;

    sc(MainWindow qb_02, String string, int n2) {
        this.d = qb_02;
        this.b = string;
        this.c = n2;
        this.AboutDialog = new sdHandler(this);
    }

    final int AboutDialog(String string) {
        Properties properties = this.d.cn;
        synchronized (properties) {
            string = this.d.cn.getProperty(this.b, string);
            if (this.d.d.d <= 4) {
                this.d.d.g("Read property " + this.b + " as " + string);
            }
            int n2 = Integer.parseInt(string);
            this.AboutDialog(n2);
            return n2;
        }
    }

    final boolean AboutDialog() {
        Properties properties = this.d.cn;
        synchronized (properties) {
            String string = this.d.cn.getProperty(this.b, "0");
            if (this.d.d.d <= 4) {
                this.d.d.g("Read property " + this.b + " as " + string);
            }
            int n2 = Integer.parseInt(string);
            this.AboutDialog(n2);
            return n2 == 1;
        }
    }

    private void AboutDialog(int n2) {
        Enumeration<AbstractButton> enumeration = this.getElements();
        while (enumeration.hasMoreElements()) {
            se se2 = (se)enumeration.nextElement();
            if (n2 != se2.AboutDialog) continue;
            se2.setSelected(true);
        }
    }

    static /* synthetic */ MainWindow AboutDialog(sc sc2) {
        return sc2.d;
    }
}

