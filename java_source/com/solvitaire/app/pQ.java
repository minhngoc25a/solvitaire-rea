/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pL;
import com.solvitaire.app.pU;
import com.solvitaire.app.pV;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.r;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.JPanel;

final class pQ
extends MouseAdapter {
    private /* synthetic */ pL a;
    private final /* synthetic */ qo_0 b;

    pQ(pL pL2, qo_0 qo_02) {
        this.a = pL2;
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
                pV[] pVArray = this.a.o;
                synchronized (this.a.o) {
                    if (jPanel instanceof r) {
                        this.a.z.b(mouseEvent.getX(), mouseEvent.getY());
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
            pV[] pVArray = (pV[])mouseEvent.getSource();
            if (pVArray instanceof pU) {
                pVArray = this.a.o;
                synchronized (this.a.o) {
                    this.a.a(mouseEvent.getX(), mouseEvent.getY());
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
        pV[] pVArray = (pV[])mouseEvent.getSource();
        if (pVArray instanceof pU) {
            pVArray = this.a.o;
            synchronized (this.a.o) {
                this.a.b(mouseEvent.getX(), mouseEvent.getY());
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
        pV[] pVArray = (pV[])mouseEvent.getSource();
        if (pVArray instanceof pU) {
            pVArray = this.a.o;
            synchronized (this.a.o) {
                this.a.a(mouseEvent.getX(), mouseEvent.getY(), mouseEvent);
                // ** MonitorExit[var2_2] (shouldn't be in output)
                return;
            }
        }
    }
}

