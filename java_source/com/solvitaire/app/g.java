/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.j;
import com.solvitaire.app.pJ;
import com.solvitaire.app.qa;
import com.solvitaire.app.qm_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qu;
import com.solvitaire.app.qv;

class g {
    j a;
    double b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    qo_0 k;
    int l;
    protected boolean m = false;
    boolean n = true;

    final void a() {
        this.n = true;
        this.m = false;
        this.k.aY = new qa();
        switch (this.k.i) {
            case 1: {
                qo_0 qo_02 = this.k;
                if (qo_02.d <= 4) {
                    qo_02.g("Allocate new KLONDIKE stacks");
                }
                qo_02.aY.a[0] = new qv(qo_02, "Stack", 0, 7, 1, 9);
                qo_02.aY.a[1] = new qv(qo_02, "Feed", 1, 1, 1, 258);
                qo_02.aY.a[2] = new qv(qo_02, "Pile", 2, 1, 1, 18);
                qo_02.aY.a[3] = new qv(qo_02, "Aces", 3, 4, 1, 2);
                int n2 = 0;
                while (n2 < 4) {
                    qo_02.aY.a[3].f[n2].f = -1;
                    ++n2;
                }
                return;
            }
            case 2: {
                qo_0 qo_03 = this.k;
                if (qo_03.d <= 4) {
                    qo_03.g("Allocate new SPIDER stacks");
                }
                qo_03.aY.a[0] = new qv(qo_03, "Stack", 0, 10, 7, 1);
                qo_03.aY.a[1] = new qv(qo_03, "Feed", 1, 1, 1, 2);
                qo_03.aY.a[2] = new qv(qo_03, "Suits", 2, 8, 0, 66);
                return;
            }
            case 3: {
                qo_0 qo_04 = this.k;
                if (qo_04.d <= 4) {
                    qo_04.g("Allocate new FREECELL stacks");
                }
                qo_04.aY.a[0] = new qv(qo_04, "Stack", 0, 8, 7, 9);
                qo_04.aY.a[1] = new qv(qo_04, "WorkArea", 1, 4, 1, 2);
                qo_04.aY.a[2] = new qv(qo_04, "Aces", 2, 4, 1, 2);
                qo_04.aY.a[2].f[0].f = 2;
                qo_04.aY.a[2].f[1].f = 4;
                qo_04.aY.a[2].f[2].f = 3;
                qo_04.aY.a[2].f[3].f = 1;
                return;
            }
            case 4: {
                qo_0 qo_05 = this.k;
                if (qo_05.d <= 4) {
                    qo_05.g("Allocate new PYRAMID stacks");
                }
                qo_05.aY.a[0] = new qv(qo_05, "Row 0", 0, 1, 1, 34);
                qo_05.aY.a[1] = new qv(qo_05, "Row 1", 1, 2, 1, 34);
                qo_05.aY.a[2] = new qv(qo_05, "Row 2", 2, 3, 1, 34);
                qo_05.aY.a[3] = new qv(qo_05, "Row 3", 3, 4, 1, 34);
                qo_05.aY.a[4] = new qv(qo_05, "Row 4", 4, 5, 1, 34);
                qo_05.aY.a[5] = new qv(qo_05, "Row 5", 5, 6, 1, 34);
                qo_05.aY.a[6] = new qv(qo_05, "Row 6", 6, 7, 1, 34);
                qo_05.aY.a[7] = new qv(qo_05, "Deck feed", 7, 2, 1, 2);
                qo_05.aY.a[8] = new qv(qo_05, "Deck pile", 8, 2, 1, 2);
                qo_05.aY.a[7].f[1].g();
                qo_05.aY.a[8].f[1].g();
                return;
            }
            case 5: {
                qo_0 qo_06 = this.k;
                if (qo_06.d <= 4) {
                    qo_06.g("Allocate new TRIPEAKS stacks");
                }
                qo_06.aY.a[0] = new qv(qo_06, "Row 0", 0, 7, 1, 34);
                qo_06.aY.a[1] = new qv(qo_06, "Row 1", 1, 8, 1, 34);
                qo_06.aY.a[2] = new qv(qo_06, "Row 2", 2, 9, 1, 34);
                qo_06.aY.a[3] = new qv(qo_06, "Row 3", 3, 10, 1, 34);
                qo_06.aY.a[7] = new qv(qo_06, "Feed", 7, 1, 1, 2);
                qo_06.aY.a[8] = new qv(qo_06, "Pile", 8, 1, 1, 2);
                qo_06.aY.a[0].f[1].g();
                qo_06.aY.a[0].f[2].g();
                qo_06.aY.a[0].f[4].g();
                qo_06.aY.a[0].f[5].g();
                qo_06.aY.a[1].f[2].g();
                qo_06.aY.a[1].f[5].g();
                return;
            }
        }
        String string = "Unsupported apptype";
        qo_0 qo_07 = this.k;
        qo_07.a(string, false);
    }

    g(qo_0 qo_02) {
        this.k = qo_02;
    }

    final void a(int n2) {
        if (this.k.i != 0 && this.k.i != n2) {
            String string = "Input file says '" + qo_0.j[this.k.i] + "' but this looks like " + qo_0.j[n2];
            qo_0 qo_02 = this.k;
            qo_02.a(string, false);
        }
        this.k.i = n2;
    }

    final void b() {
        if (this.k.aY == null) {
            return;
        }
        if (this.k.aY.a == null) {
            return;
        }
        int n2 = 0;
        while (n2 < 10) {
            qv qv2 = this.k.aY.a[n2];
            if (qv2 != null) {
                int n3 = 0;
                while (n3 < qv2.c) {
                    qv2.f[n3].f();
                    ++n3;
                }
                qv2.e = qv2.c;
            }
            ++n2;
        }
    }

    final void a(int n2, int n3, int n4) {
        this.a(n2, n3, n4, null);
    }

    final void a(int n2, int n3, int n4, String string) {
        if (n2 >= this.k.d) {
            StringBuffer stringBuffer = new StringBuffer();
            if (n3 > 0) {
                stringBuffer.append(String.format("***Level %3d move %8s\n", n3, pJ.a(n4)));
                if (string != null) {
                    stringBuffer.append(string);
                }
            } else {
                stringBuffer.append("Start level:");
            }
            qv[] qvArray = this.k.aY.a;
            int n5 = this.k.aY.a.length;
            n4 = 0;
            while (n4 < n5) {
                qv qv2 = qvArray[n4];
                this.a(stringBuffer, qv2);
                ++n4;
            }
            this.k.g(stringBuffer.toString());
        }
    }

    private static void a(StringBuffer stringBuffer, qm_0 qm_02) {
        if (qm_02.a == 1) {
            if (qm_02.c[0] != null) {
                stringBuffer.append(String.valueOf(qm_02.c[0]));
                return;
            }
            stringBuffer.append("?");
            return;
        }
        stringBuffer.append(String.valueOf(qm_02.c[0]) + "-" + String.valueOf(qm_02.c[qm_02.a - 1]));
    }

    final void a(StringBuffer stringBuffer, qv qv2) {
        if (qv2 != null) {
            stringBuffer.append(" " + qv2.b + ":");
            qu[] quArray = qv2.f;
            int n2 = qv2.f.length;
            int n3 = 0;
            while (n3 < n2) {
                qu qu2 = quArray[n3];
                if (!qu2.h) {
                    if (!qu2.h()) {
                        stringBuffer.append("*");
                    } else {
                        int n4 = qu2.e.size();
                        if (n4 <= 8) {
                            for (qm_0 qm_02 : qu2.e) {
                                com.solvitaire.app.g.a(stringBuffer, qm_02);
                                if (qm_02 == qu2.e.peekLast()) continue;
                                stringBuffer.append(",");
                            }
                        } else {
                            Object object;
                            int n5 = 0;
                            while (n5 < 4) {
                                object = (qm_0)qu2.e.get(n5);
                                com.solvitaire.app.g.a(stringBuffer, (qm_0)object);
                                if (n5 != 3) {
                                    stringBuffer.append(",");
                                }
                                ++n5;
                            }
                            stringBuffer.append("...");
                            n5 = n4 - 4;
                            while (n5 < n4) {
                                object = (qm_0)qu2.e.get(n5);
                                com.solvitaire.app.g.a(stringBuffer, (qm_0)object);
                                if (n5 != n4 - 1) {
                                    stringBuffer.append(",");
                                }
                                ++n5;
                            }
                            stringBuffer.append("(" + n4 + ")");
                        }
                        if (qu2.d != null && qu2.d.b) {
                            stringBuffer.append("#");
                        }
                    }
                    if (qu2 != qv2.f[qv2.c - 1]) {
                        stringBuffer.append("|");
                    }
                }
                ++n3;
            }
        }
    }

    final boolean c() {
        return this.m;
    }

    final void a(boolean bl2) {
        if (this.k.d <= 5) {
            this.k.g("*** Setting reversed layout***");
        }
        this.m = true;
        this.n = false;
    }
}

