/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import com.solvitaire.app.qo_0;
import com.solvitaire.app.qx_0;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.Shape;
import java.awt.event.ComponentEvent;
import java.awt.event.MouseEvent;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.RectangularShape;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JComponent;
import javax.swing.JPopupMenu;
import org.knowm.xchart.MyCategoryChart;
import org.knowm.xchart.XChartPanel;
import org.knowm.xchart.internal.chartpart.MyToolTip;
import org.knowm.xchart.internal.chartpart.ToolTips;
import org.knowm.xchart.internal.chartpart.o;
import org.knowm.xchart.style.Styler;

public class MyToolTips
extends ToolTips {
    private static final Object[] c = new Object[]{"  OK  ", "Cancel"};
    qo_0 a;
    private final List d = new ArrayList();
    private MyToolTip e;
    private XChartPanel f;
    private Styler g;
    private MyCategoryChart h;
    private String i;
    private qx_0 j;

    public MyToolTips(qo_0 qo_02, XChartPanel xChartPanel, MyCategoryChart myCategoryChart, qx_0 qx_02, String string) {
        super(myCategoryChart);
        this.a = qo_02;
        this.h = myCategoryChart;
        this.g = myCategoryChart.b();
        this.i = string;
        this.j = qx_02;
        this.f = xChartPanel;
    }

    @Override
    public final void a(Graphics2D object) {
        if (this.e != null) {
            Object object2 = this.e;
            Graphics2D graphics2D = object;
            object = this;
            Object object3 = ((MyToolTip)object2).b.split("~");
            Object object4 = new ArrayList<TextLayout>();
            TextLayout textLayout = null;
            double d2 = 5.0;
            double d3 = 0.0;
            String[] stringArray = object3;
            int n2 = ((String[])object3).length;
            int n3 = 0;
            while (n3 < n2) {
                object3 = stringArray[n3];
                textLayout = new TextLayout((String)object3, ((MyToolTips)object).g.aP(), new FontRenderContext(null, true, false));
                object3 = textLayout.getBounds();
                ((RectangularShape)object3).getHeight();
                if (d3 < ((RectangularShape)object3).getWidth()) {
                    d3 = ((RectangularShape)object3).getWidth();
                }
                d2 += (double)(((MyToolTips)object).g.aP().getSize() + 5);
                object4.add(textLayout);
                ++n3;
            }
            d3 = ((MyToolTips)object).a.c(d3);
            object3 = graphics2D.getClipBounds();
            double d4 = ((MyToolTip)object2).d;
            double d5 = ((MyToolTip)object2).e;
            if (((MyToolTip)object2).d + 20.0 + d3 > ((Rectangle)object3).getX() + ((Rectangle)object3).getWidth()) {
                d4 = ((MyToolTip)object2).d - d3 - 20.0;
            }
            if (((MyToolTip)object2).e + 20.0 + d2 > ((Rectangle)object3).getY() + ((Rectangle)object3).getHeight()) {
                d5 = ((MyToolTip)object2).e - d2 - 20.0;
            }
            graphics2D.setColor(((MyToolTips)object).g.aN());
            graphics2D.fillRect((int)d4 + 20, (int)d5 + 20, (int)d3 + 10, (int)d2);
            object2 = graphics2D.getTransform();
            object3 = new AffineTransform();
            ((AffineTransform)object3).translate(d4 + 20.0 + 5.0, d5 + textLayout.getBounds().getHeight() + 20.0 + 5.0);
            graphics2D.transform((AffineTransform)object3);
            graphics2D.setColor(((MyToolTips)object).g.ah());
            graphics2D.setFont(((MyToolTips)object).g.aP());
            object4 = object4.iterator();
            while (object4.hasNext()) {
                object3 = (TextLayout)object4.next();
                graphics2D.fill(((TextLayout)object3).getOutline(null));
                object3 = new AffineTransform();
                ((AffineTransform)object3).translate(0.0, ((MyToolTips)object).g.aP().getSize() + 5);
                graphics2D.transform((AffineTransform)object3);
            }
            graphics2D.setTransform((AffineTransform)object2);
        }
    }

    @Override
    final void a(Shape object, double d2, double d3, double d4, String string, String string2) {
        int n2 = Integer.parseInt(string);
        n2 = this.j.e.indexOf(n2);
        int n3 = (Integer)this.j.e.get(n2);
        int n4 = (Integer)this.j.i.get(n2);
        int n5 = (Integer)this.j.f.get(n2);
        int n6 = (Integer)this.j.g.get(n2);
        n2 = (Integer)this.j.h.get(n2);
        String string3 = String.format(this.i, n3, n4, n6, n2, n5);
        this.a((Shape)object, d2, d3, d4, string3);
        object = new MyToolTip((Shape)object, d2, d3, d4, string3, n3);
        this.d.add(object);
    }

    @Override
    public void mouseMoved(MouseEvent mouseEvent) {
        boolean bl2 = false;
        MyToolTip myToolTip = this.a(mouseEvent.getX(), mouseEvent.getY());
        if (myToolTip != null) {
            if (this.e != null) {
                this.e.equals(myToolTip);
            }
            this.e = myToolTip;
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
    public void mouseReleased(MouseEvent object) {
        Object object2 = this.a(((MouseEvent)object).getX(), ((MouseEvent)object).getY());
        if (object2 != null && ((MouseEvent)object).isPopupTrigger()) {
            MyToolTip myToolTip = object2;
            object2 = object;
            object = this;
            object = new o((MyToolTips)object, myToolTip);
            ((JPopupMenu)object).show(((ComponentEvent)object2).getComponent(), ((MouseEvent)object2).getX(), ((MouseEvent)object2).getY());
            ((JComponent)object).getGraphics().dispose();
        }
    }

    private MyToolTip a(int n2, int n3) {
        MyToolTip myToolTip = null;
        for (MyToolTip myToolTip2 : this.d) {
            if (!myToolTip2.c.contains(n2, n3)) continue;
            myToolTip = myToolTip2;
            break;
        }
        return myToolTip;
    }
}

