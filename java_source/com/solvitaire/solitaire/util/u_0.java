/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

/*
 * Renamed from com.solvitaire.app.U
 */
final class u_0 {
    int AboutDialog;
    int b;
    int c;

    u_0() {
    }

    u_0(int n2) {
        this.AboutDialog = n2 >> 16 & 0xFF;
        this.b = n2 >> 8 & 0xFF;
        this.c = n2 & 0xFF;
    }

    u_0(int n2, int n3, int n4) {
        this.AboutDialog = n2;
        this.b = n3;
        this.c = n4;
    }

    final void AboutDialog(int n2) {
        this.AboutDialog += n2 >> 16 & 0xFF;
        this.b += n2 >> 8 & 0xFF;
        this.c += n2 & 0xFF;
    }

    final void AboutDialog(u_0 u_02) {
        this.AboutDialog += u_02.AboutDialog;
        this.b += u_02.b;
        this.c += u_02.c;
    }

    final void b(int n2) {
        this.AboutDialog /= n2;
        this.b /= n2;
        this.c /= n2;
    }

    final void c(int n2) {
        this.AboutDialog = n2 >> 16 & 0xFF;
        this.b = n2 >> 8 & 0xFF;
        this.c = n2 & 0xFF;
    }

    final void b(u_0 u_02) {
        this.AboutDialog = u_02.AboutDialog;
        this.b = u_02.b;
        this.c = u_02.c;
    }

    final int d(int n2) {
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
        return (n3 + n4 + n2) / 2;
    }

    final int c(u_0 u_02) {
        int n2 = this.AboutDialog - u_02.AboutDialog;
        int n3 = this.b - u_02.b;
        int n4 = this.c - u_02.c;
        if (n2 < 0) {
            n2 = -n2;
        }
        if (n3 < 0) {
            n3 = -n3;
        }
        if (n4 < 0) {
            n4 = -n4;
        }
        return (n2 + n3 + n4) / 2;
    }

    final int d(u_0 u_02) {
        int n2 = this.AboutDialog - u_02.AboutDialog;
        int n3 = this.b - u_02.b;
        int n4 = this.c - u_02.c;
        return (n2 + n3 + n4) / 2;
    }

    final int AboutDialog(u_0 u_02, u_0 u_03) {
        if (u_03.AboutDialog > u_02.AboutDialog) {
            if (this.AboutDialog < u_02.AboutDialog) {
                return -1;
            }
            if (this.AboutDialog > u_03.AboutDialog) {
                return 1;
            }
        } else {
            if (this.AboutDialog < u_03.AboutDialog) {
                return -1;
            }
            if (this.AboutDialog > u_02.AboutDialog) {
                return 1;
            }
        }
        if (u_03.b > u_02.b) {
            if (this.b < u_02.b) {
                return -1;
            }
            if (this.b > u_03.b) {
                return 1;
            }
        } else {
            if (this.b < u_03.b) {
                return -1;
            }
            if (this.b > u_02.b) {
                return 1;
            }
        }
        if (u_03.c > u_02.c) {
            if (this.c < u_02.c) {
                return -1;
            }
            if (this.c > u_03.c) {
                return 1;
            }
        } else {
            if (this.c < u_03.c) {
                return -1;
            }
            if (this.c > u_02.c) {
                return 1;
            }
        }
        return 0;
    }

    final void b(u_0 u_02, u_0 u_03) {
        if (u_03.AboutDialog > u_02.AboutDialog) {
            if (this.AboutDialog < u_02.AboutDialog) {
                u_02.AboutDialog = this.AboutDialog;
            } else if (this.AboutDialog > u_03.AboutDialog) {
                u_03.AboutDialog = this.AboutDialog;
            }
        } else if (this.AboutDialog < u_03.AboutDialog) {
            u_03.AboutDialog = this.AboutDialog;
        } else if (this.AboutDialog > u_02.AboutDialog) {
            u_02.AboutDialog = this.AboutDialog;
        }
        if (u_03.b > u_02.b) {
            if (this.b < u_02.b) {
                u_02.b = this.b;
            } else if (this.b > u_03.b) {
                u_03.b = this.b;
            }
        } else if (this.b < u_03.b) {
            u_03.b = this.b;
        } else if (this.b > u_02.b) {
            u_02.b = this.b;
        }
        if (u_03.c > u_02.c) {
            if (this.c < u_02.c) {
                u_02.c = this.c;
                return;
            }
            if (this.c > u_03.c) {
                u_03.c = this.c;
                return;
            }
        } else {
            if (this.c < u_03.c) {
                u_03.c = this.c;
                return;
            }
            if (this.c > u_02.c) {
                u_02.c = this.c;
            }
        }
    }

    final int AboutDialog() {
        if (this.AboutDialog < 0) {
            this.AboutDialog = 0;
        }
        if (this.b < 0) {
            this.b = 0;
        }
        if (this.c < 0) {
            this.c = 0;
        }
        return ((this.AboutDialog & 0xFF) << 16) + ((this.b & 0xFF) << 8) + (this.c & 0xFF);
    }

    public final String toString() {
        return this.AboutDialog + "," + this.b + "," + this.c;
    }

    static int AboutDialog(int[][] nArray) {
        int n2 = 0;
        u_0 u_02 = new u_0(0);
        int n3 = 0;
        while (n3 < nArray.length) {
            int n4 = 0;
            while (n4 < nArray[0].length) {
                ++n2;
                int n5 = nArray[n3][n4];
                u_02.AboutDialog(n5);
                ++n4;
            }
            ++n3;
        }
        u_02.b(n2);
        return u_02.AboutDialog();
    }

    static int AboutDialog(int[][] nArray, int n2, int n3, int n4, int n5) {
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

