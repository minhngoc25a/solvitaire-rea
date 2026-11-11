/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.RectangularShape;
import java.math.BigDecimal;
import java.math.MathContext;
import java.math.RoundingMode;
import java.text.Format;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import org.knowm.xchart.internal.Utils;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.CategoryStyler;

public abstract class AxisTickCalculator_ {
    final List a = new LinkedList();
    final List b = new LinkedList();
    final Axis$Direction c;
    final double d;
    final double e;
    final double f;
    private List i;
    final AxesChartStyler g;
    Format h;

    AxisTickCalculator_(Axis$Direction axis$Direction, double d2, double d3, double d4, AxesChartStyler axesChartStyler) {
        this.c = axis$Direction;
        this.d = d2;
        this.e = AxisTickCalculator_.a(axesChartStyler, axis$Direction, d3);
        this.f = AxisTickCalculator_.b(axesChartStyler, axis$Direction, d4);
        this.g = axesChartStyler;
    }

    AxisTickCalculator_(Axis$Direction axis$Direction, double d2, double d3, double d4, List list, AxesChartStyler axesChartStyler) {
        this.c = axis$Direction;
        this.d = d2;
        LinkedHashSet<Double> linkedHashSet = new LinkedHashSet<Double>();
        linkedHashSet.add(d3);
        linkedHashSet.addAll(list);
        linkedHashSet.add(d4);
        this.i = new ArrayList(linkedHashSet);
        this.e = AxisTickCalculator_.a(axesChartStyler, axis$Direction, d3);
        this.f = AxisTickCalculator_.b(axesChartStyler, axis$Direction, d4);
        this.g = axesChartStyler;
    }

    final double a(double d2) {
        return this.e - this.e % d2 - d2;
    }

    final boolean a(List object, int n2) {
        String string;
        String string2 = "Y";
        if (Axis$Direction.a.equals((Object)this.c)) {
            object = object.iterator();
            while (object.hasNext()) {
                string = (String)object.next();
                if (string == null || string.length() <= string2.length()) continue;
                string2 = string;
            }
        }
        object = new TextLayout(string2, this.g.g(), new FontRenderContext(null, true, false));
        string = this.g.U() == 0 ? null : AffineTransform.getRotateInstance(-1.0 * Math.toRadians(this.g.U()));
        object = ((TextLayout)object).getOutline((AffineTransform)((Object)string));
        object = object.getBounds();
        double d2 = Axis$Direction.a.equals((Object)this.c) ? ((RectangularShape)object).getWidth() : ((RectangularShape)object).getHeight();
        return d2 * 1.1 < (double)n2;
    }

    protected void a() {
        if (this.e == this.f) {
            AxisTickCalculator_ axisTickCalculator_ = this;
            this.b.add(axisTickCalculator_.h.format(BigDecimal.valueOf(this.f).doubleValue()));
            this.a.add(this.d / 2.0);
            return;
        }
        if (this.e > this.f && this.e == Double.MAX_VALUE) {
            AxisTickCalculator_ axisTickCalculator_ = this;
            this.b.add(axisTickCalculator_.h.format(0.0));
            this.a.add(this.d / 2.0);
            return;
        }
        double d3 = this.g.aD() * this.d;
        if (this.c == Axis$Direction.a && d3 < (double)this.g.p()) {
            return;
        }
        if (this.c == Axis$Direction.b && d3 < (double)this.g.q()) {
            return;
        }
        double d5 = Utils.a(this.d, d3);
        double d6 = Math.abs(Math.min(this.f - this.e, Double.MAX_VALUE));
        if (this.i != null) {
            boolean bl2;
            AxisTickCalculator_ axisTickCalculator_ = this;
            List list = axisTickCalculator_.i;
            AxisTickCalculator_ axisTickCalculator_2 = axisTickCalculator_;
            if (list.size() < 2) {
                bl2 = false;
            } else {
                double d7 = (Double)list.get(1) - (Double)list.get(0);
                bl2 = 1.0E-4 > Math.abs(axisTickCalculator_2.f - axisTickCalculator_2.e) ? false : IntStream.range(1, list.size()).mapToDouble(n2 -> (Double)list.get(n2) - (Double)list.get(n2 - 1)).allMatch(arg_0 -> AxisTickCalculator_.a(d7, 1.0E-4, arg_0));
            }
            if (bl2) {
                List list2;
                double d8 = d5;
                double d9 = d3;
                axisTickCalculator_2 = this;
                if (axisTickCalculator_2.i == null) {
                    throw new IllegalStateException("No axis values.");
                }
                int n4 = 0;
                while (true) {
                    axisTickCalculator_2.b.clear();
                    int n5 = ++n4;
                    list2 = IntStream.range(0, axisTickCalculator_2.i.size()).filter(n3 -> n3 % n5 == 0).mapToDouble(axisTickCalculator_2.i::get).boxed().collect(Collectors.toList());
                    double d10 = list2.stream().mapToDouble(d2 -> d2).max().orElse(axisTickCalculator_2.f);
                    double d11 = list2.stream().mapToDouble(d2 -> d2).min().orElse(axisTickCalculator_2.e);
                    axisTickCalculator_2.b.addAll(list2.stream().map(d2 -> {
                        AxisTickCalculator_ axisTickCalculator_ = this;
                        return axisTickCalculator_.h.format(d2);
                    }).collect(Collectors.toList()));
                    double d12 = Math.abs(Math.min(d10 - d11, Double.MAX_VALUE));
                    double d13 = d12 / (double)(list2.size() - 1);
                    n5 = (int)(d13 / d12 * d9);
                    if (!AxisTickCalculator_.a(axisTickCalculator_2.b)) continue;
                    AxisTickCalculator_ axisTickCalculator_3 = axisTickCalculator_2;
                    if (axisTickCalculator_3.a(axisTickCalculator_3.b, n5)) break;
                }
                axisTickCalculator_2.a.clear();
                axisTickCalculator_2.a.addAll(list2.stream().map(d4 -> d8 + (d4 - this.e) / (this.f - this.e) * d9).collect(Collectors.toList()));
                return;
            }
        }
        int n6 = (this.c == Axis$Direction.a ? this.g.p() : this.g.q()) - 5;
        if (this.c == Axis$Direction.b && d3 < 160.0) {
            n6 = 20;
        }
        while (true) {
            this.b.clear();
            this.a.clear();
            double d14 = d6 / d3 * (double)(n6 += 5);
            int n7 = 0;
            if (d14 == 0.0) {
                n7 = 1;
            } else if (d14 < 1.0) {
                while (d14 < 1.0) {
                    d14 *= 10.0;
                    --n7;
                }
            } else {
                while (d14 >= 10.0 || d14 == Double.NEGATIVE_INFINITY) {
                    d14 /= 10.0;
                    ++n7;
                }
            }
            double d15 = d14 > 7.5 ? 10.0 * Utils.a(10.0, n7) : (d14 > 3.5 ? 5.0 * Utils.a(10.0, n7) : (d14 > 1.5 ? 2.0 * Utils.a(10.0, n7) : Utils.a(10.0, n7)));
            int n8 = (int)(d15 / d6 * d3);
            BigDecimal bigDecimal = new BigDecimal(d15, MathContext.DECIMAL64);
            int n9 = Math.min(10, bigDecimal.scale());
            bigDecimal = bigDecimal.setScale(n9, RoundingMode.HALF_UP).stripTrailingZeros();
            bigDecimal = bigDecimal.setScale(n9, RoundingMode.HALF_DOWN).stripTrailingZeros();
            BigDecimal bigDecimal2 = null;
            double d16 = this.a(bigDecimal.doubleValue());
            if (Double.isNaN(d16)) {
                AxisTickCalculator_ axisTickCalculator_ = this;
                this.b.add(axisTickCalculator_.h.format(BigDecimal.valueOf((this.f + this.e) / 2.0)));
                double cfr_ignored_0 = (this.f + this.e) / 2.0;
                this.a.add(this.d / 2.0);
                return;
            }
            if (d16 == Double.NEGATIVE_INFINITY) {
                bigDecimal2 = BigDecimal.valueOf(-1.7976931348623157E308);
            } else {
                try {
                    bigDecimal2 = BigDecimal.valueOf(d16);
                }
                catch (NumberFormatException numberFormatException) {
                    System.out.println("Some debug stuff. This happens once in a blue moon, and I don't know why.");
                    System.out.println("scale: " + n9);
                    System.out.println("exponent: " + n7);
                    System.out.println("gridStep: " + d15);
                    System.out.println("cleanedGridStep: " + bigDecimal);
                    System.out.println("cleanedGridStep.doubleValue(): " + bigDecimal.doubleValue());
                    System.out.println("NumberFormatException caused by this number: " + this.a(bigDecimal.doubleValue()));
                }
            }
            BigDecimal bigDecimal3 = bigDecimal2.setScale(10, RoundingMode.HALF_UP).stripTrailingZeros();
            while (bigDecimal3.compareTo(BigDecimal.valueOf(this.f + 2.0 * bigDecimal.doubleValue() == Double.POSITIVE_INFINITY ? Double.MAX_VALUE : this.f + 2.0 * bigDecimal.doubleValue())) < 0) {
                Object object = this;
                object = ((AxisTickCalculator_)object).h.format(bigDecimal3.doubleValue());
                this.b.add(object);
                double d17 = d5 + (bigDecimal3.doubleValue() - this.e) / (this.f - this.e) * d3;
                this.a.add(d17);
                bigDecimal3 = bigDecimal3.add(bigDecimal);
            }
            if (!AxisTickCalculator_.a(this.b)) continue;
            AxisTickCalculator_ axisTickCalculator_ = this;
            if (axisTickCalculator_.a(axisTickCalculator_.b, n8)) break;
        }
    }

    static boolean a(List list) {
        return new LinkedHashSet(list).size() == list.size();
    }

    private static double a(AxesChartStyler axesChartStyler, Axis$Direction axis$Direction, double d2) {
        if (Axis$Direction.b.equals((Object)axis$Direction) && axesChartStyler instanceof CategoryStyler && d2 > 0.0) {
            return 0.0;
        }
        return d2;
    }

    private static double b(AxesChartStyler axesChartStyler, Axis$Direction axis$Direction, double d2) {
        if (Axis$Direction.b.equals((Object)axis$Direction) && axesChartStyler instanceof CategoryStyler && d2 < 0.0) {
            return 0.0;
        }
        return d2;
    }

    private static /* synthetic */ boolean a(double d2, double d3, double d4) {
        return Math.abs(d4 - d2) < d3;
    }
}

