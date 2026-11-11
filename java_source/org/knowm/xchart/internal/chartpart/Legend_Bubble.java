/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.geom.Ellipse2D;
import java.util.Map;
import org.knowm.xchart.internal.chartpart.Legend_;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.AxesChartSeries;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.Styler$LegendLayout;

public class Legend_Bubble
extends Legend_ {
    private final AxesChartStyler e;

    @Override
    public final void b(Graphics2D graphics2D) {
        double d2 = this.c + (double)((AxesChartStyler)this.a.b()).aw();
        double d3 = this.d + (double)((AxesChartStyler)this.a.b()).aw();
        Object object = graphics2D.getRenderingHint(RenderingHints.KEY_ANTIALIASING);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        Map map = this.a.o();
        for (AxesChartSeries axesChartSeries : map.values()) {
            if (!axesChartSeries.v() || !axesChartSeries.w()) continue;
            Map map2 = this.b(axesChartSeries);
            float f2 = Legend_Bubble.a(map2, 20);
            Ellipse2D.Double double_ = new Ellipse2D.Double(d2, d3, 20.0, 20.0);
            graphics2D.setColor(axesChartSeries.t());
            graphics2D.fill(double_);
            graphics2D.setStroke(axesChartSeries.b_());
            graphics2D.setColor(axesChartSeries.c_());
            graphics2D.draw(double_);
            double d4 = d2 + 20.0 + (double)((AxesChartStyler)this.a.b()).aw();
            this.a(graphics2D, map2, 20, d4, d3);
            if (((AxesChartStyler)this.a.b()).az() == Styler$LegendLayout.a) {
                d3 += (double)(f2 + (float)((AxesChartStyler)this.a.b()).aw());
                continue;
            }
            int n2 = 20;
            if (axesChartSeries.a() == RenderableSeries$LegendRenderType.a) {
                n2 = ((AxesChartStyler)this.a.b()).ax();
            }
            float f3 = this.b(map2, n2);
            d2 += (double)(f3 + (float)((AxesChartStyler)this.a.b()).aw());
        }
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, object);
    }

    @Override
    public final /* synthetic */ double a(Series object) {
        AxesChartSeries axesChartSeries = (AxesChartSeries)object;
        object = this;
        if (axesChartSeries.a() == RenderableSeries$LegendRenderType.c) {
            return 20.0;
        }
        AxesChartStyler cfr_ignored_0 = ((Legend_Bubble)object).e;
        throw new NullPointerException();
    }
}

