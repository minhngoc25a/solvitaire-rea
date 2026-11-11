/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.BasicStroke;
import java.awt.Color;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.AxesChartSeries;
import org.knowm.xchart.internal.series.MarkerSeries;
import org.knowm.xchart.style.markers.Marker;

public class RadarSeries
extends MarkerSeries {
    private BasicStroke g;
    private Color h;
    private float i;
    private Marker j;
    private Color k;

    @Override
    protected final void c() {
    }

    @Override
    public final BasicStroke b_() {
        return this.g;
    }

    public final RadarSeries a(BasicStroke basicStroke) {
        this.g = basicStroke;
        return this;
    }

    @Override
    public final Color c_() {
        return this.h;
    }

    public final RadarSeries a(Color color) {
        this.h = color;
        return this;
    }

    @Override
    public final Marker d_() {
        return this.j;
    }

    public final RadarSeries a(Marker marker) {
        this.j = marker;
        return this;
    }

    @Override
    public final Color g() {
        return this.k;
    }

    public final RadarSeries b(Color color) {
        this.k = color;
        return this;
    }

    @Override
    public final RenderableSeries$LegendRenderType a() {
        return RenderableSeries$LegendRenderType.a;
    }

    @Override
    public final /* synthetic */ AxesChartSeries b(BasicStroke basicStroke) {
        return this.a(basicStroke);
    }
}

