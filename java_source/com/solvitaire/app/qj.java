/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

public final class qj {
    static final int[] a(long l2) {
        int n2;
        int n3;
        int n4 = 0;
        int[] nArray = new int[52];
        int[] nArray2 = new int[52];
        int n5 = 0;
        while (n5 < 52) {
            n3 = n5 / 4 + 1;
            n2 = 4 - n5 % 4;
            nArray2[n5] = n2 * 100 + n3;
            ++n5;
        }
        n5 = 52;
        while (n5 > 0) {
            l2 = 214013L * l2 + 2531011L & Integer.MAX_VALUE;
            n3 = (int)(l2 >> 16);
            n2 = n3 % n5;
            nArray[n4++] = nArray2[n2];
            nArray2[n2] = nArray2[n5 - 1];
            --n5;
        }
        return nArray;
    }

    static final int[] a(long l2, int n2) {
        int n3;
        int n4;
        int n5 = 0;
        int[] nArray = new int[104];
        int[] nArray2 = new int[104];
        int n6 = 0;
        while (n6 < 104) {
            n4 = n6 / 8 + 1;
            n3 = n2 == 1 ? 1 : (n2 == 2 ? 2 - n6 % 2 : 4 - n6 % 4);
            nArray2[n6] = n3 * 100 + n4;
            ++n6;
        }
        n6 = 104;
        while (n6 > 0) {
            l2 = 214013L * l2 + 2531011L & Integer.MAX_VALUE;
            n4 = (int)(l2 >> 16);
            n3 = n4 % n6;
            nArray[n5++] = nArray2[n3];
            nArray2[n3] = nArray2[n6 - 1];
            --n6;
        }
        return nArray;
    }
}

