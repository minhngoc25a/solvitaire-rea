/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.sc;
import com.solvitaire.app.se;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Enumeration;
import javax.swing.AbstractButton;

final class sd
implements ActionListener {
    private /* synthetic */ sc a;

    sd(sc sc2) {
        this.a = sc2;
    }

    @Override
    public final void actionPerformed(ActionEvent serializable) {
        serializable = sc.a((sc)this.a).cn;
        synchronized (serializable) {
            Enumeration<AbstractButton> enumeration = this.a.getElements();
            while (enumeration.hasMoreElements()) {
                se se2 = (se)enumeration.nextElement();
                boolean bl2 = se2.isSelected();
                if (!bl2) continue;
                switch (this.a.c) {
                    case 1: {
                        sc.a((sc)this.a).d.d = se2.a;
                        sc.a((sc)this.a).d.g("*** USER HAS SET TRACE LEVEL TO " + sc.a((sc)this.a).d.d + " ***");
                        break;
                    }
                    case 2: {
                        sc.a((sc)this.a).d.aI = se2.a;
                        break;
                    }
                    case 3: {
                        sc.a((sc)this.a).d.aN = se2.a == 1;
                        sc.a(this.a).o();
                        break;
                    }
                    case 6: {
                        sc.a((sc)this.a).d.G = se2.a;
                        sc.a(this.a).o();
                        break;
                    }
                    case 4: {
                        sc.a((sc)this.a).d.m = se2.a;
                        sc.a(this.a).o();
                        break;
                    }
                    case 5: {
                        sc.a((sc)this.a).d.aL = se2.a;
                        sc.a(this.a).o();
                        break;
                    }
                    case 8: {
                        sc.a((sc)this.a).d.aE = se2.a;
                        sc.a(this.a).o();
                        break;
                    }
                    case 7: {
                        sc.a((sc)this.a).d.aJ = se2.a;
                        sc.a(this.a).o();
                        break;
                    }
                    default: {
                        sc.a((sc)this.a).d.i("Invalid button group type " + bl2);
                    }
                }
                sc.a((sc)this.a).cn.setProperty(this.a.b, "" + se2.a);
                if (sc.a((sc)this.a).d.d > 5) continue;
                sc.a((sc)this.a).d.g("Set property " + this.a.b + " to " + se2.a);
            }
            sc.a(this.a).t();
            return;
        }
    }
}

