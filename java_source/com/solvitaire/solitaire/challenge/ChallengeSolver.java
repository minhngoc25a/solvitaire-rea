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
    public SolitaireGameEngine AboutDialog;
    String b;
    String c;
    int d;
    private int q;
    public List e;
    public List f;
    public List g;
    public List h;
    public List i;
    public qy_0 j;
    int k = 99999999;
    int l;
    int m = 99999999;
    int n;
    public String o;
    public boolean p;

    public ChallengeSolver(SolitaireGameEngine qo_02) {
        this.AboutDialog = qo_02;
        this.j = new qy_0(this);
    }

    public final void AboutDialog(String string) {
        this.b = string;
        this.AboutDialog();
    }

    public final void AboutDialog(String string, int n2, String string2) {
        this.c = string;
        this.d = n2;
        this.b = string2;
        this.AboutDialog();
    }

    public final void AboutDialog() {
        String string;
        if (this.c == null) {
            this.c = this.AboutDialog.l.q;
            this.d = this.AboutDialog.bl;
        }
        if (!(string = this.AboutDialog.as + SolitaireGameEngine.o + this.c + String.valueOf(this.d > 0 ? Integer.valueOf(this.d) : "") + File.separator + "stats" + this.b + ".txt").equals(this.o)) {
            this.k = 99999999;
            this.m = 99999999;
            String[] object = new String(java.nio.file.Files.readAllBytes(java.nio.file.Paths.get(string))).split("\n");
            this.e = new ArrayList(object.length + 100);
            this.f = new ArrayList(object.length + 100);
            this.g = new ArrayList(object.length + 100);
            this.h = new ArrayList(object.length + 100);
            this.i = new ArrayList(object.length + 100);
            int n2 = 0;
            this.q = 0;
            String[] stringArray = object;
            int n3 = object.length;
            int n4 = 0;
            while (n4 < n3) {
                String element = stringArray[n4];
                if (element.length() != 0) {
                    qy_0 qx_02 = new qy_0(this, this.AboutDialog, element);
                    this.e.add(qx_02.AboutDialog);
                    this.f.add(qx_02.b);
                    this.g.add(qx_02.c);
                    this.h.add(qx_02.d);
                    this.i.add(qx_02.e);
                    this.AboutDialog(qx_02);
                    n2 = qx_02.AboutDialog;
                    this.q = qx_02.e;
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

    public final void b() {
        this.j.f = 0L;
        this.j.b = 0;
        this.j.c = 0;
        this.j.d = 0;
    }

    public final void AboutDialog(qy_0 qy_02) {
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

