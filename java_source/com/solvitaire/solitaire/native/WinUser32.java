/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.native;

public class WinUser32 {
    static final int GW_HWNDNEXT = 2;
    static final int SW_MAXIMIZE = 3;
    static final int SW_SHOW = 1;
    static final int SW_SHOWNOACTIVATE = 4;
    static final int SW_RESTORE = 9;
    static final int SWP_NOMOVE = 2;
    static final int SWP_NOSIZE = 1;
    static final int SWP_SHOWWINDOW = 64;
    static final int GWL_EXSTYLE = -20;
    static final int WS_EX_LAYERED = 524288;
    static final int LWA_COLORKEY = 1;
    static final int LWA_ALPHA = 2;
    static final int SPI_GETWORKAREA = 48;
    static final int MOUSEEVENTF_ABSOLUTE = 32769;
    static final int SM_CXSCREEN = 0;
    static final int SM_CYSCREEN = 1;
    static final int SM_CYSIZE = 31;

    public native boolean SystemParametersInfoA(int var1, int var2, int[] var3, int var4);

    public native int GetForegroundWindow();

    public native boolean SetForegroundWindow(int var1);

    public native boolean IsIconic(int var1);

    public native int SetFocus(int var1);

    public native int SetActiveWindow(int var1);

    public native boolean ShowWindow(int var1, int var2);

    public native boolean SetWindowPos(int var1, int var2, int var3, int var4, int var5, int var6, int var7);

    public native int GetWindowRect(int var1, int[] var2);

    public native int GetClientRect(int var1, int[] var2);

    public native int ClientToScreenY(int var1, int var2);

    public native int WindowFromPoint(long var1);

    public native int GetParent(int var1);

    public native boolean GetCursorPos(long[] var1);

    public native int GetWindowTextA(int var1, byte[] var2, int var3);

    public native int getHwnd(String var1);

    public native int getTitleHwnd(int var1);

    public native int getMachineGUID(byte[] var1, int var2);

    public native void mouseMoveAbsolute(int var1, int var2);

    public native int mouseClickDownUp(int var1, int var2);

    public native int mouseClickDown(int var1, int var2, boolean var3);

    public native int mouseClickUp(int var1, int var2, boolean var3);

    public native int mouseLocation();

    public native int keyEvent(int var1, boolean var2);

    public native int GetSystemMetrics(int var1);

    public native int initDesktopDuplication(int var1);

    public native void termDesktopDuplication();

    public native int acquireDesktopDuplication(int var1, int var2);

    public native int grabGdiScreenArea(int var1, int var2, int var3, int var4, int var5, int[] var6);

    public native int grabD3dScreenArea(int var1, int var2, int var3, int var4, int[] var5);

    public native int getLastError();

    public native int getAdapterDesc(byte[] var1, int var2);

    public native int getOutputDesc(byte[] var1, int var2);

    public native int queryUserNotificationState(byte[] var1, int var2);
}

