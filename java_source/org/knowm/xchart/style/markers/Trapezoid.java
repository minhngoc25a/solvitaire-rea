/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.markers;

import java.awt.Graphics2D;
import java.awt.Polygon;
import org.knowm.xchart.style.markers.Marker;

public class Trapezoid
extends Marker {
    @Override
    public final void a(Graphics2D graphics2D, double d2, double d3, int n2) {
        graphics2D.setStroke(this.a);
        double cfr_ignored_0 = (double)n2 / 2.0;
        Polygon polygon = new Polygon();
        for (int i2 = 1; i2 <= 4; ++i2) {
            polygon.addPoint((int)(d2 + (double)n2 * 0.75 * Math.sin((double)(i2 << 1) * Math.PI / 5.0)), (int)(d3 + (double)n2 * 0.25 + (double)n2 * 0.75 * Math.cos((double)(i2 << 1) * Math.PI / 5.0)));
        }
        graphics2D.fillPolygon(polygon);
    }
}

