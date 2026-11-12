/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JPanel;

public final class pUPanel
extends JPanel
implements Runnable {
    private pLPanel b;
    boolean AboutDialog;
    private Thread c;
    private /* synthetic */ pLPanel d;

    public pUPanel(pLPanel pL2, pLPanel pL3) {
        this.d = pL2;
        this.b = pL3;
        this.c = new Thread(this);
        this.c.start();
    }

    @Override
    public final void run() {
        while (!this.d.k.ai) {
            pLPanel pL2 = this.d;
            int n2 = pL2.k.br.j.AboutDialog();
            int n3 = n2 / 3600;
            int n4 = n2 % 3600;
            String string = String.format("%02d:%02d:%02d", n3, n4 /= 60, n2 %= 60);
            pL2.af.setText(string);
            this.d.k.AboutDialog(100L);
        }
    }

    @Override
    public final void paint(Graphics graphics) {
        CardImage[] pVArray = this.d.o;
        synchronized (this.d.o) {
            if (this.d.k.ar == null) {
                // ** MonitorExit[var2_2] (shouldn't be in output)
                return;
            }
            if (this.d.k.aq.l) {
                this.d.k.aq.l = false;
                if (this.d.k.bg == 2 && this.d.k.bj != null || this.d.k.bg == 4) {
                    if (this.d.k.d <= 5) {
                        this.d.k.g("Laying out board as as " + this.d.k.aq.j + "xHandler" + this.d.k.aq.k);
                    }
                    this.d.e();
                }
            }
            super.paint(graphics);
            this.d.EHandler = 0;
            int n2 = 0;
            while (n2 < 10) {
                CardStack qv2 = this.d.k.aY.AboutDialog[n2];
                if (qv2 != null && qv2.g != null) {
                    Card[] quArray = qv2.f;
                    int n3 = qv2.f.length;
                    int n4 = 0;
                    while (n4 < n3) {
                        Card qu2 = quArray[n4];
                        int n5 = (int)qv2.g.yHandler;
                        int n6 = (int)qu2.m;
                        if ((qv2.d & 0x40) == 0 && (qv2.d & 0x20) == 0) {
                            CardImage.AboutDialog(graphics, this.d.k, n6, n5, (int)this.d.b, this.d.c, qu2.f);
                            if ((qv2.d & 0x10) != 0) {
                                graphics.setFont(this.b.t);
                                graphics.setColor(Color.WHITE);
                                graphics.drawString(this.d.k.FPanel.l + " card deal", n6 + 8, n5 - 3);
                            }
                        }
                        ++n4;
                    }
                }
                ++n2;
            }
            if (this.d.p > 0) {
                this.AboutDialog(graphics, true);
                this.AboutDialog(graphics, false);
                if (this.d.k.ao != null) {
                    this.d.k.ao.wHandler = false;
                }
            }
            // ** MonitorExit[var2_2] (shouldn't be in output)
            return;
        }
    }

    private void AboutDialog(Graphics graphics, boolean bl2) {
        int n2 = 0;
        while (n2 < this.d.p) {
            boolean bl3;
            CardImage pV2 = this.d.o[n2];
            if (pV2.g == 0 && this.d.B != 0 && this.d.A != null && pV2 == this.d.A.AboutDialog()) {
                pV2.b(this.d.B);
            }
            if ((bl3 = pV2.n || !pV2.AboutDialog() && !pV2.b() && pV2.i == null) == bl2) {
                pV2.AboutDialog(graphics);
            }
            ++n2;
        }
    }

    final void AboutDialog(boolean bl2) {
        this.AboutDialog = bl2;
        this.repaint();
    }
}

