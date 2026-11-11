/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.series;

import java.awt.Color;
import org.knowm.xchart.internal.series.AxesChartSeries;
import org.knowm.xchart.internal.series.Series$DataType;
import org.knowm.xchart.style.markers.Marker;

public abstract class MarkerSeries
extends AxesChartSeries {
    private Marker g;
    private Color h;

    protected MarkerSeries(String string, Series$DataType series$DataType) {
        super(string, series$DataType);
    }

    public Marker d_() {
        return this.g;
    }

    public MarkerSeries b(Marker marker) {
        this.g = marker;
        return this;
    }

    public Color g() {
        return this.h;
    }

    public MarkerSeries c(Color color) {
        this.h = color;
        return this;
    }
}

