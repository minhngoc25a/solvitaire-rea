/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.Graphics2D;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import org.knowm.xchart.CategoryChartBuilder;
import org.knowm.xchart.CategorySeries;
import org.knowm.xchart.internal.Utils;
import org.knowm.xchart.internal.chartpart.AxisPair;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.Legend_Marker;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.internal.chartpart.Plot_Category;
import org.knowm.xchart.internal.series.AxesChartSeries;
import org.knowm.xchart.internal.series.MarkerSeries;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.internal.series.Series$DataType;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyle;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyleCycler;
import org.knowm.xchart.style.CategoryStyler;
import org.knowm.xchart.style.Styler$ChartTheme;
import org.knowm.xchart.style.theme.Theme;

public class CategoryChart
extends Chart {
    private CategoryChart(int n2, int n3) {
        super(n2, n3, new CategoryStyler());
        this.e = new AxisPair(this);
        this.f = new Plot_Category(this);
        this.g = new Legend_Marker(this);
    }

    private CategoryChart(int n2, int n3, Theme theme) {
        this(n2, n3);
        ((CategoryStyler)this.a).a(theme);
    }

    private CategoryChart(int n2, int n3, Styler$ChartTheme styler$ChartTheme) {
        this(n2, n3, Styler$ChartTheme.a(styler$ChartTheme));
    }

    public CategoryChart(CategoryChartBuilder categoryChartBuilder) {
        this(categoryChartBuilder.c, categoryChartBuilder.d, categoryChartBuilder.f);
        this.a(categoryChartBuilder.e);
        this.b(categoryChartBuilder.a);
        this.c(categoryChartBuilder.b);
    }

    public final CategorySeries a(String string, List list, List list2) {
        return this.a(string, list, list2, null);
    }

    private CategorySeries a(String string, List object, List list, List list2) {
        this.b(string, (List)object, list, null);
        if (object != null) {
            if (object.size() != list.size()) {
                throw new IllegalArgumentException("X and Y-Axis sizes are not the same!!!");
            }
        } else {
            object = Utils.a(list.size());
        }
        object = new CategorySeries(string, (List)object, list, null, CategoryChart.a((List)object));
        this.c.put(string, object);
        return object;
    }

    private static Series$DataType a(List object) {
        object = object.iterator();
        if ((object = object.next()) instanceof Number) {
            object = Series$DataType.a;
        } else if (object instanceof Date) {
            object = Series$DataType.b;
        } else if (object instanceof String) {
            object = Series$DataType.c;
        } else {
            throw new IllegalArgumentException("Series data must be either Number, Date or String type!!!");
        }
        return object;
    }

    private void b(String string, List list, List list2, List list3) {
        if (this.c.containsKey(string)) {
            throw new IllegalArgumentException("Series name >" + string + "< has already been used. Use unique names for each series!!!");
        }
        if (list2 == null) {
            throw new IllegalArgumentException("Y-Axis data cannot be null!!!");
        }
        if (list2.size() == 0) {
            throw new IllegalArgumentException("Y-Axis data cannot be empty!!!");
        }
        if (list != null && list.size() == 0) {
            throw new IllegalArgumentException("X-Axis data cannot be empty!!!");
        }
        if (list3 != null && list3.size() != list2.size()) {
            throw new IllegalArgumentException("Error bars and Y-Axis sizes are not the same!!!");
        }
    }

    @Override
    public final void a(Graphics2D graphics2D, int n2, int n3) {
        this.a(n2);
        this.b(n3);
        for (CategorySeries categorySeries : this.o().values()) {
            Object object = categorySeries.b();
            if (object != null) continue;
            categorySeries.a(((CategoryStyler)this.b()).V());
        }
        Iterator iterator = this;
        SeriesColorMarkerLineStyleCycler seriesColorMarkerLineStyleCycler = new SeriesColorMarkerLineStyleCycler(((CategoryStyler)((Chart)((Object)iterator)).b()).aj(), ((CategoryStyler)((Chart)((Object)iterator)).b()).al(), ((CategoryStyler)((Chart)((Object)iterator)).b()).ak());
        for (Object object : ((Chart)((Object)iterator)).o().values()) {
            SeriesColorMarkerLineStyle seriesColorMarkerLineStyle = seriesColorMarkerLineStyleCycler.a();
            if (((AxesChartSeries)object).b_() == null) {
                ((AxesChartSeries)object).b(seriesColorMarkerLineStyle.c());
            }
            if (((AxesChartSeries)object).c_() == null) {
                ((AxesChartSeries)object).d(seriesColorMarkerLineStyle.a());
            }
            if (((Series)object).t() == null) {
                ((Series)object).e(seriesColorMarkerLineStyle.a());
            }
            if (((MarkerSeries)object).d_() == null) {
                ((MarkerSeries)object).b(seriesColorMarkerLineStyle.b());
            }
            if (((MarkerSeries)object).g() != null) continue;
            ((MarkerSeries)object).c(seriesColorMarkerLineStyle.a());
        }
        this.a(graphics2D);
        this.e.a(graphics2D);
        ((Plot_)this.f).a(graphics2D);
        this.b.a(graphics2D);
        this.g.a(graphics2D);
        this.d.forEach(chartPart -> chartPart.a(graphics2D));
    }
}

