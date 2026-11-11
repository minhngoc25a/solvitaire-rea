/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.theme;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Font;
import org.knowm.xchart.style.PieStyler$LabelType;
import org.knowm.xchart.style.colors.ChartColor;
import org.knowm.xchart.style.colors.GGPlot2SeriesColors;
import org.knowm.xchart.style.lines.GGPlot2SeriesLines;
import org.knowm.xchart.style.markers.GGPlot2SeriesMarkers;
import org.knowm.xchart.style.markers.Marker;
import org.knowm.xchart.style.theme.AbstractBaseTheme;

public class GGPlot2Theme
extends AbstractBaseTheme {
    @Override
    public final Marker[] f_() {
        return new GGPlot2SeriesMarkers().f_();
    }

    @Override
    public final BasicStroke[] g_() {
        return new GGPlot2SeriesLines().g_();
    }

    @Override
    public final Color[] a() {
        return new GGPlot2SeriesColors().a();
    }

    @Override
    public final Font f() {
        GGPlot2Theme gGPlot2Theme = this;
        return AbstractBaseTheme.i.deriveFont(14.0f);
    }

    @Override
    public final Color i() {
        return ChartColor.c.a();
    }

    @Override
    public final Color j() {
        return ChartColor.c.a();
    }

    @Override
    public final Font l() {
        GGPlot2Theme gGPlot2Theme = this;
        return AbstractBaseTheme.i.deriveFont(14.0f);
    }

    @Override
    public final Color o() {
        return ChartColor.e.a();
    }

    @Override
    public final Font u() {
        GGPlot2Theme gGPlot2Theme = this;
        return AbstractBaseTheme.i.deriveFont(14.0f);
    }

    @Override
    public final Font x() {
        GGPlot2Theme gGPlot2Theme = this;
        return AbstractBaseTheme.i.deriveFont(1).deriveFont(13.0f);
    }

    @Override
    public final int y() {
        return 8;
    }

    @Override
    public final int z() {
        return 5;
    }

    @Override
    public final BasicStroke B() {
        return new BasicStroke(1.5f);
    }

    @Override
    public final Color C() {
        return ChartColor.b.a();
    }

    @Override
    public final boolean D() {
        return false;
    }

    @Override
    public final Color K() {
        return ChartColor.d.a();
    }

    @Override
    public final Color L() {
        return ChartColor.e.a();
    }

    @Override
    public final boolean M() {
        return false;
    }

    @Override
    public final boolean N() {
        return false;
    }

    @Override
    public final Color O() {
        return ChartColor.e.a();
    }

    @Override
    public final BasicStroke P() {
        return new BasicStroke(1.0f);
    }

    @Override
    public final int Q() {
        return 0;
    }

    @Override
    public final Color ak() {
        return ChartColor.e.a();
    }

    @Override
    public final Color al() {
        return ChartColor.b.a();
    }

    @Override
    public final Color am() {
        return ChartColor.d.a();
    }

    @Override
    public final PieStyler$LabelType ac() {
        return PieStyler$LabelType.d;
    }

    @Override
    public final double ae() {
        return 0.25;
    }

    @Override
    public final Color ai() {
        return ChartColor.b.a();
    }
}

