/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import javax.swing.JMenuItem;
import javax.swing.JPopupMenu;
import org.knowm.xchart.XChartPanel;
import org.knowm.xchart.XYChart;
import org.knowm.xchart.i;
import org.knowm.xchart.j;
import org.knowm.xchart.k;

final class h
extends JPopupMenu {
    private JMenuItem b;
    private JMenuItem c;
    private JMenuItem d;
    final /* synthetic */ XChartPanel a;

    public h(XChartPanel xChartPanel) {
        this.a = xChartPanel;
        this.b = new JMenuItem(XChartPanel.e(xChartPanel));
        this.b.addMouseListener(new i(this, xChartPanel));
        h h2 = this;
        h2.add(h2.b);
        this.c = new JMenuItem(XChartPanel.f(xChartPanel));
        this.c.addMouseListener(new j(this, xChartPanel));
        h h3 = this;
        h3.add(h3.c);
        if (XChartPanel.g(xChartPanel) instanceof XYChart) {
            this.d = new JMenuItem(XChartPanel.h(xChartPanel));
            this.d.addMouseListener(new k(this, xChartPanel));
            h h4 = this;
            h4.add(h4.d);
        }
    }
}

