/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.BasicStroke;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.Shape;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RectangularShape;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.Plot_;

public class ChartTitle
implements ChartPart {
    private final Chart a;
    private Rectangle2D c;

    public ChartTitle(Chart chart) {
        this.a = chart;
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        graphics2D.setFont(this.a.b().am());
        if (!this.a.b().an() || this.a.e().length() == 0) {
            return;
        }
        Object object = graphics2D.getRenderingHint(RenderingHints.KEY_ANTIALIASING);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        Object object2 = graphics2D.getFontRenderContext();
        object2 = new TextLayout(this.a.e(), this.a.b().am(), (FontRenderContext)object2);
        Rectangle2D rectangle2D = ((TextLayout)object2).getBounds();
        Plot_ plot_ = this.a.i();
        double d2 = plot_.c.getX();
        double d3 = this.a.b().ai();
        if (this.a.b().ao()) {
            plot_ = this.a.i();
            double d4 = plot_.c.getWidth();
            double d5 = rectangle2D.getHeight() + (double)(2 * this.a.b().ar());
            graphics2D.setStroke(new BasicStroke(1.0f, 0, 2));
            Rectangle2D.Double double_ = new Rectangle2D.Double(d2, d3, d4, d5);
            graphics2D.setColor(this.a.b().ap());
            graphics2D.fill(double_);
            graphics2D.setColor(this.a.b().aq());
            graphics2D.draw(double_);
        }
        Plot_ plot_2 = this.a.i();
        plot_ = plot_2;
        plot_ = this.a.i();
        d2 = plot_2.c.getX() + (plot_.c.getWidth() - rectangle2D.getWidth()) / 2.0;
        d3 = (double)this.a.b().ai() + rectangle2D.getHeight() + (double)this.a.b().ar();
        graphics2D.setColor(this.a.b().ah());
        Shape shape = ((TextLayout)object2).getOutline(null);
        AffineTransform affineTransform = graphics2D.getTransform();
        AffineTransform affineTransform2 = new AffineTransform();
        affineTransform2.translate(d2, d3);
        graphics2D.transform(affineTransform2);
        graphics2D.fill(shape);
        graphics2D.setTransform(affineTransform);
        double d6 = (double)(2 * this.a.b().ar()) + rectangle2D.getWidth();
        double d7 = (double)(2 * this.a.b().ar()) + rectangle2D.getHeight();
        this.c = new Rectangle2D.Double(d2 - (double)this.a.b().ar(), d3 - rectangle2D.getHeight() - (double)this.a.b().ar(), d6, d7);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, object);
    }

    public final Rectangle2D a() {
        if (this.c == null) {
            Rectangle2D.Double double_;
            ChartTitle chartTitle = this;
            if (chartTitle.a.b().an() && chartTitle.a.e().length() > 0) {
                Cloneable cloneable = new TextLayout(chartTitle.a.e(), chartTitle.a.b().am(), new FontRenderContext(null, true, false));
                cloneable = ((TextLayout)cloneable).getBounds();
                double d2 = (double)(2 * chartTitle.a.b().ar()) + ((RectangularShape)cloneable).getWidth();
                double d3 = (double)(2 * chartTitle.a.b().ar()) + ((RectangularShape)cloneable).getHeight();
                double_ = new Rectangle2D.Double(Double.NaN, Double.NaN, d2, d3);
            } else {
                double_ = new Rectangle2D.Double();
            }
            chartTitle.c = double_;
        }
        return this.c;
    }
}

