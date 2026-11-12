/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.geom.Rectangle2D;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.PlotContent_;
import org.knowm.xchart.internal.chartpart.PlotSurface_AxesChart;

public class Plot_
implements ChartPart {
    final Chart a;
    public Rectangle2D c;
    public PlotSurface_AxesChart d;
    public PlotContent_ e;

    Plot_(Chart chart) {
        this.a = chart;
    }

    @Override
    public void a(Graphics2D graphics2D) {
        this.d.a(graphics2D);
        if (this.a.o().isEmpty()) {
            return;
        }
        this.e.a(graphics2D);
    }
}

