/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.style;

import java.awt.BasicStroke;
import java.awt.Color;
import org.knowm.xchart.style.markers.Marker;

public final class SeriesColorMarkerLineStyle {
    private final Color a;
    private final Marker b;
    private final BasicStroke c;

    public SeriesColorMarkerLineStyle(Color color, Marker marker, BasicStroke basicStroke) {
        this.a = color;
        this.b = marker;
        this.c = basicStroke;
    }

    public final Color a() {
        return this.a;
    }

    public final Marker b() {
        return this.b;
    }

    public final BasicStroke c() {
        return this.c;
    }
}

