/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.text.DecimalFormat;
import java.text.NumberFormat;
import org.knowm.xchart.internal.chartpart.PlotContent_;
import org.knowm.xchart.style.RadarStyler;

public class PlotContent_Radar
extends PlotContent_ {
    private final RadarStyler f;
    private static final NumberFormat g = DecimalFormat.getPercentInstance();

    @Override
    public final void b(Graphics2D graphics2D) {
        this.a().getWidth();
        this.a().getHeight();
        throw new NullPointerException();
    }
}

