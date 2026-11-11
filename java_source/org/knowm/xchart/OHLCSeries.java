/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.Color;
import org.knowm.xchart.OHLCSeries$OHLCSeriesRenderStyle;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.MarkerSeries;

public class OHLCSeries
extends MarkerSeries {
    private double[] g;
    private double[] h;
    private double[] i;
    private double[] j;
    private OHLCSeries$OHLCSeriesRenderStyle k;
    private Color l;
    private Color m;

    public final OHLCSeries$OHLCSeriesRenderStyle d() {
        return this.k;
    }

    public final OHLCSeries a(OHLCSeries$OHLCSeriesRenderStyle oHLCSeries$OHLCSeriesRenderStyle) {
        if (oHLCSeries$OHLCSeriesRenderStyle == OHLCSeries$OHLCSeriesRenderStyle.b) {
            throw new IllegalArgumentException("Series name >" + this.u() + "<, yData is equal to null and cannot be set to OHLCSeriesRenderStyle.Line");
        }
        this.k = oHLCSeries$OHLCSeriesRenderStyle;
        return this;
    }

    public final Color e() {
        return this.l;
    }

    public final OHLCSeries a(Color color) {
        this.l = color;
        return this;
    }

    public final Color f() {
        return this.m;
    }

    public final OHLCSeries b(Color color) {
        this.m = color;
        return this;
    }

    @Override
    public final RenderableSeries$LegendRenderType a() {
        return this.k.a();
    }

    private static double[] a(double[] dArray, double[] dArray2) {
        double d2 = Double.MAX_VALUE;
        double d3 = -1.7976931348623157E308;
        for (int i2 = 0; i2 < dArray2.length; ++i2) {
            if (!Double.isNaN(dArray2[i2]) && dArray2[i2] > d3) {
                d3 = dArray2[i2];
            }
            if (Double.isNaN(dArray[i2]) || !(dArray[i2] < d2)) continue;
            d2 = dArray[i2];
        }
        return new double[]{d2, d3};
    }

    @Override
    protected final void c() {
        double[] dArray = OHLCSeries.a(this.g, this.g);
        this.c = dArray[0];
        this.d = dArray[1];
        dArray = OHLCSeries.a(this.i, this.h);
        this.e = dArray[0];
        this.f = dArray[1];
    }
}

