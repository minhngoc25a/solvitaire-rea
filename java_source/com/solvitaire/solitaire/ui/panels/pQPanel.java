/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.ui.panels.pUPanel;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.ui.panels.rPanel;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.JPanel;

final class pQPanel
extends MouseAdapter {
    private /* synthetic */ pLPanel AboutDialog;
    private final /* synthetic */ SolitaireGameEngine b;

    pQPanel(pLPanel pL2, SolitaireGameEngine qo_02) {
        this.AboutDialog = pL2;
        this.b = qo_02;
    }

    @Override
    public final void mouseClicked(MouseEvent mouseEvent) {
        if (mouseEvent.getButton() == 1) {
            JPanel jPanel = (JPanel)mouseEvent.getSource();
            if (mouseEvent.getButton() == 1) {
                if (this.b.aS) {
                    return;
                }
                CardImage[] pVArray = this.AboutDialog.o;
                synchronized (this.AboutDialog.o) {
                    if (jPanel instanceof rPanel) {
                        this.AboutDialog.z.b(mouseEvent.getX(), mouseEvent.getY());
                    }
                    // ** MonitorExit[var3_3] (shouldn't be in output)
                    return;
                }
            }
        }
    }

    @Override
    public final void mousePressed(MouseEvent mouseEvent) {
        if (mouseEvent.getButton() == 1) {
            if (this.b.aS) {
                return;
            }
            CardImage[] pVArray = (CardImage[])mouseEvent.getSource();
            if (pVArray instanceof pUPanel) {
                pVArray = this.AboutDialog.o;
                synchronized (this.AboutDialog.o) {
                    this.AboutDialog.AboutDialog(mouseEvent.getX(), mouseEvent.getY());
                    // ** MonitorExit[var2_2] (shouldn't be in output)
                    return;
                }
            }
        }
    }

    @Override
    public final void mouseDragged(MouseEvent mouseEvent) {
        if (this.b.aS) {
            return;
        }
        CardImage[] pVArray = (CardImage[])mouseEvent.getSource();
        if (pVArray instanceof pUPanel) {
            pVArray = this.AboutDialog.o;
            synchronized (this.AboutDialog.o) {
                this.AboutDialog.b(mouseEvent.getX(), mouseEvent.getY());
                // ** MonitorExit[var2_2] (shouldn't be in output)
                return;
            }
        }
    }

    @Override
    public final void mouseReleased(MouseEvent mouseEvent) {
        if (this.b.aS) {
            return;
        }
        CardImage[] pVArray = (CardImage[])mouseEvent.getSource();
        if (pVArray instanceof pUPanel) {
            pVArray = this.AboutDialog.o;
            synchronized (this.AboutDialog.o) {
                this.AboutDialog.AboutDialog(mouseEvent.getX(), mouseEvent.getY(), mouseEvent);
                // ** MonitorExit[var2_2] (shouldn't be in output)
                return;
            }
        }
    }
}

