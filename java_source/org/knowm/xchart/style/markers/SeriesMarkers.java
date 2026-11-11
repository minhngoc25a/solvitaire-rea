/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.markers;

import org.knowm.xchart.style.markers.Circle;
import org.knowm.xchart.style.markers.Cross;
import org.knowm.xchart.style.markers.Diamond;
import org.knowm.xchart.style.markers.Marker;
import org.knowm.xchart.style.markers.None;
import org.knowm.xchart.style.markers.Oval;
import org.knowm.xchart.style.markers.Plus;
import org.knowm.xchart.style.markers.Rectangle;
import org.knowm.xchart.style.markers.Square;
import org.knowm.xchart.style.markers.Trapezoid;
import org.knowm.xchart.style.markers.TriangleDown;
import org.knowm.xchart.style.markers.TriangleUp;

public interface SeriesMarkers {
    public static final Circle a;
    public static final Diamond b;
    public static final Square c;
    public static final TriangleDown d;
    public static final TriangleUp e;
    public static final Cross f;
    public static final Plus g;
    public static final Rectangle h;

    public Marker[] f_();

    static {
        new None();
        a = new Circle();
        b = new Diamond();
        c = new Square();
        d = new TriangleDown();
        e = new TriangleUp();
        f = new Cross();
        g = new Plus();
        new Trapezoid();
        new Oval();
        h = new Rectangle();
    }
}

