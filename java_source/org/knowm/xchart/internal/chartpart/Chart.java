/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.Shape;
import java.awt.geom.Rectangle2D;
import java.text.Format;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import org.knowm.xchart.internal.chartpart.Axis;
import org.knowm.xchart.internal.chartpart.AxisPair;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.ChartTitle;
import org.knowm.xchart.internal.chartpart.Legend_;
import org.knowm.xchart.internal.chartpart.Legend_Marker;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.internal.chartpart.Plot_AxesChart;
import org.knowm.xchart.style.CategoryStyler;
import org.knowm.xchart.style.Styler;

public abstract class Chart {
    protected final Styler a;
    protected final ChartTitle b;
    protected final Map c = new LinkedHashMap();
    protected final ArrayList d = new ArrayList();
    protected AxisPair e;
    protected Plot_AxesChart f;
    protected Legend_Marker g;
    private int h;
    private int i;
    private String j = "";
    private String k = "";
    private String l = "";
    private final Map m = new HashMap();

    protected Chart(int n2, int n3, CategoryStyler categoryStyler) {
        this.h = n2;
        this.i = n3;
        this.a = categoryStyler;
        this.b = new ChartTitle(this);
    }

    public abstract void a(Graphics2D var1, int var2, int var3);

    protected final void a(Graphics2D graphics2D) {
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, this.a.aS() ? RenderingHints.VALUE_ANTIALIAS_ON : RenderingHints.VALUE_ANTIALIAS_OFF);
        graphics2D.setColor(this.a.ag());
        Chart chart = this;
        Object object = chart;
        object = this;
        object = new Rectangle2D.Double(0.0, 0.0, chart.h, ((Chart)object).i);
        graphics2D.fill((Shape)object);
    }

    public final Styler b() {
        return this.a;
    }

    public final int c() {
        return this.h;
    }

    protected final void a(int n2) {
        this.h = n2;
    }

    public final int d() {
        return this.i;
    }

    protected final void b(int n2) {
        this.i = n2;
    }

    public final String e() {
        return this.j;
    }

    public final void a(String string) {
        this.j = string;
    }

    public final String f() {
        return this.k;
    }

    public final void b(String string) {
        this.k = string;
    }

    public final void c(String string) {
        this.l = string;
    }

    public final String c(int n2) {
        String string = (String)this.m.get(n2);
        if (string == null) {
            return this.l;
        }
        return string;
    }

    final ChartTitle g() {
        return this.b;
    }

    final Legend_ h() {
        return this.g;
    }

    final Plot_ i() {
        return this.f;
    }

    final Axis j() {
        return this.e.a();
    }

    final Axis k() {
        return this.e.b();
    }

    final Axis d(int n2) {
        return this.e.a(n2);
    }

    final AxisPair l() {
        return this.e;
    }

    final Format m() {
        AxisTickCalculator_ axisTickCalculator_ = this.e.a().g();
        return axisTickCalculator_.h;
    }

    final Format n() {
        AxisTickCalculator_ axisTickCalculator_ = this.e.b().g();
        return axisTickCalculator_.h;
    }

    public final Map o() {
        return this.c;
    }
}

