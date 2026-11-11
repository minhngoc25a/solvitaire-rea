/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.LinearGradientPaint;
import java.awt.RenderingHints;
import java.awt.Shape;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.Point2D;
import java.awt.geom.Rectangle2D;
import java.text.DecimalFormat;
import java.text.Format;
import java.util.function.BiFunction;
import org.knowm.xchart.HeatMapChart;
import org.knowm.xchart.HeatMapSeries;
import org.knowm.xchart.internal.chartpart.Formatter_Custom;
import org.knowm.xchart.internal.chartpart.Legend_;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.internal.chartpart.n;
import org.knowm.xchart.style.HeatMapStyler;
import org.knowm.xchart.style.Styler$LegendLayout;

public class Legend_HeatMap
extends Legend_ {
    private Format e;

    @Override
    public final void a(Graphics2D graphics2D) {
        Plot_ plot_;
        if (!((HeatMapStyler)this.a.b()).as()) {
            return;
        }
        if (this.a.o().isEmpty()) {
            return;
        }
        Plot_ plot_2 = this.a.i();
        if (plot_.c.getWidth() < 30.0) {
            return;
        }
        Rectangle2D rectangle2D = ((Legend_)this).a();
        switch (n.a[((HeatMapStyler)this.a.b()).ay().ordinal()]) {
            case 1: {
                this.c = (double)this.a.c() - rectangle2D.getWidth() - 6.0;
                Plot_ plot_3 = this.a.i();
                plot_2 = plot_3;
                plot_2 = this.a.i();
                this.d = plot_3.c.getY() + (plot_2.c.getHeight() - rectangle2D.getHeight()) / 2.0;
                break;
            }
            case 2: {
                Plot_ plot_4 = this.a.i();
                plot_2 = plot_4;
                plot_2 = this.a.i();
                this.c = plot_4.c.getX() + (plot_2.c.getWidth() - rectangle2D.getWidth()) / 2.0;
                this.d = (double)this.a.d() - rectangle2D.getHeight() - 6.0;
            }
        }
        rectangle2D = new Rectangle2D.Double(this.c, this.d, rectangle2D.getWidth(), rectangle2D.getHeight());
        graphics2D.setColor(((HeatMapStyler)this.a.b()).at());
        graphics2D.fill(rectangle2D);
        graphics2D.setStroke(b);
        graphics2D.setColor(((HeatMapStyler)this.a.b()).au());
        graphics2D.draw(rectangle2D);
        this.b(graphics2D);
    }

    @Override
    public final void b(Graphics2D graphics2D) {
        this.b();
        double d2 = this.c + (double)((HeatMapStyler)this.a.b()).aw();
        double d3 = this.d + (double)((HeatMapStyler)this.a.b()).aw();
        Object object = graphics2D.getRenderingHint(RenderingHints.KEY_ANTIALIASING);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        Color[] colorArray = ((HeatMapStyler)this.a.b()).X();
        HeatMapSeries heatMapSeries = ((HeatMapChart)this.a).a();
        if (((HeatMapStyler)this.a.b()).V()) {
            this.a(graphics2D, d2, d3, colorArray, heatMapSeries);
        } else {
            this.b(graphics2D, d2, d3, colorArray, heatMapSeries);
        }
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, object);
    }

    @Override
    public final Rectangle2D a() {
        this.b();
        double d4 = 0.0;
        double d5 = 0.0;
        Object object = ((HeatMapChart)this.a).a();
        double d6 = ((HeatMapSeries)object).f();
        double d7 = ((HeatMapSeries)object).g();
        if (((HeatMapStyler)this.a.b()).V()) {
            int n2 = ((HeatMapStyler)this.a.b()).W();
            double d8 = (d7 - d6) / (double)n2;
            BiFunction<Double, Double, String> biFunction = ((HeatMapStyler)this.a.b()).ac() ? (d2, d3) -> this.e.format(d2) + " ~ " + this.e.format(d3) : (d2, d3) -> this.e.format(d2);
            for (int i2 = 0; i2 < n2; ++i2) {
                Object object2 = i2 == 0 ? biFunction.apply(d6, d6 + d8) : (i2 == n2 - 1 ? biFunction.apply(d6 + d8 * (double)i2, d7) : biFunction.apply(d6 + d8 * (double)i2, d6 + d8 * (double)(i2 + 1)));
                object2 = new TextLayout((String)object2, ((HeatMapStyler)this.a.b()).av(), new FontRenderContext(null, true, false));
                if (((HeatMapStyler)this.a.b()).az() == Styler$LegendLayout.a) {
                    d4 = Math.max(d4, ((TextLayout)object2).getBounds().getWidth());
                    d5 += (double)(((HeatMapStyler)this.a.b()).av().getSize() + ((HeatMapStyler)this.a.b()).aw());
                    continue;
                }
                d4 += (double)(20 + ((HeatMapStyler)this.a.b()).aw()) + ((TextLayout)object2).getBounds().getWidth() + (double)((HeatMapStyler)this.a.b()).aw();
            }
            if (((HeatMapStyler)this.a.b()).az() == Styler$LegendLayout.a) {
                d4 = (double)(((HeatMapStyler)this.a.b()).aw() + 20 + ((HeatMapStyler)this.a.b()).aw()) + d4 + (double)((HeatMapStyler)this.a.b()).aw();
                d5 += (double)((HeatMapStyler)this.a.b()).aw();
            } else {
                d4 += (double)((HeatMapStyler)this.a.b()).aw();
                d5 = ((HeatMapStyler)this.a.b()).aw() + ((HeatMapStyler)this.a.b()).av().getSize() + ((HeatMapStyler)this.a.b()).aw();
            }
        } else {
            object = new TextLayout(d6 + "", ((HeatMapStyler)this.a.b()).av(), new FontRenderContext(null, true, false));
            TextLayout textLayout = new TextLayout(d7 + "", ((HeatMapStyler)this.a.b()).av(), new FontRenderContext(null, true, false));
            if (((HeatMapStyler)this.a.b()).az() == Styler$LegendLayout.a) {
                d4 = (double)(((HeatMapStyler)this.a.b()).aw() + ((HeatMapStyler)this.a.b()).Y() + ((HeatMapStyler)this.a.b()).aw()) + Math.max(((TextLayout)object).getBounds().getWidth(), textLayout.getBounds().getWidth()) + (double)((HeatMapStyler)this.a.b()).aw();
                d5 = ((HeatMapStyler)this.a.b()).aw() + ((HeatMapStyler)this.a.b()).av().getSize() + ((HeatMapStyler)this.a.b()).Z() + ((HeatMapStyler)this.a.b()).av().getSize() + ((HeatMapStyler)this.a.b()).aw();
            } else {
                d4 = (double)((HeatMapStyler)this.a.b()).aw() + ((TextLayout)object).getBounds().getWidth() + (double)((HeatMapStyler)this.a.b()).Z() + textLayout.getBounds().getWidth() + (double)((HeatMapStyler)this.a.b()).aw();
                d5 = ((HeatMapStyler)this.a.b()).aw() + ((HeatMapStyler)this.a.b()).av().getSize() + ((HeatMapStyler)this.a.b()).aw() + ((HeatMapStyler)this.a.b()).Y() + ((HeatMapStyler)this.a.b()).aw();
            }
        }
        return new Rectangle2D.Double(0.0, 0.0, d4, d5);
    }

    private void a(Graphics2D graphics2D, double d4, double d5, Color[] colorArray, HeatMapSeries object) {
        int n2 = ((HeatMapStyler)this.a.b()).W();
        double d6 = ((HeatMapSeries)object).f();
        double d7 = ((HeatMapSeries)object).g();
        double d8 = (d7 - d6) / (double)n2;
        AffineTransform affineTransform = graphics2D.getTransform();
        BiFunction<Double, Double, String> biFunction = ((HeatMapStyler)this.a.b()).ac() ? (d2, d3) -> this.e.format(d2) + " ~ " + this.e.format(d3) : (d2, d3) -> this.e.format(d2);
        for (int i2 = 0; i2 < n2; ++i2) {
            double d9;
            Color color;
            double d10 = (double)i2 / (double)n2 * (double)colorArray.length;
            if (i2 == 0) {
                object = biFunction.apply(d6, d6 + d8);
                color = colorArray[0];
            } else if (i2 == n2 - 1) {
                object = biFunction.apply(d6 + d8 * (double)i2, d7);
                color = colorArray[colorArray.length - 1];
            } else {
                object = biFunction.apply(d6 + d8 * (double)i2, d6 + d8 * (double)(i2 + 1));
                int n3 = (int)d10;
                int n4 = colorArray.length != 1 ? n3 + 1 : n3;
                Color color2 = colorArray[n3];
                color = colorArray[n4];
                double d11 = d10;
                int n5 = (int)((double)color2.getRed() + (d11 - (double)((int)d11)) * (double)(color.getRed() - color2.getRed()));
                double d12 = d10;
                int n6 = (int)((double)color2.getGreen() + (d12 - (double)((int)d12)) * (double)(color.getGreen() - color2.getGreen()));
                double d13 = d10;
                int n7 = (int)((double)color2.getBlue() + (d13 - (double)((int)d13)) * (double)(color.getBlue() - color2.getBlue()));
                color = new Color(n5, n6, n7);
            }
            object = new TextLayout((String)object, ((HeatMapStyler)this.a.b()).av(), new FontRenderContext(null, true, false));
            if (((HeatMapStyler)this.a.b()).az() == Styler$LegendLayout.a) {
                d9 = d5 + (double)(((HeatMapStyler)this.a.b()).aw() * (n2 - i2 - 1)) + (double)(((HeatMapStyler)this.a.b()).av().getSize() * (n2 - i2 - 1));
            } else {
                if (i2 > 0) {
                    d4 += (double)(20 + ((HeatMapStyler)this.a.b()).aw());
                }
                d9 = d5;
            }
            Cloneable cloneable = new Rectangle2D.Double(d4, d9, 20.0, ((TextLayout)object).getBounds().getHeight());
            graphics2D.setColor(color);
            graphics2D.fill((Shape)((Object)cloneable));
            cloneable = new AffineTransform();
            ((AffineTransform)cloneable).translate(d4 + 20.0 + (double)((HeatMapStyler)this.a.b()).aw(), d9 + ((TextLayout)object).getBounds().getHeight());
            graphics2D.transform((AffineTransform)cloneable);
            graphics2D.setColor(((HeatMapStyler)this.a.b()).ah());
            graphics2D.setFont(((HeatMapStyler)this.a.b()).av());
            graphics2D.fill(((TextLayout)object).getOutline(null));
            graphics2D.setTransform(affineTransform);
            if (((HeatMapStyler)this.a.b()).az() != Styler$LegendLayout.b) continue;
            d4 += ((TextLayout)object).getBounds().getWidth() + (double)((HeatMapStyler)this.a.b()).aw();
        }
    }

    private void b(Graphics2D graphics2D, double d2, double d3, Color[] object, HeatMapSeries object2) {
        double d4;
        double d5;
        Rectangle2D.Double double_;
        Point2D.Double double_2;
        Cloneable cloneable;
        TextLayout textLayout = new TextLayout(((HeatMapSeries)object2).f() + "", ((HeatMapStyler)this.a.b()).av(), new FontRenderContext(null, true, false));
        if (((HeatMapStyler)this.a.b()).az() == Styler$LegendLayout.a) {
            cloneable = new Point2D.Double(d2, d3 + (double)((HeatMapStyler)this.a.b()).Z());
            double_2 = new Point2D.Double(d2, d3 + (double)((HeatMapStyler)this.a.b()).av().getSize());
            double_ = new Rectangle2D.Double(d2, d3 + (double)((HeatMapStyler)this.a.b()).av().getSize(), ((HeatMapStyler)this.a.b()).Y(), ((HeatMapStyler)this.a.b()).Z());
        } else {
            cloneable = new Point2D.Double(d2 + textLayout.getBounds().getWidth(), d3 + (double)((HeatMapStyler)this.a.b()).av().getSize() + (double)((HeatMapStyler)this.a.b()).aw());
            double_2 = new Point2D.Double(d2 + textLayout.getBounds().getWidth() + (double)((HeatMapStyler)this.a.b()).Z(), d3 + (double)((HeatMapStyler)this.a.b()).av().getSize() + (double)((HeatMapStyler)this.a.b()).aw());
            double_ = new Rectangle2D.Double(d2 + textLayout.getBounds().getWidth(), d3 + (double)((HeatMapStyler)this.a.b()).av().getSize() + (double)((HeatMapStyler)this.a.b()).aw(), ((HeatMapStyler)this.a.b()).Z(), ((HeatMapStyler)this.a.b()).Y());
        }
        float[] fArray = new float[((Color[])object).length];
        for (int i2 = 0; i2 < ((Color[])object).length; ++i2) {
            if (i2 == 0) {
                fArray[i2] = 0.0f;
                continue;
            }
            if (i2 == ((Color[])object).length - 1) {
                fArray[i2] = 1.0f;
                continue;
            }
            int n2 = i2;
            fArray[n2] = (float)n2 / (float)(((Color[])object).length - 1);
        }
        LinearGradientPaint linearGradientPaint = new LinearGradientPaint((Point2D)cloneable, double_2, fArray, (Color[])object);
        graphics2D.setPaint(linearGradientPaint);
        graphics2D.fill(double_);
        object = new TextLayout(((HeatMapSeries)object2).g() + "", ((HeatMapStyler)this.a.b()).av(), new FontRenderContext(null, true, false));
        object2 = graphics2D.getTransform();
        cloneable = new AffineTransform();
        if (((HeatMapStyler)this.a.b()).az() == Styler$LegendLayout.a) {
            d5 = d2 + (double)((HeatMapStyler)this.a.b()).Y() + (double)((HeatMapStyler)this.a.b()).aw();
            d4 = d3 + ((TextLayout)object).getBounds().getHeight();
        } else {
            d5 = d2 + textLayout.getBounds().getWidth() + (double)((HeatMapStyler)this.a.b()).Z();
            d4 = d3 + (double)((HeatMapStyler)this.a.b()).av().getSize();
        }
        ((AffineTransform)cloneable).translate(d5, d4);
        graphics2D.transform((AffineTransform)cloneable);
        graphics2D.setColor(((HeatMapStyler)this.a.b()).ah());
        graphics2D.setFont(((HeatMapStyler)this.a.b()).av());
        graphics2D.fill(((TextLayout)object).getOutline(null));
        graphics2D.setTransform((AffineTransform)object2);
        cloneable = new AffineTransform();
        if (((HeatMapStyler)this.a.b()).az() == Styler$LegendLayout.a) {
            d5 = d2 + (double)((HeatMapStyler)this.a.b()).Y() + (double)((HeatMapStyler)this.a.b()).aw();
            d4 = d3 + (double)((HeatMapStyler)this.a.b()).Z() + (double)(((HeatMapStyler)this.a.b()).av().getSize() << 1);
        } else {
            d5 = d2;
            d4 = d3 + (double)((HeatMapStyler)this.a.b()).av().getSize();
        }
        ((AffineTransform)cloneable).translate(d5, d4);
        graphics2D.transform((AffineTransform)cloneable);
        graphics2D.setColor(((HeatMapStyler)this.a.b()).ah());
        graphics2D.setFont(((HeatMapStyler)this.a.b()).av());
        graphics2D.fill(textLayout.getOutline(null));
        graphics2D.setTransform((AffineTransform)object2);
    }

    private void b() {
        if (((HeatMapStyler)this.a.b()).ab() != null) {
            this.e = new Formatter_Custom(((HeatMapStyler)this.a.b()).ab());
            return;
        }
        this.e = new DecimalFormat("");
        if (((HeatMapStyler)this.a.b()).aa() != null) {
            ((DecimalFormat)this.e).applyPattern(((HeatMapStyler)this.a.b()).aa());
        }
    }
}

