/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.panels.k_0Panel;
import com.solvitaire.solitaire.util.o_0;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.ui.panels.uPanel;
import java.awt.Point;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.geom.Rectangle2D;
import java.util.ArrayList;
import java.util.Iterator;

/*
 * Renamed from com.solvitaire.app.l
 */
public final class l_0
extends MouseAdapter {
    private /* synthetic */ k_0Panel AboutDialog;

    l_0(k_0Panel k_02) {
        this.AboutDialog = k_02;
    }

    @Override
    public final void mouseClicked(MouseEvent serializable) {
        boolean bl2 = true;
        if (this.AboutDialog.b.aY == null) {
            return;
        }
        if (this.AboutDialog.b.aY.AboutDialog == null) {
            return;
        }
        if (this.AboutDialog.b.FPanel.AboutDialog == null) {
            return;
        }
        if (((MouseEvent)serializable).getButton() == 1 || ((MouseEvent)serializable).getButton() == 3) {
            Object object;
            if (((MouseEvent)serializable).getButton() == 3) {
                bl2 = false;
            }
            serializable = ((MouseEvent)serializable).getPoint();
            this.AboutDialog.b.g("Clicked at " + ((Point)serializable).xHandler + "," + ((Point)serializable).yHandler);
            Point point = new Point();
            new Point().xHandler = (int)this.AboutDialog.b.c((double)((Point)serializable).xHandler);
            point.yHandler = (int)(this.AboutDialog.b.d((double)((Point)serializable).yHandler) + this.AboutDialog.b.FPanel.t.AboutDialog());
            serializable = new ArrayList();
            int n2 = this.AboutDialog.b.aY.AboutDialog.length - 1;
            while (n2 >= 0) {
                object = this.AboutDialog.b.aY.AboutDialog[n2];
                if (object != null && ((CardStack)object).g != null) {
                    Card[] quArray = ((CardStack)object).f;
                    int n3 = ((CardStack)object).f.length;
                    int n4 = 0;
                    while (n4 < n3) {
                        Card qu2 = quArray[n4];
                        Rectangle2D.Double double_ = qu2.l();
                        if ((((CardStack)object).d & 0x10) != 0 && this.AboutDialog.b.FPanel.c()) {
                            double_.xHandler -= this.AboutDialog.b.FPanel.b * 0.45;
                        }
                        if (double_.contains(point)) {
                            ((ArrayList)serializable).add(new o_0(this.AboutDialog, qu2, false));
                            if ((qu2.b.d & 0x40) != 0) {
                                ((ArrayList)serializable).add(new o_0(this.AboutDialog, qu2, true));
                            }
                            if (bl2) break;
                        }
                        ++n4;
                    }
                    if (bl2 && ((ArrayList)serializable).size() > 0) break;
                }
                --n2;
            }
            if (((ArrayList)serializable).size() > 0) {
                n2 = 0;
                if (((ArrayList)serializable).size() > 1) {
                    object = "";
                    int n5 = 0;
                    Iterator iterator = ((ArrayList)serializable).iterator();
                    while (iterator.hasNext()) {
                        o_0 o_02 = (o_0)iterator.next();
                        object = (String)object + String.format("%d = %s %s\n", n5, o_02.AboutDialog, o_02.b ? "inverted" : "");
                        ++n5;
                    }
                    n2 = this.AboutDialog.b.aq.e("More than one stack at that location", "Choose stack id from the following:\n" + (String)object);
                    if (n2 > ((ArrayList)serializable).size() - 1 || n2 < 0) {
                        n2 = 0;
                    }
                }
                object = (o_0)((ArrayList)serializable).get(n2);
                this.AboutDialog.b.g("Clicked on stack:" + String.valueOf(((o_0)object).AboutDialog) + " inverted? " + ((o_0)object).b);
                this.AboutDialog.AboutDialog.setVisible(false);
                this.AboutDialog.AboutDialog.dispose();
                this.AboutDialog.b.AboutDialog(500L);
                this.AboutDialog.b.aD.AboutDialog();
                new uPanel(this.AboutDialog.b, ((o_0)object).AboutDialog.b, ((o_0)object).AboutDialog.c, point, ((o_0)object).b);
                return;
            }
        }
    }
}

