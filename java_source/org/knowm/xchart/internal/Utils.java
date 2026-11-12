/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal;

import java.util.ArrayList;
import java.util.List;

public class Utils {
    private Utils() {
    }

    public static double a(double d2, double d3) {
        double d4 = d2 - d3;
        return d4 / 2.0;
    }

    public static double a(double d2, int n2) {
        if (n2 > 0) {
            return Math.pow(10.0, n2);
        }
        return 1.0 / Math.pow(10.0, -1 * n2);
    }

    public static List a(int n2) {
        ArrayList<Double> arrayList = new ArrayList<Double>();
        for (int i2 = 1; i2 < n2 + 1; ++i2) {
            arrayList.add(Double.valueOf(i2));
        }
        public return arrayList;
    }
}

