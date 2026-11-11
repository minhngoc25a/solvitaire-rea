/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.al_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qu;
import java.awt.Rectangle;

public final class so {
    private qo_0 a;
    private al_0 b;
    private boolean c;

    so(qo_0 qo_02) {
        this.a = qo_02;
        this.c = true;
    }

    final void a() {
        if (this.a.d <= 4) {
            this.a.g("Invalidated cache");
        }
        this.c = true;
        if (this.a.ap != null) {
            this.a.ap.f();
        }
    }

    private void e() {
        if (this.a.d <= 4) {
            this.a.g("---- Refreshing table image cache");
        }
        this.b = new al_0(this.a, this.a.F.a.e(), null);
        if (this.a.d <= 4) {
            this.a.g("Cache refreshed");
        }
        this.c = false;
    }

    final void a(String string, boolean bl2) {
        if (this.c) {
            this.e();
        }
        this.b.a(string, false);
    }

    final int b() {
        return this.b.e();
    }

    final int c() {
        return this.b.f();
    }

    final int d() {
        return this.b.d();
    }

    final al_0 a(qu object, Rectangle object2) {
        object = ((qu)object).m();
        int n2 = ((Rectangle)object).x;
        int n3 = ((Rectangle)object).y;
        ((Rectangle)object).width = ((Rectangle)object2).width;
        ((Rectangle)object).height = ((Rectangle)object2).height;
        ((Rectangle)object).x = (int)((double)((Rectangle)object).x + this.a.F.b - (double)((Rectangle)object).width);
        ((Rectangle)object).y = ((Rectangle)object).y + this.a.F.c - ((Rectangle)object).height;
        object = this.a((Rectangle)object, "PreInvert");
        int[][] nArray = ((al_0)object).a();
        object2 = nArray;
        int n4 = nArray[0].length;
        int n5 = ((Object)object2).length;
        int[][] nArray2 = new int[n5][n4];
        int n6 = 0;
        while (n6 < n5) {
            int n7 = 0;
            while (n7 < n4) {
                nArray2[n6][n7] = (int)object2[n5 - n6 - 1][n4 - n7 - 1];
                ++n7;
            }
            ++n6;
        }
        ((al_0)object).a(this.a, nArray2, "PostInvert");
        ((al_0)object).a(n2);
        ((al_0)object).b(n3);
        return object;
    }

    final al_0 a(Rectangle rectangle, String string) {
        return new al_0(this.a, rectangle, string);
    }

    final boolean a(int n2) {
        so so2 = this;
        int n3 = 3000;
        if (!so2.a(false, n3)) {
            return false;
        }
        n3 = 3000;
        so2 = this;
        return so2.a(true, n3);
    }

    final boolean b(int n2) {
        return this.a(true, n2);
    }

    private boolean a(boolean bl2, int n2) {
        long l2 = System.currentTimeMillis() + (long)n2;
        if (this.a.F.a == null) {
            this.a.g("tabRect null in stabilize");
            return false;
        }
        al_0 al_02 = this.b;
        boolean bl3 = false;
        int n3 = 0;
        while (n3 < 1000) {
            if (System.currentTimeMillis() > l2) {
                this.a.g("***Wait for cache to " + (bl2 ? "stabilize" : "destabilize") + " for " + n2 + "ms timed out");
                break;
            }
            if (n3 > 25 && this.a.ap != null) {
                this.a.F.m();
            }
            if (bl2) {
                this.a.a(50L, "cache to stabilize");
                this.e();
                if (this.b.equals(al_02)) {
                    bl3 = true;
                    break;
                }
            } else {
                this.e();
                if (!this.b.equals(al_02)) {
                    bl3 = true;
                    break;
                }
                this.a.a(20L, "cache to change");
            }
            al_02 = this.b;
            ++n3;
        }
        if (!bl3) {
            if (bl2) {
                if (this.a.d <= 9) {
                    this.a.g("In stabilize(), cache never stabilized");
                }
            } else if (this.a.d <= 9) {
                this.a.g("In stabilize(), cache never changed");
            }
        } else if (bl2) {
            if (this.a.d <= 3) {
                this.a.g("Check stability of cache looped " + n3 + " times before stable");
            }
        } else if (this.a.d <= 3) {
            this.a.g("Check stability of cache looped " + n3 + " times before change detected");
        }
        return bl3;
    }
}

