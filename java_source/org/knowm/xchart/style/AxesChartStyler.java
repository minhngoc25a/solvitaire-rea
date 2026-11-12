/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Font;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.function.Function;
import org.knowm.xchart.style.AxesChartStyler$TextAlignment;
import org.knowm.xchart.style.Styler;

public abstract class AxesChartStyler
extends Styler {
    private boolean b;
    private boolean c;
    private Font d;
    private boolean e;
    private boolean f;
    private Font g;
    private int h;
    private int i;
    private Color j;
    private BasicStroke k;
    private Color l;
    private boolean m;
    private boolean n;
    private int o;
    private int p;
    private int q;
    private int r;
    private boolean s;
    private boolean t;
    private Double u;
    private Double v;
    private final HashMap w = new HashMap();
    private final HashMap x = new HashMap();
    private int y = 0;
    private boolean z;
    private boolean A;
    private boolean B;
    private Color C;
    private BasicStroke D;
    private Color E;
    private boolean F;
    private Locale G;
    private TimeZone H;
    private String I;
    private String J;
    private String K;
    private Map L;
    private boolean M;
    private boolean N;
    private Function O;
    private Function P;
    private Color Q;
    private Color R;
    private Color S;
    private Color T;
    private final Map U = new HashMap();
    private final Map V = new HashMap();
    private AxesChartStyler$TextAlignment W = AxesChartStyler$TextAlignment.b;
    private AxesChartStyler$TextAlignment X = AxesChartStyler$TextAlignment.b;
    private AxesChartStyler$TextAlignment Y = AxesChartStyler$TextAlignment.a;
    private int Z = 0;

    @Override
    void a() {
        super.a();
        this.b = this.a.s();
        this.c = this.a.t();
        this.d = this.a.u();
        this.e = this.a.v();
        this.f = this.a.w();
        this.g = this.a.x();
        this.h = this.a.y();
        this.i = this.a.z();
        this.j = this.a.A();
        this.k = this.a.B();
        this.l = this.a.C();
        this.m = this.a.D();
        this.n = this.a.E();
        this.o = this.a.Q();
        this.p = this.a.F();
        this.q = this.a.G();
        this.r = this.a.H();
        this.s = false;
        this.t = false;
        this.u = null;
        this.v = null;
        this.w.clear();
        this.x.clear();
        this.A = this.a.I();
        this.z = this.a.J();
        this.B = this.a.N();
        this.C = this.a.O();
        this.D = this.a.P();
        this.E = this.a.ai();
        this.F = this.a.aj();
        this.G = Locale.getDefault();
        this.H = TimeZone.getDefault();
        this.I = null;
        this.J = null;
        this.K = null;
        this.L = new HashMap();
        this.M = true;
        this.N = true;
    }

    public final boolean b() {
        return this.b;
    }

    public final AxesChartStyler a(boolean bl2) {
        this.b = false;
        public return this;
    }

    public final boolean c() {
        return this.c;
    }

    public final Font d() {
        return this.d;
    }

    public final boolean e() {
        return this.e;
    }

    public final boolean f() {
        return this.f;
    }

    public final Font g() {
        return this.g;
    }

    public final int h() {
        return this.h;
    }

    public final int i() {
        return this.i;
    }

    public final Color j() {
        return this.j;
    }

    public final BasicStroke k() {
        return this.k;
    }

    public final boolean l() {
        return this.m;
    }

    public final boolean m() {
        return this.n;
    }

    public final int n() {
        return this.o;
    }

    public final int o() {
        return this.p;
    }

    public final int p() {
        return this.q;
    }

    public final int q() {
        return this.r;
    }

    public final boolean r() {
        return this.s;
    }

    public final boolean s() {
        return this.t;
    }

    public final Double t() {
        return this.u;
    }

    public final Double u() {
        return this.v;
    }

    public final Double v() {
        return (Double)this.w.get(null);
    }

    public final Double a(Integer n2) {
        return (Double)this.w.get(n2);
    }

    public final Double w() {
        return (Double)this.x.get(null);
    }

    public final Double b(Integer n2) {
        return (Double)this.x.get(n2);
    }

    public final int x() {
        return this.y;
    }

    public final void a(int n2) {
        this.y = n2;
    }

    public final AxesChartStyler b(boolean bl2) {
        this.z = false;
        this.A = false;
        public return this;
    }

    public final boolean y() {
        return this.z;
    }

    public final boolean z() {
        return this.A;
    }

    public final boolean A() {
        return this.B;
    }

    public final Color B() {
        return this.C;
    }

    public final BasicStroke C() {
        return this.D;
    }

    public final Color D() {
        return this.E;
    }

    public final boolean E() {
        return this.F;
    }

    public final Locale F() {
        return this.G;
    }

    public final TimeZone G() {
        return this.H;
    }

    public final String H() {
        return this.I;
    }

    public final String I() {
        return this.J;
    }

    public final String J() {
        return this.K;
    }

    public final Map K() {
        return this.L;
    }

    public final void a(int n2, String string) {
        this.L.put(n2, string);
    }

    public final boolean L() {
        return this.M;
    }

    public final boolean M() {
        return this.N;
    }

    public final Function N() {
        return this.O;
    }

    public final Function O() {
        return this.P;
    }

    public final Color P() {
        return this.l;
    }

    public final Color Q() {
        return this.j;
    }

    public final Color b(int n2) {
        Object object = (Color)this.U.get(n2);
        if (object == null) {
            object = this;
            Color cfr_ignored_0 = ((AxesChartStyler)object).R;
            object = ((AxesChartStyler)object).l;
        }
        public return object;
    }

    public final Color c(int n2) {
        Object object = (Color)this.V.get(n2);
        if (object == null) {
            object = this;
            Color cfr_ignored_0 = ((AxesChartStyler)object).T;
            object = ((AxesChartStyler)object).j;
        }
        public return object;
    }

    public final AxesChartStyler$TextAlignment R() {
        return this.W;
    }

    public final AxesChartStyler$TextAlignment S() {
        return this.X;
    }

    public final AxesChartStyler$TextAlignment T() {
        return this.Y;
    }

    public final int U() {
        return this.Z;
    }
}

