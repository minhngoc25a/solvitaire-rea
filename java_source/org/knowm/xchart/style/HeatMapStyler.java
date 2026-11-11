/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import java.awt.Color;
import java.awt.Font;
import java.util.function.Function;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.Styler;
import org.knowm.xchart.style.Styler$LegendPosition;
import org.knowm.xchart.style.colors.ChartColor;

public class HeatMapStyler
extends AxesChartStyler {
    private boolean b;
    private boolean c = true;
    private int d;
    private Color[] e;
    private Font f;
    private Color g;
    private double h;
    private double i;
    private int j;
    private int k;
    private String l;
    private Function m;

    @Override
    public final void a() {
        super.a();
        this.e = new Color[3];
        this.e[0] = new Color(255, 165, 0);
        this.e[1] = new Color(255, 69, 0);
        this.e[2] = new Color(139, 0, 0);
        this.d = 5;
        this.f = new Font("SansSerif", 0, 16);
        this.g = ChartColor.a.a();
        this.h = Double.MIN_VALUE;
        this.i = Double.MAX_VALUE;
        this.j = 30;
        this.k = 200;
    }

    @Override
    public final Styler a(Styler$LegendPosition styler$LegendPosition) {
        if (!Styler$LegendPosition.a.equals((Object)styler$LegendPosition) && !Styler$LegendPosition.h.equals((Object)styler$LegendPosition)) {
            throw new IllegalArgumentException("HeatMapStyler LegendPosition must be OutsideE or OutsideS!!!");
        }
        return super.a(styler$LegendPosition);
    }

    public final boolean V() {
        return this.b;
    }

    public final int W() {
        return this.d;
    }

    public final Color[] X() {
        return this.e;
    }

    public final int Y() {
        return this.j;
    }

    public final int Z() {
        return this.k;
    }

    public final String aa() {
        return this.l;
    }

    public final Function ab() {
        return this.m;
    }

    public final boolean ac() {
        return this.c;
    }

    static {
        Color[] colorArray = new Color[]{new Color(255, 255, 255), new Color(0, 255, 255)};
    }
}

