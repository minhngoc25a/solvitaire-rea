/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import org.knowm.xchart.XChartPanel;
import org.knowm.xchart.h;

final class k
implements MouseListener {
    private /* synthetic */ XChartPanel a;
    private /* synthetic */ h b;

    k(h h2, XChartPanel xChartPanel) {
        this.b = h2;
        this.a = xChartPanel;
    }

    @Override
    public final void mouseReleased(MouseEvent mouseEvent) {
        XChartPanel.c(this.b.a);
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

