/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.markers;

import java.awt.Graphics2D;
import java.awt.geom.Path2D;
import org.knowm.xchart.style.markers.Marker;

public class Diamond
extends Marker {
    @Override
    public final void a(Graphics2D graphics2D, double d2, double d3, int n2) {
        graphics2D.setStroke(this.a);
        double d4 = (double)n2 / 2.0 * 1.3;
        Path2D.Double double_ = new Path2D.Double();
        double_.moveTo(d2 - d4, d3);
        double_.lineTo(d2, d3 - d4);
        double_.lineTo(d2 + d4, d3);
        double_.lineTo(d2, d3 + d4);
        double_.closePath();
        graphics2D.fill(double_);
    }
}

