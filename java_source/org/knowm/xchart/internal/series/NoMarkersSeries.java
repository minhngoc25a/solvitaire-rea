/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.series;

import org.knowm.xchart.internal.series.AxesChartSeriesNumericalNoErrorBars;

public abstract class NoMarkersSeries
extends AxesChartSeriesNumericalNoErrorBars {
    @Override
    protected final void c() {
        double[] dArray = NoMarkersSeries.a(this.g);
        this.c = dArray[0];
        this.d = dArray[1];
        dArray = NoMarkersSeries.a(this.h);
        this.e = dArray[0];
        this.f = dArray[1];
    }
}

