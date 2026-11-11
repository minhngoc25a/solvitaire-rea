/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.Component;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.print.PageFormat;
import java.awt.print.Printable;
import org.knowm.xchart.XChartPanel;

public class XChartPanel$Printer
implements Printable {
    private final Component a;

    XChartPanel$Printer(XChartPanel xChartPanel) {
        this.a = xChartPanel;
    }

    @Override
    public int print(Graphics graphics, PageFormat pageFormat, int n2) {
        if (n2 > 0) {
            return 1;
        }
        graphics = (Graphics2D)graphics;
        ((Graphics2D)graphics).translate(pageFormat.getImageableX(), pageFormat.getImageableY());
        double d2 = pageFormat.getImageableWidth() / (double)this.a.getWidth();
        double d3 = pageFormat.getImageableHeight() / (double)this.a.getHeight();
        ((Graphics2D)graphics).scale(d2, d3);
        this.a.printAll(graphics);
        return 0;
    }
}

