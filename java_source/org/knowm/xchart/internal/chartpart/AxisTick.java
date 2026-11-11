/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.geom.Rectangle2D;
import org.knowm.xchart.internal.chartpart.Axis;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.AxisTickLabels;
import org.knowm.xchart.internal.chartpart.AxisTickMarks;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.style.AxesChartStyler;

public class AxisTick
implements ChartPart {
    private final Chart a;
    private final Axis$Direction c;
    private final AxisTickLabels d;
    private final AxisTickMarks e;
    private Rectangle2D f;

    AxisTick(Chart chart, Axis$Direction axis$Direction, Axis axis) {
        this.a = chart;
        this.c = axis$Direction;
        this.d = new AxisTickLabels(chart, axis$Direction, axis);
        this.e = new AxisTickMarks(chart, axis$Direction, axis);
    }

    public final Rectangle2D a() {
        return this.f;
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        if (this.c == Axis$Direction.b && ((AxesChartStyler)this.a.b()).f()) {
            this.d.a(graphics2D);
            this.e.a(graphics2D);
            this.f = new Rectangle2D.Double(this.d.a().getX(), this.d.a().getY(), this.d.a().getWidth() + (double)((AxesChartStyler)this.a.b()).i() + this.e.a().getWidth(), this.e.a().getHeight());
            return;
        }
        if (this.c == Axis$Direction.a && ((AxesChartStyler)this.a.b()).e()) {
            this.d.a(graphics2D);
            this.e.a(graphics2D);
            this.f = new Rectangle2D.Double(this.e.a().getX(), this.e.a().getY(), this.d.a().getWidth(), this.e.a().getHeight() + (double)((AxesChartStyler)this.a.b()).i() + this.d.a().getHeight());
            return;
        }
        this.f = new Rectangle2D.Double();
    }

    final AxisTickLabels b() {
        return this.d;
    }
}

