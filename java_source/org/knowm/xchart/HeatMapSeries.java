/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.util.Collection;
import java.util.List;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.AxesChartSeries;

public class HeatMapSeries
extends AxesChartSeries {
    private List g;
    private List h;
    private List i;
    private double j;
    private double k;

    @Override
    protected final void c() {
        this.j = Double.MAX_VALUE;
        this.k = Double.MIN_VALUE;
        throw new NullPointerException();
    }

    @Override
    public final RenderableSeries$LegendRenderType a() {
        return null;
    }

    public final Collection d() {
        return this.g;
    }

    public final Collection e() {
        return this.h;
    }

    public final double f() {
        return this.j;
    }

    public final double g() {
        return this.k;
    }
}

