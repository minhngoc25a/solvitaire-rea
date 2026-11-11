/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qo_0;
import java.awt.Rectangle;
import java.awt.image.BufferedImage;
import java.util.Arrays;

/*
 * Renamed from com.solvitaire.app.al
 */
public final class al_0 {
    private qo_0 a;
    private int[][] b;
    private int c;
    private int d;
    private int e;
    private int f;
    private boolean g;
    private boolean h;

    private void a(qo_0 qo_02, Rectangle rectangle) {
        this.a = qo_02;
        this.e = rectangle.width;
        this.f = rectangle.height;
        this.c = rectangle.x;
        this.d = rectangle.y;
    }

    al_0(qo_0 qo_02, Rectangle object, String string) {
        this.a(qo_02, (Rectangle)object);
        int[] nArray = new int[((Rectangle)object).width * ((Rectangle)object).height];
        if (qo_02.bs == null || qo_02.y) {
            qo_0 qo_03 = qo_02;
            qo_03.g("Aborting FastImage construction because d3d:" + String.valueOf(qo_03.bs) + " inError:" + qo_02.y + " stack:" + qo_0.a(new Exception()));
        }
        qo_02.bs.a((int)((double)(((Rectangle)object).x + 2) - qo_02.A / 2.0), ((Rectangle)object).y, ((Rectangle)object).width, ((Rectangle)object).height, nArray);
        if (!qo_02.y) {
            this.b = null;
            int n2 = ((Rectangle)object).height;
            int n3 = ((Rectangle)object).width;
            object = this;
            if (((al_0)object).b != null) {
                String string2 = "AllocRGB when pixels already allocated";
                qo_0 qo_04 = ((al_0)object).a;
                qo_04.a(string2, false);
            }
            ((al_0)object).e = n3;
            ((al_0)object).f = n2;
            ((al_0)object).b = new int[n2][];
            int n4 = 0;
            int n5 = n3;
            ((al_0)object).g = false;
            int n6 = 0;
            while (n6 < n2) {
                ((al_0)object).b[n6] = Arrays.copyOfRange(nArray, n4, n5);
                n4 = n5;
                n5 += n3;
                if (n6 == n2 / 2 && (((al_0)object).b[n6][n3 / 2] & 0xFFFFFF) == 0) {
                    ((al_0)object).g = true;
                }
                ++n6;
            }
            if (((al_0)object).g) {
                n6 = 0;
                while (n6 < n2) {
                    int n7 = 0;
                    while (n7 < n3) {
                        if ((((al_0)object).b[n6][n7] & 0xFFFFFF) != 0) {
                            ((al_0)object).g = false;
                        }
                        ++n7;
                    }
                    ++n6;
                }
            }
            if (string != null) {
                qo_02.a(this, string);
            }
        }
    }

    al_0(qo_0 qo_02, int[][] nArray, String string) {
        this.a(qo_02, nArray, string);
    }

    al_0(qo_0 qo_02, BufferedImage bufferedImage) {
        int n2 = bufferedImage.getWidth();
        int n3 = bufferedImage.getHeight();
        Rectangle rectangle = new Rectangle(0, 0, n2, n3);
        this.a(qo_02, rectangle);
        this.b = new int[n3][n2];
        int n4 = 0;
        while (n4 < n3) {
            bufferedImage.getRGB(0, n4, n2, 1, this.b[n4], 0, n2);
            ++n4;
        }
    }

    final void a(qo_0 qo_02, int[][] nArray, String string) {
        Rectangle rectangle = new Rectangle(0, 0, nArray.length > 0 ? nArray[0].length : 0, nArray.length);
        this.a(qo_02, rectangle);
        this.b = nArray;
        qo_02.a(this, string);
    }

    final void a(String string, boolean bl2) {
        this.a.a(this.b(), string, bl2);
    }

    final int[] a(int n2, int n3, int n4, int n5, int[] nArray, int n6, int n7) {
        nArray = new int[n5];
        n3 = 0;
        while (n3 < n5) {
            n4 = 0;
            while (n4 <= 0) {
                nArray[n4 + 0 + n3] = this.b[n3 + 0][n2 + n4];
                ++n4;
            }
            ++n3;
        }
        return nArray;
    }

    final int[][] a() {
        if (this.b == null) {
            this.a.a("Null pixels");
        }
        return this.b;
    }

    final BufferedImage b() {
        al_0 al_02 = this;
        return al_02.a(al_02.b, this.e, this.f, this.h);
    }

    private BufferedImage a(int[][] nArray, int n2, int n3, boolean bl2) {
        Object object;
        if (nArray == null) {
            String string = "Request for pixels when not available, mono? " + bl2;
            object = this.a;
            ((qo_0)object).a(string, false);
        }
        object = new BufferedImage(n2, n3, 1);
        int n4 = 0;
        while (n4 < n3) {
            if (bl2) {
                int n5 = 0;
                while (n5 < n2) {
                    ((BufferedImage)object).setRGB(n5, n4, nArray[n4][n5] == 0 ? 0xFFFFFF : 0);
                    ++n5;
                }
            } else {
                ((BufferedImage)object).setRGB(0, n4, n2, 1, nArray[n4], 0, n2);
            }
            ++n4;
        }
        return object;
    }

    final void a(int n2, int n3, int n4) {
        this.b[n3][n2] = 0xFF0000;
    }

    /*
     * Handled impossible loop by duplicating code
     * Enabled aggressive block sorting
     */
    private boolean a(al_0 al_02) {
        block4: {
            al_0 al_03;
            int n2;
            block3: {
                n2 = 0;
                if (!true) break block3;
                al_03 = this;
                if (n2 >= al_03.f) break block4;
            }
            do {
                if (!Arrays.equals(this.b[n2], al_02.b[n2])) {
                    return false;
                }
                ++n2;
                al_03 = this;
            } while (n2 < al_03.f);
        }
        return true;
    }

    final int c() {
        return this.e;
    }

    final int d() {
        return this.f;
    }

    final int e() {
        return this.c;
    }

    final void a(int n2) {
        this.c = n2;
    }

    final int f() {
        return this.d;
    }

    final void b(int n2) {
        this.d = n2;
    }

    public final boolean equals(Object object) {
        if (this == object) {
            return true;
        }
        if (object == null) {
            return false;
        }
        object = (al_0)object;
        if (this.f != ((al_0)object).f) {
            return false;
        }
        if (this.b == null || ((al_0)object).b == null) {
            return false;
        }
        int n2 = 0;
        while (n2 < this.f) {
            if (!Arrays.equals(this.b[n2], ((al_0)object).b[n2])) {
                return false;
            }
            ++n2;
        }
        return true;
    }

    static al_0 a(qo_0 qo_02, Rectangle rectangle, al_0 al_02, String string) {
        return al_0.a(qo_02, rectangle, al_02, 50, 10000, false, string);
    }

    static al_0 a(qo_0 qo_02, Rectangle rectangle, al_0 al_02, int n2, int n3, boolean bl2, String string) {
        int n4;
        al_0 al_03 = null;
        if (n2 < 50) {
            qo_02.g("Stabilization interval " + n2 + " too small to be reliable");
            n2 = 50;
        }
        if ((n4 = n3 / n2) == 0) {
            n4 = 1;
        }
        if (al_02 == null) {
            al_02 = qo_02.a(rectangle, "pre" + string);
        } else {
            if (qo_02.d <= 3) {
                qo_02.g("Wait for initial image change");
            }
            n3 = 0;
            while (n3 < n4) {
                al_03 = qo_02.a(rectangle, "changed" + string);
                if (!al_02.a(al_03)) {
                    al_02 = al_03;
                    break;
                }
                qo_02.a((long)n2, "stabilizeRectInternal wait for initial change2");
                ++n3;
            }
            if (!bl2 && n4 > 5 && n3 == n4 - 1) {
                qo_02.g("Image did not change before timeout in stabilizeRectInternal:" + qo_0.a(new Exception()));
            }
        }
        if (qo_02.d <= 3) {
            qo_02.g("Wait for image stabilization");
        }
        qo_02.a((long)n2, "stabilizeRectInternal - wait for stabilization1");
        n3 = 0;
        while (n3 < n4) {
            if (n3 * n2 > 500) {
                qo_02.F.m();
            }
            if (!bl2 && n4 > 5 && n3 == n4 - 1) {
                qo_02.g("stabilizeRectInternal - Image match failing for rect " + qo_0.a(rectangle) + ", loopcount " + n4 + ": " + qo_0.a(new Exception("trace")));
                qo_02.a(al_02, "pre" + string);
            }
            al_03 = qo_02.a(rectangle, null);
            if (!bl2 && n4 > 5 && n3 == n4 - 1) {
                qo_02.a(al_03, "post" + string);
            }
            if (al_02.a(al_03)) break;
            al_02 = al_03;
            qo_02.a((long)n2, "stabilizeRectInternal - wait for stabilization2");
            ++n3;
        }
        if (!bl2 && n3 == n4) {
            qo_02.b(al_03, "NeverStabilized");
            qo_02.g("In stabilizeRect the image never stabilized:" + qo_0.a(new Exception()));
        }
        if (qo_02.d <= 4) {
            qo_02.g("After stabilizeRectInternal");
        }
        if (n3 == n4) {
            al_03 = null;
        }
        return al_03;
    }

    final void g() {
        int n2 = 0;
        while (n2 < this.f) {
            int n3 = 0;
            while (n3 < this.e) {
                this.a.aB.a(this.b[n2][n3]);
                this.b[n2][n3] = (double)this.a.aB.c < 0.5 ? 1 : 0;
                ++n3;
            }
            ++n2;
        }
        this.h = true;
    }
}

