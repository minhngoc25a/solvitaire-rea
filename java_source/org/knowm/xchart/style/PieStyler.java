/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import java.awt.Color;
import java.awt.Font;
import org.knowm.xchart.PieSeries$PieSeriesRenderStyle;
import org.knowm.xchart.style.PieStyler$ClockwiseDirectionType;
import org.knowm.xchart.style.PieStyler$LabelType;
import org.knowm.xchart.style.Styler;

public class PieStyler
extends Styler {
    private PieSeries$PieSeriesRenderStyle b;
    private boolean c;
    private double d;
    private double e;
    private boolean f;
    private Font g;
    private PieStyler$ClockwiseDirectionType h = PieStyler$ClockwiseDirectionType.b;
    private float i = 0.0f;
    private boolean j;
    private Font k;
    private Color l;
    private double m;
    private PieStyler$LabelType n;
    private boolean o;
    private boolean p;
    private Color q;
    private Color r;

    public PieStyler() {
        this.a();
    }

    @Override
    final void a() {
        super.a();
        this.b = PieSeries$PieSeriesRenderStyle.a;
        this.c = this.a.Z();
        this.d = this.a.aa();
        this.e = this.a.ae();
        this.f = this.a.af();
        this.g = this.a.ag();
        this.j = true;
        this.k = this.a.b();
        this.l = this.a.d();
        this.m = this.a.ab();
        this.n = this.a.ac();
        this.o = this.a.ad();
        this.p = this.a.aC();
        this.q = this.a.aB();
        this.r = this.a.aA();
    }

    public final PieSeries$PieSeriesRenderStyle b() {
        return this.b;
    }
}

