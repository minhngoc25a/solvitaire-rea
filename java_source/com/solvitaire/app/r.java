/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pL;
import com.solvitaire.app.pV;
import com.solvitaire.app.qo_0;
import java.awt.Graphics;
import javax.swing.JPanel;

final class r
extends JPanel {
    pL a;
    qo_0 b;
    pV[][] c;
    pV d;
    private boolean e;

    r(qo_0 qo_02, pL pL2) {
        this.b = qo_02;
        this.a = pL2;
        this.c = new pV[8][13];
    }

    final void a(boolean bl2) {
        this.e = bl2;
        this.repaint();
    }

    final void a(int n2, int n3) {
        int n4 = n2 % 100;
        int n5 = n2 / 100;
        int n6 = 0;
        while (n6 < 8 / n3) {
            int n7 = n6 * n3 + n5 - 1;
            if (this.c[n7][n4 - 1] == null) {
                pV pV2 = new pV(this.b);
                pV2.a(n2);
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
                pV pV2 = this.c[n4][n5];
                if (pV2 != null && pV2.g > 0 && pV2.c(n2, n3)) {
                    this.b.g("Got a hit on " + String.valueOf(pV2));
                    this.d = pV2;
                    this.b(true);
                    return;
                }
                ++n5;
            }
            --n4;
        }
    }

    final void a() {
        int n2 = 1;
        int n3 = 13;
        if (this.d != null) {
            n2 = this.d.e;
            n3 = this.d.f;
        }
        int n4 = n3;
        n3 = n2;
        r r2 = this;
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
        r r2 = this;
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
        pV pV2;
        int n2;
        super.paint(graphics);
        int n3 = this.a.ai;
        int n4 = 0;
        while (n4 < 4) {
            n2 = 12;
            while (n2 >= 0) {
                pV2 = this.c[n4][n2];
                if (pV2 != null) {
                    pV2.a(n3, 4);
                    pV2.c(false);
                    if (this.e) {
                        pV pV3 = pV2;
                        pV3.a(pV3 == this.d);
                    } else {
                        pV2.a(false);
                    }
                    pV2.a(graphics);
                }
                n3 += this.a.aj;
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
                    pV2.a(n3, 10);
                    pV2.c(false);
                    if (this.e) {
                        pV pV4 = pV2;
                        pV4.a(pV4 == this.d);
                    } else {
                        pV2.a(false);
                    }
                    pV2.a(graphics);
                }
                n3 += this.a.aj;
                --n2;
            }
            ++n4;
        }
    }

    final boolean b(boolean bl2) {
        int n2 = 0;
        if (this.a.C && this.a.B == 0) {
            this.a.B = this.d.g;
            n2 = 0;
            while (n2 < 8) {
                if (this.c[n2][this.d.f - 1] == this.d) {
                    this.c[n2][this.d.f - 1] = null;
                }
                ++n2;
            }
            this.b();
            this.a();
            this.b.aq.G.setEnabled(true);
            if (bl2) {
                this.b.aq.G.requestFocus();
            } else {
                this.a.ae.requestFocus();
            }
            this.a.ad.repaint();
            n2 = 1;
        }
        return n2 != 0;
    }
}

