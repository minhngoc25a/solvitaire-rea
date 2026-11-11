/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.series;

import java.awt.BasicStroke;
import java.awt.Color;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.internal.series.Series$DataType;

public abstract class AxesChartSeries
extends Series {
    final Series$DataType a;
    final Series$DataType b;
    protected double c;
    protected double d;
    protected double e;
    protected double f;
    private BasicStroke g;
    private Color h;
    private float i = -1.0f;

    protected AxesChartSeries(String string, Series$DataType series$DataType) {
        super(string);
        this.a = series$DataType;
        this.b = Series$DataType.a;
    }

    protected abstract void c();

    public final double i() {
        return this.c;
    }

    public final double j() {
        return this.d;
    }

    public final double k() {
        return this.e;
    }

    public final double l() {
        return this.f;
    }

    public BasicStroke b_() {
        return this.g;
    }

    public AxesChartSeries b(BasicStroke basicStroke) {
        this.g = basicStroke;
        if (this.i > 0.0f) {
            this.g = new BasicStroke(this.i, this.g.getEndCap(), this.g.getLineJoin(), this.g.getMiterLimit(), this.g.getDashArray(), this.g.getDashPhase());
        }
        return this;
    }

    public Color c_() {
        return this.h;
    }

    public AxesChartSeries d(Color color) {
        this.h = color;
        return this;
    }

    public final Series$DataType m() {
        return this.a;
    }

    public final Series$DataType n() {
        return this.b;
    }
}

