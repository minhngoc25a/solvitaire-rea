/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.util.sc;
import com.solvitaire.solitaire.util.se;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Enumeration;
import javax.swing.AbstractButton;

public final class sdHandler
implements ActionListener {
    private /* synthetic */ sc AboutDialog;

    sdHandler(sc sc2) {
        this.AboutDialog = sc2;
    }

    @Override
    public final void actionPerformed(ActionEvent serializable) {
        serializable = sc.AboutDialog((sc)this.AboutDialog).cn;
        synchronized (serializable) {
            Enumeration<AbstractButton> enumeration = this.AboutDialog.getElements();
            while (enumeration.hasMoreElements()) {
                se se2 = (se)enumeration.nextElement();
                boolean bl2 = se2.isSelected();
                if (!bl2) continue;
                switch (this.AboutDialog.c) {
                    case 1: {
                        sc.AboutDialog((sc)this.AboutDialog).d.d = se2.AboutDialog;
                        sc.AboutDialog((sc)this.AboutDialog).d.g("*** USER HAS SET TRACE LEVEL TO " + sc.AboutDialog((sc)this.AboutDialog).d.d + " ***");
                        break;
                    }
                    case 2: {
                        sc.AboutDialog((sc)this.AboutDialog).d.aI = se2.AboutDialog;
                        break;
                    }
                    case 3: {
                        sc.AboutDialog((sc)this.AboutDialog).d.aN = se2.AboutDialog == 1;
                        sc.AboutDialog(this.AboutDialog).o();
                        break;
                    }
                    case 6: {
                        sc.AboutDialog((sc)this.AboutDialog).d.G = se2.AboutDialog;
                        sc.AboutDialog(this.AboutDialog).o();
                        break;
                    }
                    case 4: {
                        sc.AboutDialog((sc)this.AboutDialog).d.m = se2.AboutDialog;
                        sc.AboutDialog(this.AboutDialog).o();
                        break;
                    }
                    case 5: {
                        sc.AboutDialog((sc)this.AboutDialog).d.aL = se2.AboutDialog;
                        sc.AboutDialog(this.AboutDialog).o();
                        break;
                    }
                    case 8: {
                        sc.AboutDialog((sc)this.AboutDialog).d.aE = se2.AboutDialog;
                        sc.AboutDialog(this.AboutDialog).o();
                        break;
                    }
                    case 7: {
                        sc.AboutDialog((sc)this.AboutDialog).d.aJ = se2.AboutDialog;
                        sc.AboutDialog(this.AboutDialog).o();
                        break;
                    }
                    default: {
                        sc.AboutDialog((sc)this.AboutDialog).d.i("Invalid button group type " + bl2);
                    }
                }
                sc.AboutDialog((sc)this.AboutDialog).cn.setProperty(this.AboutDialog.b, "" + se2.AboutDialog);
                if (sc.AboutDialog((sc)this.AboutDialog).d.d > 5) continue;
                sc.AboutDialog((sc)this.AboutDialog).d.g("Set property " + this.AboutDialog.b + " to " + se2.AboutDialog);
            }
            sc.AboutDialog(this.AboutDialog).t();
            return;
        }
    }
}

