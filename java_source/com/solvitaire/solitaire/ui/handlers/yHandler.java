/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.uPanel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public final class yHandler
implements ActionListener {
    private /* synthetic */ uPanel AboutDialog;

    yHandler(uPanel u2) {
        this.AboutDialog = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        block31: {
            boolean bl2 = true;
            int n2 = 0;
            while (n2 < 52) {
                if (this.AboutDialog.c.p[n2] != null) {
                    bl2 = false;
                    break;
                }
                ++n2;
            }
            if (!bl2 && !this.AboutDialog.AboutDialog("", "Are you sure?  This will discard all font changes")) break block31;
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
                    --this.AboutDialog.c.c.yHandler;
                    break;
                }
                case 4: {
                    ++this.AboutDialog.c.c.yHandler;
                    break;
                }
                case 1: {
                    --this.AboutDialog.c.c.xHandler;
                    break;
                }
                case 2: {
                    ++this.AboutDialog.c.c.xHandler;
                    break;
                }
                case 8: {
                    --this.AboutDialog.c.c.height;
                    break;
                }
                case 6: {
                    ++this.AboutDialog.c.c.height;
                    break;
                }
                case 7: {
                    --this.AboutDialog.c.c.width;
                    break;
                }
                case 5: {
                    ++this.AboutDialog.c.c.width;
                }
            }
            int n4 = 0;
            while (n4 < 52) {
                this.AboutDialog.c.p[n4] = null;
                ++n4;
            }
            this.AboutDialog.c.b();
            this.AboutDialog.d.i = -1;
            this.AboutDialog.d.AboutDialog();
            this.AboutDialog.b();
        }
    }
}

