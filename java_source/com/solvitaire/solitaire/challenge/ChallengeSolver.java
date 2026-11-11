/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.challenge;

import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.util.qy_0;
import java.io.File;
import java.util.ArrayList;
import java.util.List;

/*
 * Renamed from com.solvitaire.app.qx
 */
public final class ChallengeSolver {
    SolitaireGameEngine AboutDialog;
    String b;
    String c;
    int d;
    private int q;
    public List e;
    public List f;
    public List g;
    public List h;
    public List i;
    qy_0 j;
    int k = 99999999;
    int l;
    int m = 99999999;
    int n;
    String o;
    boolean p;

    ChallengeSolver(SolitaireGameEngine qo_02) {
        this.AboutDialog = qo_02;
        this.j = new qy_0(this);
    }

    final void AboutDialog(String string) {
        this.b = string;
        this.AboutDialog();
    }

    final void AboutDialog(String string, int n2, String string2) {
        this.c = string;
        this.d = n2;
        this.b = string2;
        this.AboutDialog();
    }

    final void AboutDialog() {
        String string;
        if (this.c == null) {
            this.c = this.AboutDialog.l.q;
            this.d = this.AboutDialog.bl;
        }
        if (!(string = this.AboutDialog.as + SolitaireGameEngine.o + this.c + String.valueOf(this.d > 0 ? Integer.valueOf(this.d) : "") + File.separator + "stats" + this.b + ".txt").equals(this.o)) {
            this.k = 99999999;
            this.m = 99999999;
            Object object = this.AboutDialog.l(string);
            if (object == null) {
                object = "";
            }
            object = object.split("\n");
            this.e = new ArrayList(((String[])object).length + 100);
            this.f = new ArrayList(((String[])object).length + 100);
            this.g = new ArrayList(((String[])object).length + 100);
            this.h = new ArrayList(((String[])object).length + 100);
            this.i = new ArrayList(((String[])object).length + 100);
            int n2 = 0;
            this.q = 0;
            String[] stringArray = object;
            int n3 = ((String[])object).length;
            int n4 = 0;
            while (n4 < n3) {
                object = stringArray[n4];
                if (object.length() != 0) {
                    ChallengeSolver qx_02 = this;
                    object = new qy_0(qx_02, qx_02.AboutDialog, (String)object);
                    this.e.add(object.AboutDialog);
                    this.f.add(object.b);
                    this.g.add(object.c);
                    this.h.add(object.d);
                    this.i.add(object.e);
                    this.AboutDialog((qy_0)object);
                    n2 = object.AboutDialog;
                    this.q = object.e;
                }
                ++n4;
            }
            this.j.AboutDialog = n2 + 1;
            if (n2 < 20) {
                int n5 = n2;
                while (n5 < 20) {
                    this.e.add(n5 + 1);
                    this.f.add(0);
                    this.g.add(0);
                    this.h.add(0);
                    this.i.add(0);
                    ++n5;
                }
            }
            this.o = string;
        }
    }

    final void b() {
        this.j.f = 0L;
        this.j.b = 0;
        this.j.c = 0;
        this.j.d = 0;
    }

    final void AboutDialog(qy_0 qy_02) {
        int n2;
        if (qy_02.c <= this.m) {
            this.m = qy_02.c;
            this.n = qy_02.AboutDialog;
        }
        if ((n2 = qy_02.AboutDialog()) <= this.k) {
            this.k = n2;
            this.l = qy_02.AboutDialog;
        }
    }

    final void c() {
        ChallengeSolver qx_02 = this;
        qx_02.AboutDialog(qx_02.AboutDialog.bj, this.AboutDialog.bl, this.AboutDialog.bk);
        this.AboutDialog.bo = this.AboutDialog.bq.AboutDialog(this.AboutDialog.bj, this.AboutDialog.bl, this.AboutDialog.bk, this.q);
    }
}

