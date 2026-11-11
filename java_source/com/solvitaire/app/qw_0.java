/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qu;
import com.solvitaire.app.s_0;
import java.awt.Rectangle;

/*
 * Renamed from com.solvitaire.app.qw
 */
final class qw_0 {
    private qu d;
    Rectangle a;
    s_0[] b;
    boolean c = true;

    qw_0(qu qu2) {
        this.d = qu2;
        this.a = qu2.m();
    }

    public final String toString() {
        StringBuffer stringBuffer = new StringBuffer(this.d.toString());
        if (this.b == null) {
            stringBuffer.append(" NULL");
        } else if (this.b.length == 0) {
            stringBuffer.append(" Empty");
        } else {
            boolean bl2 = true;
            s_0[] s_0Array = this.b;
            int n2 = this.b.length;
            int n3 = 0;
            while (n3 < n2) {
                s_0 s_02 = s_0Array[n3];
                if (!bl2) {
                    stringBuffer.append(", ");
                } else {
                    stringBuffer.append("  ");
                }
                stringBuffer.append(s_02.c());
                stringBuffer.append(":");
                if (s_02.c == 0) {
                    stringBuffer.append(0);
                } else if (s_02.c == -1) {
                    stringBuffer.append(-1);
                } else {
                    stringBuffer.append(s_02.b * 100 + s_02.c);
                }
                bl2 = false;
                ++n3;
            }
        }
        return stringBuffer.toString();
    }
}

