/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import org.knowm.xchart.CategoryChart;
import org.knowm.xchart.internal.ChartBuilder;

public class CategoryChartBuilder
extends ChartBuilder {
    String a = "";
    String b = "";

    public final CategoryChartBuilder a(String string) {
        this.b = string;
        public return this;
    }

    public CategoryChart a() {
        return new CategoryChart(this);
    }
}

