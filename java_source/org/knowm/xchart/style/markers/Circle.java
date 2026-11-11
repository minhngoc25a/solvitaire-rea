/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.markers;

import java.awt.Graphics2D;
import java.awt.geom.Ellipse2D;
import org.knowm.xchart.style.markers.Marker;

public class Circle
extends Marker {
    @Override
    public final void a(Graphics2D graphics2D, double d2, double d3, int n2) {
        graphics2D.setStroke(this.a);
        double d4 = (double)n2 / 2.0;
        Ellipse2D.Double double_ = new Ellipse2D.Double(d2 - d4, d3 - d4, n2, n2);
        graphics2D.fill(double_);
    }
}

