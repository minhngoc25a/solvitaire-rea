/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.Shape;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.Line2D;
import java.awt.geom.Path2D;
import java.awt.geom.Point2D;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RectangularShape;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.Map;
import org.knowm.xchart.CategorySeries;
import org.knowm.xchart.CategorySeries$CategorySeriesRenderStyle;
import org.knowm.xchart.internal.Utils;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.PlotContent_;
import org.knowm.xchart.style.CategoryStyler;
import org.knowm.xchart.style.lines.SeriesLines;

public class PlotContent_Category_Bar
extends PlotContent_ {
    private final CategoryStyler f;

    PlotContent_Category_Bar(Chart chart) {
        super(chart);
        this.f = (CategoryStyler)chart.b();
    }

    @Override
    public final void b(Graphics2D graphics2D) {
        double d2 = this.f.aD() * this.a().getWidth();
        double d3 = Utils.a(this.a().getWidth(), d2);
        Map map = this.a.o();
        int n2 = ((CategorySeries)map.values().iterator().next()).h().size();
        double d4 = d2 / (double)n2;
        double d5 = this.a.k().c();
        double d6 = this.a.k().d();
        int n3 = d5 > 0.0 && d6 > 0.0 ? 1 : (d5 < 0.0 && d6 < 0.0 ? -1 : 0);
        double d7 = this.f.aD() * this.a().getHeight();
        double d8 = Utils.a(this.a().getHeight(), d7);
        int n4 = 0;
        double[] dArray = new double[n2];
        double[] dArray2 = new double[n2];
        double[] dArray3 = new double[n2];
        for (CategorySeries categorySeries : map.values()) {
            if (!categorySeries.w()) continue;
            d5 = this.a.d(categorySeries.x()).c();
            d6 = this.a.d(categorySeries.x()).d();
            if (this.f.s()) {
                d5 = Math.log10(d5);
                d6 = Math.log10(d6);
            }
            double d9 = -1.7976931348623157E308;
            double d10 = -1.7976931348623157E308;
            Iterator iterator = categorySeries.h().iterator();
            Iterator iterator2 = categorySeries.o().iterator();
            Iterator iterator3 = null;
            Collection collection = categorySeries.p();
            if (collection != null) {
                iterator3 = collection.iterator();
            }
            ArrayList<Point2D.Double> arrayList = null;
            ArrayList<Point2D.Double> arrayList2 = null;
            int n5 = 0;
            block6: while (iterator2.hasNext()) {
                public double d11;
                public double d12;
                public double d13;
                public double d14;
                public double d15;
                Number number = (Number)iterator2.next();
                if (number == null) {
                    d9 = -1.7976931348623157E308;
                    d10 = -1.7976931348623157E308;
                    ++n5;
                    continue;
                }
                Object e2 = iterator.next();
                double d16 = number.doubleValue();
                double d17 = this.f.s() ? Math.log10(d16) : d16;
                double d18 = 0.0;
                double d19 = 0.0;
                switch (n3) {
                    case 1: {
                        if (d17 < d5) {
                            ++n5;
                            public continue block6;
                        }
                        d18 = d17;
                        d19 = d5;
                        if (!this.f.Y()) break;
                        int n6 = n5;
                        dArray[n6] = dArray[n6] + ((d18 += dArray[n5]) - (d19 += dArray[n5]));
                        break;
                    }
                    case -1: {
                        if (d17 > d6) {
                            ++n5;
                            public continue block6;
                        }
                        d18 = d6;
                        d19 = d17;
                        if (!this.f.Y()) break;
                        int n7 = n5;
                        dArray2[n7] = dArray2[n7] + ((d18 -= dArray2[n5]) - (d19 -= dArray2[n5]));
                        break;
                    }
                    case 0: {
                        if (d17 >= 0.0) {
                            d18 = d17;
                            d19 = categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.d || categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.e || categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.c ? 0.0 : d17;
                            if (!this.f.Y()) break;
                            int n8 = n5;
                            dArray[n8] = dArray[n8] + ((d18 += dArray[n5]) - (d19 += dArray[n5]));
                            break;
                        }
                        d18 = categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.d || categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.e || categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.c ? 0.0 : d17;
                        d19 = d17;
                        if (!this.f.Y()) break;
                        int n9 = n5;
                        dArray2[n9] = dArray2[n9] + ((d18 -= dArray2[n5]) - (d19 -= dArray2[n5]));
                    }
                }
                double d20 = this.a().getHeight() - (d8 + (d18 - d5) / (d6 - d5) * d7);
                double d21 = this.a().getY() + d20;
                if (n4 == 0 || number.doubleValue() > 0.0) {
                    dArray3[n5] = d21;
                }
                double d22 = this.a().getHeight() - (d8 + (d19 - d5) / (d6 - d5) * d7);
                double d23 = this.a().getY() + d22;
                double d24 = this.f.W();
                if (categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.c) {
                    d24 = 1.0;
                }
                if (this.f.X() || this.f.Y()) {
                    d15 = d4 * d24;
                    d14 = d4 * (1.0 - d24) / 2.0;
                    d13 = this.a().getX() + d3 + d4 * (double)n5++ + d14;
                } else {
                    d15 = d4 / (double)this.a.o().size() * d24;
                    d14 = d4 * (1.0 - d24) / 2.0;
                    d13 = this.a().getX() + d3 + d4 * (double)n5++ + (double)n4 * d15 + d14;
                }
                if (categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.c) {
                    d24 = d23;
                    d14 = d21;
                    d12 = d4;
                    if (d17 < 0.0) {
                        d14 = d23;
                        d24 = d21;
                    }
                    if (arrayList == null) {
                        arrayList = new ArrayList<Point2D.Double>();
                        arrayList2 = new ArrayList<Point2D.Double>();
                        arrayList.add(new Point2D.Double(d13, d24));
                    } else if (this.f.Y() && (d10 > 0.0 && d17 < 0.0 || d10 < 0.0 && d17 > 0.0)) {
                        this.a(graphics2D, categorySeries, arrayList, arrayList2);
                        arrayList.clear();
                        arrayList2.clear();
                        arrayList.add(new Point2D.Double(d13, d24));
                    }
                    if (!(iterator2.hasNext() || this.f.X() || this.f.Y())) {
                        d11 = d12 / (double)this.a.o().size();
                        d12 -= (double)n4 * d11;
                    }
                    arrayList.add(new Point2D.Double(d13, d14));
                    arrayList.add(new Point2D.Double(d13 + d12, d14));
                    arrayList2.add(new Point2D.Double(d13, d24));
                    arrayList2.add(new Point2D.Double(d13 + d12, d24));
                    d10 = d17;
                } else if (categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.d) {
                    Path2D.Double double_ = new Path2D.Double();
                    double_.moveTo(d13, d21);
                    double_.lineTo(d13 + d15, d21);
                    double_.lineTo(d13 + d15, d23);
                    double_.lineTo(d13, d23);
                    double_.closePath();
                    graphics2D.setColor(categorySeries.t());
                    graphics2D.fill(double_);
                    if (this.f.Z() && number != null) {
                        this.a(graphics2D, number, d13, d21, d23, d15, false, categorySeries.t());
                    }
                    if (this.f.Z() && this.f.aa() && this.f.Y() && n4 == map.size() - 1) {
                        Double d25 = dArray[n5 - 1] - dArray2[n5 - 1];
                        d14 = dArray3[n5 - 1];
                        this.a(graphics2D, d25, d13, d14, d23, d15, true, categorySeries.t());
                    }
                } else if (CategorySeries$CategorySeriesRenderStyle.e.equals(categorySeries.b())) {
                    if (categorySeries.b_() != SeriesLines.a_) {
                        graphics2D.setColor(categorySeries.c_());
                        graphics2D.setStroke(categorySeries.b_());
                        Line2D.Double double_ = new Line2D.Double(d13 + d15 / 2.0, d23, d13 + d15 / 2.0, d21);
                        graphics2D.draw(double_);
                    }
                    if (categorySeries.d_() != null) {
                        graphics2D.setColor(categorySeries.g());
                        if (d17 <= 0.0) {
                            categorySeries.d_().a(graphics2D, d13 + d15 / 2.0, d23, this.f.e_());
                        } else {
                            categorySeries.d_().a(graphics2D, d13 + d15 / 2.0, d21, this.f.e_());
                        }
                    }
                } else {
                    if (categorySeries.b() == CategorySeries$CategorySeriesRenderStyle.a && categorySeries.b_() != SeriesLines.a_ && d9 != -1.7976931348623157E308 && d10 != -1.7976931348623157E308) {
                        graphics2D.setColor(categorySeries.c_());
                        graphics2D.setStroke(categorySeries.b_());
                        Line2D.Double double_ = new Line2D.Double(d9, d10, d13 + d15 / 2.0, d21);
                        graphics2D.draw(double_);
                    }
                    d9 = d13 + d15 / 2.0;
                    d10 = d21;
                    if (categorySeries.d_() != null) {
                        graphics2D.setColor(categorySeries.g());
                        categorySeries.d_().a(graphics2D, d9, d10, this.f.e_());
                    }
                }
                if (collection != null) {
                    double d26 = ((Number)iterator3.next()).doubleValue();
                    if (this.f.E()) {
                        graphics2D.setColor(categorySeries.c_());
                    } else {
                        graphics2D.setColor(this.f.D());
                    }
                    graphics2D.setStroke(e);
                    if (this.f.s()) {
                        d26 = Math.log10(d26);
                    }
                    d14 = d26 / (d6 - d5) * d7;
                    d12 = d17 > 0.0 ? d21 - d14 : d23 - d14;
                    d11 = d17 > 0.0 ? d21 + d14 : d23 + d14;
                    double d27 = d13 + d15 / 2.0;
                    Line2D.Double double_ = new Line2D.Double(d27, d12, d27, d11);
                    graphics2D.draw(double_);
                    double_ = new Line2D.Double(d27 - 3.0, d11, d27 + 3.0, d11);
                    graphics2D.draw(double_);
                    double_ = new Line2D.Double(d27 - 3.0, d12, d27 + 3.0, d12);
                    graphics2D.draw(double_);
                }
                if (!((CategoryStyler)this.a.b()).aK()) continue;
                Rectangle2D.Double double_ = new Rectangle2D.Double(d13, d21, d15, Math.abs(d21 - d23));
                double d28 = d17 < 0.0 ? d23 + 4.0 + 20.0 + 5.0 : d21;
                this.c.a(double_, d13, d28, d15, this.a.m().format(e2), this.a.n().format(d16));
            }
            if (arrayList != null && !arrayList2.isEmpty()) {
                this.a(graphics2D, categorySeries, arrayList, arrayList2);
            }
            ++n4;
        }
    }

    private static void a(Graphics2D graphics2D, CategorySeries categorySeries, Path2D.Double double_) {
        if (categorySeries.c_() != null) {
            graphics2D.setColor(categorySeries.c_());
            graphics2D.setStroke(categorySeries.b_());
            graphics2D.draw(double_);
        }
    }

    private static void b(Graphics2D graphics2D, CategorySeries categorySeries, Path2D.Double double_) {
        if (categorySeries.t() != null) {
            graphics2D.setColor(categorySeries.t());
            graphics2D.fill(double_);
        }
    }

    private void a(Graphics2D graphics2D, CategorySeries categorySeries, ArrayList cloneable, ArrayList arrayList) {
        public Object object;
        Collections.reverse(arrayList);
        ArrayList arrayList2 = arrayList;
        arrayList2.remove(arrayList2.size() - 1);
        ((ArrayList)cloneable).addAll(arrayList);
        Path2D.Double double_ = new Path2D.Double();
        Point2D.Double double_2 = (Point2D.Double)((ArrayList)cloneable).remove(0);
        double_.moveTo(double_2.getX(), double_2.getY());
        Object object2 = ((ArrayList)cloneable).iterator();
        while (object2.hasNext()) {
            object = (Point2D.Double)object2.next();
            double_.lineTo(((Point2D.Double)object).getX(), ((Point2D.Double)object).getY());
        }
        PlotContent_Category_Bar.b(graphics2D, categorySeries, double_);
        double_.reset();
        double_.moveTo(double_2.getX(), double_2.getY());
        object2 = ((ArrayList)cloneable).subList(0, ((ArrayList)cloneable).size() - arrayList.size() + 1);
        object = object2.iterator();
        while (object.hasNext()) {
            cloneable = (Point2D.Double)object.next();
            double_.lineTo(((Point2D.Double)cloneable).getX(), ((Point2D.Double)cloneable).getY());
        }
        PlotContent_Category_Bar.a(graphics2D, categorySeries, double_);
    }

    private void a(Graphics2D graphics2D, Number number, double d2, double d3, double d4, double d5, boolean bl2, Color color) {
        public double d6;
        public double d7;
        Object object = this.a.n().format(number);
        object = new TextLayout((String)object, this.f.ab(), new FontRenderContext(null, true, false));
        Object object2 = AffineTransform.getRotateInstance(-1.0 * Math.toRadians(this.f.ad()), 0.0, 0.0);
        object2 = ((TextLayout)object).getOutline((AffineTransform)object2);
        object = ((TextLayout)object).getBounds();
        if (this.f.ad() > 0) {
            d7 = ((RectangularShape)object).getHeight() / 2.0 + ((RectangularShape)object).getWidth() / 2.0;
            double d8 = d7 * (double)this.f.ad() / 90.0;
            d6 = d2 + d5 / 2.0 - ((RectangularShape)object).getWidth() / 2.0 + d8 - 1.0;
        } else {
            d6 = d2 + d5 / 2.0 - ((RectangularShape)object).getWidth() / 2.0 - 1.0;
        }
        if (bl2) {
            d7 = d3 - 4.0;
        } else if (number.doubleValue() >= 0.0) {
            d7 = d3 + (d4 - d3) * (1.0 - this.f.ae()) + ((RectangularShape)object).getHeight() * this.f.ae();
        } else {
            double d9 = d4;
            d7 = d9 - (d9 - d3) * (1.0 - this.f.ae()) + ((RectangularShape)object).getHeight() * (1.0 - this.f.ae());
        }
        if (this.f.af()) {
            graphics2D.setColor(this.f.a(color));
        } else {
            graphics2D.setColor(this.f.ac());
        }
        graphics2D.setFont(this.f.ab());
        AffineTransform affineTransform = graphics2D.getTransform();
        AffineTransform affineTransform2 = new AffineTransform();
        affineTransform2.translate(d6, d7);
        graphics2D.transform(affineTransform2);
        graphics2D.fill((Shape)object2);
        graphics2D.setTransform(affineTransform);
    }
}

