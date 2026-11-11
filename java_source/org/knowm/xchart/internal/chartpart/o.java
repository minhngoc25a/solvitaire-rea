/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import javax.swing.JMenuItem;
import javax.swing.JPopupMenu;
import org.knowm.xchart.internal.chartpart.MyToolTip;
import org.knowm.xchart.internal.chartpart.MyToolTips;
import org.knowm.xchart.internal.chartpart.p;
import org.knowm.xchart.internal.chartpart.q;

final class o
extends JPopupMenu {
    private JMenuItem a = new JMenuItem("Delete this statistic");
    private JMenuItem b;
    private /* synthetic */ MyToolTips c;

    public o(MyToolTips myToolTips, MyToolTip myToolTip) {
        this.c = myToolTips;
        this.a.addMouseListener(new p(this, myToolTip));
        o o2 = this;
        o2.add(o2.a);
        this.b = new JMenuItem("Delete all earlier results");
        this.b.addMouseListener(new q(this, myToolTip));
        o o3 = this;
        o3.add(o3.b);
    }

    static /* synthetic */ MyToolTips a(o o2) {
        return o2.c;
    }
}

