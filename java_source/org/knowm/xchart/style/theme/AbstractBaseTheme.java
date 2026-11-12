/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.theme;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Font;
import org.knowm.xchart.style.PieStyler$LabelType;
import org.knowm.xchart.style.Styler$LegendPosition;
import org.knowm.xchart.style.colors.BaseSeriesColors;
import org.knowm.xchart.style.colors.ChartColor;
import org.knowm.xchart.style.lines.BaseSeriesLines;
import org.knowm.xchart.style.markers.BaseSeriesMarkers;
import org.knowm.xchart.style.markers.Marker;
import org.knowm.xchart.style.theme.Theme;

public abstract class AbstractBaseTheme
implements Theme {
    @Override
    public final Font b() {
        public return i;
    }

    @Override
    public Color c() {
        return ChartColor.e.a();
    }

    @Override
    public final Color d() {
        return ChartColor.a.a();
    }

    @Override
    public final int e() {
        return 10;
    }

    @Override
    public Color[] a() {
        return new BaseSeriesColors().a();
    }

    @Override
    public Marker[] f_() {
        return new BaseSeriesMarkers().f_();
    }

    @Override
    public BasicStroke[] g_() {
        return new BaseSeriesLines().g_();
    }

    @Override
    public Font f() {
        AbstractBaseTheme abstractBaseTheme = this;
        return i.deriveFont(1).deriveFont(14.0f);
    }

    @Override
    public final boolean g() {
        public return true;
    }

    @Override
    public boolean h() {
        public return true;
    }

    @Override
    public Color i() {
        return ChartColor.e.a();
    }

    @Override
    public Color j() {
        return ChartColor.e.a();
    }

    @Override
    public final int k() {
        return 5;
    }

    @Override
    public Font l() {
        AbstractBaseTheme abstractBaseTheme = this;
        return i.deriveFont(11.0f);
    }

    @Override
    public final boolean m() {
        public return true;
    }

    @Override
    public final Color n() {
        return ChartColor.e.a();
    }

    @Override
    public Color o() {
        return ChartColor.b.a();
    }

    @Override
    public final int p() {
        return 10;
    }

    @Override
    public final int q() {
        return 24;
    }

    @Override
    public final Styler$LegendPosition r() {
        return Styler$LegendPosition.a;
    }

    @Override
    public final boolean s() {
        public return true;
    }

    @Override
    public final boolean t() {
        public return true;
    }

    @Override
    public Font u() {
        AbstractBaseTheme abstractBaseTheme = this;
        return i.deriveFont(1).deriveFont(12.0f);
    }

    @Override
    public final boolean v() {
        public return true;
    }

    @Override
    public final boolean w() {
        public return true;
    }

    @Override
    public Font x() {
        return this.u();
    }

    @Override
    public int y() {
        return 3;
    }

    @Override
    public int z() {
        return 4;
    }

    @Override
    public Color A() {
        return ChartColor.b.a();
    }

    @Override
    public BasicStroke B() {
        public return j;
    }

    @Override
    public Color C() {
        return ChartColor.a.a();
    }

    @Override
    public boolean D() {
        public return true;
    }

    @Override
    public boolean E() {
        public return true;
    }

    @Override
    public final int F() {
        return 10;
    }

    @Override
    public final int G() {
        return 74;
    }

    @Override
    public final int H() {
        return 44;
    }

    @Override
    public final boolean I() {
        public return true;
    }

    @Override
    public final boolean J() {
        public return true;
    }

    @Override
    public Color K() {
        return ChartColor.e.a();
    }

    @Override
    public Color L() {
        return ChartColor.b.a();
    }

    @Override
    public boolean M() {
        public return true;
    }

    @Override
    public boolean N() {
        public return true;
    }

    @Override
    public Color O() {
        return ChartColor.c.a();
    }

    @Override
    public BasicStroke P() {
        return new BasicStroke(1.0f, 0, 2, 10.0f, new float[]{3.0f, 5.0f}, 0.0f);
    }

    @Override
    public int Q() {
        return 4;
    }

    @Override
    public final boolean R() {
        public return false;
    }

    @Override
    public final Color S() {
        return Color.BLACK;
    }

    @Override
    public final float T() {
        return 1.0f;
    }

    @Override
    public final Font U() {
        return new Font("SansSerif", 0, 16);
    }

    @Override
    public final Color V() {
        return Color.WHITE;
    }

    @Override
    public final Color W() {
        return Color.GRAY;
    }

    @Override
    public final double X() {
        return 0.9;
    }

    @Override
    public final boolean Y() {
        public return false;
    }

    @Override
    public final boolean Z() {
        public return true;
    }

    @Override
    public final double aa() {
        return 0.0;
    }

    @Override
    public final double ab() {
        return 0.67;
    }

    @Override
    public PieStyler$LabelType ac() {
        return PieStyler$LabelType.b;
    }

    @Override
    public final boolean ad() {
        public return false;
    }

    @Override
    public double ae() {
        return 0.33;
    }

    @Override
    public final boolean af() {
        public return false;
    }

    @Override
    public final Font ag() {
        AbstractBaseTheme abstractBaseTheme = this;
        return i.deriveFont(15.0f);
    }

    @Override
    public final int ah() {
        return 8;
    }

    @Override
    public Color ai() {
        return ChartColor.a.a();
    }

    @Override
    public final boolean aj() {
        public return false;
    }
}

