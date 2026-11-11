/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.event.ComponentAdapter;
import java.awt.event.ComponentEvent;
import org.knowm.xchart.XChartPanel;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ToolTips;

final class a
extends ComponentAdapter {
    private /* synthetic */ Chart a;
    private /* synthetic */ XChartPanel b;

    a(XChartPanel xChartPanel, Chart chart) {
        this.b = xChartPanel;
        this.a = chart;
    }

    @Override
    public final void componentResized(ComponentEvent componentEvent) {
        if (this.a.b().aK()) {
            this.b.removeMouseListener(XChartPanel.a(this.b));
            XChartPanel.a(this.b, new ToolTips(this.a));
            this.b.addMouseMotionListener(XChartPanel.a(this.b));
        }
    }
}

