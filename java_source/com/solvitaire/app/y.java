/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.u;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class y
implements ActionListener {
    private /* synthetic */ u a;

    y(u u2) {
        this.a = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        block31: {
            boolean bl2 = true;
            int n2 = 0;
            while (n2 < 52) {
                if (this.a.c.p[n2] != null) {
                    bl2 = false;
                    break;
                }
                ++n2;
            }
            if (!bl2 && !this.a.a("", "Are you sure?  This will discard all font changes")) break block31;
            String string = ((ActionEvent)object).getActionCommand();
            object = string;
            int n3 = -1;
            switch (string.hashCode()) {
                case 60: {
                    if (((String)object).equals("<")) {
                        n3 = 1;
                    }
                    break;
                }
                case 62: {
                    if (((String)object).equals(">")) {
                        n3 = 2;
                    }
                    break;
                }
                case 94: {
                    if (((String)object).equals("^")) {
                        n3 = 3;
                    }
                    break;
                }
                case 118: {
                    if (((String)object).equals("v")) {
                        n3 = 4;
                    }
                    break;
                }
                case 1395: {
                    if (((String)object).equals("+>")) {
                        n3 = 5;
                    }
                    break;
                }
                case 1451: {
                    if (((String)object).equals("+v")) {
                        n3 = 6;
                    }
                    break;
                }
                case 1455: {
                    if (((String)object).equals("-<")) {
                        n3 = 7;
                    }
                    break;
                }
                case 1489: {
                    if (((String)object).equals("-^")) {
                        n3 = 8;
                    }
                    break;
                }
            }
            switch (n3) {
                case 3: {
                    --this.a.c.c.y;
                    break;
                }
                case 4: {
                    ++this.a.c.c.y;
                    break;
                }
                case 1: {
                    --this.a.c.c.x;
                    break;
                }
                case 2: {
                    ++this.a.c.c.x;
                    break;
                }
                case 8: {
                    --this.a.c.c.height;
                    break;
                }
                case 6: {
                    ++this.a.c.c.height;
                    break;
                }
                case 7: {
                    --this.a.c.c.width;
                    break;
                }
                case 5: {
                    ++this.a.c.c.width;
                }
            }
            int n4 = 0;
            while (n4 < 52) {
                this.a.c.p[n4] = null;
                ++n4;
            }
            this.a.c.b();
            this.a.d.i = -1;
            this.a.d.a();
            this.a.b();
        }
    }
}

