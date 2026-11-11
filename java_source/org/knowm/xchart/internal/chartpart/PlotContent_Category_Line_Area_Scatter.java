/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.Shape;
import java.awt.geom.Line2D;
import java.awt.geom.Path2D;
import java.io.Serializable;
import java.util.Collection;
import java.util.Iterator;
import org.knowm.xchart.CategorySeries;
import org.knowm.xchart.CategorySeries$CategorySeriesRenderStyle;
import org.knowm.xchart.internal.Utils;
import org.knowm.xchart.internal.chartpart.Axis;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.PlotContent_;
import org.knowm.xchart.style.CategoryStyler;
import org.knowm.xchart.style.lines.SeriesLines;

public class PlotContent_Category_Line_Area_Scatter
extends PlotContent_ {
    private final CategoryStyler f;

    PlotContent_Category_Line_Area_Scatter(Chart chart) {
        super(chart);
        this.f = (CategoryStyler)chart.b();
    }

    @Override
    public final void b(Graphics2D graphics2D) {
        double d2 = this.f.aD() * this.a().getWidth();
        double d3 = Utils.a((double)((int)this.a().getWidth()), d2);
        double d4 = this.f.aD() * this.a().getHeight();
        double d5 = Utils.a((double)((int)this.a().getHeight()), d4);
        Iterator iterator = this.a.o();
        int n2 = ((CategorySeries)iterator.values().iterator().next()).h().size();
        double d6 = d2 / (double)n2;
        for (CategorySeries categorySeries : iterator.values()) {
            if (!categorySeries.w()) continue;
            iterator = this.a.d(categorySeries.x());
            double d7 = ((Axis)((Object)iterator)).c();
            double d8 = ((Axis)((Object)iterator)).d();
            if (this.f.s()) {
                d7 = Math.log10(d7);
                d8 = Math.log10(d8);
            }
            iterator = categorySeries.o();
            double d9 = -1.7976931348623157E308;
            double d10 = -1.7976931348623157E308;
            Iterator iterator2 = categorySeries.h().iterator();
            iterator = iterator.iterator();
            Iterator iterator3 = null;
            Collection collection = categorySeries.p();
            if (collection != null) {
                iterator3 = collection.iterator();
            }
            Path2D.Double double_ = null;
            int n3 = -1;
            while (iterator.hasNext()) {
                ++n3;
                Serializable serializable = (Number)iterator.next();
                if (serializable == null) {
                    this.a();
                    this.a(graphics2D, double_, d9, d5);
                    double_ = null;
                    d9 = -1.7976931348623157E308;
                    d10 = -1.7976931348623157E308;
                    continue;
                }
                Object e2 = iterator2.next();
                double d11 = serializable.doubleValue();
                double d12 = this.f.s() ? Math.log10(d11) : d11;
                double d13 = this.a().getHeight() - (d5 + (d12 - d7) / (d8 - d7) * d4);
                if (Math.abs(d8 - d7) / 5.0 == 0.0) {
                    d13 = this.a().getHeight() / 2.0;
                }
                double d14 = this.a().getX() + d3 + (double)n3 * d6 + d6 / 2.0;
                double d15 = this.a().getY() + d13;
                if ((CategorySeries$CategorySeriesRenderStyle.a.equals(categorySeries.b()) || CategorySeries$CategorySeriesRenderStyle.b.equals(categorySeries.b())) && categorySeries.b_() != SeriesLines.a_ && d9 != -1.7976931348623157E308 && d10 != -1.7976931348623157E308) {
                    graphics2D.setColor(categorySeries.c_());
                    graphics2D.setStroke(categorySeries.b_());
                    Line2D.Double double_2 = new Line2D.Double(d9, d10, d14, d15);
                    graphics2D.draw(double_2);
                }
                if (CategorySeries$CategorySeriesRenderStyle.b.equals(categorySeries.b())) {
                    if (d9 != -1.7976931348623157E308 && d10 != -1.7976931348623157E308) {
                        graphics2D.setColor(categorySeries.t());
                        double d16 = this.a().getY() + this.a().getHeight() - d5;
                        if (double_ == null) {
                            double_ = new Path2D.Double();
                            double_.moveTo(d9, d16);
                            double_.lineTo(d9, d10);
                        }
                        double_.lineTo(d14, d15);
                    }
                    if (d14 < d9) {
                        throw new RuntimeException("X-Data must be in ascending order for Area Charts!!!");
                    }
                }
                if (CategorySeries$CategorySeriesRenderStyle.e.equals(categorySeries.b()) && categorySeries.b_() != SeriesLines.a_) {
                    double d17 = this.a().getY() + this.a().getHeight() - d5;
                    graphics2D.setStroke(categorySeries.b_());
                    Line2D.Double double_3 = new Line2D.Double(d14, d17, d14, d15);
                    graphics2D.draw(double_3);
                }
                d9 = d14;
                d10 = d15;
                if (categorySeries.d_() != null) {
                    graphics2D.setColor(categorySeries.g());
                    categorySeries.d_().a(graphics2D, d14, d15, this.f.e_());
                }
                if (collection != null) {
                    double d18;
                    double d19;
                    double d20 = ((Number)iterator3.next()).doubleValue();
                    if (this.f.E()) {
                        graphics2D.setColor(categorySeries.c_());
                    } else {
                        graphics2D.setColor(this.f.D());
                    }
                    graphics2D.setStroke(e);
                    if (this.f.s()) {
                        d19 = d11 + d20;
                        d19 = Math.log10(d19);
                    } else {
                        d19 = d12 + d20;
                    }
                    double d21 = this.a().getHeight() - (d5 + (d19 - d7) / (d8 - d7) * d4);
                    double d22 = this.a().getY() + d21;
                    if (this.f.s()) {
                        d18 = d11 - d20;
                        d18 = Math.log10(d18);
                    } else {
                        d18 = d12 - d20;
                    }
                    double d23 = this.a().getHeight() - (d5 + (d18 - d7) / (d8 - d7) * d4);
                    double d24 = this.a().getY() + d23;
                    serializable = new Line2D.Double(d14, d22, d14, d24);
                    graphics2D.draw((Shape)((Object)serializable));
                    serializable = new Line2D.Double(d14 - 3.0, d24, d14 + 3.0, d24);
                    graphics2D.draw((Shape)((Object)serializable));
                    serializable = new Line2D.Double(d14 - 3.0, d22, d14 + 3.0, d22);
                    graphics2D.draw((Shape)((Object)serializable));
                }
                if (!((CategoryStyler)this.a.b()).aK()) continue;
                this.c.a(d14, d15, this.a.m().format(e2), this.a.n().format(d12));
            }
            graphics2D.setColor(categorySeries.t());
            this.a();
            this.a(graphics2D, double_, d9, d5);
        }
    }
}

