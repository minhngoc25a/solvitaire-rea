/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pF;
import com.solvitaire.app.pX;
import com.solvitaire.app.u_0;

final class pH {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int[] g;
    private /* synthetic */ pF h;

    pH(pF pF2) {
        this.h = pF2;
    }

    final int a(int n2, int n3, int n4, int n5) {
        if (n2 == 4) {
            n5 = 0;
        }
        this.b = n3 + n4 - n5;
        if (this.h.k.d <= 2) {
            this.h.k.f(String.format("Match found at %d (%d + %d - %d), set to card location and new search start location", this.b, n3, n4, n5));
        }
        this.a();
        return this.b;
    }

    private void a(int n2, boolean n3) {
        if (this.g[0] == 0) {
            n3 = 1;
        }
        if (n3 != 0) {
            n3 = 0;
            while (n3 < 7) {
                this.g[7 - n3] = this.g[6 - n3];
                ++n3;
            }
            this.g[0] = n2;
        }
        if (this.h.k.d <= 2) {
            this.h.k.f(String.format("Blobs starts are now %d,%d,%d,%d,%d", this.g[0], this.g[1], this.g[2], this.g[3], this.g[4]));
        }
    }

    final int a(int n2, int n3) {
        if (n3 < 0) {
            return -1;
        }
        this.a(n2, true);
        n2 = 0;
        while (n2 < 8) {
            if (this.g[n2] <= 0) break;
            int n4 = this.g[n2] - n3 + 1;
            if (this.h.k.d <= 2) {
                this.h.k.f("Trying for match at " + n3 + ", prevStart " + this.g[n2] + " search height " + n4 + " range " + this.c + " to " + this.d);
            }
            if (n4 >= this.c) {
                if (n4 > this.d) {
                    if (this.h.k.d <= 3) {
                        this.h.k.f("Test of grab location failed due to search hight too high");
                    }
                    return -1;
                }
                if (this.h.k.d <= 3) {
                    this.h.k.f("Test #" + (n2 + 1) + " allowing grab location " + n3 + " using search height " + n4);
                }
                this.e = n4;
                return n3;
            }
            ++n2;
        }
        if (this.h.k.d <= 3) {
            this.h.k.f("Test of grab location failed due to search height too low");
        }
        return -2;
    }

    final int a(int[][] nArray, u_0 u_02, int n2, int n3, int n4, pX pX2) {
        if (n4 < 0) {
            if (this.h.k.d <= 2) {
                this.h.k.f("y < 0 so returning TOO_LOW");
            }
            return -2;
        }
        int n5 = n4;
        int n6 = n4 - 5;
        if (n6 < 0) {
            n6 = 0;
        }
        int n7 = 0;
        while (--n5 >= n6) {
            if (!pX2.a(u_02, nArray, n3 + 2, n5, pX2.y.width - 2, pX2.d, pX2.e)) continue;
            ++n7;
        }
        if (n7 < 2 && n4 > 4) {
            if (this.h.k.d <= 3) {
                this.h.k.f("Less than 2 blank lines above potential blob, rejecting");
            }
            this.a(n2, false);
            this.e = this.b - n4;
            if (this.e > this.d) {
                if (this.h.k.d <= 3) {
                    this.h.k.f("Exceeded max blob anyway so rejecting as TOO_HIGH");
                }
                return -1;
            }
            if (this.h.k.d <= 3) {
                this.h.k.f("Did not exceed max blob yet so rejecting as TOO_LOW");
            }
            return -2;
        }
        this.a(n2, true);
        int n8 = n4;
        int n9 = 0;
        while (n9 < 8) {
            if (this.g[n9] <= 0) {
                if (this.h.k.d > 2) break;
                this.h.k.f("Hit zero start location at slot " + n9 + " so blob at " + n8 + " is closest to " + this.b);
                break;
            }
            if (this.g[n9] > this.b) {
                if (this.h.k.d > 2) break;
                this.h.k.f("Blob start " + this.g[n9] + " nearest to previous startLocation " + this.b);
                break;
            }
            n8 = this.g[n9];
            ++n9;
        }
        n9 = this.b - n8;
        if (pX2.z == 9) {
            n9 -= 17;
        }
        if (n8 - n4 + 1 < 4) {
            if (this.h.k.d <= 2) {
                this.h.k.f("Return TOO_LOW at " + n4 + ", blob(s) height from " + n8 + " to " + n4 + " giving " + (n8 - n4 + 1) + " start location of " + (this.b - pX2.c.x) + " giving location delta of " + (this.b - pX2.c.x - n8));
            }
            return -2;
        }
        if (this.a > 1 && n9 > 26) {
            if (this.h.k.d <= 2) {
                this.h.k.f("Return TOO_HIGH at " + n4 + ", blob(s) height from " + n8 + " to " + n4 + " giving " + (n8 - n4) + " start location of " + this.b + " giving location delta of " + n9);
            }
            return -1;
        }
        n9 = n8 - n4 + 1;
        this.e = this.b - n4 + 1;
        if (this.h.k.d <= 2) {
            this.h.k.f("Trying match at " + n4 + ", matching up from " + n8 + " blob height " + n9 + " search height " + this.e + " search range " + this.c + " to " + this.d);
        }
        if (this.e < this.c) {
            if (this.h.k.d <= 3) {
                this.h.k.f("Scan for grab position failed due to search height too low");
            }
            return -2;
        }
        if (this.e > this.d) {
            if (this.h.k.d <= 3) {
                this.h.k.f("Scan for grab position failed due to search height too high");
            }
            return -1;
        }
        if (this.a == 3 || this.a == 4) {
            if (n9 < 4) {
                n9 = 4;
            }
            if (n9 > this.f) {
                if (n9 > pX2.y.height) {
                    this.f = pX2.y.height;
                    if (this.h.k.d <= 3) {
                        this.h.k.f("Big blob for part match so match height decreased to " + this.f + " from blob height " + n9);
                    }
                } else {
                    if (this.h.k.d <= 3) {
                        this.h.k.f("Part match so match height increased from " + this.f + " to  blob height " + n9);
                    }
                    this.f = n9;
                }
            }
        }
        if (this.h.k.d <= 3) {
            this.h.k.f("Test proceeding with match height " + this.f + ", search height " + this.e);
        }
        return n4;
    }

    private void a() {
        int n2 = 0;
        while (n2 < 8) {
            this.g[n2] = 0;
            ++n2;
        }
    }

    final void a(int n2) {
        this.a = 1;
        this.a();
    }

    final boolean a(pX pX2) {
        switch (this.a) {
            case 0: {
                this.d = 99999;
                this.c = pX2.c.height - 3;
                if (pX2.z == 9) {
                    this.c -= 7;
                }
                this.f = pX2.c.height;
                if (this.h.k.d <= 3) {
                    this.h.k.f("INIT_MATCH, startLocation now " + this.b + " search set to " + this.c + " to " + this.d);
                }
                this.a = 1;
                return true;
            }
            case 1: {
                this.d = (int)(49.0 * this.h.w) + 3;
                this.c = pX2.z == 9 ? pX2.y.height - 7 : pX2.y.height - 5;
                this.f = pX2.y.height;
                if (this.h.k.d <= 3) {
                    this.h.k.f("FIRST_MATCH completed, startLocation now " + this.b + " reducing search to " + this.c + " to " + this.d);
                }
                this.a = 2;
                break;
            }
            case 2: {
                this.d = pX2.c.height + 11;
                this.c = pX2.J - 1;
                this.f = pX2.J;
                if (this.h.k.d <= 3) {
                    this.h.k.f("FULL_MATCH ran out of space, startLocation now " + this.b + " reducing search to " + this.c + " to " + this.d);
                }
                this.a = 3;
                break;
            }
            case 3: {
                this.d = pX2.J + 5;
                this.c = 4;
                this.f = 4;
                this.b += 2;
                if (this.h.k.d <= 3) {
                    this.h.k.f("PART_MATCH ran out of space, backing out to " + this.b + " reducing search to " + this.c + " to " + this.d);
                }
                this.a = 4;
                break;
            }
            case 4: {
                if (this.h.k.d <= 3) {
                    this.h.k.f("MINIMAL_MATCH ran out of space, exiting searching");
                }
                return false;
            }
        }
        this.a();
        return true;
    }
}

