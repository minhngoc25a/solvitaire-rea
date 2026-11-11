/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.engine;

import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.Card;
import java.util.Arrays;

/*
 * Renamed from com.solvitaire.app.qm
 */
public final class CardRun {
    public int AboutDialog = 0;
    boolean b;
    CardImage[] c = new CardImage[13];
    Card d;

    CardRun() {
        this.AboutDialog = 0;
    }

    CardRun(CardImage pV2) {
        this.c[0] = pV2;
        this.AboutDialog = 1;
    }

    CardRun(CardRun qm_02) {
        this.AboutDialog = qm_02.AboutDialog;
        this.b = qm_02.b;
        this.c = Arrays.copyOf(qm_02.c, 13);
    }

    final void AboutDialog(int n2) {
        if (this.AboutDialog != 1 || n2 <= 0 || this.c[0].g != 0 && this.c[0].g != n2) {
            String string = "setCardValue called on run existing length " + this.AboutDialog + " existing card " + this.c[0].g + " new value " + n2;
            SolitaireGameEngine qo_02 = this.d.AboutDialog;
            qo_02.AboutDialog(string, false);
        }
        this.c[0].AboutDialog(n2);
    }

    static boolean AboutDialog(CardImage pV2, CardImage pV3) {
        return CardRun.AboutDialog(pV2) ^ CardRun.AboutDialog(pV3);
    }

    private static boolean AboutDialog(CardImage pV2) {
        return pV2.e == 1 || pV2.e == 4;
    }

    final int AboutDialog(CardImage pV2, CardImage pV3, int n2, boolean bl2) {
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

    final int AboutDialog(CardRun qm_02, int n2) {
        int n3 = 0;
        while (n3 < n2) {
            this.c[this.AboutDialog + n3] = qm_02.c[qm_02.AboutDialog - n2 + n3];
            ++n3;
        }
        this.AboutDialog += n2;
        if (n2 < qm_02.AboutDialog) {
            n2 += 20;
        }
        return n2;
    }

    final CardRun b(int n2) {
        CardRun qm_02 = new CardRun();
        qm_02.AboutDialog(this, n2);
        this.AboutDialog -= n2;
        return qm_02;
    }

    public final String toString() {
        StringBuffer stringBuffer = new StringBuffer("Run:");
        boolean bl2 = true;
        CardImage[] pVArray = this.c;
        int n2 = this.c.length;
        int n3 = 0;
        while (n3 < n2) {
            CardImage pV2 = pVArray[n3];
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

