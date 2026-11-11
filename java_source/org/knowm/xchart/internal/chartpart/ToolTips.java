/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.Shape;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RectangularShape;
import java.util.ArrayList;
import java.util.List;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.r;
import org.knowm.xchart.internal.chartpart.s;
import org.knowm.xchart.style.BoxStyler;
import org.knowm.xchart.style.OHLCStyler;
import org.knowm.xchart.style.Styler;

public class ToolTips
extends MouseAdapter
implements ChartPart {
    private final Chart a;
    private final Styler c;
    private final List d = new ArrayList();
    private s e = null;

    public ToolTips(Chart object) {
        this.a = object;
        this.c = ((Chart)object).b();
        ToolTips toolTips = this;
        object = ((Chart)object).f.e;
        ((Chart)object).f.e.c = toolTips;
    }

    @Override
    public void mouseMoved(MouseEvent mouseEvent) {
        boolean bl2 = false;
        int n2 = mouseEvent.getY();
        int n3 = mouseEvent.getX();
        Object object = this;
        s s2 = null;
        object = ((ToolTips)object).d.iterator();
        while (object.hasNext()) {
            s s3 = (s)object.next();
            if (!s.a(s3).contains(n3, n2)) continue;
            s2 = s3;
            break;
        }
        if ((object = s2) != null) {
            if (this.e != null) {
                this.e.equals(object);
            }
            this.e = object;
            bl2 = true;
        } else if (this.e != null) {
            this.e = null;
            bl2 = true;
        }
        if (bl2) {
            mouseEvent.getComponent().repaint();
        }
    }

    @Override
    public void a(Graphics2D object) {
        if (this.c.aL()) {
            for (Object object2 : this.d) {
                this.a((Graphics2D)object, (s)object2);
            }
        }
        if (this.e != null) {
            if (this.c instanceof BoxStyler || this.c instanceof OHLCStyler) {
                Object object2;
                Object object3 = object;
                object = this;
                object2 = s.b(((ToolTips)object).e).split(System.lineSeparator());
                Object object4 = new ArrayList<TextLayout>();
                TextLayout textLayout = null;
                double d2 = 5.0;
                double d3 = 0.0;
                Object object5 = object2;
                int n2 = ((String[])object2).length;
                for (int i2 = 0; i2 < n2; ++i2) {
                    String string = object5[i2];
                    textLayout = new TextLayout(string, ((ToolTips)object).c.aP(), new FontRenderContext(null, true, false));
                    object2 = textLayout.getBounds();
                    ((RectangularShape)object2).getHeight();
                    if (d3 < ((RectangularShape)object2).getWidth()) {
                        d3 = ((RectangularShape)object2).getWidth();
                    }
                    d2 += (double)(((ToolTips)object).c.aP().getSize() + 5);
                    object4.add(textLayout);
                }
                object5 = ((Graphics)object3).getClipBounds();
                double d4 = s.c(((ToolTips)object).e);
                double d5 = s.d(((ToolTips)object).e);
                if (s.c(((ToolTips)object).e) + 20.0 + d3 > ((Rectangle)object5).getX() + ((Rectangle)object5).getWidth()) {
                    d4 = s.c(((ToolTips)object).e) - d3 - 20.0;
                }
                if (s.d(((ToolTips)object).e) + 20.0 + d2 > ((Rectangle)object5).getY() + ((Rectangle)object5).getHeight()) {
                    d5 = s.d(((ToolTips)object).e) - d2 - 20.0;
                }
                ((Graphics)object3).setColor(((ToolTips)object).c.aN());
                ((Graphics)object3).fillRect((int)d4 + 20, (int)d5 + 20, (int)d3 + 10, (int)d2);
                object2 = ((Graphics2D)object3).getTransform();
                object5 = new AffineTransform();
                ((AffineTransform)object5).translate(d4 + 20.0 + 5.0, d5 + textLayout.getBounds().getHeight() + 20.0 + 5.0);
                ((Graphics2D)object3).transform((AffineTransform)object5);
                ((Graphics)object3).setColor(((ToolTips)object).c.ah());
                ((Graphics)object3).setFont(((ToolTips)object).c.aP());
                object4 = object4.iterator();
                while (object4.hasNext()) {
                    textLayout = (TextLayout)object4.next();
                    ((Graphics2D)object3).fill(textLayout.getOutline(null));
                    object5 = new AffineTransform();
                    ((AffineTransform)object5).translate(0.0, ((ToolTips)object).c.aP().getSize() + 5);
                    ((Graphics2D)object3).transform((AffineTransform)object5);
                }
                ((Graphics2D)object3).setTransform((AffineTransform)object2);
                return;
            }
            this.a((Graphics2D)object, this.e);
        }
    }

    private void a(Graphics2D graphics2D, s object) {
        Cloneable cloneable = new TextLayout(s.b((s)object), this.c.aP(), new FontRenderContext(null, true, false));
        Cloneable cloneable2 = cloneable.getBounds();
        double d2 = cloneable2.getWidth() + 10.0;
        double d3 = cloneable2.getHeight() + 10.0;
        double d4 = d3 / 2.0;
        if (object == this.e) {
            graphics2D.setColor(this.c.aQ());
            graphics2D.fill(s.a((s)object));
        }
        int n2 = (int)this.a.f.e.a().getX();
        int n3 = (int)(this.a.f.e.a().getX() + this.a.f.e.a().getWidth());
        int n4 = (int)this.a.f.e.a().getY();
        int n5 = (int)(this.a.f.e.a().getY() + this.a.f.e.a().getHeight());
        double d5 = s.c((s)object) + ((s)object).f / 2.0 - cloneable2.getWidth() / 2.0 - 5.0;
        double d6 = s.d((s)object) - 15.0 - cloneable2.getHeight();
        d5 = Math.max(d5, (double)n2);
        d5 = Math.min(d5, (double)n3 - d2);
        d6 = Math.max(d6, (double)n4);
        d6 = Math.min(d6, (double)n5 - d3);
        object = new Rectangle2D.Double(d5, d6, d2, d3);
        graphics2D.setColor(this.c.aN());
        graphics2D.fill((Shape)object);
        graphics2D.setStroke(b);
        graphics2D.setColor(this.c.aO());
        graphics2D.draw((Shape)object);
        object = cloneable.getOutline(null);
        graphics2D.setColor(this.c.ah());
        graphics2D.setFont(this.c.aP());
        cloneable = graphics2D.getTransform();
        cloneable2 = new AffineTransform();
        ((AffineTransform)cloneable2).translate(d5 + 5.0 - 1.0, d6 + 5.0 - 1.0 + d4);
        graphics2D.transform((AffineTransform)cloneable2);
        graphics2D.fill((Shape)object);
        graphics2D.setTransform((AffineTransform)cloneable);
    }

    final void a(double d2, double d3, String string, String string2) {
        string = this.a(string, string2);
        Object object = string;
        double d4 = d3;
        double d5 = d2;
        ToolTips toolTips = this;
        object = new s(d5, d4, (String)object);
        toolTips.d.add(object);
    }

    void a(Shape shape, double d2, double d3, double d4, String string, String string2) {
        string = this.a(string, string2);
        this.a(shape, d2, d3, d4, string);
    }

    final void a(Shape object, double d2, double d3, double d4, String string) {
        object = new s((Shape)object, d2, d3, d4, string);
        this.d.add(object);
    }

    private String a(String string, String string2) {
        switch (r.a[this.c.aM().ordinal()]) {
            case 1: {
                return "(" + string + ", " + string2 + ")";
            }
            case 2: {
                return string;
            }
            case 3: {
                return string2;
            }
        }
        return "";
    }

    public final void a() {
        this.d.clear();
    }
}

