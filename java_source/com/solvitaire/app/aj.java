/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qo_0;
import java.util.Arrays;

public final class aj
implements Runnable {
    private static String[] c = new String[]{"INVALID", "GETDEVICE", "GETADAPTER", "GETOUTPUT", "GETOUTPUT1", "DUPLICATE", "TEXTURE2D", "ACQUIRE", "GETIMAGE", "CREATEFACTORY", "ATTACHDESKTOP", "DPIAWARENESS", "MAPGPUTOCPU", "FRAMESTALE", "D3DCLOSED", "NOTCURRENTDESKTOP", "CREATE2DDEVICE", "CREATE2DCONTEXT", "CREATE2DBITMAP", "UNUSED", "CREATE2DFACTORY", "CREATE2DCPUACCESSBITMAP", "GET2DSURFACE", "TEXTUREMISMATCH", "3DCOMPILE", "ALREADYINIT", "", "", "", "", ""};
    private qo_0 d;
    private boolean e;
    private Thread f;
    int a = 1920;
    int b = 1080;
    private boolean g;

    aj(qo_0 qo_02) {
        this.d = qo_02;
    }

    final String a() {
        Object object;
        Object object2;
        if (this.g) {
            object2 = "Called init on D3D when already running";
            object = this.d;
            ((qo_0)object).a((String)object2, false);
        }
        object = null;
        int n2 = this.d.aC.initDesktopDuplication(this.d.D);
        Object object3 = object2 = (Object)new byte[1024];
        int n3 = this.d.aC.getAdapterDesc((byte[])object3, ((Object)object3).length);
        byte[] byArray = Arrays.copyOf((byte[])object2, n3);
        Object object4 = object2;
        n3 = this.d.aC.getOutputDesc((byte[])object4, ((Object)object4).length);
        byte[] byArray2 = Arrays.copyOf((byte[])object2, n3);
        if (n2 == 0) {
            if (this.d.d <= 6) {
                this.d.g(String.format("DXGI success for adapter %s output %s", new String(byArray), new String(byArray2)));
            }
        } else {
            this.d.g(String.format("Return code %08x from initDesktopDuplication", n2));
            int n4 = this.d.aC.getLastError();
            object = "";
            if (byArray2.length > 0) {
                object = "output " + new String(byArray2) + ",";
            }
            object = String.format("Adapter %s, %s gives rc %08x to function %s", new String(byArray), object, n4, c[n2]);
            if (n2 == 3 && n4 == -2005270526) {
                object = "Adapter " + new String(byArray) + " has no available monitor";
            }
            if (n2 == 5 && n4 == -2005270524) {
                object = (String)object + "<br>&nbsp;&nbsp; Could be trying to use DXGI for screen capture on a laptop with hybrid graphics adapters?";
            }
            this.d.g("DXGI init error, " + (String)object);
            if (n2 == 2 && n4 == -2005270526) {
                object = "Adapter not found";
                this.d.g((String)object);
            }
        }
        if (object == null) {
            this.e = false;
            this.f = new Thread(this);
            this.f.start();
        }
        return object;
    }

    final void a(int n2, int n3) {
        aj aj2 = this;
        synchronized (aj2) {
            this.a = n2;
            this.b = n3;
            this.d.aC.acquireDesktopDuplication(this.a, this.b);
            return;
        }
    }

    final void a(int n2, int n3, int n4, int n5, int[] nArray) {
        int n6;
        int n7;
        aj aj2 = this;
        synchronized (aj2) {
            n7 = this.d.aC.grabD3dScreenArea(n2, n3, n4, n5, nArray);
            n6 = this.d.aC.getLastError();
        }
        if (n7 == 14) {
            this.d.g("D3D closed error, trying to init()");
            this.d.a(500L, "Before error init");
            this.a();
            this.d.a(500L, "After error init");
            aj2 = this;
            synchronized (aj2) {
                n7 = this.d.aC.grabD3dScreenArea(n2, n3, n4, n5, nArray);
                n6 = this.d.aC.getLastError();
            }
        }
        if (n7 != 0) {
            String string = String.format("DXGI screen grab error, function %s, rc %08x", c[n7], n6);
            qo_0 qo_02 = this.d;
            qo_02.a(string, false);
        }
    }

    final void b() {
        if (this.g) {
            this.e = true;
            return;
        }
        this.d.g("D3d term called but not running");
        this.d.aC.termDesktopDuplication();
        this.e = false;
        this.f = null;
    }

    @Override
    public final void run() {
        this.g = true;
        while (!this.d.ai && !this.e) {
            aj aj2 = this;
            synchronized (aj2) {
                int n2 = this.d.aC.acquireDesktopDuplication(this.a, this.b);
                if (n2 != 0) {
                    int n3 = this.d.aC.getLastError();
                    if (n2 < 0 || n2 >= c.length) {
                        n3 = n2;
                        n2 = 7;
                    }
                    this.d.g(String.format("DXGI error from capture thread, function %s, rc %08x", c[n2], n3));
                    if (n3 == -2005270490 || n3 == -1) {
                        break;
                    }
                }
                this.d.aK = true;
            }
            switch (this.d.aJ) {
                case 1: {
                    this.d.a(30L);
                    break;
                }
                case 2: {
                    this.d.a(20L);
                    break;
                }
                case 3: {
                    this.d.a(200L);
                    break;
                }
                default: {
                    this.d.a(50L);
                }
            }
        }
        this.d.aC.termDesktopDuplication();
        this.e = false;
        this.f = null;
        this.g = false;
    }
}

