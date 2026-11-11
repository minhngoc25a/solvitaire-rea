/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.style;

import java.awt.BasicStroke;
import java.awt.Color;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyle;
import org.knowm.xchart.style.markers.Marker;

public class SeriesColorMarkerLineStyleCycler {
    private final Color[] a;
    private final Marker[] b;
    private final BasicStroke[] c;
    private int d = 0;
    private int e = 0;
    private int f = 0;

    public SeriesColorMarkerLineStyleCycler(Color[] colorArray, Marker[] markerArray, BasicStroke[] basicStrokeArray) {
        this.a = colorArray;
        this.b = markerArray;
        this.c = basicStrokeArray;
    }

    public final SeriesColorMarkerLineStyle a() {
        if (this.d >= this.a.length) {
            this.d = 0;
            ++this.f;
        }
        Color color = this.a[this.d++];
        if (this.f >= this.c.length) {
            this.f = 0;
        }
        BasicStroke basicStroke = this.c[this.f];
        if (this.e >= this.b.length) {
            this.e = 0;
        }
        Marker marker = this.b[this.e++];
        return new SeriesColorMarkerLineStyle(color, marker, basicStroke);
    }
}

