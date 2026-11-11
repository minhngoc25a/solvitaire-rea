/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import java.io.File;

final class t {
    private static String[] t = new String[]{"unknown", "unused", "boards", "ncards", "spcfic", "stacks", "target"};
    private SolitaireGameEngine uPanel;
    boolean AboutDialog;
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
    private String wHandler;
    private int xHandler;
    boolean rPanel;
    boolean s;

    t(SolitaireGameEngine qo_02, int n2) {
        this.uPanel = qo_02;
        qo_02.m = n2;
        this.c = 1;
    }

    final void AboutDialog(String object, boolean bl2) {
        if (!((String)object).endsWith(File.separator)) {
            object = (String)object + File.separator;
        }
        if (bl2) {
            this.uPanel.ag = object;
            this.uPanel.aq.AboutDialog("chalDirectory", (String)object);
            this.uPanel.aq.t();
            this.s = false;
        } else {
            this.uPanel.af = object;
            this.uPanel.aq.AboutDialog("fileDirectory", (String)object);
            this.uPanel.aq.t();
            this.s = true;
        }
        this.p = object;
        SolitaireGameEngine.e(this.p);
        object = new File(this.p);
        if (!((File)object).exists()) {
            String string = "Failed to set challenge directory:" + this.p;
            object = this.uPanel;
            ((SolitaireGameEngine)object).AboutDialog(string, false);
        }
    }

    final void AboutDialog() {
        if ("".equals(this.uPanel.ag)) {
            this.uPanel.ag = this.uPanel.as + SolitaireGameEngine.s;
        }
        t t2 = this;
        t2.AboutDialog(t2.uPanel.ag, true);
    }

    final int b() {
        int n2 = 0;
        String string = this.uPanel.l(this.p + "chkpt.txt");
        if (string == null) {
            if (this.uPanel.d <= 5) {
                this.uPanel.g("Did not find checkpoint file, endFile set to 0");
            }
        } else {
            try {
                n2 = Integer.parseInt(string.strip());
            }
            catch (NumberFormatException numberFormatException) {
                this.uPanel.g("*** Error - the chkpt.txt file does not contain AboutDialog valid number.  Reset ***");
            }
        }
        return n2;
    }

    final void AboutDialog(int n2) {
        if (this.uPanel.d <= 5) {
            this.uPanel.g("Writing checkpoint file " + this.p + "chkpt.txt");
        }
        this.AboutDialog(n2, true);
        this.uPanel.AboutDialog(this.p + "chkpt.txt", "" + this.uPanel.l.AboutDialog(false), true);
    }

    final boolean AboutDialog(String string) {
        this.rPanel = false;
        this.wHandler = string;
        if (this.wHandler.startsWith("solution_")) {
            return false;
        }
        try {
            if (this.wHandler.startsWith("cards")) {
                int n2 = this.wHandler.indexOf(".txt");
                if (this.uPanel.d <= 4) {
                    this.uPanel.g("Card file " + this.wHandler + " has .txt at " + n2);
                }
                if (n2 > 0) {
                    String string2 = this.wHandler.substring(5, n2);
                    try {
                        this.xHandler = Integer.parseInt(string2);
                        this.rPanel = true;
                    }
                    catch (NumberFormatException numberFormatException) {
                        this.uPanel.g("Error interpreting cardsnnn filename " + this.wHandler);
                    }
                }
            }
        }
        catch (Exception exception) {
            this.uPanel.g("Error interpreting cards filename " + this.wHandler);
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
            this.wHandler = stringArray;
            this.rPanel = false;
            this.xHandler = 0;
            if (stringArray.startsWith("solution_")) break block28;
            if (this.uPanel.d <= 4) {
                this.uPanel.g("Solution file must start with solution_ " + (String)stringArray);
            }
            return false;
        }
        try {
            boolean bl3 = true;
            int n4 = this.wHandler.indexOf(".txt");
            if (n4 < 0) {
                bl3 = false;
                n4 = this.wHandler.length();
            }
            int n5 = this.wHandler.indexOf(" ");
            if (this.uPanel.d <= 4) {
                this.uPanel.g("Solution file " + (String)stringArray + " has .txt: " + bl3 + ", ends at " + n4 + " and has space at " + n5);
            }
            if (n4 > 0) {
                String string;
                if (n5 > 0 && n4 - n5 > 7) {
                    stringArray = this.wHandler.substring(n5 + 1, n5 + 7);
                    string = this.wHandler.substring(n5 + 7, n4);
                    n4 = n5;
                    if (this.uPanel.d <= 5) {
                        this.uPanel.g("File type " + (String)stringArray + " parameter " + string);
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
                            if (this.uPanel.d <= 5) {
                                this.uPanel.g("Parameters split to " + stringArray[0] + " and " + stringArray[1]);
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
                if (this.wHandler.startsWith("solution_cards")) {
                    string = this.wHandler.substring(14, n4);
                    try {
                        this.xHandler = Integer.parseInt(string);
                        this.rPanel = true;
                    }
                    catch (NumberFormatException numberFormatException) {}
                }
            }
            if (!this.rPanel) {
                this.uPanel.l.wHandler = this.wHandler.substring(9, n4) + (bl3 ? ".txt" : "");
            }
        }
        catch (Exception exception) {
            this.uPanel.g("Error interpreting cards/solution filename " + this.wHandler);
            this.uPanel.l.wHandler = this.wHandler.substring(9);
        }
        return true;
    }

    final int AboutDialog(boolean bl2) {
        if (!this.rPanel) {
            String string = "Logic error - called getIndex when filename has no index";
            SolitaireGameEngine qo_02 = this.uPanel;
            qo_02.AboutDialog(string, false);
        } else if (bl2 == this.s) {
            String string = "Logic error - called getIndex for challenge file when not solving AboutDialog challenge";
            SolitaireGameEngine qo_03 = this.uPanel;
            qo_03.AboutDialog(string, false);
        }
        return this.xHandler;
    }

    final void AboutDialog(int n2, boolean bl2) {
        this.xHandler = n2;
        this.s = bl2;
        this.rPanel = true;
    }

    final boolean c() {
        if (!this.rPanel) {
            return false;
        }
        ++this.xHandler;
        String string = this.uPanel.l.p + this.uPanel.l.d();
        File file = new File(string);
        if (!file.exists()) {
            if (this.uPanel.d <= 5) {
                this.uPanel.g("Incremented board number, next board " + string + " does not exist");
            }
            return false;
        }
        if (this.uPanel.d <= 5) {
            this.uPanel.g("Incremented board number, next board exists:" + string);
        }
        return true;
    }

    final String d() {
        Object object;
        if (this.rPanel) {
            object = "cards" + this.xHandler + ".txt";
        } else {
            if (this.wHandler == null) {
                String string = "Filename not set before call to getFilename";
                object = this.uPanel;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
            }
            object = this.wHandler;
        }
        return object;
    }

    final String e() {
        String string = this.rPanel ? "solution_cards" + this.xHandler : (this.wHandler.endsWith(".txt") ? "solution_" + this.wHandler.substring(0, this.wHandler.length() - 4) : "solution_" + this.wHandler);
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
        String string = this.rPanel ? "solution_cards" + this.xHandler : (this.wHandler.endsWith(".txt") ? "solution_" + this.wHandler.substring(0, this.wHandler.length() - 4) : "solution_" + this.wHandler);
        Object object = new File(this.uPanel.l.p);
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
        return this.xHandler / 100;
    }

    final int h() {
        return this.xHandler % 100;
    }

    final boolean i() {
        int n2 = (this.xHandler / 100 + 1) * 100;
        String string = "solution_cards" + n2;
        if (this.uPanel.d <= 5) {
            this.uPanel.g("Looking for next solution " + string + "* in " + this.p);
        }
        String[] stringArray = new File(this.p);
        if ((stringArray = stringArray.list()) != null && stringArray.length > 0) {
            int n3 = 0;
            while (n3 < stringArray.length) {
                if (stringArray[n3].startsWith(string)) {
                    this.xHandler = n2;
                    this.uPanel.l.b(stringArray[n3]);
                    return true;
                }
                ++n3;
            }
        }
        return false;
    }

    final String j() {
        String string = this.rPanel ? (this.s ? "Game: " + this.xHandler : "Challenge " + this.xHandler / 100) : "File: " + this.wHandler;
        return string;
    }

    final String k() {
        String string = this.j() + ": ";
        switch (this.c) {
            case 1: {
                string = string + "Solve AboutDialog board";
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
                string = string + "Clear " + this.i + " " + SolitaireSolver.f(this.d) + (this.d == 6 ? "es" : "s");
                break;
            }
            case 6: {
                string = string + "Score " + this.h + " points";
                break;
            }
            case 4: {
                string = string + "Clear the " + SolitaireSolver.h(this.e * 100 + this.d);
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

    final void AboutDialog(int n2, int n3) {
        this.v = true;
        this.d = n2;
        this.e = n3;
        this.i = 1;
    }
}

