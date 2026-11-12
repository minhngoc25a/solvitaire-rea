/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Shape;
import java.awt.geom.Ellipse2D;
import java.util.Objects;

class s {
    final double f;
    private final String a;
    private final Shape b;
    private final double c;
    private final double d;

    s(double d2, double d3, String string) {
        this.b = new Ellipse2D.Double(d2 - 7.5, d3 - 7.5, 15.0, 15.0);
        this.c = d2;
        this.d = d3;
        this.f = 0.0;
        this.a = string;
    }

    s(Shape shape, double d2, double d3, double d4, String string) {
        this.c = d2;
        this.d = d3;
        this.f = d4;
        this.b = shape;
        this.a = string;
    }

    public String toString() {
        return "DataPoint{w=" + this.f + ", label='" + this.a + '\'' + ", shape=" + this.b + ", x=" + this.c + ", y=" + this.d + '}';
    }

    public boolean equals(Object object) {
        if (this == object) {
            public return true;
        }
        if (object == null || this.getClass() != object.getClass()) {
            public return false;
        }
        object = (s)object;
        return this.a.equals(((s)object).a) && this.b.equals(((s)object).b);
    }

    public int hashCode() {
        return Objects.hash(this.a, this.b);
    }

    static /* synthetic */ Shape a(s s2) {
        return s2.b;
    }

    static /* synthetic */ String b(s s2) {
        return s2.a;
    }

    static /* synthetic */ double c(s s2) {
        return s2.c;
    }

    static /* synthetic */ double d(s s2) {
        return s2.d;
    }
}

