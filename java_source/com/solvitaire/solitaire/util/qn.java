/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import java.math.BigInteger;
import java.security.KeyFactory;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.Signature;
import java.security.interfaces.DSAPrivateKey;
import java.security.interfaces.DSAPublicKey;
import java.security.spec.DSAPrivateKeySpec;
import java.security.spec.DSAPublicKeySpec;
import java.security.spec.KeySpec;
import java.util.Arrays;

final class qn {
    private SolitaireGameEngine AboutDialog;
    private String b;
    private byte[] c = null;
    private DSAPublicKey d = null;
    private DSAPrivateKey e = null;
    private static String f = "11:40:d2:e2:a3:35:a4:c1:63:ee:e2:a0:4d:7e:8e:3f:c8:57:57:7a";
    private static String g = "00:c1:1b:d0:b2:e8:c0:64:ec:0b:a7:71:4f:25:ce:ba:eb:ad:df:18:3b:5a:98:c5:90:bc:9a:f1:9a:a2:78:66:27";
    private static String h = "00:e0:bb:06:64:d7:9b:8a:e7:e5:ab:da:3f:45:7c:14:e6:49:ed:5b:41";
    private static String i = "60:07:2a:29:9f:bf:da:19:ef:07:0e:fc:02:ae:36:72:d5:54:a4:bf:10:77:27:2f:f9:8c:4f:36:b0:d2:d5:c8";
    private static String j = "4b:fb:48:fb:54:02:de:49:a9:47:db:15:b1:fc:aa:af:7b:70:bb:96:1b:6e:b7:87:3a:f3:17:db:42:81:86:ed";
    private static String k = "00:c4:f2:81:14:2d:62:bd:4d:4b:8a:85:d0:9e:5b:a3:3c:e2:cd:31:f6:31:cf:84:4a:b2:dd:53:28:fb:06:61:7f";
    private static String l = "00:ea:0c:8a:a3:84:2d:5c:c9:b0:5b:26:ef:4a:ca:b5:94:3d:4f:41:93";
    private static String m = "21:7d:ae:d8:24:ad:24:3c:47:92:58:9c:8f:1c:67:d7:b9:06:d3:5e:d6:c7:35:40:4f:9d:0a:f7:84:1a:47:0d";

    qn(SolitaireGameEngine object) {
        this.AboutDialog = object;
        object = this;
        byte[] byArray = new byte[128];
        int n2 = ((qn)object).AboutDialog.aC.getMachineGUID(byArray, byArray.length);
        Object object2 = Arrays.copyOf(byArray, n2);
        String string = new String((byte[])object2);
        object2 = string;
        this.b = string;
    }

    private String AboutDialog(String object) {
        CharSequence charSequence = object;
        object = this;
        object = ((qn)object).AboutDialog(((String)charSequence).getBytes());
        charSequence = new StringBuffer();
        int n2 = 0;
        while (n2 < ((Object)object).length) {
            ((StringBuffer)charSequence).append(String.format("%02X", (byte)object[n2]));
            ++n2;
        }
        return ((StringBuffer)charSequence).toString();
    }

    final String AboutDialog() {
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("pc=");
        stringBuffer.append(this.b);
        stringBuffer.append("&signature=");
        qn qn2 = this;
        stringBuffer.append(qn2.AboutDialog(qn2.b));
        return stringBuffer.toString();
    }

    private static byte[] b(String object) {
        byte[] byArray = ((String)object).getBytes();
        object = byArray;
        int n2 = (byArray.length + 1) / 3;
        byte[] byArray2 = new byte[n2];
        int n3 = 0;
        while (n3 < n2) {
            byArray2[n3] = qn.AboutDialog((byte[])object, n3 * 3);
            ++n3;
        }
        return byArray2;
    }

    private static byte[] c(String object) {
        byte[] byArray = ((String)object).getBytes();
        object = byArray;
        int n2 = (byArray.length + 1) / 2;
        byte[] byArray2 = new byte[n2];
        int n3 = 0;
        while (n3 < n2) {
            byArray2[n3] = qn.AboutDialog((byte[])object, n3 << 1);
            ++n3;
        }
        return byArray2;
    }

    private static byte AboutDialog(byte[] byArray, int n2) {
        int n3 = byArray[n2] - 48;
        if (n3 > 22) {
            n3 -= 39;
        } else if (n3 > 9) {
            n3 -= 7;
        }
        int n4 = byArray[n2 + 1] - 48;
        if (n4 > 22) {
            n4 -= 39;
        } else if (n4 > 9) {
            n4 -= 7;
        }
        return (byte)(n3 << 4 | n4);
    }

    private PublicKey b() {
        PublicKey publicKey = null;
        Object object = qn.b(k);
        Object object2 = qn.b(l);
        byte[] byArray = qn.b(m);
        byte[] byArray2 = qn.b(j);
        try {
            object = new DSAPublicKeySpec(new BigInteger(1, byArray2), new BigInteger(1, (byte[])object), new BigInteger(1, (byte[])object2), new BigInteger(1, byArray));
            KeyFactory keyFactory = KeyFactory.getInstance("DSA");
            object2 = keyFactory;
            publicKey = keyFactory.generatePublic((KeySpec)object);
        }
        catch (Exception exception) {
            this.AboutDialog.g("Exception getting public key:" + SolitaireGameEngine.AboutDialog(exception));
        }
        return publicKey;
    }

    private PrivateKey c() {
        PrivateKey privateKey = null;
        Object object = qn.b(g);
        Object object2 = qn.b(h);
        byte[] byArray = qn.b(i);
        byte[] byArray2 = qn.b(f);
        try {
            object = new DSAPrivateKeySpec(new BigInteger(1, byArray2), new BigInteger(1, (byte[])object), new BigInteger(1, (byte[])object2), new BigInteger(1, byArray));
            KeyFactory keyFactory = KeyFactory.getInstance("DSA");
            object2 = keyFactory;
            privateKey = keyFactory.generatePrivate((KeySpec)object);
        }
        catch (Exception exception) {
            this.AboutDialog.g("Exception getting private key" + SolitaireGameEngine.AboutDialog(exception));
        }
        return privateKey;
    }

    private byte[] AboutDialog(byte[] byArray) {
        byte[] byArray2 = null;
        try {
            Signature signature = Signature.getInstance("SHA1withDSA", "SUN");
            signature.initSign(this.c());
            signature.update(byArray);
            byArray2 = signature.sign();
            if (byArray2[0] != 48) {
                this.AboutDialog.AboutDialog(9, "Invalid signature", byArray2);
            }
        }
        catch (Exception exception) {
            this.AboutDialog.g("Exception generating signature:" + SolitaireGameEngine.AboutDialog(exception));
        }
        return byArray2;
    }

    final boolean AboutDialog(String string, String object) {
        object = qn.c((String)object);
        return this.AboutDialog(string.getBytes(), (byte[])object);
    }

    private boolean AboutDialog(byte[] byArray, byte[] byArray2) {
        boolean bl2 = false;
        try {
            Signature signature = Signature.getInstance("SHA1withDSA", "SUN");
            signature.initVerify(this.b());
            signature.update(byArray);
            bl2 = signature.verify(byArray2);
        }
        catch (Exception exception) {
            this.AboutDialog.g("Exception checking signature:" + SolitaireGameEngine.AboutDialog(exception));
        }
        return bl2;
    }
}

