/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RectangularShape;
import org.knowm.xchart.internal.chartpart.PlotSurface_;
import org.knowm.xchart.style.Styler;

public class PlotSurface_Pie
extends PlotSurface_ {
    private final Styler c;

    @Override
    public final void a(Graphics2D object) {
        object = this.a();
        new Rectangle2D.Double(((RectangularShape)object).getX(), ((RectangularShape)object).getY(), ((RectangularShape)object).getWidth(), ((RectangularShape)object).getHeight());
        throw new NullPointerException();
    }
}

