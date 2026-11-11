/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pV;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qu;
import java.util.Arrays;

/*
 * Renamed from com.solvitaire.app.qm
 */
final class qm_0 {
    public int a = 0;
    boolean b;
    pV[] c = new pV[13];
    qu d;

    qm_0() {
        this.a = 0;
    }

    qm_0(pV pV2) {
        this.c[0] = pV2;
        this.a = 1;
    }

    qm_0(qm_0 qm_02) {
        this.a = qm_02.a;
        this.b = qm_02.b;
        this.c = Arrays.copyOf(qm_02.c, 13);
    }

    final void a(int n2) {
        if (this.a != 1 || n2 <= 0 || this.c[0].g != 0 && this.c[0].g != n2) {
            String string = "setCardValue called on run existing length " + this.a + " existing card " + this.c[0].g + " new value " + n2;
            qo_0 qo_02 = this.d.a;
            qo_02.a(string, false);
        }
        this.c[0].a(n2);
    }

    static boolean a(pV pV2, pV pV3) {
        return qm_0.a(pV2) ^ qm_0.a(pV3);
    }

    private static boolean a(pV pV2) {
        return pV2.e == 1 || pV2.e == 4;
    }

    final int a(pV pV2, pV pV3, int n2, boolean bl2) {
        int n3;
        if (!bl2) {
            if (!this.d.g && pV2.e == pV3.e) {
                return -1;
            }
            n3 = pV2.f - pV3.f;
        } else {
            n3 = pV2.g - pV3.g;
        }
        if (n3 <= 0 || n3 > n2) {
            n3 = -1;
        }
        return n3;
    }

    final int a(qm_0 qm_02, int n2) {
        int n3 = 0;
        while (n3 < n2) {
            this.c[this.a + n3] = qm_02.c[qm_02.a - n2 + n3];
            ++n3;
        }
        this.a += n2;
        if (n2 < qm_02.a) {
            n2 += 20;
        }
        return n2;
    }

    final qm_0 b(int n2) {
        qm_0 qm_02 = new qm_0();
        qm_02.a(this, n2);
        this.a -= n2;
        return qm_02;
    }

    public final String toString() {
        StringBuffer stringBuffer = new StringBuffer("Run:");
        boolean bl2 = true;
        pV[] pVArray = this.c;
        int n2 = this.c.length;
        int n3 = 0;
        while (n3 < n2) {
            pV pV2 = pVArray[n3];
            if (pV2 == null) break;
            if (!bl2) {
                stringBuffer.append(",");
            }
            bl2 = false;
            stringBuffer.append(pV2.g);
            ++n3;
        }
        return stringBuffer.toString();
    }
}

