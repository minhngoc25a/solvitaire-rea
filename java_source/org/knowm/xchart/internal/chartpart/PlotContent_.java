/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.BasicStroke;
import java.awt.Graphics2D;
import java.awt.Shape;
import java.awt.geom.Path2D;
import java.awt.geom.Rectangle2D;
import org.knowm.xchart.XYChart;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.ChartZoom;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.internal.chartpart.ToolTips;
import org.knowm.xchart.style.XYStyler;

public abstract class PlotContent_
implements ChartPart {
    final Chart a;
    ToolTips c;
    ChartZoom d;
    static final BasicStroke e = new BasicStroke(1.0f, 0, 2);

    PlotContent_(Chart chart) {
        this.a = chart;
    }

    protected abstract void b(Graphics2D var1);

    @Override
    public void a(Graphics2D graphics2D) {
        Rectangle2D rectangle2D;
        Rectangle2D rectangle2D2 = this.a();
        if (rectangle2D.getWidth() < 30.0) {
            return;
        }
        Shape shape = graphics2D.getClip();
        if (shape != null) {
            graphics2D.setClip(rectangle2D2.createIntersection(shape.getBounds2D()));
        } else {
            graphics2D.setClip(rectangle2D2);
        }
        if (this.a.b().aK()) {
            this.c.a();
        }
        this.b(graphics2D);
        if (this.a.b().aK()) {
            this.c.a(graphics2D);
        }
        if (this.a instanceof XYChart && ((XYStyler)this.a.b()).W()) {
            this.d.a(graphics2D);
        }
        graphics2D.setClip(shape);
    }

    public final Rectangle2D a() {
        Plot_ plot_ = this.a.i();
        return plot_.c;
    }

    final void a(Graphics2D graphics2D, Path2D.Double double_, double d2, double d3) {
        if (double_ != null) {
            double d4 = this.a().getY() + this.a().getHeight() - d3;
            double_.lineTo(d2, d4);
            double_.closePath();
            graphics2D.fill(double_);
        }
    }
}

