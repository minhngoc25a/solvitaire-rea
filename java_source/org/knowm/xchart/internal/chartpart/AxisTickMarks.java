/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.geom.Line2D;
import java.awt.geom.Rectangle2D;
import org.knowm.xchart.internal.chartpart.Axis;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.Styler$YAxisPosition;

public class AxisTickMarks
implements ChartPart {
    private final Chart a;
    private final Axis$Direction c;
    private final Axis d;
    private Rectangle2D e;

    AxisTickMarks(Chart chart, Axis$Direction axis$Direction, Axis axis) {
        this.a = chart;
        this.c = axis$Direction;
        this.d = axis;
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        AxesChartStyler axesChartStyler = (AxesChartStyler)this.a.b();
        graphics2D.setStroke(axesChartStyler.k());
        if (this.c == Axis$Direction.b && axesChartStyler.f()) {
            double d2;
            double d3;
            graphics2D.setColor(axesChartStyler.c(this.d.i()));
            int n2 = axesChartStyler.h();
            boolean bl2 = axesChartStyler.d(this.d.i()) == Styler$YAxisPosition.a;
            Rectangle2D rectangle2D = this.d.h();
            Rectangle2D rectangle2D2 = this.d.e().b().a();
            if (bl2) {
                d2 = d3 = rectangle2D2.getX() - (double)axesChartStyler.i() - (double)n2;
            } else {
                d3 = rectangle2D2.getX() + rectangle2D2.getWidth() + (double)axesChartStyler.i();
                d2 = d3 + (double)n2;
            }
            double d4 = rectangle2D.getY();
            this.e = new Rectangle2D.Double(d3, d4, ((AxesChartStyler)this.a.b()).h(), this.d.h().getHeight());
            if (axesChartStyler.m()) {
                int n3 = 0;
                while (true) {
                    double d5;
                    AxisTickCalculator_ axisTickCalculator_ = this.d.g();
                    if (n3 >= axisTickCalculator_.b.size()) break;
                    axisTickCalculator_ = this.d.g();
                    double d6 = (Double)axisTickCalculator_.a.get(n3);
                    double d7 = d4 + rectangle2D.getHeight() - d6;
                    if (d5 > this.e.getY() && d7 < this.e.getY() + this.e.getHeight()) {
                        Line2D.Double double_ = new Line2D.Double(d3, d7, d3 + (double)n2, d7);
                        graphics2D.draw(double_);
                    }
                    ++n3;
                }
            }
            if (axesChartStyler.l()) {
                Line2D.Double double_ = new Line2D.Double(d2, d4, d2, d4 + rectangle2D.getHeight());
                graphics2D.draw(double_);
            }
            return;
        }
        if (this.c == Axis$Direction.a && axesChartStyler.e()) {
            graphics2D.setColor(axesChartStyler.Q());
            int n4 = axesChartStyler.h();
            double d8 = this.a.j().h().getX();
            double d9 = this.a.j().e().b().a().getY() - (double)axesChartStyler.i();
            this.e = new Rectangle2D.Double(d8, d9 - (double)n4, this.a.j().h().getWidth(), n4);
            if (axesChartStyler.m()) {
                int n5 = 0;
                while (true) {
                    double d10;
                    AxisTickCalculator_ axisTickCalculator_ = this.a.j().g();
                    if (n5 >= axisTickCalculator_.b.size()) break;
                    axisTickCalculator_ = this.a.j().g();
                    double d11 = (Double)axisTickCalculator_.a.get(n5);
                    double d12 = d8 + d11;
                    if (d10 > this.e.getX() && d12 < this.e.getX() + this.e.getWidth()) {
                        Line2D.Double double_ = new Line2D.Double(d12, d9, d8 + d11, d9 - (double)n4);
                        graphics2D.draw(double_);
                    }
                    ++n5;
                }
            }
            if (axesChartStyler.l()) {
                graphics2D.setStroke(axesChartStyler.k());
                graphics2D.drawLine((int)d8, (int)(d9 - (double)n4), (int)(d8 + this.a.j().h().getWidth()), (int)(d9 - (double)n4));
            }
            return;
        }
        this.e = new Rectangle2D.Double();
    }

    public final Rectangle2D a() {
        return this.e;
    }
}

