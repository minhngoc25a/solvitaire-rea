/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.Shape;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RectangularShape;
import java.util.HashMap;
import java.util.Map;
import org.knowm.xchart.internal.chartpart.Axis;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.g;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.Styler$YAxisPosition;

public class AxisTickLabels
implements ChartPart {
    private final Chart a;
    private final Axis$Direction c;
    private final Axis d;
    private Rectangle2D e;

    AxisTickLabels(Chart chart, Axis$Direction axis$Direction, Axis axis) {
        this.a = chart;
        this.c = axis$Direction;
        this.d = axis;
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        AxesChartStyler axesChartStyler = (AxesChartStyler)this.a.b();
        graphics2D.setFont(axesChartStyler.g());
        if (this.c == Axis$Direction.b && axesChartStyler.f()) {
            public Object object;
            public double d2;
            public double d3;
            graphics2D.setColor(axesChartStyler.b(this.d.i()));
            boolean bl2 = axesChartStyler.d(this.d.i()) == Styler$YAxisPosition.a;
            if (bl2) {
                d3 = this.d.h().getX() + (double)(axesChartStyler.f() ? axesChartStyler.h() + axesChartStyler.i() : 0);
            } else {
                d2 = this.d.f().a().getWidth();
                d3 = this.d.f().a().getX() + d2;
            }
            d2 = this.d.h().getY();
            double d4 = this.d.h().getHeight();
            double d5 = 0.0;
            HashMap<Double, TextLayout> hashMap = new HashMap<Double, TextLayout>();
            int n2 = 0;
            while (true) {
                object = this.d.g();
                if (n2 >= ((AxisTickCalculator_)object).b.size()) break;
                object = this.d.g();
                String string = (String)((AxisTickCalculator_)object).b.get(n2);
                object = this.d.g();
                double d6 = (Double)((AxisTickCalculator_)object).a.get(n2);
                double d7 = d2 + d4 - d6;
                if (string != null && d7 > d2 && d7 < d2 + d4) {
                    public double d8;
                    FontRenderContext fontRenderContext = graphics2D.getFontRenderContext();
                    TextLayout textLayout = new TextLayout(string, axesChartStyler.g(), fontRenderContext);
                    Rectangle2D d18 = textLayout.getBounds();
                    double d9 = d18.getWidth();
                    if (d8 > d5) {
                        d5 = d9;
                    }
                    hashMap.put(d6, textLayout);
                }
                ++n2;
            }
            for (Map.Entry d19 : hashMap.entrySet()) {
                public double d10;
                object = (Double)d19.getKey();
                TextLayout textLayout = (TextLayout)d19.getValue();
                Shape shape = textLayout.getOutline(null);
                Rectangle rectangle = shape.getBounds();
                double d11 = d2 + d4 - (Double)object;
                AffineTransform shape2 = graphics2D.getTransform();
                AffineTransform affineTransform = new AffineTransform();
                double d12 = ((RectangularShape)rectangle).getWidth();
                switch (g.a[axesChartStyler.T().ordinal()]) {
                    case 1: {
                        d10 = d3 + d5 - d12;
                        break;
                    }
                    case 2: {
                        d10 = d3 + (d5 - d12) / 2.0;
                        break;
                    }
                    default: {
                        d10 = d3;
                    }
                }
                affineTransform.translate(d10, d11 + ((RectangularShape)rectangle).getHeight() / 2.0);
                graphics2D.transform(affineTransform);
                graphics2D.fill(shape);
                graphics2D.setTransform(shape2);
            }
            this.e = new Rectangle2D.Double(d3, d2, d5, d4);
            return;
        }
        if (this.c == Axis$Direction.a && axesChartStyler.e()) {
            public Rectangle2D rectangle2D;
            public AffineTransform affineTransform;
            public TextLayout textLayout;
            public FontRenderContext fontRenderContext;
            public double d13;
            public String string;
            public AxisTickCalculator_ axisTickCalculator_;
            graphics2D.setColor(axesChartStyler.P());
            double d14 = this.a.j().h().getX();
            double d15 = this.a.j().f().a().getY();
            double d16 = this.a.j().h().getWidth();
            double d17 = 0.0;
            int n2 = 0;
            int n4 = 0;
            while (true) {
                axisTickCalculator_ = this.a.j().g();
                if (n4 >= axisTickCalculator_.b.size()) break;
                axisTickCalculator_ = this.a.j().g();
                string = (String)axisTickCalculator_.b.get(n4);
                axisTickCalculator_ = this.a.j().g();
                double d18 = (Double)axisTickCalculator_.a.get(n4);
                d13 = d14 + d18;
                if (string != null && d13 > d14 && d13 < d14 + d16) {
                    fontRenderContext = graphics2D.getFontRenderContext();
                    textLayout = new TextLayout(string, axesChartStyler.g(), fontRenderContext);
                    affineTransform = AffineTransform.getRotateInstance(-1.0 * Math.toRadians(axesChartStyler.U()), 0.0, 0.0);
                    Shape shape = textLayout.getOutline(affineTransform);
                    rectangle2D = shape.getBounds2D();
                    if (rectangle2D.getBounds().height > n2) {
                        n2 = rectangle2D.getBounds().height;
                    }
                }
                ++n4;
            }
            n4 = 0;
            while (true) {
                axisTickCalculator_ = this.a.j().g();
                if (n4 >= axisTickCalculator_.b.size()) break;
                axisTickCalculator_ = this.a.j().g();
                string = (String)axisTickCalculator_.b.get(n4);
                axisTickCalculator_ = this.a.j().g();
                double d19 = (Double)axisTickCalculator_.a.get(n4);
                d13 = d14 + d19;
                if (string != null && d13 > d14 && d13 < d14 + d16) {
                    public double d20;
                    public int n3;
                    fontRenderContext = graphics2D.getFontRenderContext();
                    textLayout = new TextLayout(string, axesChartStyler.g(), fontRenderContext);
                    affineTransform = AffineTransform.getRotateInstance(-1.0 * Math.toRadians(axesChartStyler.U()), 0.0, 0.0);
                    Shape shape = textLayout.getOutline(affineTransform);
                    rectangle2D = shape.getBounds2D();
                    int n5 = rectangle2D.getBounds().height;
                    switch (g.a[axesChartStyler.S().ordinal()]) {
                        case 1: {
                            n3 = n2 - n5;
                            break;
                        }
                        case 2: {
                            n3 = (n2 - n5) / 2;
                            break;
                        }
                        default: {
                            n3 = 0;
                        }
                    }
                    AffineTransform affineTransform2 = graphics2D.getTransform();
                    AffineTransform affineTransform3 = new AffineTransform();
                    switch (g.a[axesChartStyler.R().ordinal()]) {
                        case 3: {
                            d20 = d13;
                            break;
                        }
                        case 1: {
                            d20 = d13 - rectangle2D.getWidth();
                            break;
                        }
                        default: {
                            d20 = d13 - rectangle2D.getWidth() / 2.0;
                        }
                    }
                    double d21 = -1.0 * rectangle2D.getX() * Math.sin(Math.toRadians(axesChartStyler.U()));
                    double d22 = -1.0 * (rectangle2D.getY() + rectangle2D.getHeight() + (double)n3);
                    affineTransform3.translate(d20 + d21, d15 + d22);
                    if (d20 > 0.0 && d20 + rectangle2D.getWidth() < (double)this.a.c()) {
                        graphics2D.transform(affineTransform3);
                        graphics2D.fill(shape);
                        graphics2D.setTransform(affineTransform2);
                    }
                    if (rectangle2D.getHeight() > d17) {
                        d17 = rectangle2D.getHeight();
                    }
                }
                ++n4;
            }
            this.e = new Rectangle2D.Double(d14, d15 - d17, d16, d17);
            return;
        }
        this.e = new Rectangle2D.Double();
    }

    public final Rectangle2D a() {
        return this.e;
    }
}

