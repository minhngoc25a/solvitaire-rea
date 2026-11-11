/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import java.awt.Color;
import java.awt.Font;
import org.knowm.xchart.XYSeries$XYSeriesRenderStyle;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.colors.ChartColor;

public class XYStyler
extends AxesChartStyler {
    private XYSeries$XYSeriesRenderStyle b;
    private boolean c;
    private Color d;
    private boolean e;
    private boolean f;
    private boolean g;
    private Color h;
    private float i;
    private Font j;
    private Color k;
    private Color l;

    public XYStyler() {
        this.a();
    }

    @Override
    protected final void a() {
        super.a();
        this.b = XYSeries$XYSeriesRenderStyle.a;
        this.c = false;
        this.d = ChartColor.d.b();
        this.e = true;
        this.f = true;
        this.g = this.a.R();
        this.h = this.a.S();
        this.i = this.a.T();
        this.j = this.a.U();
        this.k = this.a.V();
        this.l = this.a.W();
    }

    public final XYSeries$XYSeriesRenderStyle V() {
        return this.b;
    }

    public final boolean W() {
        return this.c;
    }

    public final Color X() {
        return this.d;
    }

    public final boolean Y() {
        return this.e;
    }

    public final boolean Z() {
        return this.f;
    }

    public final Color aa() {
        return this.h;
    }

    public final float ab() {
        return this.i;
    }

    public final Font ac() {
        return this.j;
    }

    public final Color ad() {
        return this.k;
    }

    public final Color ae() {
        return this.l;
    }
}

