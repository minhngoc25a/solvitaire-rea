/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import java.awt.Graphics;
import javax.swing.JPanel;

final class rPanel
extends JPanel {
    pLPanel AboutDialog;
    SolitaireGameEngine b;
    CardImage[][] c;
    CardImage d;
    private boolean e;

    rPanel(SolitaireGameEngine qo_02, pLPanel pL2) {
        this.b = qo_02;
        this.AboutDialog = pL2;
        this.c = new CardImage[8][13];
    }

    final void AboutDialog(boolean bl2) {
        this.e = bl2;
        this.repaint();
    }

    final void AboutDialog(int n2, int n3) {
        int n4 = n2 % 100;
        int n5 = n2 / 100;
        int n6 = 0;
        while (n6 < 8 / n3) {
            int n7 = n6 * n3 + n5 - 1;
            if (this.c[n7][n4 - 1] == null) {
                CardImage pV2 = new CardImage(this.b);
                pV2.AboutDialog(n2);
                this.c[n7][n4 - 1] = pV2;
                return;
            }
            ++n6;
        }
    }

    final void b(int n2, int n3) {
        this.b.g("Handle click on cardpanel at " + n2 + "," + n3);
        int n4 = 7;
        while (n4 >= 0) {
            int n5 = 0;
            while (n5 < 13) {
                CardImage pV2 = this.c[n4][n5];
                if (pV2 != null && pV2.g > 0 && pV2.c(n2, n3)) {
                    this.b.g("Got AboutDialog hit on " + String.valueOf(pV2));
                    this.d = pV2;
                    this.b(true);
                    return;
                }
                ++n5;
            }
            --n4;
        }
    }

    final void AboutDialog() {
        int n2 = 1;
        int n3 = 13;
        if (this.d != null) {
            n2 = this.d.e;
            n3 = this.d.f;
        }
        int n4 = n3;
        n3 = n2;
        rPanel r2 = this;
        int n5 = n3;
        --n4;
        while (n4 > 0) {
            r2.d = r2.c[n5 - 1][n4 - 1];
            if (r2.d != null) break;
            --n4;
        }
        if (r2.d == null) {
            n5 = n3 + 1;
            while (n5 < 9) {
                n4 = 13;
                while (n4 > 0) {
                    r2.d = r2.c[n5 - 1][n4 - 1];
                    if (r2.d != null) break;
                    --n4;
                }
                if (r2.d != null) break;
                ++n5;
            }
        }
        if (r2.d == null) {
            n5 = 1;
            while (n5 < n3) {
                n4 = 13;
                while (n4 > 0) {
                    r2.d = r2.c[n5 - 1][n4 - 1];
                    if (r2.d != null) break;
                    --n4;
                }
                if (r2.d != null) break;
                ++n5;
            }
        }
        if (r2.d == null) {
            r2.b.g("No more cards to be selected");
        }
    }

    final void b() {
        int n2;
        int n3 = this.d.e;
        int n4 = n2 = this.d.f;
        n2 = n3;
        rPanel r2 = this;
        int n5 = n2;
        ++n4;
        while (n4 < 14) {
            r2.d = r2.c[n5 - 1][n4 - 1];
            if (r2.d != null) break;
            ++n4;
        }
        if (r2.d == null) {
            n5 = n2 - 1;
            while (n5 > 0) {
                n4 = 1;
                while (n4 < 14) {
                    r2.d = r2.c[n5 - 1][n4 - 1];
                    if (r2.d != null) break;
                    ++n4;
                }
                if (r2.d != null) break;
                --n5;
            }
        }
        if (r2.d == null) {
            n5 = 8;
            while (n5 > n2) {
                n4 = 1;
                while (n4 < 14) {
                    r2.d = r2.c[n5 - 1][n4 - 1];
                    if (r2.d != null) break;
                    ++n4;
                }
                if (r2.d != null) break;
                --n5;
            }
        }
        if (r2.d == null) {
            r2.b.g("No more cards to be selected");
        }
    }

    @Override
    public final void paint(Graphics graphics) {
        CardImage pV2;
        int n2;
        super.paint(graphics);
        int n3 = this.AboutDialog.ai;
        int n4 = 0;
        while (n4 < 4) {
            n2 = 12;
            while (n2 >= 0) {
                pV2 = this.c[n4][n2];
                if (pV2 != null) {
                    pV2.AboutDialog(n3, 4);
                    pV2.c(false);
                    if (this.e) {
                        CardImage pV3 = pV2;
                        pV3.AboutDialog(pV3 == this.d);
                    } else {
                        pV2.AboutDialog(false);
                    }
                    pV2.AboutDialog(graphics);
                }
                n3 += this.AboutDialog.DesktopDuplication;
                --n2;
            }
            ++n4;
        }
        n4 = 4;
        while (n4 < 8) {
            n2 = 12;
            while (n2 >= 0) {
                pV2 = this.c[n4][n2];
                if (pV2 != null) {
                    pV2.AboutDialog(n3, 10);
                    pV2.c(false);
                    if (this.e) {
                        CardImage pV4 = pV2;
                        pV4.AboutDialog(pV4 == this.d);
                    } else {
                        pV2.AboutDialog(false);
                    }
                    pV2.AboutDialog(graphics);
                }
                n3 += this.AboutDialog.DesktopDuplication;
                --n2;
            }
            ++n4;
        }
    }

    final boolean b(boolean bl2) {
        int n2 = 0;
        if (this.AboutDialog.CHandler && this.AboutDialog.B == 0) {
            this.AboutDialog.B = this.d.g;
            n2 = 0;
            while (n2 < 8) {
                if (this.c[n2][this.d.f - 1] == this.d) {
                    this.c[n2][this.d.f - 1] = null;
                }
                ++n2;
            }
            this.b();
            this.AboutDialog();
            this.b.aq.G.setEnabled(true);
            if (bl2) {
                this.b.aq.G.requestFocus();
            } else {
                this.AboutDialog.ae.requestFocus();
            }
            this.AboutDialog.ad.repaint();
            n2 = 1;
        }
        return n2 != 0;
    }
}

