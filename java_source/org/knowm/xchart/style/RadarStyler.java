/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Font;
import org.knowm.xchart.style.RadarStyler$RadarRenderStyle;
import org.knowm.xchart.style.Styler;

public class RadarStyler
extends Styler {
    private RadarStyler$RadarRenderStyle b;
    private boolean c;
    private double d;
    private boolean e;
    private Color f;
    private BasicStroke g;
    private int h;
    private boolean i;
    private Font j;
    private int k;
    private int l;
    private boolean m = true;

    public RadarStyler() {
        this.a();
    }

    @Override
    final void a() {
        super.a();
        this.b = RadarStyler$RadarRenderStyle.a;
        this.c = this.a.Z();
        this.d = this.a.aa();
        this.l = this.a.ah();
        this.e = this.a.E();
        this.f = this.a.O();
        this.g = this.a.P();
        this.h = 5;
        this.i = true;
        this.j = this.a.u();
        this.k = this.a.F();
    }

    @Override
    public final int e_() {
        return this.l;
    }
}

