/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import org.knowm.xchart.XChartPanel;
import org.knowm.xchart.h;

final class d
extends MouseAdapter {
    private /* synthetic */ XChartPanel a;

    private d(XChartPanel xChartPanel) {
        this.a = xChartPanel;
    }

    @Override
    public final void mousePressed(MouseEvent mouseEvent) {
        if (mouseEvent.isPopupTrigger()) {
            this.a(mouseEvent);
        }
    }

    @Override
    public final void mouseReleased(MouseEvent mouseEvent) {
        if (mouseEvent.isPopupTrigger()) {
            this.a(mouseEvent);
        }
    }

    private void a(MouseEvent mouseEvent) {
        h h2 = new h(this.a);
        h2.show(mouseEvent.getComponent(), mouseEvent.getX(), mouseEvent.getY());
        h2.getGraphics().dispose();
    }

    /* synthetic */ d(XChartPanel xChartPanel, byte by2) {
        this(xChartPanel);
    }
}

