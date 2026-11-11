/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import java.awt.Color;
import java.awt.Font;
import org.knowm.xchart.CategorySeries$CategorySeriesRenderStyle;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.colors.FontColorDetector;
import org.knowm.xchart.style.theme.Theme;

public class CategoryStyler
extends AxesChartStyler {
    private CategorySeries$CategorySeriesRenderStyle b;
    private double c;
    private boolean d;
    private boolean e;
    private boolean f = false;
    private boolean g = false;
    private Font h;
    private Color i;
    private int j;
    private double k;
    private boolean l;
    private Color m;
    private Color n;

    public CategoryStyler() {
        this.a();
    }

    @Override
    protected final void a() {
        super.a();
        this.b = CategorySeries$CategorySeriesRenderStyle.d;
        this.c = this.a.X();
        this.d = this.a.Y();
        this.e = false;
        this.f = false;
        this.h = this.a.b();
        this.i = this.a.d();
        this.j = 0;
        this.k = 0.5;
        this.l = this.a.aC();
        this.m = this.a.aB();
        this.n = this.a.aA();
    }

    public final CategorySeries$CategorySeriesRenderStyle V() {
        return this.b;
    }

    public final double W() {
        return this.c;
    }

    public final boolean X() {
        return this.d;
    }

    public final CategoryStyler c(boolean bl2) {
        this.d = true;
        return this;
    }

    public final boolean Y() {
        return this.e;
    }

    public final boolean Z() {
        return this.f;
    }

    public final boolean aa() {
        return this.g;
    }

    public final Font ab() {
        return this.h;
    }

    public final Color ac() {
        return this.i;
    }

    public final Color a(Color color) {
        return FontColorDetector.a(color, this.n, this.m);
    }

    public final int ad() {
        return this.j;
    }

    public final double ae() {
        return this.k;
    }

    public final boolean af() {
        return this.l;
    }

    public final void a(Theme theme) {
        this.a = theme;
        this.a();
    }
}

