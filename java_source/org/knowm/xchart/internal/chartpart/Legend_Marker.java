/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.BasicStroke;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.Shape;
import java.awt.Stroke;
import java.awt.geom.Line2D;
import java.awt.geom.Path2D;
import java.awt.geom.Rectangle2D;
import java.util.Map;
import org.knowm.xchart.CategoryChart;
import org.knowm.xchart.internal.chartpart.Legend_;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.MarkerSeries;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.style.Styler;
import org.knowm.xchart.style.Styler$LegendLayout;
import org.knowm.xchart.style.lines.SeriesLines;

public class Legend_Marker
extends Legend_ {
    private final Styler e;

    public Legend_Marker(CategoryChart categoryChart) {
        super(categoryChart);
        this.e = categoryChart.b();
    }

    @Override
    public final void b(Graphics2D graphics2D) {
        double d2 = this.c + (double)this.a.b().aw();
        double d3 = this.d + (double)this.a.b().aw();
        Object object = graphics2D.getRenderingHint(RenderingHints.KEY_ANTIALIASING);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        Map map = this.a.o();
        for (MarkerSeries markerSeries : map.values()) {
            public double d4;
            public Shape shape;
            if (!markerSeries.v() || !markerSeries.w()) continue;
            Map map2 = this.b(markerSeries);
            float f2 = Legend_Marker.a(map2, markerSeries.a() == RenderableSeries$LegendRenderType.a || markerSeries.a() == RenderableSeries$LegendRenderType.b ? this.e.e_() : 20);
            if (markerSeries.a() == RenderableSeries$LegendRenderType.a || markerSeries.a() == RenderableSeries$LegendRenderType.b) {
                if (markerSeries.a() == RenderableSeries$LegendRenderType.a && markerSeries.b_() != SeriesLines.a_) {
                    graphics2D.setColor(markerSeries.c_());
                    graphics2D.setStroke(markerSeries.b_());
                    shape = new Line2D.Double(d2, d3 + (double)f2 / 2.0, d2 + (double)this.a.b().ax(), d3 + (double)f2 / 2.0);
                    graphics2D.draw(shape);
                }
                if (markerSeries.d_() != null) {
                    graphics2D.setColor(markerSeries.g());
                    markerSeries.d_().a(graphics2D, d2 + (double)this.a.b().ax() / 2.0, d3 + (double)f2 / 2.0, this.e.e_());
                }
            } else {
                shape = new Rectangle2D.Double(d2, d3, 20.0, 20.0);
                graphics2D.setColor(markerSeries.t());
                graphics2D.fill(shape);
                if (markerSeries.a() != RenderableSeries$LegendRenderType.d) {
                    graphics2D.setColor(markerSeries.c_());
                    BasicStroke basicStroke = markerSeries.b_();
                    Object object2 = new BasicStroke(Math.min(basicStroke.getLineWidth(), 2.5f), basicStroke.getEndCap(), basicStroke.getLineJoin(), basicStroke.getMiterLimit(), basicStroke.getDashArray(), basicStroke.getDashPhase());
                    graphics2D.setPaint(markerSeries.c_());
                    graphics2D.setStroke((Stroke)object2);
                    object2 = new Path2D.Double();
                    double d5 = (double)basicStroke.getLineWidth() * 0.5;
                    ((Path2D.Double)object2).moveTo(d2 + d5, d3 + d5);
                    ((Path2D.Double)object2).lineTo(d2 + d5, d3 + 20.0 - d5);
                    ((Path2D.Double)object2).lineTo(d2 + 20.0 - d5, d3 + 20.0 - d5);
                    ((Path2D.Double)object2).lineTo(d2 + 20.0 - d5, d3 + d5);
                    ((Path2D)object2).closePath();
                    graphics2D.draw((Shape)object2);
                }
            }
            if (markerSeries.a() == RenderableSeries$LegendRenderType.a || markerSeries.a() == RenderableSeries$LegendRenderType.b) {
                d4 = d2 + (double)this.a.b().ax() + (double)this.a.b().aw();
                this.a(graphics2D, map2, this.e.e_(), d4, d3);
            } else {
                d4 = d2 + 20.0 + (double)this.a.b().aw();
                this.a(graphics2D, map2, 20, d4, d3);
            }
            if (this.a.b().az() == Styler$LegendLayout.a) {
                d3 += (double)(f2 + (float)this.a.b().aw());
                continue;
            }
            int n2 = 20;
            if (markerSeries.a() == RenderableSeries$LegendRenderType.a) {
                n2 = this.a.b().ax();
            }
            float f3 = this.b(map2, n2);
            d2 += (double)(f3 + (float)this.a.b().aw());
        }
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, object);
    }

    @Override
    public final /* synthetic */ double a(Series object) {
        MarkerSeries markerSeries = (MarkerSeries)object;
        object = this;
        if (markerSeries.a() == RenderableSeries$LegendRenderType.c || markerSeries.a() == RenderableSeries$LegendRenderType.d) {
            return 20.0;
        }
        return ((Legend_Marker)object).e.e_();
    }
}

