/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import org.knowm.xchart.BubbleSeries$BubbleSeriesRenderStyle;
import org.knowm.xchart.style.AxesChartStyler;

public class BubbleStyler
extends AxesChartStyler {
    private BubbleSeries$BubbleSeriesRenderStyle b;

    public BubbleStyler() {
        this.a();
    }

    @Override
    protected final void a() {
        super.a();
        this.b = BubbleSeries$BubbleSeriesRenderStyle.a;
    }

    public final BubbleSeries$BubbleSeriesRenderStyle V() {
        return this.b;
    }
}

