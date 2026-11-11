/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Font;
import java.util.HashMap;
import java.util.Map;
import org.knowm.xchart.style.Styler$ChartButtonPosition;
import org.knowm.xchart.style.Styler$LegendLayout;
import org.knowm.xchart.style.Styler$LegendPosition;
import org.knowm.xchart.style.Styler$ToolTipType;
import org.knowm.xchart.style.Styler$YAxisPosition;
import org.knowm.xchart.style.colors.ChartColor;
import org.knowm.xchart.style.markers.Marker;
import org.knowm.xchart.style.theme.Theme;
import org.knowm.xchart.style.theme.XChartTheme;

public abstract class Styler {
    Theme a = new XChartTheme();
    private Font b;
    private Color c;
    private Color d;
    private int e;
    private Color[] f;
    private BasicStroke[] g;
    private Marker[] h;
    private Font i;
    private boolean j;
    private boolean k;
    private Color l;
    private Color m;
    private int n;
    private boolean o;
    private Color p;
    private Color q;
    private Font r;
    private int s;
    private int t;
    private Styler$LegendPosition u;
    private Styler$LegendLayout v = Styler$LegendLayout.a;
    private Color w;
    private Color x;
    private boolean y;
    private double z;
    private Color A;
    private Color B;
    private Font C;
    private Color D;
    private int E;
    private Font F;
    private Color G;
    private BasicStroke H;
    private Color I;
    private Color J;
    private Color K;
    private Color L;
    private Font M;
    private int N;
    private Styler$ChartButtonPosition O;
    private boolean P;
    private boolean Q;
    private Styler$ToolTipType R;
    private Color S;
    private Color T;
    private Font U;
    private Color V;
    private boolean W = true;
    private String X;
    private final HashMap Y = new HashMap();
    private int Z;
    private boolean aa = false;
    private Color ab;
    private Color ac;
    private final Map ad = new HashMap();
    private int ae;

    void a() {
        this.b = this.a.b();
        this.c = this.a.c();
        this.d = this.a.d();
        this.e = this.a.e();
        this.f = this.a.a();
        this.g = this.a.g_();
        this.h = this.a.f_();
        this.i = this.a.f();
        this.j = this.a.g();
        this.k = this.a.h();
        this.l = this.a.i();
        this.m = this.a.j();
        this.n = this.a.k();
        this.o = this.a.m();
        this.p = this.a.n();
        this.q = this.a.o();
        this.r = this.a.l();
        this.s = this.a.p();
        this.t = this.a.q();
        this.u = this.a.r();
        this.w = this.a.K();
        this.x = this.a.L();
        this.y = this.a.M();
        this.z = this.a.an();
        this.A = this.a.aq();
        this.B = this.a.ar();
        this.C = this.a.ao();
        this.D = this.a.ap();
        this.E = this.a.as();
        this.F = this.a.at();
        this.G = this.a.au();
        this.H = this.a.av();
        this.I = this.a.aw();
        this.J = ChartColor.d.a();
        this.K = ChartColor.b.a();
        Styler styler = this;
        styler.L = styler.d;
        styler = this;
        styler.M = styler.b.deriveFont(11.0f);
        this.N = 6;
        this.O = Styler$ChartButtonPosition.e;
        this.P = this.a.ax();
        this.R = this.a.ay();
        this.S = this.a.ak();
        this.T = this.a.al();
        this.U = this.a.az();
        this.V = this.a.am();
        this.X = null;
        this.ae = this.a.ah();
    }

    public final Color ag() {
        return this.c;
    }

    public final Color ah() {
        return this.d;
    }

    public final int ai() {
        return this.e;
    }

    public final Color[] aj() {
        return this.f;
    }

    public final BasicStroke[] ak() {
        return this.g;
    }

    public final Marker[] al() {
        return this.h;
    }

    public final Font am() {
        return this.i;
    }

    public final boolean an() {
        return this.j;
    }

    public final boolean ao() {
        return this.k;
    }

    public final Color ap() {
        return this.l;
    }

    public final Color aq() {
        return this.m;
    }

    public final int ar() {
        return this.n;
    }

    public final boolean as() {
        return this.o;
    }

    public final Color at() {
        return this.p;
    }

    public final Color au() {
        return this.q;
    }

    public final Font av() {
        return this.r;
    }

    public final int aw() {
        return this.s;
    }

    public final int ax() {
        return this.t;
    }

    public final Styler$LegendPosition ay() {
        return this.u;
    }

    public Styler a(Styler$LegendPosition styler$LegendPosition) {
        this.u = styler$LegendPosition;
        return this;
    }

    public final Styler$LegendLayout az() {
        return this.v;
    }

    public final Color aA() {
        return this.w;
    }

    public final Color aB() {
        return this.x;
    }

    public final boolean aC() {
        return this.y;
    }

    public final double aD() {
        return this.z;
    }

    public final Color aE() {
        return this.J;
    }

    public final Color aF() {
        return this.K;
    }

    public final Color aG() {
        return this.L;
    }

    public final Font aH() {
        return this.M;
    }

    public final int aI() {
        return this.N;
    }

    public final Styler$ChartButtonPosition aJ() {
        return this.O;
    }

    public final boolean aK() {
        return this.P;
    }

    public final Styler d(boolean bl2) {
        this.P = true;
        return this;
    }

    public final boolean aL() {
        return this.Q;
    }

    public final Styler$ToolTipType aM() {
        return this.R;
    }

    public final Styler a(Styler$ToolTipType styler$ToolTipType) {
        this.R = styler$ToolTipType;
        return this;
    }

    public final Color aN() {
        return this.S;
    }

    public final Color aO() {
        return this.T;
    }

    public final Font aP() {
        return this.U;
    }

    public final Color aQ() {
        return this.V;
    }

    public final String aR() {
        return this.X;
    }

    public final Styler$YAxisPosition d(int n2) {
        return (Styler$YAxisPosition)((Object)this.Y.get(n2));
    }

    public final boolean aS() {
        return this.W;
    }

    public final int aT() {
        return this.Z;
    }

    public final Color aU() {
        return this.ab;
    }

    public final Color e(int n2) {
        Color color = (Color)this.ad.get(n2);
        if (color == null) {
            return this.ac;
        }
        return color;
    }

    public int e_() {
        return this.ae;
    }
}

