/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.geom.Rectangle2D;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import org.knowm.xchart.CategoryChart;
import org.knowm.xchart.CategorySeries$CategorySeriesRenderStyle;
import org.knowm.xchart.internal.chartpart.Axis;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.series.AxesChartSeries;
import org.knowm.xchart.internal.series.AxesChartSeriesCategory;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.internal.series.Series$DataType;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.BoxStyler;
import org.knowm.xchart.style.CategoryStyler;
import org.knowm.xchart.style.Styler;
import org.knowm.xchart.style.Styler$LegendPosition;
import org.knowm.xchart.style.Styler$YAxisPosition;

public class AxisPair
implements ChartPart {
    private final Chart a;
    private final Axis c;
    private final Axis d;
    private final TreeMap e;
    private final Rectangle2D.Double f;
    private final Rectangle2D.Double g;
    private Axis h;
    private Axis i;

    public AxisPair(CategoryChart categoryChart) {
        this.a = categoryChart;
        this.c = new Axis(categoryChart, Axis$Direction.a, 0);
        this.d = new Axis(categoryChart, Axis$Direction.b, 0);
        this.e = new TreeMap();
        this.e.put(0, this.d);
        this.f = new Rectangle2D.Double();
        this.g = new Rectangle2D.Double();
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        public Object object;
        public double d2;
        public double d3;
        Rectangle2D.Double double_;
        public Axis axis;
        public double d4;
        public int n2;
        public Object object22;
        Object object3 = this;
        ((AxisPair)object3).e.clear();
        ((AxisPair)object3).e.put(0, ((AxisPair)object3).d);
        boolean bl2 = false;
        if (((AxisPair)object3).a.o() != null) {
            for (Object object22 : ((AxisPair)object3).a.o().values()) {
                if (!((Series)object22).w()) continue;
                int n3 = ((Series)object22).x();
                if (!bl2 && n3 == 0) {
                    bl2 = true;
                }
                if (((AxisPair)object3).e.containsKey(n3)) continue;
                ((AxisPair)object3).e.put(n3, new Axis(((AxisPair)object3).a, Axis$Direction.b, n3));
            }
        }
        ((AxisPair)object3).c.a((Series$DataType)null);
        for (Object object22 : ((AxisPair)object3).e.values()) {
            ((Axis)object22).a((Series$DataType)null);
        }
        for (Object object22 : ((AxisPair)object3).a.o().values()) {
            ((AxisPair)object3).c.a(((AxesChartSeries)object22).m());
            if (!((Series)object22).w()) continue;
            ((AxisPair)object3).a(((Series)object22).x()).a(((AxesChartSeries)object22).n());
            if (!bl2) {
                ((AxisPair)object3).d.a(((AxesChartSeries)object22).n());
            }
            if (((Series)object22).y() == null) continue;
            ((AxesChartStyler)((AxisPair)object3).a.b()).a(((Series)object22).x(), ((Series)object22).y());
        }
        ((AxisPair)object3).c.a();
        for (Object object22 : ((AxisPair)object3).e.values()) {
            ((Axis)object22).a();
        }
        if (((AxisPair)object3).a.o() == null || ((AxisPair)object3).a.o().size() <= 0) {
            ((AxisPair)object3).g();
        } else {
            int n4 = 0;
            object22 = ((AxisPair)object3).a.o().values().iterator();
            while (object22.hasNext()) {
                AxesChartSeries axesChartSeries = (AxesChartSeries)object22.next();
                if (!axesChartSeries.w()) {
                    ++n4;
                    continue;
                }
                ((AxisPair)object3).c.a(axesChartSeries.i(), axesChartSeries.j());
                ((AxisPair)object3).a(axesChartSeries.x()).a(axesChartSeries.k(), axesChartSeries.l());
                if (bl2) continue;
                ((AxisPair)object3).d.a(axesChartSeries.k(), axesChartSeries.l());
            }
            if (n4 == ((AxisPair)object3).a.o().values().size()) {
                ((AxisPair)object3).g();
            }
        }
        AxisPair axisPair = object3;
        double d5 = axisPair.c.c();
        double d6 = axisPair.c.d();
        if (((AxesChartStyler)axisPair.a.b()).t() != null) {
            d5 = ((AxesChartStyler)axisPair.a.b()).t();
        }
        if (((AxesChartStyler)axisPair.a.b()).u() != null) {
            d6 = ((AxesChartStyler)axisPair.a.b()).u();
        }
        axisPair.c.a(d5);
        axisPair.c.b(d6);
        Iterator iterator = ((AxisPair)object3).e.values().iterator();
        while (iterator.hasNext()) {
            Object object4 = object22 = (Axis)iterator.next();
            axisPair = object3;
            Object object5 = ((Axis)object4).c();
            double d7 = ((Axis)object4).d();
            if (axisPair.a.b() instanceof CategoryStyler && ((CategoryStyler)(object22 = (CategoryStyler)axisPair.a.b())).V() == CategorySeries$CategorySeriesRenderStyle.d) {
                if (((CategoryStyler)object22).Y()) {
                    object22 = (AxesChartSeriesCategory)axisPair.a.o().values().iterator().next();
                    object22 = (List)((AxesChartSeriesCategory)object22).h();
                    int n5 = object22.size();
                    double[] dArray = new double[n5];
                    object22 = new double[n5];
                    for (AxesChartSeries axesChartSeries : axisPair.a.o().values()) {
                        AxesChartSeriesCategory axesChartSeriesCategory = (AxesChartSeriesCategory)axesChartSeries;
                        if (!axesChartSeries.w()) continue;
                        int n6 = 0;
                        for (Number number : axesChartSeriesCategory.o()) {
                            if (number == null) {
                                ++n6;
                                continue;
                            }
                            if (number.doubleValue() > 0.0) {
                                int n7 = n6;
                                dArray[n7] = dArray[n7] + number.doubleValue();
                            } else if (number.doubleValue() < 0.0) {
                                Object object6 = object22;
                                int n8 = n6;
                                object6[n8] = object6[n8] + number.doubleValue();
                            }
                            ++n6;
                        }
                    }
                    double d8 = dArray[0];
                    for (int i2 = 1; i2 < dArray.length; ++i2) {
                        if (!(dArray[i2] > d8)) continue;
                        d8 = dArray[i2];
                    }
                    Object object7 = object22[0];
                    for (int i3 = 1; i3 < ((Object)object22).length; ++i3) {
                        if (!(object22[i3] < object7)) continue;
                        object7 = object22[i3];
                    }
                    d7 = d8;
                    object5 = object7;
                }
                if (((Axis)object4).c() > 0.0) {
                    object5 = 0.0;
                }
                if (((Axis)object4).d() < 0.0) {
                    d7 = 0.0;
                }
            }
            if (((AxesChartStyler)axisPair.a.b()).a((Integer)((Axis)object4).i()) != null && !(axisPair.a.b() instanceof BoxStyler)) {
                object5 = ((AxesChartStyler)axisPair.a.b()).a((Integer)((Axis)object4).i());
            } else if (((AxesChartStyler)axisPair.a.b()).v() != null && !(axisPair.a.b() instanceof BoxStyler)) {
                object5 = ((AxesChartStyler)axisPair.a.b()).v();
            }
            if (((AxesChartStyler)axisPair.a.b()).b((Integer)((Axis)object4).i()) != null && !(axisPair.a.b() instanceof BoxStyler)) {
                d7 = ((AxesChartStyler)axisPair.a.b()).b((Integer)((Axis)object4).i());
            } else if (((AxesChartStyler)axisPair.a.b()).w() != null && !(axisPair.a.b() instanceof BoxStyler)) {
                d7 = ((AxesChartStyler)axisPair.a.b()).w();
            }
            ((Axis)object4).a((double)object5);
            ((Axis)object4).b(d7);
        }
        if (((AxesChartStyler)((AxisPair)object3).a.b()).r() && ((AxisPair)object3).c.c() <= 0.0) {
            throw new IllegalArgumentException("Series data (accounting for error bars too) cannot be less or equal to zero for a logarithmic X-Axis!!!");
        }
        if (((AxesChartStyler)((AxisPair)object3).a.b()).s()) {
            for (Object object22 : ((AxisPair)object3).e.values()) {
                public Axis axis2;
                if (!(axis2.c() <= 0.0)) continue;
                throw new IllegalArgumentException("Series data (accounting for error bars too) cannot be less or equal to zero for a logarithmic Y-Axis!!!");
            }
        }
        if (((AxisPair)object3).c.c() == Double.POSITIVE_INFINITY || ((AxisPair)object3).c.d() == Double.POSITIVE_INFINITY) {
            throw new IllegalArgumentException("Series data (accounting for error bars too) cannot be equal to Double.POSITIVE_INFINITY!!!");
        }
        for (Object object22 : ((AxisPair)object3).e.values()) {
            if (((Axis)object22).c() == Double.POSITIVE_INFINITY || ((Axis)object22).d() == Double.POSITIVE_INFINITY) {
                throw new IllegalArgumentException("Series data (accounting for error bars too) cannot be equal to Double.POSITIVE_INFINITY!!!");
            }
            if (((Axis)object22).c() != Double.NEGATIVE_INFINITY && ((Axis)object22).d() != Double.NEGATIVE_INFINITY) continue;
            throw new IllegalArgumentException("Series data (accounting for error bars too) cannot be equal to Double.NEGATIVE_INFINITY!!!");
        }
        if (((AxisPair)object3).c.c() == Double.NEGATIVE_INFINITY || ((AxisPair)object3).c.d() == Double.NEGATIVE_INFINITY) {
            throw new IllegalArgumentException("Series data (accounting for error bars too) cannot be equal to Double.NEGATIVE_INFINITY!!!");
        }
        this.h = null;
        this.i = null;
        object3 = (AxesChartStyler)this.a.b();
        int n9 = n2 = ((Styler)object3).ai();
        int n10 = ((AxesChartStyler)object3).f() ? ((AxesChartStyler)object3).n() : 0;
        this.f.width = 0.0;
        int n11 = 0;
        double d9 = n2;
        int n12 = ((Styler)object3).aT();
        if (n12 > 0) {
            public double d10;
            d4 = 0.0;
            for (Map.Entry entry : this.e.entrySet()) {
                axis = (Axis)entry.getValue();
                if (((Styler)object3).d((Integer)entry.getKey()) == Styler$YAxisPosition.a) continue;
                axis.b();
                double_ = (Rectangle2D.Double)axis.h();
                d3 = double_.getWidth();
                d4 += d3;
                ++n11;
            }
            if (n11 > 1) {
                d4 += (double)((n11 - 1) * n9);
            }
            d4 += (double)(n11 * n10);
            if (d10 < (double)n12) {
                d9 = (double)n12 - d4;
            }
            n11 = 0;
        }
        d4 = d9;
        for (Map.Entry entry : this.e.entrySet()) {
            axis = (Axis)entry.getValue();
            if (((Styler)object3).d((Integer)entry.getKey()) == Styler$YAxisPosition.a || (Integer)entry.getKey() == 0) continue;
            axis.b();
            double_ = (Rectangle2D.Double)axis.h();
            ((Rectangle2D.Double)axis.h()).x = d9;
            axis.a(graphics2D);
            d3 = double_.getWidth();
            d9 += (double)n9 + d3 + (double)n10;
            this.f.width += d3;
            ++n11;
            this.h = axis;
        }
        if (((Styler)object3).d(0) != Styler$YAxisPosition.a) {
            this.d.b();
            Rectangle2D.Double double_2 = (Rectangle2D.Double)this.d.h();
            ((Rectangle2D.Double)this.d.h()).x = d9;
            this.d.a(graphics2D);
            double d11 = double_2.getWidth();
            this.f.width += d11;
            ++n11;
            this.h = this.d;
        }
        if (n11 > 1) {
            this.f.width += (double)((n11 - 1) * n9);
        }
        this.f.width += (double)(n11 * n10);
        this.g.width = 0.0;
        double d12 = 0.0;
        if (((Styler)object3).ay() == Styler$LegendPosition.a && ((Styler)object3).as()) {
            d12 = this.a.h().a().getWidth() + (double)((Styler)object3).ai();
        }
        this.g.x = d2 = (double)this.a.c() - d12 - (double)n2;
        int n13 = 0;
        for (Map.Entry entry : this.e.descendingMap().entrySet()) {
            public double d13;
            Axis axis3 = (Axis)entry.getValue();
            if (((Styler)object3).d((Integer)entry.getKey()) != Styler$YAxisPosition.a || (Integer)entry.getKey() == 0) continue;
            axis3.b();
            Rectangle2D.Double double_3 = (Rectangle2D.Double)axis3.h();
            double d14 = double_3.getWidth();
            double_3.x = d13 = d2 - d14;
            this.g.x = d13;
            axis3.a(graphics2D);
            this.g.width += d14;
            d2 -= (double)n9 + d14 + (double)n10;
            ++n13;
            this.i = axis3;
        }
        if (((Styler)object3).d(0) == Styler$YAxisPosition.a) {
            public double d15;
            this.d.b();
            object = (Rectangle2D.Double)this.d.h();
            double d16 = ((Rectangle2D.Double)object).getWidth();
            ((Rectangle2D.Double)object).x = d15 = d2 - d16;
            this.g.x = d15;
            this.d.a(graphics2D);
            this.g.width += d16;
            ++n13;
            this.i = this.d;
        }
        if (this.h == null) {
            this.h = this.d;
        }
        if (this.i == null) {
            this.i = this.d;
        }
        if (n13 > 1) {
            this.g.width += (double)((n13 - 1) * n9);
        }
        this.g.width += (double)(n13 * n10);
        object = (Rectangle2D.Double)this.d.h();
        this.f.x = d4;
        this.f.y = ((Rectangle2D.Double)object).y;
        this.f.height = ((Rectangle2D.Double)object).height;
        this.g.y = ((Rectangle2D.Double)object).y;
        this.g.height = ((Rectangle2D.Double)object).height;
        this.c.b();
        this.c.a(graphics2D);
    }

    private void g() {
        double d2 = ((AxesChartStyler)this.a.b()).r() ? 0.1 : -1.0;
        double d3 = ((AxesChartStyler)this.a.b()).s() ? 0.1 : -1.0;
        this.c.a(d2, 1.0);
        for (Axis axis : this.e.values()) {
            axis.a(d3, 1.0);
        }
    }

    final Axis a(int n2) {
        return (Axis)this.e.get(n2);
    }

    public final Axis a() {
        return this.c;
    }

    final Axis b() {
        return this.d;
    }

    final Rectangle2D.Double c() {
        return this.f;
    }

    final Rectangle2D.Double d() {
        return this.g;
    }

    final Axis e() {
        return this.h;
    }

    final Axis f() {
        return this.i;
    }
}

