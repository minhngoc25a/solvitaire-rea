/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import javax.swing.JOptionPane;
import org.knowm.xchart.internal.chartpart.MyToolTip;
import org.knowm.xchart.internal.chartpart.MyToolTips;
import org.knowm.xchart.internal.chartpart.o;

final class p
implements MouseListener {
    private /* synthetic */ o a;
    private final /* synthetic */ MyToolTip b;

    p(o o2, MyToolTip myToolTip) {
        this.a = o2;
        this.b = myToolTip;
    }

    @Override
    public final void mouseReleased(MouseEvent mouseEvent) {
        int n2 = JOptionPane.showOptionDialog(null, "\n\nOK to delete this statistic?\n\n", "Delete statistic", 0, 2, null, MyToolTips.c, MyToolTips.c[0]);
        if (n2 == 0) {
            o.a((o)this.a).a.c(this.b.a, this.b.a);
        }
    }

    @Override
    public final void mousePressed(MouseEvent mouseEvent) {
    }

    @Override
    public final void mouseExited(MouseEvent mouseEvent) {
    }

    @Override
    public final void mouseEntered(MouseEvent mouseEvent) {
    }

    @Override
    public final void mouseClicked(MouseEvent mouseEvent) {
    }
}

