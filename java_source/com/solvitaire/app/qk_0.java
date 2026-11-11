/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.c_0;
import com.solvitaire.app.qo_0;
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
    private qo_0 a;
    private boolean b = false;
    private long c;
    private int d = 0;
    private int e;

    qk_0(qo_0 qo_02) {
        this.a = qo_02;
        this.c = 0L;
        this.e = 2026;
    }

    @Override
    public final void run() {
        while (!this.a.ai) {
            Object object;
            try {
                long l2 = System.currentTimeMillis() - this.c;
                if (this.a.ay.equals("") || l2 > 86400000L) {
                    c_0 c_02 = this.a();
                    if (c_02.b == 0) {
                        this.c = System.currentTimeMillis();
                    } else {
                        this.a.g("Authentication problem, the server said " + c_0.a[c_02.b]);
                    }
                }
            }
            catch (Exception exception) {
                this.a.g("Ignoring exception in auth thread:\n" + qo_0.a(exception));
            }
            if (this.a.ay == "") {
                if (this.d > 10) {
                    object = "Timeout trying to perform initial authentication<br>You need a working internet connection for the first run.";
                    qo_0 qo_02 = this.a;
                    qo_02.a((String)object, false);
                }
                this.a.a(60000L, "grace period");
                ++this.d;
                continue;
            }
            try {
                Cloneable cloneable = new SimpleDateFormat("yyyy-MM-dd");
                object = ((DateFormat)cloneable).parse(this.a.ay);
                cloneable = new Date();
                GregorianCalendar gregorianCalendar = new GregorianCalendar(this.e, 8, 12);
                long l3 = ((Date)cloneable).getTime();
                long l4 = (l3 - gregorianCalendar.getTimeInMillis()) / 1000L;
                long l5 = (l3 - ((Date)object).getTime()) / 1000L;
                if (l4 < l5) {
                    l5 = l4;
                }
                long l6 = l5 / 86400L;
                if (this.a.d <= 2) {
                    long l7 = l6;
                    this.a.g("Current date:" + String.valueOf(cloneable) + " install date:" + String.valueOf(object) + " build date:" + String.valueOf(gregorianCalendar.getTime()) + " elapsed days:" + l7 + " trial expired:" + (l7 > 31L) + " licensed:" + this.a.ax);
                }
                if (!(this.a.ax || l6 <= 31L && this.a.ab <= 3)) {
                    this.a.aS = true;
                }
                this.a.a(30000L);
            }
            catch (Exception exception) {
                this.a.g("Exception in auth thread:\n" + qo_0.a(exception));
                this.a.a(60000L, "Exception in auth");
                ++this.d;
            }
        }
        this.a.g("Registration thread exited");
    }

    private c_0 a() {
        c_0 c_02;
        block17: {
            c_02 = new c_0();
            try {
                String string;
                Object object = "https://solvitaire.com/solvitaire/Auth?request=checklicense&" + this.a.av.a();
                if (this.a.d <= 4) {
                    this.a.g("Sending auth request:" + (String)object + "317A");
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
                if (this.a.d <= 4) {
                    this.a.g("Status " + n2 + " auth server response:" + stringBuffer.toString());
                }
                if (n2 < 300) {
                    c_02 = new c_0(this.a, stringBuffer.toString());
                    if (c_02.b == 0) {
                        if (!c_02.b()) {
                            this.b = true;
                            object2 = "Unexpected error in signature from registration server";
                            qo_0 qo_02 = this.a;
                            qo_02.a((String)object2, false);
                        } else if (this.a.ax != c_02.d || !this.a.ay.equals(c_02.c)) {
                            if (this.a.d <= 5) {
                                this.a.g("Got change in licenses:" + c_02.d);
                            }
                            c_02.a();
                        }
                    } else if (this.a.d <= 5) {
                        this.a.g("Server sent error " + c_02.b);
                    }
                } else {
                    if (this.a.d <= 5) {
                        this.a.g("Auth server error response:" + stringBuffer.toString());
                    }
                    this.a.a(60000L, "Error response");
                }
                inputStreamReader.close();
                ((HttpURLConnection)object).disconnect();
            }
            catch (Exception exception) {
                Exception exception2 = exception;
                if (exception instanceof SocketTimeoutException) {
                    c_02.b = 8;
                    if (this.a.d <= 5) {
                        this.a.g("Socket timeout");
                    }
                }
                if (this.a.d > 5) break block17;
                this.a.g("Exception in registration thread: " + qo_0.a(exception2));
            }
        }
        return c_02;
    }
}

