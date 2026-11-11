/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qo_0;
import com.solvitaire.app.qr;
import java.io.File;

final class t {
    private static String[] t = new String[]{"unknown", "unused", "boards", "ncards", "spcfic", "stacks", "target"};
    private qo_0 u;
    boolean a;
    boolean b;
    int c;
    private boolean v = false;
    int d;
    int e;
    int f = 1;
    int g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    String p;
    String q;
    private String w;
    private int x;
    boolean r;
    boolean s;

    t(qo_0 qo_02, int n2) {
        this.u = qo_02;
        qo_02.m = n2;
        this.c = 1;
    }

    final void a(String object, boolean bl2) {
        if (!((String)object).endsWith(File.separator)) {
            object = (String)object + File.separator;
        }
        if (bl2) {
            this.u.ag = object;
            this.u.aq.a("chalDirectory", (String)object);
            this.u.aq.t();
            this.s = false;
        } else {
            this.u.af = object;
            this.u.aq.a("fileDirectory", (String)object);
            this.u.aq.t();
            this.s = true;
        }
        this.p = object;
        qo_0.e(this.p);
        object = new File(this.p);
        if (!((File)object).exists()) {
            String string = "Failed to set challenge directory:" + this.p;
            object = this.u;
            ((qo_0)object).a(string, false);
        }
    }

    final void a() {
        if ("".equals(this.u.ag)) {
            this.u.ag = this.u.as + qo_0.s;
        }
        t t2 = this;
        t2.a(t2.u.ag, true);
    }

    final int b() {
        int n2 = 0;
        String string = this.u.l(this.p + "chkpt.txt");
        if (string == null) {
            if (this.u.d <= 5) {
                this.u.g("Did not find checkpoint file, endFile set to 0");
            }
        } else {
            try {
                n2 = Integer.parseInt(string.strip());
            }
            catch (NumberFormatException numberFormatException) {
                this.u.g("*** Error - the chkpt.txt file does not contain a valid number.  Reset ***");
            }
        }
        return n2;
    }

    final void a(int n2) {
        if (this.u.d <= 5) {
            this.u.g("Writing checkpoint file " + this.p + "chkpt.txt");
        }
        this.a(n2, true);
        this.u.a(this.p + "chkpt.txt", "" + this.u.l.a(false), true);
    }

    final boolean a(String string) {
        this.r = false;
        this.w = string;
        if (this.w.startsWith("solution_")) {
            return false;
        }
        try {
            if (this.w.startsWith("cards")) {
                int n2 = this.w.indexOf(".txt");
                if (this.u.d <= 4) {
                    this.u.g("Card file " + this.w + " has .txt at " + n2);
                }
                if (n2 > 0) {
                    String string2 = this.w.substring(5, n2);
                    try {
                        this.x = Integer.parseInt(string2);
                        this.r = true;
                    }
                    catch (NumberFormatException numberFormatException) {
                        this.u.g("Error interpreting cardsnnn filename " + this.w);
                    }
                }
            }
        }
        catch (Exception exception) {
            this.u.g("Error interpreting cards filename " + this.w);
        }
        return true;
    }

    final boolean b(String stringArray) {
        int n2;
        int n3;
        boolean bl2;
        block28: {
            bl2 = false;
            n3 = 0;
            n2 = 0;
            this.w = stringArray;
            this.r = false;
            this.x = 0;
            if (stringArray.startsWith("solution_")) break block28;
            if (this.u.d <= 4) {
                this.u.g("Solution file must start with solution_ " + (String)stringArray);
            }
            return false;
        }
        try {
            boolean bl3 = true;
            int n4 = this.w.indexOf(".txt");
            if (n4 < 0) {
                bl3 = false;
                n4 = this.w.length();
            }
            int n5 = this.w.indexOf(" ");
            if (this.u.d <= 4) {
                this.u.g("Solution file " + (String)stringArray + " has .txt: " + bl3 + ", ends at " + n4 + " and has space at " + n5);
            }
            if (n4 > 0) {
                String string;
                if (n5 > 0 && n4 - n5 > 7) {
                    stringArray = this.w.substring(n5 + 1, n5 + 7);
                    string = this.w.substring(n5 + 7, n4);
                    n4 = n5;
                    if (this.u.d <= 5) {
                        this.u.g("File type " + (String)stringArray + " parameter " + string);
                    }
                    if (stringArray != null) {
                        n5 = 0;
                        while (n5 < t.length) {
                            if (t[n5].equals(stringArray)) {
                                bl2 = true;
                                break;
                            }
                            ++n5;
                        }
                        this.c = n5;
                    }
                    if (bl2 && string.length() > 0) {
                        n5 = string.indexOf(45);
                        if (n5 > 0) {
                            stringArray = string.split("-");
                            if (this.u.d <= 5) {
                                this.u.g("Parameters split to " + stringArray[0] + " and " + stringArray[1]);
                            }
                            n3 = Integer.parseInt(stringArray[0].trim());
                            n2 = Integer.parseInt(stringArray[1].trim());
                        } else {
                            n2 = Integer.parseInt(string);
                        }
                    }
                    switch (this.c) {
                        case 6: {
                            this.h = n2;
                            this.g = n3;
                            break;
                        }
                        case 2: {
                            this.f = n2;
                            break;
                        }
                        case 5: {
                            this.j = n2;
                            break;
                        }
                        case 4: {
                            this.d = n2 % 100;
                            this.e = n2 / 100;
                            break;
                        }
                        case 3: {
                            this.d = n2;
                            this.e = 0;
                            this.i = n3;
                            break;
                        }
                        default: {
                            this.c = 0;
                            break;
                        }
                    }
                } else {
                    this.c = 1;
                    this.f = 1;
                }
                if (this.w.startsWith("solution_cards")) {
                    string = this.w.substring(14, n4);
                    try {
                        this.x = Integer.parseInt(string);
                        this.r = true;
                    }
                    catch (NumberFormatException numberFormatException) {}
                }
            }
            if (!this.r) {
                this.u.l.w = this.w.substring(9, n4) + (bl3 ? ".txt" : "");
            }
        }
        catch (Exception exception) {
            this.u.g("Error interpreting cards/solution filename " + this.w);
            this.u.l.w = this.w.substring(9);
        }
        return true;
    }

    final int a(boolean bl2) {
        if (!this.r) {
            String string = "Logic error - called getIndex when filename has no index";
            qo_0 qo_02 = this.u;
            qo_02.a(string, false);
        } else if (bl2 == this.s) {
            String string = "Logic error - called getIndex for challenge file when not solving a challenge";
            qo_0 qo_03 = this.u;
            qo_03.a(string, false);
        }
        return this.x;
    }

    final void a(int n2, boolean bl2) {
        this.x = n2;
        this.s = bl2;
        this.r = true;
    }

    final boolean c() {
        if (!this.r) {
            return false;
        }
        ++this.x;
        String string = this.u.l.p + this.u.l.d();
        File file = new File(string);
        if (!file.exists()) {
            if (this.u.d <= 5) {
                this.u.g("Incremented board number, next board " + string + " does not exist");
            }
            return false;
        }
        if (this.u.d <= 5) {
            this.u.g("Incremented board number, next board exists:" + string);
        }
        return true;
    }

    final String d() {
        Object object;
        if (this.r) {
            object = "cards" + this.x + ".txt";
        } else {
            if (this.w == null) {
                String string = "Filename not set before call to getFilename";
                object = this.u;
                ((qo_0)object).a(string, false);
            }
            object = this.w;
        }
        return object;
    }

    final String e() {
        String string = this.r ? "solution_cards" + this.x : (this.w.endsWith(".txt") ? "solution_" + this.w.substring(0, this.w.length() - 4) : "solution_" + this.w);
        switch (this.c) {
            case 2: {
                string = string + " " + t[this.c] + this.f;
                break;
            }
            case 5: {
                string = string + " " + t[this.c] + this.j;
                break;
            }
            case 4: {
                string = string + " " + t[this.c] + (this.e * 100 + this.d);
                break;
            }
            case 6: {
                string = string + " " + t[this.c] + this.g + "-" + this.h;
                break;
            }
            case 3: {
                string = string + " " + t[this.c] + this.i + "-" + this.d;
            }
        }
        string = string + ".txt";
        return string;
    }

    final String f() {
        String string = this.r ? "solution_cards" + this.x : (this.w.endsWith(".txt") ? "solution_" + this.w.substring(0, this.w.length() - 4) : "solution_" + this.w);
        Object object = new File(this.u.l.p);
        if ((object = ((File)object).list()) == null) {
            return null;
        }
        Object object2 = null;
        String[] stringArray = object;
        int n2 = ((String[])object).length;
        int n3 = 0;
        while (n3 < n2) {
            object = stringArray[n3];
            if (((String)object).startsWith(string) && (((String)object).startsWith(string + " ") || ((String)object).equals(string + ".txt"))) {
                object2 = object;
                break;
            }
            ++n3;
        }
        return object2;
    }

    final int g() {
        return this.x / 100;
    }

    final int h() {
        return this.x % 100;
    }

    final boolean i() {
        int n2 = (this.x / 100 + 1) * 100;
        String string = "solution_cards" + n2;
        if (this.u.d <= 5) {
            this.u.g("Looking for next solution " + string + "* in " + this.p);
        }
        String[] stringArray = new File(this.p);
        if ((stringArray = stringArray.list()) != null && stringArray.length > 0) {
            int n3 = 0;
            while (n3 < stringArray.length) {
                if (stringArray[n3].startsWith(string)) {
                    this.x = n2;
                    this.u.l.b(stringArray[n3]);
                    return true;
                }
                ++n3;
            }
        }
        return false;
    }

    final String j() {
        String string = this.r ? (this.s ? "Game: " + this.x : "Challenge " + this.x / 100) : "File: " + this.w;
        return string;
    }

    final String k() {
        String string = this.j() + ": ";
        switch (this.c) {
            case 1: {
                string = string + "Solve a board";
                break;
            }
            case 2: {
                string = string + "Solve " + this.f + " boards";
                break;
            }
            case 5: {
                string = string + "Solve " + this.j + " stacks";
                break;
            }
            case 3: {
                string = string + "Clear " + this.i + " " + qr.f(this.d) + (this.d == 6 ? "es" : "s");
                break;
            }
            case 6: {
                string = string + "Score " + this.h + " points";
                break;
            }
            case 4: {
                string = string + "Clear the " + qr.h(this.e * 100 + this.d);
            }
        }
        return string;
    }

    final void l() {
        this.v = false;
        this.d = 0;
        this.e = 0;
        this.h = 0;
        this.i = 0;
        this.j = 0;
        this.f = 1;
        this.l = 0;
        this.n = 0;
        this.o = 0;
        this.m = 0;
        this.k = 999;
    }

    final void a(int n2, int n3) {
        this.v = true;
        this.d = n2;
        this.e = n3;
        this.i = 1;
    }
}

