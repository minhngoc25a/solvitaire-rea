/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RectangularShape;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Objects;
import java.util.SequencedCollection;
import java.util.stream.Collectors;
import org.knowm.xchart.CategoryChart;
import org.knowm.xchart.CategorySeries;
import org.knowm.xchart.HeatMapChart;
import org.knowm.xchart.XYChart;
import org.knowm.xchart.XYSeries;
import org.knowm.xchart.internal.Utils;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.AxisTick;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.AxisTitle;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.a;
import org.knowm.xchart.internal.chartpart.b;
import org.knowm.xchart.internal.chartpart.c;
import org.knowm.xchart.internal.chartpart.e;
import org.knowm.xchart.internal.chartpart.f;
import org.knowm.xchart.internal.series.AxesChartSeriesCategory;
import org.knowm.xchart.internal.series.AxesChartSeriesNumericalNoErrorBars;
import org.knowm.xchart.internal.series.Series$DataType;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.BoxStyler;
import org.knowm.xchart.style.CategoryStyler;
import org.knowm.xchart.style.HeatMapStyler;
import org.knowm.xchart.style.Styler$LegendPosition;
import org.knowm.xchart.style.Styler$YAxisPosition;
import org.knowm.xchart.style.XYStyler;

public class Axis
implements ChartPart {
    private final Chart a;
    private final Rectangle2D.Double c;
    private final AxesChartStyler d;
    private final AxisTitle e;
    private final AxisTick f;
    private final Axis$Direction g;
    private final int h;
    private Series$DataType i;
    private AxisTickCalculator_ j;
    private double k;
    private double l;

    public Axis(Chart chart, Axis$Direction axis$Direction, int n2) {
        this.a = chart;
        this.d = (AxesChartStyler)chart.b();
        this.g = axis$Direction;
        this.h = n2;
        this.c = new Rectangle2D.Double();
        Axis$Direction axis$Direction2 = axis$Direction;
        this.e = new AxisTitle(chart, axis$Direction2, axis$Direction2 == Axis$Direction.b ? this : null, n2);
        Axis$Direction axis$Direction3 = axis$Direction;
        this.f = new AxisTick(chart, axis$Direction3, axis$Direction3 == Axis$Direction.b ? this : null);
    }

    final void a() {
        this.k = Double.MAX_VALUE;
        this.l = -1.7976931348623157E308;
    }

    final void a(double d2, double d3) {
        if (Double.isNaN(this.k) || d2 < this.k) {
            this.k = d2;
        }
        if (Double.isNaN(this.l) || d3 > this.l) {
            this.l = d3;
        }
    }

    public final void b() {
        double d2 = 0.0;
        if (this.d.as() && this.d.ay() == Styler$LegendPosition.h) {
            d2 = this.a.h().a().getHeight();
        }
        if (this.g == Axis$Direction.b) {
            public double d3;
            double d4 = this.a.g().a().getHeight() + (double)this.d.ai();
            int n2 = 1;
            double d5 = 60.0;
            do {
                public Object object;
                public AxisTickCalculator_ axisTickCalculator_;
                public Object object2;
                public Cloneable cloneable;
                public Object object3;
                double d6 = 0.0;
                if (this.d.as() && this.d.ay() == Styler$LegendPosition.a) {
                    d6 = this.d.ai();
                }
                double d7 = (double)this.a.c() - d5 - (this.d.ay() == Styler$LegendPosition.a ? this.a.h().a().getWidth() : 0.0) - (double)(2 * this.d.ai()) - (double)(this.d.f() ? this.d.n() : 0) - d6;
                double d8 = (double)this.a.d() - d4;
                double d9 = d7;
                Axis axis = this.a.j();
                double d10 = 0.0;
                if (axis.a.f() != null && !axis.a.f().trim().equalsIgnoreCase("") && axis.d.b()) {
                    object3 = new TextLayout(axis.a.f(), axis.d.d(), new FontRenderContext(null, true, false));
                    cloneable = ((TextLayout)object3).getBounds();
                    d10 = cloneable.getHeight() + (double)axis.d.o();
                }
                axis.j = axis.d(d9);
                double d11 = 0.0;
                if (axis.d.e()) {
                    object2 = "";
                    int n3 = 0;
                    while (true) {
                        axisTickCalculator_ = axis.j;
                        if (n3 >= axisTickCalculator_.b.size()) break;
                        axisTickCalculator_ = axis.j;
                        if (axisTickCalculator_.b.get(n3) != null) {
                            axisTickCalculator_ = axis.j;
                            if (((String)axisTickCalculator_.b.get(n3)).length() > ((String)object2).length()) {
                                axisTickCalculator_ = axis.j;
                                object2 = (String)axisTickCalculator_.b.get(n3);
                            }
                        }
                        ++n3;
                    }
                    object = new TextLayout((String)(((String)object2).length() == 0 ? " " : object2), axis.d.g(), new FontRenderContext(null, true, false));
                    AffineTransform affineTransform = axis.d.U() == 0 ? null : AffineTransform.getRotateInstance(-1.0 * Math.toRadians(axis.d.U()));
                    object = ((TextLayout)object).getOutline(affineTransform);
                    object = object.getBounds();
                    d11 = ((RectangularShape)object).getHeight() + (double)axis.d.i() + (double)axis.d.h();
                }
                d9 = d3 = d8 - (d10 + d11) - (double)this.d.n() - (double)this.d.ai() - d2;
                axis = this;
                d10 = 0.0;
                object3 = axis.a.c(axis.h);
                if (object3 != null && !((String)object3).trim().equalsIgnoreCase("") && axis.d.c()) {
                    cloneable = new TextLayout((String)object3, axis.d.d(), new FontRenderContext(null, true, false));
                    object2 = ((TextLayout)cloneable).getBounds();
                    d10 = ((RectangularShape)object2).getHeight() + (double)axis.d.o();
                }
                axis.j = axis.d(d9);
                double d12 = 0.0;
                if (axis.d.f()) {
                    object = "";
                    int n4 = 0;
                    while (true) {
                        axisTickCalculator_ = axis.j;
                        if (n4 >= axisTickCalculator_.b.size()) break;
                        axisTickCalculator_ = axis.j;
                        if (axisTickCalculator_.b.get(n4) != null) {
                            axisTickCalculator_ = axis.j;
                            if (((String)axisTickCalculator_.b.get(n4)).length() > ((String)object).length()) {
                                axisTickCalculator_ = axis.j;
                                object = (String)axisTickCalculator_.b.get(n4);
                            }
                        }
                        ++n4;
                    }
                    TextLayout textLayout = new TextLayout((String)(((String)object).length() == 0 ? " " : object), axis.d.g(), new FontRenderContext(null, true, false));
                    object = textLayout.getBounds();
                    d12 = ((RectangularShape)object).getWidth() + (double)axis.d.i() + (double)axis.d.h();
                }
                d5 = d10 + d12;
            } while (n2-- > 0);
            this.c.setRect(0.0, d4, d5, d3);
            return;
        }
        Rectangle2D.Double double_ = this.a.l().c();
        Rectangle2D.Double double_2 = this.a.l().d();
        double d13 = Math.max(((RectangularShape)double_).getY() + ((RectangularShape)double_).getHeight(), ((RectangularShape)double_2).getY() + ((RectangularShape)double_2).getHeight());
        double d14 = ((RectangularShape)double_).getWidth() + ((RectangularShape)double_).getX();
        double d15 = d13 + (double)this.d.n() - d2;
        double d16 = 0.0;
        if (this.d.ay() == Styler$LegendPosition.a && this.d.as()) {
            d16 = this.a.h().a().getWidth() + (double)this.d.ai();
        }
        double d17 = (double)this.a.c() - ((RectangularShape)double_).getWidth() - ((RectangularShape)double_2).getWidth() - ((RectangularShape)double_).getX() - (double)(1 * this.d.ai()) - d16;
        double d18 = (double)this.a.d() - d13 - (double)this.d.ai() - (double)this.d.n();
        this.c.setRect(d14, d15, d17, d18);
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        Object object = graphics2D.getRenderingHint(RenderingHints.KEY_ANTIALIASING);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        if (this.g == Axis$Direction.b) {
            boolean bl2 = this.d.d(this.h) == Styler$YAxisPosition.a;
            if (bl2) {
                this.f.a(graphics2D);
                this.e.a(graphics2D);
            } else {
                this.e.a(graphics2D);
                this.f.a(graphics2D);
            }
            this.c.width = (this.d.c() ? this.e.a().getWidth() : 0.0) + this.f.a().getWidth();
        } else {
            this.j = this.d(this.c.getWidth());
            this.e.a(graphics2D);
            this.f.a(graphics2D);
        }
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, object);
    }

    private AxisTickCalculator_ d(double d2) {
        public SequencedCollection sequencedCollection;
        Axis axis = this;
        if (axis.g == Axis$Direction.a) {
            public Object object2;
            public Object object3;
            List<Object> list = new ArrayList();
            if (this.d instanceof HeatMapStyler) {
                object3 = (List)((HeatMapChart)this.a).a().d();
                list = object3.stream().filter(Objects::nonNull).filter(object -> object instanceof Number).mapToDouble(object -> ((Number)object).doubleValue()).boxed().collect(Collectors.toList());
            } else if (this.d instanceof CategoryStyler) {
                object3 = new LinkedHashSet();
                for (Object object4 : ((CategoryChart)this.a).o().values()) {
                    object4 = ((AxesChartSeriesCategory)object4).h().stream().filter(Objects::nonNull).filter(object -> object instanceof Number).mapToDouble(object -> ((Number)object).doubleValue()).boxed().collect(Collectors.toList());
                    object3.addAll(object4);
                }
                list.addAll((Collection<Object>)object3);
            } else if (this.d instanceof XYStyler) {
                object3 = new LinkedHashSet();
                for (Object object4 : ((XYChart)this.a).o().values()) {
                    object3.addAll(Arrays.stream(((AxesChartSeriesNumericalNoErrorBars)object4).q()).boxed().collect(Collectors.toList()));
                }
                list.addAll((Collection<Object>)object3);
            }
            if (this.d.N() != null) {
                if (!list.isEmpty()) {
                    axis = this;
                    return new a(this.d.N(), axis.g, d2, this.k, this.l, list, this.d);
                }
                axis = this;
                return new a(this.d.N(), axis.g, d2, this.k, this.l, this.d);
            }
            if (this.d instanceof CategoryStyler || this.d instanceof BoxStyler) {
                public Object object4;
                object3 = (AxesChartSeriesCategory)this.a.o().values().iterator().next();
                object2 = (List)((AxesChartSeriesCategory)object3).h();
                axis = this.a.l().a();
                object4 = axis.i;
                axis = this;
                return new b(axis.g, d2, (List)object2, (Series$DataType)((Object)object4), this.d);
            }
            axis = this;
            if (axis.i == Series$DataType.b && !(this.d instanceof HeatMapStyler)) {
                axis = this;
                return new c(axis.g, d2, this.k, this.l, this.d);
            }
            if (this.d.r()) {
                axis = this;
                return new e(axis.g, d2, this.k, this.l, this.d);
            }
            if (this.d instanceof HeatMapStyler) {
                object3 = (List)((HeatMapChart)this.a).a().d();
                axis = this.a.l().a();
                object2 = axis.i;
                axis = this;
                return new b(axis.g, d2, (List)object3, (Series$DataType)((Object)object2), this.d);
            }
            if (!list.isEmpty()) {
                axis = this;
                return new f(axis.g, d2, this.k, this.l, list, this.d);
            }
            axis = this;
            return new f(axis.g, d2, this.k, this.l, this.d);
        }
        List<Object> list = new ArrayList();
        if (this.d instanceof HeatMapStyler) {
            sequencedCollection = (List)((HeatMapChart)this.a).a().e();
            list = sequencedCollection.stream().filter(Objects::nonNull).filter(object -> object instanceof Number).mapToDouble(object -> ((Number)object).doubleValue()).boxed().collect(Collectors.toList());
        } else if (this.d instanceof CategoryStyler) {
            sequencedCollection = new LinkedHashSet();
            for (CategorySeries categorySeries : ((CategoryChart)this.a).o().values()) {
                sequencedCollection.addAll(categorySeries.o().stream().filter(Objects::nonNull).mapToDouble(Number::doubleValue).boxed().collect(Collectors.toList()));
            }
            list.addAll(sequencedCollection);
        } else if (this.d instanceof XYStyler) {
            sequencedCollection = new LinkedHashSet();
            for (XYSeries xYSeries : ((XYChart)this.a).o().values()) {
                sequencedCollection.addAll(Arrays.stream(xYSeries.r()).boxed().collect(Collectors.toList()));
            }
            list.addAll(sequencedCollection);
        }
        if (this.d.O() != null) {
            if (!list.isEmpty()) {
                axis = this;
                return new a(this.d.O(), axis.g, d2, this.k, this.l, list, this.d);
            }
            axis = this;
            return new a(this.d.O(), axis.g, d2, this.k, this.l, this.d);
        }
        if (this.d.s()) {
            axis = this;
            if (axis.i != Series$DataType.b) {
                Axis axis2 = this;
                axis = axis2;
                axis = this;
                return new e(axis2.g, d2, this.k, this.l, this.d, axis.h);
            }
        }
        if (this.d instanceof HeatMapStyler) {
            sequencedCollection = (List)((HeatMapChart)this.a).a().e();
            axis = this.a.l().b();
            Object object5 = axis.i;
            axis = this;
            return new b(axis.g, d2, (List)sequencedCollection, (Series$DataType)((Object)object5), this.d);
        }
        if (!list.isEmpty()) {
            axis = this;
            return new f(axis.g, d2, this.k, this.l, list, this.d);
        }
        Axis axis3 = this;
        axis = axis3;
        axis = this;
        return new f(axis3.g, d2, this.k, this.l, this.d, axis.h);
    }

    public final void a(Series$DataType series$DataType) {
        if (series$DataType != null && this.i != null && this.i != series$DataType) {
            throw new IllegalArgumentException("Different Axes (e.g. Date, Number, String) cannot be mixed on the same chart!!");
        }
        this.i = series$DataType;
    }

    final double c() {
        return this.k;
    }

    final void a(double d2) {
        this.k = d2;
    }

    final double d() {
        return this.l;
    }

    final void b(double d2) {
        this.l = d2;
    }

    final AxisTick e() {
        return this.f;
    }

    final AxisTitle f() {
        return this.e;
    }

    public final AxisTickCalculator_ g() {
        return this.j;
    }

    public final Rectangle2D h() {
        return this.c;
    }

    public final int i() {
        return this.h;
    }

    public final double c(double d2) {
        public double d3;
        public boolean bl2;
        public double d4;
        public double d5;
        if (this.k == this.l) {
            return this.k;
        }
        double d6 = this.k;
        double d7 = this.l;
        if (this.k > this.l) {
            Object object = this;
            if (((Axis)object).g == Axis$Direction.a && this.d instanceof CategoryStyler) {
                object = (AxesChartSeriesCategory)this.a.o().values().iterator().next();
                int n2 = ((AxesChartSeriesCategory)object).h().size();
                d6 = 0.0;
                d7 = n2;
            }
        }
        if (this.g == Axis$Direction.a) {
            d5 = this.c.getX();
            d4 = this.c.getWidth();
            bl2 = this.d.r();
        } else {
            d5 = 0.0;
            d4 = this.c.getHeight();
            d2 = this.c.getHeight() - d2 + this.c.getY();
            bl2 = this.d.s();
        }
        double d8 = this.d.aD() * d4;
        if (d3 < (double)this.d.p()) {
            public return d6;
        }
        double d9 = Utils.a(d4, d8);
        d6 = bl2 ? Math.log10(d6) : d6;
        d7 = bl2 ? Math.log10(d7) : d7;
        double d10 = (d2 - d9 - d5) * (d7 - d6) / d8 + d6;
        d10 = bl2 ? Math.pow(10.0, d10) : d10;
        public return d10;
    }
}

