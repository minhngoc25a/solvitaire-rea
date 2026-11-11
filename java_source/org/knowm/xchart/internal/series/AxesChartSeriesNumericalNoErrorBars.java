/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.series;

import org.knowm.xchart.internal.series.MarkerSeries;

public abstract class AxesChartSeriesNumericalNoErrorBars
extends MarkerSeries {
    private double[] i;
    private double[] j;
    private double[] k;
    double[] g;
    double[] h;
    private double[] l;

    public final boolean a(double d2, double d3) {
        throw new NullPointerException();
    }

    public final void o() {
        this.g = this.i;
        this.h = this.j;
        this.l = this.k;
        this.c();
    }

    static double[] a(double[] dArray) {
        double d2 = Double.MAX_VALUE;
        double d3 = -1.7976931348623157E308;
        for (double d4 : dArray) {
            if (Double.isNaN(d4)) continue;
            if (d4 < d2) {
                d2 = d4;
            }
            if (!(d4 > d3)) continue;
            d3 = d4;
        }
        return new double[]{d2, d3};
    }

    @Override
    protected void c() {
        double[] dArray = AxesChartSeriesNumericalNoErrorBars.a(this.g);
        this.c = dArray[0];
        this.d = dArray[1];
        if (this.l == null) {
            dArray = AxesChartSeriesNumericalNoErrorBars.a(this.h);
        } else {
            double[] dArray2 = this.l;
            dArray = this.h;
            double d2 = Double.MAX_VALUE;
            double d3 = -1.7976931348623157E308;
            for (int i2 = 0; i2 < dArray.length; ++i2) {
                double d4 = dArray[i2];
                double d5 = dArray2[i2];
                if (d4 - d5 < d2) {
                    d2 = d4 - d5;
                }
                if (!(d4 + d5 > d3)) continue;
                d3 = d4 + d5;
            }
            dArray = new double[]{d2, d3};
        }
        this.e = dArray[0];
        this.f = dArray[1];
    }

    public final boolean p() {
        int cfr_ignored_0 = this.g.length;
        throw new NullPointerException();
    }

    public final double[] q() {
        return this.g;
    }

    public final double[] r() {
        return this.h;
    }

    public final double[] s() {
        return this.l;
    }
}

