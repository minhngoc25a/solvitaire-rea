/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.V;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.util.u_0;
import java.awt.Color;
import java.util.Arrays;
import java.util.Vector;

/*
 * Renamed from com.solvitaire.app.T
 */
public final class t_0 {
    static final String[] AboutDialog = new String[]{"end list", "white", "black", "gray", "red", "orange", "yellow", "green", "cyan", "blue", "magenta", "dark green", "", "", "", "", "", "", "", "", "bronze", "silver", "gold", "diamond", "menu blue", "table green"};
    private SolitaireGameEngine e;
    private float f;
    float b;
    float c;
    private float[] g;
    static final u_0 d = new u_0(255, 255, 255);

    t_0(SolitaireGameEngine qo_02) {
        this.e = qo_02;
    }

    final V[] AboutDialog(int[] object) {
        Object[] objectArray = object;
        object = this;
        Vector<V> vector = new Vector<V>();
        V v = new V(0, 0, 0.0f, 0.0f, 1.0f, 0);
        V v2 = new V(0, 0, 0.0f, 0.0f, 1.0f, objectArray.length);
        if (((t_0)object).e.d <= 3) {
            ((t_0)object).e.g("Color rows:");
        }
        int n2 = 0;
        int n3 = 0;
        while (n3 < objectArray.length) {
            block14: {
                V v3;
                block12: {
                    block13: {
                        v3 = ((t_0)object).AboutDialog(objectArray[n3], n3);
                        if (v3.AboutDialog == v.AboutDialog) break block12;
                        if (n3 + 1 >= objectArray.length) break block13;
                        V v4 = ((t_0)object).AboutDialog(objectArray[n3 + 1], n3 + 1);
                        if (v4.AboutDialog != v3.AboutDialog) break block14;
                    }
                    boolean bl2 = true;
                    if (v3.AboutDialog != 1 && v3.AboutDialog != 2 && v3.AboutDialog != 3) {
                        n2 = 0;
                    } else if ((v.AboutDialog == 5 || v.AboutDialog == 9) && ++n2 < 10) {
                        bl2 = false;
                    }
                    if (bl2) {
                        v = v3;
                        vector.add(v3);
                        if (((t_0)object).e.d <= 3) {
                            ((t_0)object).e.g("Create " + ((t_0)object).AboutDialog(v3));
                        }
                    }
                    break block14;
                }
                if (v3.AboutDialog != 1 && v3.AboutDialog != 2) {
                    v.AboutDialog(v3);
                    if (((t_0)object).e.d <= 2) {
                        ((t_0)object).e.g("Add " + ((t_0)object).AboutDialog(v3) + " giving " + ((t_0)object).AboutDialog(v));
                    }
                }
            }
            ++n3;
        }
        vector.add(v2);
        if (((t_0)object).e.d < 3) {
            ((t_0)object).e.g(((t_0)object).AboutDialog(v2));
        }
        object = vector;
        objectArray = new V[((Vector)object).size()];
        V[] vArray = (V[])((Vector)object).toArray(objectArray);
        objectArray = vArray;
        return vArray;
    }

    final V[] AboutDialog(V[] vArray, int n2, V[] vArray2, int n3, int n4, V[] vArray3) {
        n3 = -1;
        n4 = 0;
        while (n4 < vArray2.length - 2) {
            if (vArray[n2].b == vArray2[n4].b) {
                n3 = n4;
                break;
            }
            ++n4;
        }
        if (n3 < 0) {
            return vArray3;
        }
        n4 = 0;
        while (n4 < vArray.length - n2 - 1) {
            if (n4 + n3 >= vArray2.length - 1 || vArray[n2 + n4].b != vArray2[n3 + n4].b) break;
            ++n4;
        }
        if (n4 < 2 || vArray[n2 + n4].b - vArray[n2].b < 100) {
            return vArray3;
        }
        int n5 = vArray[n2 + n4].b - vArray[n2].b;
        n3 = vArray3[vArray3.length - 1].b - vArray3[0].b;
        if (n5 > n3) {
            if (this.e.d < 5) {
                this.e.g("Found new best match, depth " + n5 + " better than " + n3);
            }
            int n6 = n2;
            vArray3 = Arrays.copyOfRange(vArray, n6, n6 + n4 + 1);
            Arrays.copyOfRange(vArray, n6, n6 + n4 + 1)[vArray3.length - 1].AboutDialog = 0;
            vArray3[vArray3.length - 1].c = 0.0f;
            vArray3[vArray3.length - 1].d = 0.0f;
            vArray3[vArray3.length - 1].e = 1.0f;
        }
        return vArray3;
    }

    /*
     * Enabled aggressive block sorting
     */
    private V AboutDialog(int n2, int n3) {
        int n4;
        this.AboutDialog(n2);
        if ((double)this.c < 0.14) {
            n4 = 2;
            return new V(n2, n4, this.f, this.b, this.c, n3);
        }
        if ((double)this.b < 0.1) {
            if ((double)this.c > 0.94) {
                n4 = 1;
                return new V(n2, n4, this.f, this.b, this.c, n3);
            }
            n4 = 3;
            return new V(n2, n4, this.f, this.b, this.c, n3);
        }
        if (!((double)this.f < 0.04)) {
            if ((double)this.f < 0.19) {
                n4 = 5;
                return new V(n2, n4, this.f, this.b, this.c, n3);
            }
            if ((double)this.f < 0.46) {
                n4 = 7;
                return new V(n2, n4, this.f, this.b, this.c, n3);
            }
            if ((double)this.f < 0.53) {
                n4 = 8;
                return new V(n2, n4, this.f, this.b, this.c, n3);
            }
            if ((double)this.f < 0.71) {
                n4 = 9;
                return new V(n2, n4, this.f, this.b, this.c, n3);
            }
            if ((double)this.f < 0.9) {
                n4 = 10;
                return new V(n2, n4, this.f, this.b, this.c, n3);
            }
        }
        n4 = 4;
        return new V(n2, n4, this.f, this.b, this.c, n3);
    }

    private String AboutDialog(V v) {
        if (v == null || v.AboutDialog > 25) {
            return "null";
        }
        Object object = this.h(v.AboutDialog()) ? "dark " : "";
        object = (String)object + AboutDialog[v.AboutDialog];
        return String.format("%s at %d hsb(%f,%f,%f) rgb %08x", object, v.b, Float.valueOf(v.c), Float.valueOf(v.d), Float.valueOf(v.e), v.AboutDialog());
    }

    final void AboutDialog(int n2) {
        int n3 = n2 >> 16 & 0xFF;
        int n4 = n2 >> 8 & 0xFF;
        this.g = Color.RGBtoHSB(n3, n4, n2 &= 0xFF, null);
        this.f = this.g[0];
        this.b = this.g[1];
        this.c = this.g[2];
    }

    final boolean b(int n2) {
        this.AboutDialog(n2);
        n2 = (double)this.f > 0.57 && (double)this.f < 0.63 && (double)this.b > 0.28 ? 1 : 0;
        if (n2 == 0) {
            if (this.e.d <= 3) {
                this.e.g("Negative test for blue, h " + this.f + " s " + this.b + " b " + this.c);
            }
        } else if (this.e.d <= 4) {
            this.e.g("Positive test for blue, h " + this.f + " s " + this.b + " b " + this.c);
        }
        return n2 != 0;
    }

    final boolean c(int n2) {
        this.AboutDialog(n2);
        n2 = (double)this.f > 0.56 && (double)this.f < 0.63 && (double)this.b > 0.55 && (double)this.c > 0.28 ? 1 : 0;
        if (n2 == 0) {
            if (this.e.d <= 3) {
                this.e.g("Negative test for nomoreblue, h " + this.f + " s " + this.b + " b " + this.c);
            }
        } else if (this.e.d <= 4) {
            this.e.g("Positive test for menublue, h " + this.f + " s " + this.b + " b " + this.c);
        }
        return n2 != 0;
    }

    final boolean d(int n2) {
        this.AboutDialog(n2);
        if (this.e.d <= 5) {
            this.e.g("White?  Hue " + this.f + " sat " + this.b + " lgt " + this.c);
        }
        return (double)this.b < 0.1 && (double)this.c > 0.9;
    }

    final boolean e(int n2) {
        this.AboutDialog(n2);
        return (double)this.b < 0.16 && (double)this.c > 0.68;
    }

    final boolean f(int n2) {
        this.AboutDialog(n2);
        return (double)this.b < 0.1 && (double)this.c > 0.5;
    }

    final boolean g(int n2) {
        this.AboutDialog(n2);
        int n3 = n2 = (double)this.c < 0.17 ? 1 : 0;
        if (this.e.d < 3) {
            this.e.g("Very Dark? " + (n2 != 0) + " Hue " + this.f + " sat " + this.b + " lgt " + this.c);
        }
        return n2 != 0;
    }

    final boolean h(int n2) {
        this.AboutDialog(n2);
        return (double)this.c < 0.45;
    }

    final boolean AboutDialog(int n2, boolean bl2) {
        this.AboutDialog(n2);
        return (double)this.c < (bl2 ? 0.6 : 0.45);
    }
}

