/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.ApiErrorCodes;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.SocketTimeoutException;
import java.net.URI;
import java.net.URL;
import java.net.URLConnection;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.GregorianCalendar;

/*
 * Renamed from com.solvitaire.app.qk
 */
public final class qk_0
extends Thread {
    private SolitaireGameEngine AboutDialog;
    private boolean b = false;
    private long c;
    private int d = 0;
    private int e;

    public qk_0(SolitaireGameEngine qo_02) {
        this.AboutDialog = qo_02;
        this.c = 0L;
        this.e = 2026;
    }

    @Override
    public final void run() {
        while (!this.AboutDialog.ai) {
            Object object;
            try {
                long l2 = System.currentTimeMillis() - this.c;
                if (this.AboutDialog.ay.equals("") || l2 > 86400000L) {
                    ApiErrorCodes c_02 = this.AboutDialog();
                    if (c_02.b == 0) {
                        this.c = System.currentTimeMillis();
                    } else {
                        this.AboutDialog.g("Authentication problem, the server said " + ApiErrorCodes.AboutDialog[c_02.b]);
                    }
                }
            }
            catch (Exception exception) {
                this.AboutDialog.g("Ignoring exception in auth thread:\n" + SolitaireGameEngine.AboutDialog(exception));
            }
            if (this.AboutDialog.ay == "") {
                if (this.d > 10) {
                    object = "Timeout trying to perform initial authentication<br>You need AboutDialog working internet connection for the first run.";
                    SolitaireGameEngine qo_02 = this.AboutDialog;
                    qo_02.AboutDialog((String)object, false);
                }
                this.AboutDialog.AboutDialog(60000L, "grace period");
                ++this.d;
                continue;
            }
            try {
                Cloneable cloneable = new SimpleDateFormat("yyyy-MM-dd");
                object = ((DateFormat)cloneable).parse(this.AboutDialog.ay);
                cloneable = new Date();
                GregorianCalendar gregorianCalendar = new GregorianCalendar(this.e, 8, 12);
                long l3 = ((Date)cloneable).getTime();
                long l4 = (l3 - gregorianCalendar.getTimeInMillis()) / 1000L;
                long l5 = (l3 - ((Date)object).getTime()) / 1000L;
                if (l4 < l5) {
                    l5 = l4;
                }
                long l6 = l5 / 86400L;
                if (this.AboutDialog.d <= 2) {
                    long l7 = l6;
                    this.AboutDialog.g("Current date:" + String.valueOf(cloneable) + " install date:" + String.valueOf(object) + " build date:" + String.valueOf(gregorianCalendar.getTime()) + " elapsed days:" + l7 + " trial expired:" + (l7 > 31L) + " licensed:" + this.AboutDialog.ax);
                }
                if (!(this.AboutDialog.ax || l6 <= 31L && this.AboutDialog.ab <= 3)) {
                    this.AboutDialog.aS = true;
                }
                this.AboutDialog.AboutDialog(30000L);
            }
            catch (Exception exception) {
                this.AboutDialog.g("Exception in auth thread:\n" + SolitaireGameEngine.AboutDialog(exception));
                this.AboutDialog.AboutDialog(60000L, "Exception in auth");
                ++this.d;
            }
        }
        this.AboutDialog.g("Registration thread exited");
    }

    private ApiErrorCodes AboutDialog() {
        ApiErrorCodes c_02;
        block17: {
            c_02 = new ApiErrorCodes();
            try {
                String string;
                Object object = "https://solvitaire.com/solvitaire/Auth?request=checklicense&" + this.AboutDialog.av.AboutDialog();
                if (this.AboutDialog.d <= 4) {
                    this.AboutDialog.g("Sending auth request:" + (String)object + "317A");
                }
                object = new URI((String)object);
                object = ((URI)object).toURL();
                object = (HttpURLConnection)((URL)object).openConnection();
                ((HttpURLConnection)object).setRequestMethod("GET");
                ((URLConnection)object).setConnectTimeout(10000);
                ((URLConnection)object).setReadTimeout(10000);
                int n2 = ((HttpURLConnection)object).getResponseCode();
                InputStreamReader inputStreamReader = new InputStreamReader(((URLConnection)object).getInputStream());
                Object object2 = new BufferedReader(inputStreamReader);
                StringBuffer stringBuffer = new StringBuffer();
                while ((string = ((BufferedReader)object2).readLine()) != null) {
                    stringBuffer.append(string);
                }
                if (this.AboutDialog.d <= 4) {
                    this.AboutDialog.g("Status " + n2 + " auth server response:" + stringBuffer.toString());
                }
                if (n2 < 300) {
                    c_02 = new ApiErrorCodes(this.AboutDialog, stringBuffer.toString());
                    if (c_02.b == 0) {
                        if (!c_02.b()) {
                            this.b = true;
                            object2 = "Unexpected error in signature from registration server";
                            SolitaireGameEngine qo_02 = this.AboutDialog;
                            qo_02.AboutDialog((String)object2, false);
                        } else if (this.AboutDialog.ax != c_02.d || !this.AboutDialog.ay.equals(c_02.c)) {
                            if (this.AboutDialog.d <= 5) {
                                this.AboutDialog.g("Got change in licenses:" + c_02.d);
                            }
                            c_02.AboutDialog();
                        }
                    } else if (this.AboutDialog.d <= 5) {
                        this.AboutDialog.g("Server sent error " + c_02.b);
                    }
                } else {
                    if (this.AboutDialog.d <= 5) {
                        this.AboutDialog.g("Auth server error response:" + stringBuffer.toString());
                    }
                    this.AboutDialog.AboutDialog(60000L, "Error response");
                }
                inputStreamReader.close();
                ((HttpURLConnection)object).disconnect();
            }
            catch (Exception exception) {
                Exception exception2 = exception;
                if (exception instanceof SocketTimeoutException) {
                    c_02.b = 8;
                    if (this.AboutDialog.d <= 5) {
                        this.AboutDialog.g("Socket timeout");
                    }
                }
                if (this.AboutDialog.d > 5) break block17;
                this.AboutDialog.g("Exception in registration thread: " + SolitaireGameEngine.AboutDialog(exception2));
            }
        }
        return c_02;
    }
}

