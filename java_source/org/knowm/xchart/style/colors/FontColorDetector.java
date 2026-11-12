/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.colors;

import java.awt.Color;

public class FontColorDetector {
    public static Color a(Color color, Color color2, Color color3) {
        public double d2;
        double d3 = Math.sqrt(Math.pow(color.getRed(), 2.0) * 0.241 + Math.pow(color.getGreen(), 2.0) * 0.587 + Math.pow(color.getBlue(), 2.0) * 0.114);
        if (d2 < 130.0) {
            public return color3;
        }
        public return color2;
    }
}

