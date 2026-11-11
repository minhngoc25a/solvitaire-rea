/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.math.BigDecimal;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import org.knowm.xchart.internal.Utils;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.k;
import org.knowm.xchart.internal.chartpart.l;
import org.knowm.xchart.internal.series.Series$DataType;
import org.knowm.xchart.style.AxesChartStyler;

final class b
extends AxisTickCalculator_ {
    public b(Axis$Direction object, double d2, List list, Series$DataType object2, AxesChartStyler axesChartStyler) {
        super((Axis$Direction)((Object)object), d2, Double.NaN, Double.NaN, axesChartStyler);
        Series$DataType series$DataType = object2;
        Object object3 = list;
        object = this;
        double d3 = ((AxisTickCalculator_)object).g.aD() * ((AxisTickCalculator_)object).d;
        double d4 = Utils.a(((AxisTickCalculator_)object).d, d3);
        double d5 = d3 / (double)object3.size();
        double d6 = d5 / 2.0;
        int n2 = ((AxisTickCalculator_)object).g.x();
        if (n2 == 1) {
            throw new IllegalArgumentException("Unsupported max label count equal to 1");
        }
        if (n2 > 0 && n2 < object3.size()) {
            object2 = new ArrayList();
            double d7 = (double)object3.size() / (double)(n2 - 1);
            double d8 = 0.0;
            while (Math.round(d8) < (long)object3.size()) {
                int n3 = (int)Math.round(d8);
                Object e2 = object3.get(n3);
                object2.add(e2);
                d8 += d7;
            }
            List list2 = object3;
            Object e3 = list2.get(list2.size() - 1);
            object2.add(e3);
            object3 = object2;
            d5 = d3 / (double)(object3.size() - 1);
            d6 = 0.0;
        }
        if (series$DataType == Series$DataType.c) {
            ((AxisTickCalculator_)object).h = new l();
        } else if (series$DataType == Series$DataType.a) {
            ((AxisTickCalculator_)object).h = new k(((AxisTickCalculator_)object).g, ((AxisTickCalculator_)object).c, ((AxisTickCalculator_)object).e, ((AxisTickCalculator_)object).f);
        } else if (series$DataType == Series$DataType.b) {
            if (((AxisTickCalculator_)object).g.H() == null) {
                throw new RuntimeException("You need to set the Date Formatting Pattern!!!");
            }
            object2 = new SimpleDateFormat(((AxisTickCalculator_)object).g.H(), ((AxisTickCalculator_)object).g.F());
            ((DateFormat)object2).setTimeZone(((AxisTickCalculator_)object).g.G());
            ((AxisTickCalculator_)object).h = object2;
        }
        int n4 = 0;
        Iterator iterator = object3.iterator();
        while (iterator.hasNext()) {
            Object e4 = iterator.next();
            if (series$DataType == Series$DataType.c) {
                ((AxisTickCalculator_)object).b.add(e4.toString());
            } else if (series$DataType == Series$DataType.a) {
                ((AxisTickCalculator_)object).b.add(((AxisTickCalculator_)object).h.format(new BigDecimal(e4.toString()).doubleValue()));
            } else if (series$DataType == Series$DataType.b) {
                ((AxisTickCalculator_)object).b.add(((AxisTickCalculator_)object).h.format(((Date)e4).getTime()));
            }
            double d9 = d4 + d6 + d5 * (double)n4++;
            ((AxisTickCalculator_)object).a.add(d9);
        }
    }
}

