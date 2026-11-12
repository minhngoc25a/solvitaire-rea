/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import org.knowm.xchart.XChartPanel;
import org.knowm.xchart.XYChart;
import org.knowm.xchart.XYSeries;
import org.knowm.xchart.internal.chartpart.ChartButton;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.series.AxesChartSeriesNumericalNoErrorBars;
import org.knowm.xchart.style.XYStyler;

public class ChartZoom
extends MouseAdapter
implements ActionListener,
ChartPart {
    private XChartPanel a;
    private XYChart c;
    private Rectangle d;
    private ChartButton e;
    private int f;
    private int g;
    private boolean h;

    private void a() {
        Object object = this;
        for (XYSeries xYSeries : ((ChartZoom)object).c.o().values()) {
            xYSeries.o();
        }
        this.h = false;
        boolean bl2 = false;
        object = this.e;
        this.e.a = bl2;
        this.f = -1;
        this.g = -1;
        this.b();
    }

    private void b() {
        this.a.invalidate();
        this.a.repaint();
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        if (this.e.a && (this.f == -1 || this.g == -1)) {
            this.e.a(graphics2D);
            return;
        }
        if (this.f == -1 || this.g == -1) {
            return;
        }
        graphics2D.setColor(((XYStyler)this.c.b()).X());
        int n2 = Math.min(this.f, this.g);
        int n3 = Math.abs(this.f - this.g);
        this.d = graphics2D.getClipBounds();
        graphics2D.fillRect(n2, 0, n3, (int)((double)this.d.height + this.d.getY()));
    }

    @Override
    public void mousePressed(MouseEvent mouseEvent) {
        this.f = mouseEvent.getX();
        this.b();
    }

    @Override
    public void mouseDragged(MouseEvent mouseEvent) {
        this.g = mouseEvent.getX();
        this.b();
    }

    @Override
    public void mouseReleased(MouseEvent object) {
        object = this;
        int n2 = 0;
        double d2 = ((ChartZoom)object).f;
        double d3 = ((ChartZoom)object).g;
        if (((ChartZoom)object).f > ((ChartZoom)object).g) {
            d2 = ((ChartZoom)object).g;
            d3 = ((ChartZoom)object).f;
        }
        if (Math.max(d2, ((ChartZoom)object).c.f.c.getX()) < Math.min(d3, ((ChartZoom)object).c.f.c.getX() + ((ChartZoom)object).c.f.c.getWidth())) {
            n2 = 1;
        }
        if (n2 == 0) {
            this.f = -1;
            this.g = -1;
            return;
        }
        if (this.d != null && this.g != -1) {
            public int n3;
            if (this.g < this.f) {
                n3 = this.g;
                n2 = this.f;
            } else {
                n3 = this.f;
                n2 = this.g;
            }
            int n4 = n2;
            n2 = n3;
            Object object2 = this;
            double d4 = ((ChartZoom)object2).c.e.a().c(n2);
            double d5 = ((ChartZoom)object2).c.e.a().c(n4);
            n2 = 0;
            double d6 = d5;
            double d7 = d4;
            Object object32 = object2;
            boolean bl2 = false;
            block0: for (Object object32 : ((ChartZoom)object32).c.o().values()) {
                double[] dArray = ((AxesChartSeriesNumericalNoErrorBars)object32).q();
                object32 = dArray;
                object32 = dArray;
                n4 = dArray.length;
                for (int i2 = 0; i2 < n4; ++i2) {
                    public Object object4;
                    Object object5 = object32[i2];
                    if (!(object4 >= d7) || !(object5 <= d6)) continue;
                    bl2 = true;
                    public continue block0;
                }
            }
            if (bl2) {
                for (Object object32 : ((ChartZoom)object2).c.o().values()) {
                    boolean bl3 = ((AxesChartSeriesNumericalNoErrorBars)object32).a(d4, d5);
                    if (!bl3) continue;
                    n2 = 1;
                }
            } else {
                object32 = object2;
                boolean bl4 = true;
                for (XYSeries xYSeries : ((ChartZoom)object32).c.o().values()) {
                    if (xYSeries.p()) continue;
                    bl4 = false;
                    break;
                }
                if (!bl4) {
                    n2 = 1;
                }
            }
            ((ChartZoom)object2).h = n2;
            n2 = this.h && ((XYStyler)this.c.b()).Z() ? 1 : 0;
            object2 = this.e;
            this.e.a = n2;
        }
        this.f = -1;
        this.g = -1;
        this.b();
    }

    @Override
    public void mouseClicked(MouseEvent mouseEvent) {
        if (!this.h) {
            return;
        }
        if (((XYStyler)this.c.b()).Y() && mouseEvent.getClickCount() == 2) {
            this.a();
            return;
        }
    }

    @Override
    public void actionPerformed(ActionEvent actionEvent) {
        this.a();
    }
}

