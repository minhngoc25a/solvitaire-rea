/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.Shape;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RectangularShape;
import org.knowm.xchart.internal.chartpart.Axis;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.Styler$YAxisPosition;

public class AxisTitle
implements ChartPart {
    private final Chart a;
    private final Axis$Direction c;
    private final Axis d;
    private final int e;
    private Rectangle2D f;

    AxisTitle(Chart chart, Axis$Direction axis$Direction, Axis axis, int n2) {
        this.a = chart;
        this.c = axis$Direction;
        this.d = axis;
        this.e = n2;
    }

    /*
     * Enabled aggressive block sorting
     */
    @Override
    public final void a(Graphics2D graphics2D) {
        this.f = new Rectangle2D.Double();
        graphics2D.setColor(((AxesChartStyler)this.a.b()).ah());
        graphics2D.setFont(((AxesChartStyler)this.a.b()).d());
        if (this.c == Axis$Direction.b) {
            Object object = this.a.c(this.e);
            if (object != null && !((String)object).trim().equalsIgnoreCase("") && ((AxesChartStyler)this.a.b()).c()) {
                if (((AxesChartStyler)this.a.b()).e(this.e) != null) {
                    graphics2D.setColor(((AxesChartStyler)this.a.b()).e(this.e));
                }
                Object object2 = graphics2D.getFontRenderContext();
                object = new TextLayout((String)object, ((AxesChartStyler)this.a.b()).d(), (FontRenderContext)object2);
                Rectangle2D rectangle2D = ((TextLayout)object).getBounds();
                boolean bl2 = ((AxesChartStyler)this.a.b()).d(this.d.i()) == Styler$YAxisPosition.a;
                int n2 = bl2 ? (int)(this.d.e().a().getX() + this.d.e().a().getWidth() + rectangle2D.getHeight()) : (int)(this.d.h().getX() + rectangle2D.getHeight());
                int n3 = (int)((this.d.h().getHeight() + rectangle2D.getWidth()) / 2.0 + this.d.h().getY());
                object2 = AffineTransform.getRotateInstance(-1.5707963267948966, 0.0, 0.0);
                Shape shape = ((TextLayout)object).getOutline((AffineTransform)object2);
                AffineTransform affineTransform = graphics2D.getTransform();
                object = new AffineTransform();
                ((AffineTransform)object).translate(n2, n3);
                graphics2D.transform((AffineTransform)object);
                graphics2D.fill(shape);
                graphics2D.setTransform(affineTransform);
                this.f = new Rectangle2D.Double((double)n2 - rectangle2D.getHeight(), (double)n3 - rectangle2D.getWidth(), rectangle2D.getHeight() + (double)((AxesChartStyler)this.a.b()).o(), rectangle2D.getWidth());
                return;
            }
            this.f = new Rectangle2D.Double(this.d.h().getX(), this.d.h().getY(), 0.0, this.d.h().getHeight());
            return;
        }
        if (this.a.f() != null && !this.a.f().trim().equalsIgnoreCase("") && ((AxesChartStyler)this.a.b()).b()) {
            if (((AxesChartStyler)this.a.b()).aU() != null) {
                graphics2D.setColor(((AxesChartStyler)this.a.b()).aU());
            }
            Object object = graphics2D.getFontRenderContext();
            Object object3 = new TextLayout(this.a.f(), ((AxesChartStyler)this.a.b()).d(), (FontRenderContext)object);
            object = ((TextLayout)object3).getBounds();
            double d2 = this.a.j().h().getX() + (this.a.j().h().getWidth() - ((RectangularShape)object).getWidth()) / 2.0;
            double d3 = this.a.j().h().getY() + this.a.j().h().getHeight() - ((RectangularShape)object).getHeight();
            object3 = ((TextLayout)object3).getOutline(null);
            AffineTransform affineTransform = graphics2D.getTransform();
            AffineTransform affineTransform2 = new AffineTransform();
            affineTransform2.translate((float)d2, (float)(d3 - ((RectangularShape)object).getY()));
            graphics2D.transform(affineTransform2);
            graphics2D.fill((Shape)object3);
            graphics2D.setTransform(affineTransform);
            this.f = new Rectangle2D.Double(d2, d3 - (double)((AxesChartStyler)this.a.b()).o(), ((RectangularShape)object).getWidth(), ((RectangularShape)object).getHeight() + (double)((AxesChartStyler)this.a.b()).o());
            return;
        }
        this.f = new Rectangle2D.Double(this.a.j().h().getX(), this.a.j().h().getY() + this.a.j().h().getHeight(), this.a.j().h().getWidth(), 0.0);
    }

    public final Rectangle2D a() {
        return this.f;
    }
}

