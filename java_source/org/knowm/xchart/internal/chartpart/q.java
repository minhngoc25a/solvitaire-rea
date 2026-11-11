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

final class q
implements MouseListener {
    private /* synthetic */ o a;
    private final /* synthetic */ MyToolTip b;

    q(o o2, MyToolTip myToolTip) {
        this.a = o2;
        this.b = myToolTip;
    }

    @Override
    public final void mouseReleased(MouseEvent mouseEvent) {
        int n2 = JOptionPane.showOptionDialog(null, "\n\nOK to delete this and all earlier statistics?\n\n", "Delete statistics", 0, 2, null, MyToolTips.c, MyToolTips.c[0]);
        if (n2 == 0) {
            o.a((o)this.a).a.c(-1, this.b.a);
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

