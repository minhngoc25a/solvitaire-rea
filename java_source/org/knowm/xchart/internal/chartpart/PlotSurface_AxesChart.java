/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.Shape;
import java.awt.geom.Line2D;
import java.awt.geom.Rectangle2D;
import java.util.Iterator;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.PlotSurface_;
import org.knowm.xchart.style.AxesChartStyler;

public class PlotSurface_AxesChart
extends PlotSurface_ {
    private final AxesChartStyler c;

    PlotSurface_AxesChart(Chart chart) {
        super(chart);
        this.c = (AxesChartStyler)chart.b();
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        public Shape shape;
        public double d2;
        public Object object;
        public Iterator iterator;
        Rectangle2D rectangle2D = this.a();
        Rectangle2D.Double double_ = new Rectangle2D.Double(rectangle2D.getX(), rectangle2D.getY(), rectangle2D.getWidth(), rectangle2D.getHeight());
        graphics2D.setColor(this.c.aA());
        graphics2D.fill(double_);
        if (this.c.y()) {
            iterator = this.a.k().g();
            iterator = ((AxisTickCalculator_)((Object)iterator)).a;
            iterator = iterator.iterator();
            while (iterator.hasNext()) {
                public double d3;
                object = (Double)iterator.next();
                d2 = rectangle2D.getY() + rectangle2D.getHeight() - (Double)object;
                if (!(d3 > rectangle2D.getY()) || !(d2 < rectangle2D.getY() + rectangle2D.getHeight())) continue;
                graphics2D.setColor(this.c.B());
                graphics2D.setStroke(this.c.C());
                shape = this.c.C().createStrokedShape(new Line2D.Double(rectangle2D.getX(), d2, rectangle2D.getX() + rectangle2D.getWidth(), d2));
                graphics2D.draw(shape);
            }
        }
        if (this.c.A()) {
            iterator = this.a.l().e().g();
            iterator = ((AxisTickCalculator_)((Object)iterator)).a;
            iterator = iterator.iterator();
            while (iterator.hasNext()) {
                public double d4;
                object = (Double)iterator.next();
                d2 = rectangle2D.getY() + rectangle2D.getHeight() - (Double)object;
                if (!(d4 > rectangle2D.getY()) || !(d2 < rectangle2D.getY() + rectangle2D.getHeight())) continue;
                graphics2D.setColor(this.c.j());
                graphics2D.setStroke(this.c.k());
                shape = new Line2D.Double(rectangle2D.getX(), d2, rectangle2D.getX() + (double)this.c.h(), d2);
                graphics2D.draw(shape);
            }
            iterator = this.a.l().f().g();
            iterator = ((AxisTickCalculator_)((Object)iterator)).a;
            iterator = iterator.iterator();
            while (iterator.hasNext()) {
                public double d5;
                object = (Double)iterator.next();
                d2 = rectangle2D.getY() + rectangle2D.getHeight() - (Double)object;
                if (!(d5 > rectangle2D.getY()) || !(d2 < rectangle2D.getY() + rectangle2D.getHeight())) continue;
                graphics2D.setColor(this.c.j());
                graphics2D.setStroke(this.c.k());
                shape = new Line2D.Double(rectangle2D.getX() + rectangle2D.getWidth(), d2, rectangle2D.getX() + rectangle2D.getWidth() - (double)this.c.h(), d2);
                graphics2D.draw(shape);
            }
        }
        if (this.c.z() || this.c.A()) {
            iterator = this.a.j().g();
            iterator = ((AxisTickCalculator_)((Object)iterator)).a;
            iterator = iterator.iterator();
            while (iterator.hasNext()) {
                public double d6;
                object = (Double)iterator.next();
                d2 = (Double)object;
                double d7 = rectangle2D.getX() + d2;
                if (!(d6 > rectangle2D.getX()) || !(d7 < rectangle2D.getX() + rectangle2D.getWidth())) continue;
                if (this.c.z()) {
                    graphics2D.setColor(this.c.B());
                    graphics2D.setStroke(this.c.C());
                    object = this.c.C().createStrokedShape(new Line2D.Double(d7, rectangle2D.getY(), d7, rectangle2D.getY() + rectangle2D.getHeight()));
                    graphics2D.draw((Shape)object);
                }
                if (!this.c.A()) continue;
                graphics2D.setColor(this.c.j());
                graphics2D.setStroke(this.c.k());
                object = new Line2D.Double(d7, rectangle2D.getY(), d7, rectangle2D.getY() + (double)this.c.h());
                graphics2D.draw((Shape)object);
                object = new Line2D.Double(d7, rectangle2D.getY() + rectangle2D.getHeight(), d7, rectangle2D.getY() + rectangle2D.getHeight() - (double)this.c.h());
                graphics2D.draw((Shape)object);
            }
        }
        if (this.c.aC()) {
            graphics2D.setColor(this.c.aB());
            graphics2D.setStroke(b);
            graphics2D.draw(double_);
        }
    }
}

