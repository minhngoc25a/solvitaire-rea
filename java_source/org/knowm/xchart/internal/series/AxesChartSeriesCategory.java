/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.series;

import java.util.Collection;
import java.util.Date;
import java.util.List;
import org.knowm.xchart.internal.series.MarkerSeries;
import org.knowm.xchart.internal.series.Series$DataType;

public abstract class AxesChartSeriesCategory
extends MarkerSeries {
    private List g;
    private List h;
    private List i;

    public AxesChartSeriesCategory(String string, List list, List list2, List list3, Series$DataType series$DataType) {
        super(string, series$DataType);
        this.g = list;
        this.h = list2;
        this.i = list3;
        this.c();
    }

    @Override
    protected final void c() {
        double[] dArray = AxesChartSeriesCategory.a((Collection)this.g, this.a);
        this.c = dArray[0];
        this.d = dArray[1];
        dArray = this.i == null ? AxesChartSeriesCategory.a((Collection)this.h, this.b) : AxesChartSeriesCategory.a((Collection)this.h, this.i);
        this.e = dArray[0];
        this.f = dArray[1];
    }

    private static double[] a(Collection object, Collection object2) {
        double d2 = Double.MAX_VALUE;
        double d3 = -1.7976931348623157E308;
        object = object.iterator();
        object2 = object2.iterator();
        while (object.hasNext()) {
            double d4;
            double d5 = ((Number)object.next()).doubleValue();
            if (d5 - (d4 = ((Number)object2.next()).doubleValue()) < d2) {
                d2 = d5 - d4;
            }
            if (!(d5 + d4 > d3)) continue;
            d3 = d5 + d4;
        }
        return new double[]{d2, d3};
    }

    private static double[] a(Collection object, Series$DataType series$DataType) {
        double d2 = Double.MAX_VALUE;
        double d3 = -1.7976931348623157E308;
        object = object.iterator();
        while (object.hasNext()) {
            Object object2 = object.next();
            if (object2 == null) continue;
            double d4 = 0.0;
            if (series$DataType == Series$DataType.a) {
                d4 = ((Number)object2).doubleValue();
            } else if (series$DataType == Series$DataType.b) {
                object2 = (Date)object2;
                d4 = ((Date)object2).getTime();
            } else if (series$DataType == Series$DataType.c) {
                return new double[]{Double.NaN, Double.NaN};
            }
            if (d4 < d2) {
                d2 = d4;
            }
            if (!(d4 > d3)) continue;
            d3 = d4;
        }
        return new double[]{d2, d3};
    }

    public final Collection h() {
        return this.g;
    }

    public final Collection o() {
        return this.h;
    }

    public final Collection p() {
        return this.i;
    }
}

