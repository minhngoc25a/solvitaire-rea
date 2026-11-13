/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

/*
 * Renamed from com.solvitaire.app.U
 */
public final class u_0 {
    public int AboutDialog;
    public int b;
    public int c;

    public u_0() {
    }

    public u_0(int n2) {
        this.AboutDialog = n2 >> 16 & 0xFF;
        this.b = n2 >> 8 & 0xFF;
        this.c = n2 & 0xFF;
    }

    public u_0(int n2, int n3, int n4) {
        this.AboutDialog = n2;
        this.b = n3;
        this.c = n4;
    }

    public final void AboutDialog(int n2) {
        this.AboutDialog += n2 >> 16 & 0xFF;
        this.b += n2 >> 8 & 0xFF;
        this.c += n2 & 0xFF;
    }

    public final void AboutDialog(u_0 u_02) {
        this.AboutDialog += u_02.AboutDialog;
        this.b += u_02.b;
        this.c += u_02.c;
    }

    public final void b(int n2) {
        this.AboutDialog /= n2;
        this.b /= n2;
        this.c /= n2;
    }

    public final void c(int n2) {
        this.AboutDialog = n2 >> 16 & 0xFF;
        this.b = n2 >> 8 & 0xFF;
        this.c = n2 & 0xFF;
    }

    public final void b(u_0 u_02) {
        this.AboutDialog = u_02.AboutDialog;
        this.b = u_02.b;
        this.c = u_02.c;
    }

    public final int d(int n2) {
        int n3 = this.AboutDialog - (n2 >> 16 & 0xFF);
        int n4 = this.b - (n2 >> 8 & 0xFF);
        n2 = this.c - (n2 & 0xFF);
        if (n3 < 0) {
            n3 = -n3;
        }
        if (n4 < 0) {
            n4 = -n4;
        }
        if (n2 < 0) {
            n2 = -n2;
        }
        return n3 + n4 + n2;
    }

    public final int c(u_0 u_02) {
        return this.d(u_02.AboutDialog) + this.d(u_02.b) + this.d(u_02.c);
    }

    public final int d(u_0 u_02) {
        return this.c(u_02);
    }

    public final int AboutDialog(u_0 u_02, u_0 u_03) {
        return this.c(u_02) + this.c(u_03);
    }

    public final void b(u_0 u_02, u_0 u_03) {
        this.AboutDialog = u_02.AboutDialog + u_03.AboutDialog;
        this.b = u_02.b + u_03.b;
        this.c = u_02.c + u_03.c;
    }

    public final int AboutDialog() {
        return this.AboutDialog << 16 | this.b << 8 | this.c;
    }

    public static int AboutDialog(int[][] nArray) {
        int n6 = 0;
        u_0 u_02 = new u_0(0);
        for (int n7 = 0; n7 < nArray.length; ++n7) {
            int[] n8 = nArray[n7];
            for (int n9 = 0; n9 < n8.length; ++n9) {
                u_02.AboutDialog(n8[n9]);
                ++n6;
            }
        }
        u_02.b(n6);
        return u_02.AboutDialog();
    }

    public static int AboutDialog(int[][] nArray, int n2, int n3, int n4, int n5) {
        int n6 = 0;
        u_0 u_02 = new u_0(0);
        int n7 = 0;
        while (n7 < n5) {
            int n8 = 0;
            while (n8 < n4) {
                ++n6;
                int n9 = nArray[n7 + n3][n8 + n2];
                u_02.AboutDialog(n9);
                ++n8;
            }
            ++n7;
        }
        u_02.b(n6);
        return u_02.AboutDialog();
    }
}
