/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.Card;
import java.awt.Rectangle;

public final class so {
    private SolitaireGameEngine AboutDialog;
    private ErrorDialog b;
    private boolean c;

    public so(SolitaireGameEngine qo_02) {
        this.AboutDialog = qo_02;
        this.c = true;
    }

    public final void AboutDialog() {
        if (this.AboutDialog.d <= 4) {
            this.AboutDialog.g("Invalidated cache");
        }
        this.c = true;
        if (this.AboutDialog.ap != null) {
            this.AboutDialog.ap.f();
        }
    }

    private void e() {
        if (this.AboutDialog.d <= 4) {
            this.AboutDialog.g("---- Refreshing table image cache");
        }
        this.b = new ErrorDialog(this.AboutDialog, this.AboutDialog.FPanel.AboutDialog.e(), null);
        if (this.AboutDialog.d <= 4) {
            this.AboutDialog.g("Cache refreshed");
        }
        this.c = false;
    }

    public final void AboutDialog(String string, boolean bl2) {
        if (this.c) {
            this.e();
        }
        this.b.AboutDialog(string, false);
    }

    public final int b() {
        return this.b.e;
    }

    final int c() {
        return this.b.f;
    }

    final int d() {
        return this.b.d;
    }

    final ErrorDialog AboutDialog(Card object, Rectangle object2) {
        object = ((Card)object).m();
        int n2 = ((Rectangle)object).xHandler;
        int n3 = ((Rectangle)object).yHandler;
        ((Rectangle)object).width = ((Rectangle)object2).width;
        ((Rectangle)object).height = ((Rectangle)object2).height;
        ((Rectangle)object).xHandler = (int)((double)((Rectangle)object).xHandler + this.AboutDialog.FPanel.b - (double)((Rectangle)object).width);
        ((Rectangle)object).yHandler = ((Rectangle)object).yHandler + this.AboutDialog.FPanel.c - ((Rectangle)object).height;
        object = this.AboutDialog((Rectangle)object, "PreInvert");
        int[][] nArray = ((ErrorDialog)object).AboutDialog();
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
        ((ErrorDialog)object).AboutDialog(this.AboutDialog, nArray2, "PostInvert");
        ((ErrorDialog)object).AboutDialog(n2);
        ((ErrorDialog)object).b(n3);
        return object;
    }

    final ErrorDialog AboutDialog(Rectangle rectangle, String string) {
        return new ErrorDialog(this.AboutDialog, rectangle, string);
    }

    final boolean AboutDialog(int n2) {
        so so2 = this;
        int n3 = 3000;
        if (!so2.AboutDialog(false, n3)) {
            return false;
        }
        n3 = 3000;
        so2 = this;
        return so2.AboutDialog(true, n3);
    }

    final boolean b(int n2) {
        return this.AboutDialog(true, n2);
    }

    private boolean AboutDialog(boolean bl2, int n2) {
        long l2 = System.currentTimeMillis() + (long)n2;
        if (this.AboutDialog.FPanel.AboutDialog == null) {
            this.AboutDialog.g("tabRect null in stabilize");
            return false;
        }
        ErrorDialog al_02 = this.b;
        boolean bl3 = false;
        int n3 = 0;
        while (n3 < 1000) {
            if (System.currentTimeMillis() > l2) {
                this.AboutDialog.g("***Wait for cache to " + (bl2 ? "stabilize" : "destabilize") + " for " + n2 + "ms timed out");
                break;
            }
            if (n3 > 25 && this.AboutDialog.ap != null) {
                this.AboutDialog.FPanel.m();
            }
            if (bl2) {
                this.AboutDialog.AboutDialog(50L, "cache to stabilize");
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
                this.AboutDialog.AboutDialog(20L, "cache to change");
            }
            al_02 = this.b;
            ++n3;
        }
        if (!bl3) {
            if (bl2) {
                if (this.AboutDialog.d <= 9) {
                    this.AboutDialog.g("In stabilize(), cache never stabilized");
                }
            } else if (this.AboutDialog.d <= 9) {
                this.AboutDialog.g("In stabilize(), cache never changed");
            }
        } else if (bl2) {
            if (this.AboutDialog.d <= 3) {
                this.AboutDialog.g("Check stability of cache looped " + n3 + " times before stable");
            }
        } else if (this.AboutDialog.d <= 3) {
            this.AboutDialog.g("Check stability of cache looped " + n3 + " times before change detected");
        }
        return bl3;
    }
}

