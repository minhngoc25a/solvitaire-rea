/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.e_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qu;
import com.solvitaire.app.qv;
import java.util.Vector;

public final class pJ {
    private qo_0 s;
    int a;
    int b;
    qv c;
    qv d;
    qu e;
    int f;
    qu g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    boolean n;
    boolean o;
    boolean p;
    int q;
    int r;

    pJ(qo_0 qo_02, int n2, int n3) {
        this.s = qo_02;
        this.j = n3;
        this.a = n2;
        int n4 = n2;
        this.b = n4 >> 24;
        this.n = (this.b & 8) != 0;
        this.o = (this.b & 0x10) != 0;
        n3 = pJ.d(n2);
        int n5 = pJ.b(n2);
        this.f = pJ.e(n2);
        this.h = pJ.c(n2);
        n4 = n2;
        this.i = (n4 & 0xF0000) >> 16;
        if (this.n) {
            n4 = n2;
            this.k = n4 & 0xFF;
            n4 = n2;
            this.l = n4 >> 8 & 0xFF;
            n4 = n2;
            this.m = n4 >> 16 & 0xFF;
            if (qo_02.ap.i >= 0) {
                this.c = qo_02.aY.a[qo_02.ap.i];
                this.e = this.c.f[0];
            }
            if (qo_02.ap.h >= 0) {
                this.d = qo_02.aY.a[qo_02.ap.h];
                this.g = this.d.f[0];
                return;
            }
        } else {
            this.c = qo_02.aY.a[n3];
            this.d = qo_02.aY.a[n5];
            this.e = this.c == null ? null : this.c.f[this.f];
            this.g = this.d == null ? null : this.d.f[this.h];
            this.p = (this.b & 1) != 0;
        }
    }

    public final String toString() {
        return this.i + " cards, source " + String.valueOf(this.g) + " dest " + String.valueOf(this.e) + " auto:" + this.o + " split:" + this.p;
    }

    static String a(int n2) {
        int n3 = n2;
        if ((n3 >>= 24) == 0) {
            Object[] objectArray = new Object[3];
            n3 = n2;
            objectArray[0] = (n3 & 0xF0000) >> 16;
            n3 = n2;
            objectArray[1] = n3 >> 8 & 0xFF;
            n3 = n2;
            objectArray[2] = n3 & 0xFF;
            return String.format("%d%02d%02d", objectArray);
        }
        Object[] objectArray = new Object[4];
        n3 = n2;
        objectArray[0] = n3 >> 24;
        n3 = n2;
        objectArray[1] = (n3 & 0xF0000) >> 16;
        n3 = n2;
        objectArray[2] = n3 >> 8 & 0xFF;
        n3 = n2;
        objectArray[3] = n3 & 0xFF;
        return String.format("%d%02d%02d%02d", objectArray);
    }

    static int b(int n2) {
        return (n2 >> 8 & 0xFF) / 10;
    }

    static int c(int n2) {
        return (n2 >> 8 & 0xFF) % 10;
    }

    static int d(int n2) {
        return (n2 & 0xFF) / 10;
    }

    static int e(int n2) {
        return (n2 & 0xFF) % 10;
    }

    static int a(int n2, int n3, qu qu2, qu qu3, boolean bl2) {
        int n4 = 0;
        if (bl2) {
            n4 = 2;
        }
        if (n2 > 0) {
            if (n2 > 100) {
                n4 |= n2 / 100 << 4;
            }
            if (n2 % 100 > 20) {
                n4 |= 1;
            }
            n3 = n2 % 20;
        }
        n2 = qu2 == null ? 0 : qu2.b.a * 10 + qu2.c;
        int n5 = qu3 == null ? 0 : qu3.b.a * 10 + qu3.c;
        return n4 << 24 | n3 << 16 | n2 << 8 | n5;
    }

    static int a(int n2, qu qu2, qu qu3) {
        int n3 = qu2 == null ? 0 : qu2.b.a * 10 + qu2.c;
        int n4 = qu3 == null ? 0 : qu3.b.a * 10 + qu3.c;
        return n2 << 16 | n3 << 8 | n4;
    }

    static int a(qu qu2) {
        int n2 = qu2.b.a * 10 + qu2.c;
        return 0x16300 | n2;
    }

    static int a(int n2, int n3, qu qu2, qu qu3) {
        if (n3 > 13) {
            n2 |= 1;
            n3 %= 20;
        }
        int n4 = qu2 == null ? 0 : qu2.b.a * 10 + qu2.c;
        int n5 = qu3 == null ? 0 : qu3.b.a * 10 + qu3.c;
        return n2 << 24 | n3 << 16 | n4 << 8 | n5;
    }

    static int a(int n2, int n3, int n4, int n5) {
        return n2 << 24 | n3 << 16 | n4 << 8 | n5;
    }

    static String[] a(e_0 e_02, int[] nArray, int n2, int n3, boolean bl2) {
        Vector<String> vector = new Vector<String>();
        if (bl2) {
            --n2;
            while (n2 >= n3) {
                int n4;
                int n5 = n4 = nArray[n2];
                n5 = n4 >> 24;
                if ((n5 & 4) == 0) {
                    vector.add(String.format(" %3d.\t Undo %s", n2, e_02.a(n4, n5)));
                }
                --n2;
            }
        } else {
            n2 = 0;
            while (n2 < n3) {
                int n6;
                int n7 = n6 = nArray[n2];
                n7 = n6 >> 24;
                if ((n7 & 4) == 0) {
                    vector.add(String.format(" %3d.\t %s", n2, e_02.a(n6, n7)));
                }
                ++n2;
            }
        }
        return vector.toArray(new String[1]);
    }

    static int[] a(int[] nArray, int n2, int n3, boolean bl2) {
        int[] nArray2;
        if (bl2) {
            int n4 = 0;
            int n5 = 0;
            nArray2 = new int[n2 - n3];
            --n2;
            while (n2 >= n3) {
                int n6 = nArray[n2];
                int n7 = n6;
                n7 = n6;
                n7 = n6 >> 24;
                nArray2[n4++] = n5++;
                if ((n7 & 4) == 0) {
                    // empty if block
                }
                --n2;
            }
        } else {
            int n8 = 0;
            int n9 = 0;
            nArray2 = new int[n3];
            n2 = 0;
            while (n2 < n3) {
                int n10 = nArray[n2];
                int n11 = n10;
                n11 = n10;
                n11 = n10 >> 24;
                nArray2[n8++] = n9++;
                if ((n11 & 4) == 0) {
                    // empty if block
                }
                ++n2;
            }
        }
        return nArray2;
    }
}

