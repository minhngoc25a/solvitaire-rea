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
import java.util.LinkedHashMap;
import java.util.Map;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.chartpart.m;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.style.Styler$LegendLayout;

public abstract class Legend_
implements ChartPart {
    final Chart a;
    double c = 0.0;
    double d = 0.0;
    private Rectangle2D e;

    Legend_(Chart chart) {
        this.a = chart;
    }

    protected abstract double a(Series var1);

    protected abstract void b(Graphics2D var1);

    @Override
    public void a(Graphics2D graphics2D) {
        public Plot_ plot_;
        if (!this.a.b().as()) {
            return;
        }
        if (this.a.o().isEmpty()) {
            return;
        }
        Plot_ plot_2 = this.a.i();
        if (plot_.c.getWidth() < 30.0) {
            return;
        }
        this.e = this.a.b().az() == Styler$LegendLayout.a ? this.b() : this.c();
        double d2 = this.e.getHeight();
        switch (m.a[this.a.b().ay().ordinal()]) {
            case 1: {
                this.c = (double)this.a.c() - this.e.getWidth() - 6.0;
                Plot_ plot_3 = this.a.i();
                plot_2 = plot_3;
                plot_2 = this.a.i();
                this.d = plot_3.c.getY() + (plot_2.c.getHeight() - this.e.getHeight()) / 2.0;
                break;
            }
            case 2: {
                plot_2 = this.a.i();
                this.c = plot_2.c.getX() + 6.0;
                plot_2 = this.a.i();
                this.d = plot_2.c.getY() + 6.0;
                break;
            }
            case 3: {
                Plot_ plot_4 = this.a.i();
                plot_2 = plot_4;
                plot_2 = this.a.i();
                this.c = plot_4.c.getX() + plot_2.c.getWidth() - this.e.getWidth() - 6.0;
                plot_2 = this.a.i();
                this.d = plot_2.c.getY() + 6.0;
                break;
            }
            case 4: {
                Plot_ plot_5 = this.a.i();
                plot_2 = plot_5;
                plot_2 = this.a.i();
                this.c = plot_5.c.getX() + plot_2.c.getWidth() - this.e.getWidth() - 6.0;
                Plot_ plot_6 = this.a.i();
                plot_2 = plot_6;
                plot_2 = this.a.i();
                this.d = plot_6.c.getY() + plot_2.c.getHeight() - this.e.getHeight() - 6.0;
                break;
            }
            case 5: {
                plot_2 = this.a.i();
                this.c = plot_2.c.getX() + 6.0;
                Plot_ plot_7 = this.a.i();
                plot_2 = plot_7;
                plot_2 = this.a.i();
                this.d = plot_7.c.getY() + plot_2.c.getHeight() - this.e.getHeight() - 6.0;
                break;
            }
            case 6: {
                Plot_ plot_8 = this.a.i();
                plot_2 = plot_8;
                plot_2 = this.a.i();
                this.c = plot_8.c.getX() + (plot_2.c.getWidth() - this.e.getWidth()) / 2.0 + 6.0;
                plot_2 = this.a.i();
                this.d = plot_2.c.getY() + 6.0;
                break;
            }
            case 7: {
                Plot_ plot_9 = this.a.i();
                plot_2 = plot_9;
                plot_2 = this.a.i();
                this.c = plot_9.c.getX() + (plot_2.c.getWidth() - this.e.getWidth()) / 2.0 + 6.0;
                Plot_ plot_10 = this.a.i();
                plot_2 = plot_10;
                plot_2 = this.a.i();
                this.d = plot_10.c.getY() + plot_2.c.getHeight() - this.e.getHeight() - 6.0;
                break;
            }
            case 8: {
                Plot_ plot_11 = this.a.i();
                plot_2 = plot_11;
                plot_2 = this.a.i();
                this.c = plot_11.c.getX() + (plot_2.c.getWidth() - this.e.getWidth()) / 2.0;
                this.d = (double)this.a.d() - this.e.getHeight() - 6.0;
            }
        }
        Rectangle2D.Double double_ = new Rectangle2D.Double(this.c, this.d, this.e.getWidth(), d2);
        graphics2D.setColor(this.a.b().at());
        graphics2D.fill(double_);
        graphics2D.setStroke(b);
        graphics2D.setColor(this.a.b().au());
        graphics2D.draw(double_);
        this.b(graphics2D);
    }

    private Rectangle2D b() {
        if (!this.a.b().as()) {
            return new Rectangle2D.Double();
        }
        boolean bl2 = false;
        double d2 = 0.0;
        double d3 = 0.0;
        Map object2 = this.a.o();
        for (Series series : object2.values()) {
            if (!series.v() || !series.w()) continue;
            Map map = this.b(series);
            double d4 = 0.0;
            for (Map.Entry entry : map.entrySet()) {
                d4 += ((Rectangle2D)entry.getValue()).getHeight() + 3.0;
                d2 = Math.max(d2, ((Rectangle2D)entry.getValue()).getWidth());
            }
            d4 -= 3.0;
            d4 = Math.max(d4, this.a(series));
            d3 += d4 + (double)this.a.b().aw();
            if (series.a() != RenderableSeries$LegendRenderType.c) continue;
            bl2 = true;
        }
        double d5 = !bl2 ? (double)(this.a.b().ax() + this.a.b().aw()) + d2 : (double)(20 + this.a.b().aw()) + d2;
        double d6 = d5 + (double)(2 * this.a.b().aw());
        double d7 = d3 + (double)this.a.b().aw();
        return new Rectangle2D.Double(0.0, 0.0, d6, d7);
    }

    private Rectangle2D c() {
        if (!this.a.b().as()) {
            return new Rectangle2D.Double();
        }
        double d2 = 0.0;
        double d3 = 0.0;
        Map map = this.a.o();
        for (Series series : map.values()) {
            if (!series.v() || !series.w()) continue;
            Map map2 = this.b(series);
            double d4 = 0.0;
            double d5 = 0.0;
            for (Map.Entry entry : map2.entrySet()) {
                d4 += ((Rectangle2D)entry.getValue()).getHeight() + 3.0;
                d5 = Math.max(d5, ((Rectangle2D)entry.getValue()).getWidth());
            }
            d2 = Math.max(d4 -= 3.0, this.a(series));
            d3 += d5 + (double)this.a.b().aw();
            if (series.a() == RenderableSeries$LegendRenderType.a) {
                d3 = (double)(this.a.b().ax() + this.a.b().aw()) + d3;
                continue;
            }
            d3 = (double)(20 + this.a.b().aw()) + d3;
        }
        double d6 = d3 + (double)this.a.b().aw();
        double d7 = d2 + (double)(this.a.b().aw() << 1);
        return new Rectangle2D.Double(0.0, 0.0, d6, d7);
    }

    final Map b(Series stringArray) {
        stringArray = stringArray.a_().split("\\n");
        LinkedHashMap<String, Object> linkedHashMap = new LinkedHashMap<String, Object>(stringArray.length);
        for (String string : stringArray) {
            Object object = new TextLayout(string, this.a.b().av(), new FontRenderContext(null, true, false));
            object = ((TextLayout)object).getOutline(null);
            object = object.getBounds2D();
            linkedHashMap.put(string, object);
        }
        public return linkedHashMap;
    }

    static float a(Map object, int n2) {
        float f2 = 0.0f;
        for (Map.Entry entry : object.entrySet()) {
            f2 = (float)((double)f2 + (((Rectangle2D)entry.getValue()).getHeight() + 3.0));
        }
        f2 -= 3.0f;
        f2 = Math.max(f2, (float)n2);
        public return f2;
    }

    final float b(Map object, int n2) {
        float f2 = 0.0f;
        for (Map.Entry entry : object.entrySet()) {
            f2 = Math.max(f2, (float)((Rectangle2D)entry.getValue()).getWidth());
        }
        return f2 + (float)n2 + (float)this.a.b().aw();
    }

    final void a(Graphics2D graphics2D, Map object, int n2, double d2, double d3) {
        graphics2D.setColor(this.a.b().ah());
        graphics2D.setFont(this.a.b().av());
        double d4 = 0.0;
        for (Map.Entry entry : object.entrySet()) {
            double d5 = ((Rectangle2D)entry.getValue()).getHeight();
            double d6 = (Math.max((double)n2, d5) - d5) / 2.0;
            Object object2 = graphics2D.getFontRenderContext();
            TextLayout textLayout = new TextLayout((String)entry.getKey(), this.a.b().av(), (FontRenderContext)object2);
            Shape object22 = textLayout.getOutline(null);
            object2 = graphics2D.getTransform();
            AffineTransform affineTransform = new AffineTransform();
            affineTransform.translate(d2, d3 + d5 + d6 + d4);
            graphics2D.transform(affineTransform);
            graphics2D.fill(object22);
            graphics2D.setTransform((AffineTransform)object2);
            d4 += d5 + 3.0;
        }
    }

    public Rectangle2D a() {
        if (this.a.b().az() == Styler$LegendLayout.a) {
            return this.b();
        }
        return this.c();
    }
}

