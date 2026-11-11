/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Font;
import org.knowm.xchart.style.Styler;
import org.knowm.xchart.style.colors.ChartColor;

public class DialStyler
extends Styler {
    private boolean b;
    private boolean c;
    private Color d;
    private BasicStroke e;
    private double[] f = new double[]{0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    private String[] g = new String[]{"0", "10", "20", "30", "40", "50", "60", "70", "80", "90", "100"};
    private boolean h;
    private Font i;
    private int j;
    private boolean k = true;
    private double l = 270.0;
    private double m = 0.17;
    private double n = 0.0;
    private double o = 0.2;
    private Color p = ChartColor.h.a();
    private double q = 0.2;
    private double r = 0.8;
    private Color s = Color.LIGHT_GRAY;
    private double t = 0.8;
    private double u = 1.0;
    private Color v = ChartColor.f.a();
    private double w = 0.7;
    private double x = 20.0;
    private double y = 0.15;
    private Color z = ChartColor.g.a();
    private boolean A;
    private Font B;

    public DialStyler() {
        this.a();
    }

    @Override
    final void a() {
        super.a();
        this.b = this.a.Z();
        this.d = this.a.A();
        this.e = this.a.B();
        this.c = this.a.E();
        this.h = true;
        this.i = this.a.u();
        this.j = this.a.F();
        this.A = true;
        this.B = this.a.b();
    }
}

