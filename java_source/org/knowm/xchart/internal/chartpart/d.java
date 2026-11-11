/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

final class d {
    private final long a;
    private final int b;
    private final String c;

    public d(long l2, int n2, String string) {
        this.a = l2;
        this.b = n2;
        this.c = string;
    }

    public final long a() {
        return this.a;
    }

    public final int b() {
        return this.b;
    }

    public final String c() {
        return this.c;
    }

    public final String toString() {
        return "TimeSpan [unitAmount=" + this.a + ", magnitude=" + this.b + ", datePattern=" + this.c + "]";
    }
}

