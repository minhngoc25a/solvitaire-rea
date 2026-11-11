/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.theme;

import java.awt.BasicStroke;
import java.awt.Color;
import org.knowm.xchart.style.colors.ChartColor;
import org.knowm.xchart.style.colors.XChartSeriesColors;
import org.knowm.xchart.style.lines.XChartSeriesLines;
import org.knowm.xchart.style.markers.Marker;
import org.knowm.xchart.style.markers.XChartSeriesMarkers;
import org.knowm.xchart.style.theme.AbstractBaseTheme;

public class XChartTheme
extends AbstractBaseTheme {
    @Override
    public final Color c() {
        return ChartColor.c.a();
    }

    @Override
    public final Color[] a() {
        return new XChartSeriesColors().a();
    }

    @Override
    public final Marker[] f_() {
        return new XChartSeriesMarkers().f_();
    }

    @Override
    public final BasicStroke[] g_() {
        return new XChartSeriesLines().g_();
    }

    @Override
    public final boolean h() {
        return false;
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
    public final boolean N() {
        return false;
    }
}

