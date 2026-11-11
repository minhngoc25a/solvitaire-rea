/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qo_0;
import com.solvitaire.app.qx_0;

/*
 * Renamed from com.solvitaire.app.qy
 */
final class qy_0 {
    int a;
    int b;
    int c;
    int d;
    int e;
    long f;
    private /* synthetic */ qx_0 g;

    qy_0(qx_0 qx_02, qo_0 qo_02, String string) {
        this.g = qx_02;
        if (string == null) {
            return;
        }
        int n2 = string.length();
        if (n2 == 0) {
            return;
        }
        if (n2 != 35) {
            qo_02.g("Invalid record in statistics, length " + n2 + " data:" + string);
        }
        try {
            this.a = Integer.parseInt(string.substring(0, 7));
            this.b = Integer.parseInt(string.substring(7, 15));
            this.c = Integer.parseInt(string.substring(15, 20));
            this.d = Integer.parseInt(string.substring(20, 25));
            this.e = Integer.parseInt(string.substring(25, 35));
            return;
        }
        catch (Exception exception) {
            qo_02.g("Exception reading stats string " + string + ", error " + exception.getMessage());
            return;
        }
    }

    qy_0(qx_0 qx_02) {
        this.g = qx_02;
    }

    public final String toString() {
        return String.format("%07d%08d%05d%05d%010d\n", this.a, this.a(), this.c, this.d, this.e);
    }

    final void a(qo_0 qo_02, boolean bl2) {
        if (bl2) {
            if (this.f == 0L) {
                if (qo_02.d <= 4) {
                    qo_02.g("Run timer started");
                }
                this.f = System.currentTimeMillis();
                return;
            }
            if (qo_02.d <= 5) {
                qo_02.g("Timer already running when suspend cancel requested");
                return;
            }
        } else {
            if (this.f > 0L) {
                if (qo_02.d <= 4) {
                    qo_02.g("Run timer stopped");
                }
                this.b = this.a();
                this.f = 0L;
                return;
            }
            if (qo_02.d <= 5) {
                qo_02.g("TIMER NOT RUNNING WHEN LOST FOCUS");
            }
        }
    }

    final int a() {
        if (this.f == 0L) {
            return this.b;
        }
        return this.b + (int)((System.currentTimeMillis() - this.f) / 1000L);
    }
}

