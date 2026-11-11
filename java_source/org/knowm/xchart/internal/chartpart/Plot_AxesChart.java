/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RectangularShape;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.PlotSurface_AxesChart;
import org.knowm.xchart.internal.chartpart.Plot_;

public class Plot_AxesChart
extends Plot_ {
    Plot_AxesChart(Chart chart) {
        super(chart);
        this.d = new PlotSurface_AxesChart(chart);
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        Rectangle2D.Double double_ = this.a.l().c();
        Rectangle2D rectangle2D = this.a.j().h();
        double d2 = rectangle2D.getX();
        double d3 = ((RectangularShape)double_).getY();
        double d4 = rectangle2D.getWidth();
        double d5 = ((RectangularShape)double_).getHeight();
        this.c = new Rectangle2D.Double(d2, d3, d4, d5);
        super.a(graphics2D);
    }
}

