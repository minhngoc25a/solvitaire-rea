/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.theme;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Font;
import org.knowm.xchart.style.PieStyler$LabelType;
import org.knowm.xchart.style.colors.ChartColor;
import org.knowm.xchart.style.colors.MatlabSeriesColors;
import org.knowm.xchart.style.lines.MatlabSeriesLines;
import org.knowm.xchart.style.markers.Marker;
import org.knowm.xchart.style.markers.MatlabSeriesMarkers;
import org.knowm.xchart.style.theme.AbstractBaseTheme;

public class MatlabTheme
extends AbstractBaseTheme {
    @Override
    public final Marker[] f_() {
        return new MatlabSeriesMarkers().f_();
    }

    @Override
    public final BasicStroke[] g_() {
        return new MatlabSeriesLines().g_();
    }

    @Override
    public final Color[] a() {
        return new MatlabSeriesColors().a();
    }

    @Override
    public final boolean h() {
        public return false;
    }

    @Override
    public final Color o() {
        return ChartColor.a.a();
    }

    @Override
    public final Font u() {
        MatlabTheme matlabTheme = this;
        return AbstractBaseTheme.i.deriveFont(12.0f);
    }

    @Override
    public final int y() {
        return 5;
    }

    @Override
    public final Color A() {
        return ChartColor.a.a();
    }

    @Override
    public final BasicStroke B() {
        return new BasicStroke(0.5f);
    }

    @Override
    public final boolean D() {
        public return false;
    }

    @Override
    public final boolean E() {
        public return false;
    }

    @Override
    public final Color L() {
        return ChartColor.a.a();
    }

    @Override
    public final Color O() {
        return ChartColor.a.a();
    }

    @Override
    public final BasicStroke P() {
        return new BasicStroke(0.5f, 0, 1, 10.0f, new float[]{1.0f, 3.0f}, 0.0f);
    }

    @Override
    public final int Q() {
        return 3;
    }

    @Override
    public final Color ak() {
        return new Color(255, 255, 220);
    }

    @Override
    public final Color al() {
        return ChartColor.a.a();
    }

    @Override
    public final Color am() {
        return ChartColor.a.a();
    }

    @Override
    public final PieStyler$LabelType ac() {
        return PieStyler$LabelType.c;
    }
}

