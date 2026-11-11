/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.engine;

import com.solvitaire.solitaire.api.ApiCommandProcessor;
import com.solvitaire.solitaire.native.WinUser32;
import com.solvitaire.solitaire.api.DesktopDuplication;
import com.solvitaire.solitaire.config.GameConfig;
import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.util.ApiErrorCodes;
import com.solvitaire.solitaire.reader.BoardReader;
import com.solvitaire.solitaire.util.h;
import com.solvitaire.solitaire.util.i;
import com.solvitaire.solitaire.util.j;
import com.solvitaire.solitaire.reader.pCBoardReader;
import com.solvitaire.solitaire.reader.pEBoardReader;
import com.solvitaire.solitaire.engine.GameStats;
import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.util.q;
import com.solvitaire.solitaire.util.qa;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.reader.qi_0BoardReader;
import com.solvitaire.solitaire.util.qj;
import com.solvitaire.solitaire.util.qk_0;
import com.solvitaire.solitaire.solver.SolverException;
import com.solvitaire.solitaire.util.qn;
import com.solvitaire.solitaire.util.qp_0;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.reader.SpiderBoardReader;
import com.solvitaire.solitaire.challenge.ChallengeSolver;
import com.solvitaire.solitaire.util.so;
import com.solvitaire.solitaire.reader.sqBoardReader;
import com.solvitaire.solitaire.util.t;
import com.solvitaire.solitaire.util.t_0;
import java.awt.AWTError;
import java.awt.Color;
import java.awt.Desktop;
import java.awt.GraphicsConfiguration;
import java.awt.GraphicsEnvironment;
import java.awt.Point;
import java.awt.Rectangle;
import java.awt.Toolkit;
import java.awt.geom.AffineTransform;
import java.awt.geom.Point2D;
import java.awt.geom.Rectangle2D;
import java.awt.image.AffineTransformOp;
import java.awt.image.BufferedImage;
import java.awt.image.RenderedImage;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.Serializable;
import java.io.StringWriter;
import java.net.URI;
import java.nio.CharBuffer;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.Arrays;
import javax.imageio.ImageIO;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

/*
 * Renamed from com.solvitaire.app.qo
 */
public final class SolitaireGameEngine {
    private volatile boolean bv = false;
    boolean AboutDialog = false;
    boolean b = false;
    boolean c = false;
    public volatile int d = 9;
    private int bw = 9;
    private int bx = 9;
    boolean e = false;
    boolean f = false;
    boolean g = false;
    boolean h = false;
    int i = 0;
    static final String[] j = new String[]{"undefined", "klondike", "spider", "freecell", "pyramid", "tripeaks"};
    public ApiCommandProcessor k;
    t l = new t(this, 0);
    private Point by = new Point();
    private long bz;
    int m;
    String[] n = new String[]{"NORMAL", "ALL_CARDS", "FROM_FILE", "CAPTURE", "PLAYBACK", "NEW_FILE", "GEN_CARDS"};
    private static String[] bA = new String[]{"NO_ACTION", "HISTORY", "FROMFILE", "PLAYBACKCHALLENGE", "ALLCARDS", "SAVEFILE", "DUMPSTATE", "FROMSOLUTION", "PLAYUSER", "NO_PAUSE", "UNDOUSER", "GENDIFF", "RETURN_MAIN", "PARTIAL_RESET", "RESET"};
    private volatile int bB;
    private volatile int bC;
    private static String bD = File.separator + "Solvitaire";
    private static String bE;
    static final String o;
    static final String p;
    static final String q;
    static final String rPanel;
    static final String s;
    boolean t = false;
    boolean uPanel = false;
    volatile int v;
    volatile boolean wHandler;
    volatile boolean xHandler;
    volatile boolean yHandler;
    volatile boolean z;
    double A = 1.0;
    j B;
    Rectangle CHandler = new Rectangle();
    private Rectangle bF = new Rectangle();
    int DHandler;
    int EHandler;
    GameStats FPanel;
    int G;
    double H;
    double I;
    int J;
    boolean KHandler;
    long LHandler;
    int MHandler;
    long NHandler;
    long OHandler = 0L;
    long PPanel;
    long Q;
    long R;
    long SPanel;
    int T;
    int U;
    boolean V;
    boolean W;
    int X = 0;
    int Y = 0;
    int Z = 0;
    int aa = 0;
    int ab = 1;
    boolean ac;
    boolean ad;
    boolean ae;
    String af;
    String ag;
    boolean ah;
    private BufferedOutputStream bG;
    private long bH;
    volatile boolean ai;
    volatile boolean DesktopDuplication;
    volatile boolean ak;
    volatile boolean al;
    volatile boolean am;
    volatile boolean an;
    private Thread bI;
    SolitaireSolver ao = null;
    BoardReader ap = null;
    public MainWindow aq = null;
    pLPanel ar = null;
    String as;
    String at;
    String au;
    qn av;
    private qk_0 bJ;
    String aw;
    boolean ax;
    String ay;
    String az;
    String aA;
    t_0 aB = new t_0(this);
    WinUser32 aC;
    so aD = new so(this);
    private qj bK = new qj();
    int aE = 999;
    volatile boolean aF = false;
    volatile boolean aG = false;
    volatile boolean aH = false;
    volatile int aI = 0;
    volatile int aJ = 0;
    volatile boolean aK;
    volatile int aL = 0;
    volatile boolean aM = false;
    volatile boolean aN = false;
    volatile boolean aO = false;
    volatile boolean aP = false;
    volatile boolean aQ = false;
    volatile boolean aR = false;
    volatile boolean aS = false;
    boolean aT = false;
    int aU = 0;
    boolean aV = false;
    boolean aW = false;
    boolean aX = false;
    qa aY;
    qa aZ;
    private boolean bL = false;
    double ba = 20.0;
    int bb;
    boolean bc;
    qa bd = new qa();
    qa be = new qa();
    boolean bf;
    int bg;
    static final String[] bh;
    boolean bi;
    String bj;
    String bk;
    int bl;
    int bm;
    int bn;
    int bo;
    int bp;
    GameConfig bq = new GameConfig();
    ChallengeSolver br;
    DesktopDuplication bs;
    boolean bt;
    private int[][][] bM = new int[350][3][8];
    q bu;
    private static final Color bN;
    private static final Color bO;
    private static final Color bP;
    private static final Color bQ;
    private static final Color bR;
    private static final Color bS;
    private static final Color[][] bT;
    private int bU;

    static {
        String string = File.separator;
        bE = string + "Debug" + string;
        String string2 = File.separator;
        o = string2 + "Games" + string2;
        String string3 = File.separator;
        p = string3 + "Random" + string3;
        String string4 = File.separator;
        q = string4 + "Events" + string4;
        String string5 = File.separator;
        rPanel = string5 + "Daily Challenges" + string5;
        String string6 = File.separator;
        s = string6 + "Star Club" + string6;
        bh = new String[]{"CHOOSEMODE", "CHOOSEGAME", "PLAY", "MICROSOFT", "READ_FILE", "STATS"};
        String[] stringArray = new String[]{"Source", "Dest", "Partner"};
        String[] stringArray2 = new String[]{"Default", "Pre", "Post", "Min", "Slowdown", "Delay", "VarDelay", "Inactive"};
        bN = new Color(1593392);
        bO = new Color(2127944);
        bP = new Color(0xC0D0C0);
        bQ = new Color(2181192);
        bR = new Color(3965056);
        bS = new Color(12636882);
        bT = new Color[][]{{bP, bO, bN}, {bS, bR, bQ}};
    }

    final void AboutDialog(String string) {
        this.g(string);
        if (!this.bv) {
            this.bv = true;
            this.bv = false;
            if (this.e) {
                this.AboutDialog(5000L);
            }
        }
    }

    SolitaireGameEngine() {
        Object object;
        Object object2;
        this.bI = Thread.currentThread();
        this.LHandler = System.currentTimeMillis();
        Object object3 = System.getenv("APPDATA");
        this.as = (String)object3 + bD;
        this.at = this.as + bE;
        this.au = this.as + o;
        this.aq = new MainWindow(this);
        try {
            Toolkit.getDefaultToolkit();
        }
        catch (AWTError aWTError) {
            object2 = "<html><body><p style='width: 600px;'>Error initalizing Solvitaire UI<br>The error we got from Java was: " + aWTError.getLocalizedMessage() + "<br>Send AboutDialog printscreen of the error message to Solvitaire support for diagnosis</p></body></html>";
            object = this;
            ((SolitaireGameEngine)object).AboutDialog((String)object2, false);
        }
        object3 = "com_solvitaire_app_winuser32";
        if (this.d <= 5) {
            this.g("Loading native library " + (String)object3);
        }
        try {
            System.loadLibrary((String)object3);
        }
        catch (LinkageError linkageError) {
            object2 = "<html><body><p style='width: 600px;'>Error loading native library, trying to load: " + (String)object3 + "<br>Is this definitely the 64-bit version of Windows?<br>The exception was : " + linkageError.getLocalizedMessage() + "</p></body></html>";
            object = this;
            ((SolitaireGameEngine)object).AboutDialog((String)object2, false);
        }
        if (this.d <= 5) {
            this.g("Loaded native library");
        }
        this.aC = new WinUser32();
        object3 = this;
        object = GraphicsEnvironment.getLocalGraphicsEnvironment().getDefaultScreenDevice().getDefaultConfiguration();
        object = ((GraphicsConfiguration)object).getDefaultTransform();
        ((SolitaireGameEngine)object3).H = ((AffineTransform)object).getScaleX();
        ((SolitaireGameEngine)object3).I = ((AffineTransform)object).getScaleY();
        if (((SolitaireGameEngine)object3).d <= 5) {
            Object object4 = object3;
            ((SolitaireGameEngine)object4).g("Graphics scaling is " + ((SolitaireGameEngine)object4).H + "," + ((SolitaireGameEngine)object3).I);
        }
        object = new int[4];
        ((SolitaireGameEngine)object3).aC.SystemParametersInfoA(48, 0, (int[])object, 0);
        ((SolitaireGameEngine)object3).CHandler.xHandler = (int)object[0];
        ((SolitaireGameEngine)object3).CHandler.yHandler = (int)object[1];
        ((SolitaireGameEngine)object3).CHandler.width = (int)(object[2] - object[0]);
        ((SolitaireGameEngine)object3).CHandler.height = (int)(object[3] - object[1]);
        if (((SolitaireGameEngine)object3).CHandler.width < 1280) {
            Object object5 = object3;
            object2 = "The screen resolution (" + ((SolitaireGameEngine)object5).CHandler.width + "xHandler" + ((SolitaireGameEngine)object3).CHandler.height + ") is too low\nSolvitaire may not read the cards reliably\nand the Solvitaire window will be off the screen";
            object = object5;
            ((SolitaireGameEngine)object5).AboutDialog((String)object2, false);
        }
        if (((SolitaireGameEngine)object3).d <= 6) {
            Object object6 = object3;
            ((SolitaireGameEngine)object6).g("*** Screen rectangle is " + SolitaireGameEngine.AboutDialog(((SolitaireGameEngine)object6).CHandler) + ", graphics scaling is " + ((SolitaireGameEngine)object3).H + "," + ((SolitaireGameEngine)object3).I);
        }
        this.aq.AboutDialog();
        this.av = new qn(this);
        this.bJ = new qk_0(this);
        if (this.aA != "") {
            SolitaireGameEngine qo_02 = this;
            if (!ApiErrorCodes.AboutDialog(qo_02, qo_02.az, this.ay, this.ax, this.aA)) {
                this.aq.s();
                object2 = "There was AboutDialog problem with the signature in the properties file.<br>You must not try and edit the properties yourself.<br>All existing settings have been cleared out.<br>Please restart Solvitaire to recreate them.";
                object = this;
                ((SolitaireGameEngine)object).AboutDialog((String)object2, false);
            }
        }
        this.bJ.start();
        this.bI = Thread.currentThread();
        this.bu = new q(this);
    }

    final String[] b(String object) {
        object = Files.readString(Paths.get((String)object, new String[0]), StandardCharsets.US_ASCII);
        object = object.toLowerCase();
        if (this.d <= 5) {
            this.g("Input file content:" + (String)object);
        }
        object = object.split("\n");
        int n2 = 0;
        int n3 = 0;
        while (n3 < ((String[])object).length) {
            object[n3] = object[n3].trim();
            if (object[n3].length() != 0 && !object[n3].startsWith("#")) {
                object[n2] = object[n3];
                ++n2;
            }
            ++n3;
        }
        if (n2 < ((String[])object).length) {
            object[n2] = null;
        }
        if (n2 == 0) {
            String string = "File is empty";
            object = this;
            object.AboutDialog(string, false);
            object = null;
        } else {
            String[] stringArray = object[0].split(",");
            if (stringArray.length == 0 || !Arrays.asList(j).contains(stringArray[0])) {
                String string = "File must start with klondike,1, klondike,3,<br>spider, freecell, pyramid or tripeaks";
                object = this;
                object.AboutDialog(string, false);
                object = null;
            }
        }
        return object;
    }

    private String m(String stringArray) {
        if ((stringArray = this.b((String)stringArray)) == null) {
            return "";
        }
        stringArray = stringArray[0].split(",");
        return stringArray[0];
    }

    final int c(String string) {
        String string2;
        if (this.yHandler) {
            return 0;
        }
        int n2 = (string = string.trim().toLowerCase()).length();
        if (n2 != 2 && (n2 != 3 || string.charAt(0) != '1' || string.charAt(1) != '0')) {
            string2 = "Invalid card " + string + " in input file";
            SolitaireGameEngine qo_02 = this;
            qo_02.AboutDialog(string2, false);
        }
        if (this.d <= 2) {
            this.g("Processing: " + string);
        }
        n2 = 0;
        char c2 = string.charAt(0);
        char c3 = string.charAt(1);
        if (c2 == '1') {
            if (c3 != '0') {
                string2 = "Invalid card " + string + " in input file";
                SolitaireGameEngine qo_03 = this;
                qo_03.AboutDialog(string2, false);
                return 0;
            }
            c3 = string.charAt(2);
        }
        switch (c3) {
            case 's': {
                n2 = 100;
                break;
            }
            case 'h': {
                n2 = 200;
                break;
            }
            case 'd': {
                n2 = 300;
                break;
            }
            case 'c': {
                n2 = 400;
                break;
            }
            case '?': {
                n2 = 0;
                break;
            }
            default: {
                string2 = "Invalid card " + string + " in input file";
                SolitaireGameEngine qo_04 = this;
                qo_04.AboutDialog(string2, false);
            }
        }
        switch (c2) {
            case 'AboutDialog': {
                ++n2;
                break;
            }
            case 'j': {
                n2 += 11;
                break;
            }
            case 'q': {
                n2 += 12;
                break;
            }
            case 'k': {
                n2 += 13;
                break;
            }
            case '1': {
                n2 += 10;
                break;
            }
            case '2': 
            case '3': 
            case '4': 
            case '5': 
            case '6': 
            case '7': 
            case '8': 
            case '9': {
                n2 += c2 - 48;
                break;
            }
            case '?': {
                break;
            }
            default: {
                string2 = "Invalid card " + string + " in input file";
                SolitaireGameEngine qo_05 = this;
                qo_05.AboutDialog(string2, false);
            }
        }
        return n2;
    }

    private boolean o() {
        if (this.v == 0) {
            this.v = this.d("Solvitaire");
            if (this.v == 0) {
                this.g("Error getting handle to Solvitaire app window - will try later");
            }
        }
        boolean bl2 = true;
        int n2 = this.aC.GetForegroundWindow();
        if (n2 != this.DHandler && n2 != this.v && n2 != this.EHandler) {
            this.g(String.format("Active window is %08x, solitaire is %08x", n2, this.DHandler));
            byte[] byArray = new byte[1024];
            n2 = this.aC.GetWindowTextA(n2, byArray, byArray.length);
            byArray = Arrays.copyOf(byArray, n2);
            this.g("Window under cursor is:'" + new String(byArray) + "'");
            bl2 = false;
        }
        return bl2;
    }

    private void p() {
        if (this.d <= 5) {
            this.g("Calling getHwnd for Solitaire & Casual Games");
        }
        this.DHandler = this.d("Solitaire & Casual Games");
        if (this.DHandler == 0) {
            if (this.d <= 5) {
                this.g("Calling getHwnd for Solitaire Collection");
            }
            this.DHandler = this.d("Solitaire Collection");
        }
        if (this.DHandler == 0) {
            if (this.d <= 5) {
                this.g("Calling getHwnd for Microsoft Solitaire");
            }
            this.DHandler = this.d("Microsoft Solitaire");
        }
        if (this.DHandler == 0) {
            String string = "Could not find 'Solitaire & Casual Games' or 'Solitaire Collection'\nThis needs to be running and displaying the solitaire game that you would like playing\n(or you can use 'Start->Choose AboutDialog different mode' to play solitaire yourself)";
            SolitaireGameEngine qo_02 = this;
            qo_02.AboutDialog(string, false);
        }
        if (this.d <= 5) {
            this.g(String.format("Solitaire hwnd is %08x", this.DHandler));
        }
    }

    final void AboutDialog() {
        if (this.DHandler == 0) {
            this.p();
        }
        SolitaireGameEngine qo_02 = this;
        qo_02.d(qo_02.DHandler);
        this.AboutDialog(500L, "SetForeground");
        if (!this.o()) {
            String string = "Could not expose the Solitaire window for inspection";
            SolitaireGameEngine qo_03 = this;
            qo_03.AboutDialog(string, false);
        }
        if (this.FPanel.rPanel != null) {
            int n2 = 0;
            while (n2 < 5) {
                SolitaireGameEngine qo_04 = this;
                qo_04.AboutDialog(qo_04.FPanel.rPanel.AboutDialog.xHandler + this.FPanel.rPanel.AboutDialog.width / 2, this.FPanel.rPanel.AboutDialog.yHandler + this.FPanel.rPanel.AboutDialog.height / 2);
                this.AboutDialog(50L, "sc setMouse");
                ++n2;
            }
        }
    }

    final int d(String string) {
        return this.aC.getHwnd(string);
    }

    private void d(int n2) {
        if (this.d <= 5) {
            this.g(String.format("Solitaire hwnd is %08x", n2));
        }
        if (this.aC.IsIconic(n2)) {
            this.g("Solitaire window is minimized");
            this.aC.ShowWindow(n2, 9);
            this.AboutDialog(500L, "Initial restore");
        }
        this.aC.SetForegroundWindow(n2);
        this.aC.ShowWindow(n2, 1);
        this.AboutDialog(300L, "Initial show");
        int[] nArray = new int[4];
        int[] nArray2 = new int[4];
        this.aC.GetWindowRect(n2, nArray);
        this.aC.GetClientRect(n2, nArray2);
        if (this.d <= 5) {
            this.g("Pre-move window rectangle " + nArray[0] + "-" + nArray[2] + "," + nArray[1] + "-" + nArray[3]);
        }
        if (this.d <= 5) {
            this.g("Pre-move client rectangle " + nArray2[0] + "-" + nArray2[2] + "," + nArray2[1] + "-" + nArray2[3]);
        }
        this.J = nArray[3] - nArray[1] - (nArray2[3] - nArray2[1]);
        if (this.d <= 5) {
            SolitaireGameEngine qo_02 = this;
            qo_02.g("Windows shadow width is " + qo_02.J + " useScreenWidth is " + this.G);
        }
        int n3 = this.J;
        int n4 = this.CHandler.height + n3;
        int n5 = (int)this.c(250.0);
        int n6 = 999999;
        switch (this.G) {
            case 1: 
            case 2: 
            case 3: 
            case 4: 
            case 5: {
                if (this.H != 1.25) {
                    this.aq.c("", "Cannot use this scaling unless display scaling is set to 1.25");
                    return;
                }
                switch (this.G) {
                    case 1: {
                        n6 = 1154 + (this.J << 1);
                        n4 = (int)(pEBoardReader.p[0] + this.d(97.0) + (double)this.J);
                        break;
                    }
                    case 2: {
                        n6 = 1590 + (this.J << 1);
                        n4 = (int)(SpiderBoardReader.p[0] + this.d(97.0) + (double)this.J);
                        break;
                    }
                    case 3: {
                        n6 = 1590 + (this.J << 1);
                        n4 = (int)(pCBoardReader.p[0] + this.d(97.0) + (double)this.J);
                        break;
                    }
                    case 4: {
                        n6 = 1590 + (this.J << 1);
                        n4 = (int)(qi_0BoardReader.p[0] + this.d(97.0 + GameStats.o[0]) + (double)this.J);
                        break;
                    }
                    case 5: {
                        n6 = 1590 + (this.J << 1);
                        n4 = (int)(sqBoardReader.p[0] + this.d(97.0 + GameStats.o[0]) + (double)this.J);
                    }
                }
                break;
            }
            case 1280: {
                n6 = (int)this.c(1280.0);
                break;
            }
            case 1366: {
                n6 = 1166;
                n5 = 200;
                break;
            }
            case 1660: {
                n6 = 1660 + (this.J << 1);
                break;
            }
            case 1920: {
                n6 = 1920 + (this.J << 1);
                break;
            }
            case 2880: {
                n6 = 2880 + (this.J << 1);
            }
        }
        if (n6 > this.CHandler.width) {
            if (this.d <= 5) {
                this.g(String.format("Set window to screen width(%d) - ui width (%d) giving %d", this.CHandler.width, n5, this.CHandler.width - n5));
            }
            n6 = this.CHandler.width - n5;
        }
        if (n6 < 1116) {
            if (this.d <= 5) {
                this.g("Window too small, increasing to 1116");
            }
            n6 = 1116;
            this.KHandler = true;
        }
        if (this.G != 1 && (double)n6 / (double)n4 < 1.2) {
            if (this.d <= 5) {
                this.g(String.format("Width(%d)/height(%d) < 1.2 so height adjusted to %d", n6, n4, (int)((double)n6 / 1.2)));
            }
            n4 = (int)((double)n6 / 1.2);
        }
        if (this.d <= 5) {
            this.g(String.format("Calling SetWindowPos with xHandler %d yHandler %d wHandler %d h %d", this.CHandler.xHandler - n3, this.CHandler.yHandler, n6, n4));
        }
        this.aC.SetWindowPos(n2, 0, this.CHandler.xHandler - n3, this.CHandler.yHandler, n6, n4, 64);
        this.AboutDialog(500L, "After setwindowpos");
        this.aC.GetWindowRect(n2, nArray);
        if (this.d <= 5) {
            this.g("Post-move window rectangle " + nArray[0] + "-" + nArray[2] + "," + nArray[1] + "-" + nArray[3]);
        }
        if (nArray[2] - nArray[0] != n6 || nArray[3] - nArray[1] != n4) {
            this.aC.SetWindowPos(n2, 0, this.CHandler.xHandler - n3, this.CHandler.yHandler, n6, n4, 64);
            this.AboutDialog(500L, "After setwindowpos2");
            this.aC.GetWindowRect(n2, nArray);
            if (this.d <= 5) {
                this.g("Needed second resize, post-move window rectangle is now " + nArray[0] + "-" + nArray[2] + "," + nArray[1] + "-" + nArray[3]);
            }
        }
        this.aC.GetClientRect(n2, nArray2);
        GameStats pF2 = this.FPanel;
        pF2.getClass();
        this.FPanel.rPanel = new j(pF2, nArray2[0], nArray2[1], nArray2[2] - nArray2[0], nArray2[3] - nArray2[1]);
        if (this.d <= 5) {
            this.g("Post-move client rectangle " + nArray2[0] + "-" + nArray2[2] + "," + nArray2[1] + "-" + nArray2[3]);
        }
        this.FPanel.rPanel.AboutDialog.xHandler += nArray[0] + this.J;
        this.FPanel.rPanel.AboutDialog.yHandler += nArray[1];
        if (this.d <= 5) {
            this.g(String.format("Window (translated client) rect now %d,%d,%d,%d", this.FPanel.rPanel.AboutDialog.xHandler, this.FPanel.rPanel.AboutDialog.yHandler, this.FPanel.rPanel.AboutDialog.width, this.FPanel.rPanel.AboutDialog.height));
        }
        this.bF.xHandler = this.aC.GetSystemMetrics(76);
        this.bF.yHandler = this.aC.GetSystemMetrics(77);
        this.bF.width = this.aC.GetSystemMetrics(78);
        this.bF.height = this.aC.GetSystemMetrics(79);
        if (this.d <= 5) {
            SolitaireGameEngine qo_03 = this;
            qo_03.g("Desktop dimensions are (" + qo_03.bF.xHandler + ", " + this.bF.yHandler + "  " + this.bF.width + " xHandler " + this.bF.height + ")");
        }
        if ((n2 = this.aC.getTitleHwnd(n2)) != 0) {
            this.aC.GetClientRect(n2, nArray2);
            if (this.d <= 5) {
                this.g("Title bar client rectangle " + nArray2[0] + "-" + nArray2[2] + "," + nArray2[1] + "-" + nArray2[3]);
            }
            GameStats pF3 = this.FPanel;
            pF3.getClass();
            this.FPanel.t = new i(pF3, nArray2[3] - nArray2[1]);
            return;
        }
        if (this.d <= 5) {
            this.g("Failed to interrogate title bar window handle, will use fallback method");
        }
        this.FPanel.t = null;
    }

    final ErrorDialog AboutDialog(j j2, String string) {
        return this.AboutDialog(new Rectangle((int)j2.AboutDialog(), (int)j2.b(), (int)j2.c(), (int)j2.d()), string);
    }

    final ErrorDialog AboutDialog(Rectangle object, String string) {
        object = new ErrorDialog(this, (Rectangle)object, string);
        return object;
    }

    static BufferedImage AboutDialog(BufferedImage bufferedImage, double d2, double d3) {
        int n2 = bufferedImage.getWidth();
        int n3 = bufferedImage.getHeight();
        n2 = (int)((double)n2 * d2);
        n3 = (int)((double)n3 * d3);
        BufferedImage bufferedImage2 = new BufferedImage(n2, n3, 2);
        Object object = AffineTransform.getScaleInstance(d2, d3);
        object = new AffineTransformOp((AffineTransform)object, 3);
        ((AffineTransformOp)object).filter(bufferedImage, bufferedImage2);
        return bufferedImage2;
    }

    final boolean AboutDialog(boolean bl2) {
        bl2 = false;
        int n2 = 0;
        n2 = 4;
        while (!bl2 && n2 > 0) {
            long[] lArray = new long[1];
            this.aC.GetCursorPos(lArray);
            bl2 = this.AboutDialog(lArray);
            if (bl2) continue;
            this.aq.AboutDialog(8);
            String string = "MouseOffWindow";
            SolitaireGameEngine qo_02 = this;
            qo_02.b(string, false);
            if (--n2 != 0) continue;
            string = "ERROR - Solitaire window not visible afer 4 retries";
            qo_02 = this;
            qo_02.AboutDialog(string, false);
        }
        return bl2;
    }

    final boolean AboutDialog(double d2, double d3) {
        long[] lArray = new long[1];
        long[] lArray2 = lArray;
        lArray[0] = (long)d3 << 32 | (long)d2;
        return this.AboutDialog(lArray2);
    }

    private boolean AboutDialog(long[] lArray) {
        int n2;
        if (this.d <= 2) {
            this.g(String.format("Testing point %16x", lArray[0]));
        }
        int n3 = n2 = this.aC.WindowFromPoint(lArray[0]);
        while (n3 != 0) {
            n2 = n3;
            n3 = this.aC.GetParent(n2);
        }
        if (this.d <= 2) {
            this.g(String.format("Hwnd is %08x, solitaire is %08x", n2, this.DHandler));
        }
        if (this.v == 0) {
            this.v = this.d("Solvitaire");
            if (this.v == 0) {
                this.g("Error getting handle to Solvitaire app window - will try later");
            }
        }
        if ((n3 = n2 != this.DHandler && n2 != this.v ? 0 : 1) == 0 && this.d <= 5) {
            this.g(String.format("Window handle %08x does not match solitaire %08x or status %08x", n2, this.DHandler, this.v));
            byte[] byArray = new byte[1024];
            n2 = this.aC.GetWindowTextA(n2, byArray, byArray.length);
            byte[] byArray2 = Arrays.copyOf(byArray, n2);
            this.g("Window under cursor is:'" + new String(byArray2) + "'");
        }
        return n3 != 0;
    }

    final void AboutDialog(int n2, String string) {
        long l2;
        long l3 = System.currentTimeMillis();
        long l4 = l3 + (long)n2;
        do {
            l2 = System.currentTimeMillis();
            if (this.aK) {
                this.aK = false;
                if (this.d > 4) break;
                this.g("waitForUpdates waited " + (l2 - l3) + "ms for " + string);
                return;
            }
            try {
                Thread.sleep(2L);
            }
            catch (InterruptedException interruptedException) {}
        } while (l2 <= l4);
    }

    final void AboutDialog(long l2, String string) {
        if (this.d <= 5) {
            int n2;
            int n3 = l2 <= 5L ? 1 : (n2 = l2 < 50L ? 3 : 5);
            if (this.d <= n2) {
                this.g("Sleep of " + l2 + "ms for " + string);
            }
        }
        this.AboutDialog(l2);
    }

    final void AboutDialog(long l2) {
        long l3 = System.currentTimeMillis();
        long l4 = l3 + l2;
        if (l2 > 500L) {
            System.gc();
        }
        while (l3 < l4) {
            try {
                Thread.sleep(l4 - l3);
            }
            catch (InterruptedException interruptedException) {
                this.g("Unexpected interrupt of sleep" + String.valueOf(interruptedException));
            }
            l3 = System.currentTimeMillis();
        }
    }

    public static File e(String object) {
        if (((String)object).endsWith(File.separator)) {
            object = ((String)object).substring(0, ((String)object).length() - 1);
        }
        if (!((File)(object = new File((String)object))).exists()) {
            ((File)object).mkdirs();
        }
        return object;
    }

    public final synchronized void f(String string) {
        this.g(string);
    }

    public final synchronized void g(String object) {
        try {
            if (this.bH > 100000000L) {
                this.bH = 0L;
                if (this.bG != null) {
                    this.bG.close();
                    this.bG = null;
                }
                SolitaireGameEngine.h(this.at + "trace2.txt");
                SolitaireGameEngine.b(this.at + "trace1.txt", this.at + "trace2.txt");
                SolitaireGameEngine.b(this.at + "trace.txt", this.at + "trace1.txt");
            }
            if (this.bG == null) {
                SolitaireGameEngine.e(this.at);
                this.bG = new BufferedOutputStream(new FileOutputStream(this.at + "trace.txt", true));
                File file = new File(this.at + "trace.txt");
                this.bH = file.length();
            }
            long l2 = System.currentTimeMillis() - this.LHandler;
            object = String.format("%04d.%02d[%06d:%04d/%03d,%03d]%s\n", l2 / 1000L, l2 % 1000L / 10L, this.PPanel, this.T, this.U, this.aZ != null ? this.aZ.h : 0, object);
            object = ((String)object).getBytes();
            this.bG.write((byte[])object);
            this.bG.flush();
            this.bH += (long)((Object)object).length;
            return;
        }
        catch (Exception exception) {
            System.out.printf("Failed to write to trace file " + SolitaireGameEngine.AboutDialog(exception), new Object[0]);
            return;
        }
    }

    static void h(String object) {
        if (((File)(object = new File((String)object))).exists()) {
            ((File)object).delete();
        }
    }

    private static void b(String object, String string) {
        if (((File)(object = new File((String)object))).exists()) {
            ((File)object).renameTo(new File(string));
        }
    }

    public final void i(String string) {
        this.AboutDialog(string, false);
    }

    final void AboutDialog(String object, boolean bl2) {
        this.yHandler = true;
        if (this.k != null) {
            this.k.AboutDialog((String)object);
        }
        this.g((String)object);
        this.AboutDialog((String)object);
        this.aO = true;
        if (this.aq != null && this.aq.g != null && this.aq.g.isVisible() && this.aq.G != null) {
            this.aq.d((String)object);
            if (bl2) {
                this.g("Exit requested so setting terminate flag for start button");
                this.z = true;
                return;
            }
            this.c(0);
            String string = "traceError";
            object = this;
            ((SolitaireGameEngine)object).b(string, false);
            this.c(14);
            string = "traceError2";
            object = this;
            ((SolitaireGameEngine)object).b(string, false);
            return;
        }
        JOptionPane.showMessageDialog(null, object);
        if (bl2) {
            this.g("Exit after showmessagedialog");
            System.exit(0);
        }
    }

    final void AboutDialog(int n2, String charSequence, byte[] byArray) {
        if (9 >= this.d) {
            String string = charSequence;
            byte[] byArray2 = byArray;
            charSequence = new StringBuffer();
            int n3 = 0;
            while (n3 < byArray2.length) {
                ((StringBuffer)charSequence).append(String.format("%02X", byArray2[n3]));
                ++n3;
            }
            this.g(string + " = " + ((StringBuffer)charSequence).toString());
        }
    }

    static String AboutDialog(Exception exception) {
        StringWriter stringWriter = new StringWriter();
        PrintWriter printWriter = new PrintWriter(stringWriter);
        exception.printStackTrace(printWriter);
        return stringWriter.toString();
    }

    static String AboutDialog(Rectangle rectangle) {
        if (rectangle == null) {
            return "";
        }
        return rectangle.xHandler + "," + rectangle.yHandler + " " + rectangle.width + "xHandler" + rectangle.height;
    }

    static String AboutDialog(Rectangle2D.Double double_) {
        return double_.xHandler + "," + double_.yHandler + " " + double_.width + "xHandler" + double_.height;
    }

    static String AboutDialog(Point point) {
        if (point != null) {
            return point.xHandler + "," + point.yHandler;
        }
        return "null";
    }

    final void AboutDialog(int n2, Rectangle rectangle, String string) {
        if (this.d > n2) {
            return;
        }
        int[][] nArray = this.FPanel.AboutDialog(rectangle);
        this.g("TOP OF " + string + " ____________________________________________________");
        int n3 = 0;
        while (n3 < rectangle.height) {
            StringBuffer stringBuffer = new StringBuffer();
            int n4 = 0;
            while (n4 < rectangle.width) {
                if (nArray[n3][n4] != 0) {
                    stringBuffer.append("@@");
                } else {
                    stringBuffer.append("  ");
                }
                ++n4;
            }
            this.g(stringBuffer.toString());
            ++n3;
        }
        this.g("BOTTOM___________________________________________________");
    }

    final void AboutDialog(int n2, int[][] nArray, int n3, int n4, int n5, int n6, String charSequence) {
        if (this.d > n2) {
            return;
        }
        this.g("TOP OF " + (String)charSequence + " ____________________________________________________");
        n2 = n4;
        while (n2 < n4 + n6) {
            charSequence = new StringBuffer();
            int n7 = n3;
            while (n7 < n3 + n5) {
                if (nArray[n2][n7] != 0) {
                    ((StringBuffer)charSequence).append("@@");
                } else {
                    ((StringBuffer)charSequence).append("  ");
                }
                ++n7;
            }
            this.g(((StringBuffer)charSequence).toString());
            ++n2;
        }
        this.g("BOTTOM___________________________________________________");
    }

    public final int AboutDialog(double d2) {
        return (int)(d2 / this.H + 0.99999999);
    }

    public final int b(double d2) {
        return (int)(d2 / this.I + 0.99999999);
    }

    public final double c(double d2) {
        return (int)(d2 * this.H);
    }

    public final double d(double d2) {
        return (int)(d2 * this.I);
    }

    final int e(double d2) {
        int n2 = (int)(d2 * this.FPanel.wHandler);
        if (n2 == 0) {
            n2 = 1;
        }
        return n2;
    }

    final ErrorDialog b() {
        Rectangle rectangle = new Rectangle(this.CHandler);
        rectangle.xHandler = (int)((double)rectangle.xHandler * this.A);
        rectangle.yHandler = (int)((double)rectangle.yHandler * this.A);
        rectangle.width = (int)((double)rectangle.width * this.A);
        rectangle.height = (int)((double)rectangle.height * this.A);
        return this.AboutDialog(rectangle, null);
    }

    final void AboutDialog(ErrorDialog al_02, String string) {
        if (this.wHandler) {
            al_02.AboutDialog(string, false);
        }
    }

    final void b(ErrorDialog al_02, String string) {
        if (this.xHandler) {
            al_02.AboutDialog(string, true);
        }
    }

    final void AboutDialog(BufferedImage bufferedImage, String object, boolean n2) {
        try {
            File file = null;
            int n3 = 5;
            if (n2 != 0) {
                n3 = 20;
            }
            n2 = 1;
            while (n2 <= n3) {
                file = new File(this.at + "grab_" + (String)object + n2 + ".png");
                if (!file.exists()) break;
                ++n2;
            }
            if (((File)(object = n2 >= n3 ? new File(this.at + "grab_" + (String)object + "1.png") : new File(this.at + "grab_" + (String)object + (n2 + 1) + ".png"))).exists()) {
                ((File)object).delete();
            }
            ImageIO.write((RenderedImage)bufferedImage, "png", file);
            return;
        }
        catch (Exception exception) {
            this.g("Grabimage failed " + SolitaireGameEngine.AboutDialog(exception));
            return;
        }
    }

    final void j(String string) {
        Desktop desktop = Desktop.getDesktop();
        try {
            URI uRI = new URI(string);
            desktop.browse(uRI);
            return;
        }
        catch (Exception exception) {
            this.g("Failed to load web page " + string + " exception: " + SolitaireGameEngine.AboutDialog(exception));
            return;
        }
    }

    private static int n(String string) {
        int n2 = 1;
        while (n2 < j.length) {
            if (j[n2].equals(string)) {
                return n2;
            }
            ++n2;
        }
        return 0;
    }

    final void c() {
        SolitaireGameEngine qo_02 = this;
        qo_02.d(qo_02.by);
        this.bz = System.currentTimeMillis();
    }

    private void d(Point point) {
        this.b(point);
        this.AboutDialog(point.xHandler, point.yHandler, point);
    }

    final void b(Point point) {
        int n2 = this.aC.mouseLocation();
        point.xHandler = n2 >> 16 & 0xFFFF;
        point.yHandler = n2 & 0xFFFF;
    }

    final void AboutDialog(Point2D.Double double_) {
        int n2 = this.aC.mouseLocation();
        double d2 = n2 >> 16 & 0xFFFF;
        double d3 = n2 & 0xFFFF;
        double_.xHandler = d2 * this.A;
        double_.yHandler = d3 * this.A;
    }

    private void AboutDialog(int n2, int n3, Point point) {
        point.xHandler = (int)(((double)n2 + 0.99999999 - (double)this.bF.xHandler) * 65536.0 / (double)this.bF.width);
        point.yHandler = (int)(((double)n3 + 0.99999999 - (double)this.bF.yHandler) * 65536.0 / (double)this.bF.height);
    }

    final void AboutDialog(int n2, int n3) {
        this.AboutDialog(n2, n3, this.by);
        this.aC.mouseMoveAbsolute(this.by.xHandler, this.by.yHandler);
        Point point = new Point();
        this.b(point);
        int n4 = 20;
        while (n2 - point.xHandler > 1 || n2 - point.xHandler < -1 || n3 - point.yHandler > 1 | n3 - point.yHandler < -1) {
            if (n4-- <= 0) break;
            this.aC.mouseMoveAbsolute(this.by.xHandler, this.by.yHandler);
            this.b(point);
        }
        if (n2 - point.xHandler > 1 || n2 - point.xHandler < -1 || n3 - point.yHandler > 1 | n3 - point.yHandler < -1) {
            this.g("Inaccurate mouse move, wanted " + n2 + "," + n3 + " got " + point.xHandler + "," + point.yHandler);
        }
        this.bz = System.currentTimeMillis();
    }

    final void b(double d2, double d3) {
        int n2 = (int)(d2 / this.A);
        int n3 = (int)(d3 / this.A);
        this.AboutDialog(n2, n3);
    }

    final void d() {
        if (this.aq != null && this.aq.e != null) {
            this.aq.e.AboutDialog();
        }
    }

    final void e() {
        this.be.h = 0;
        this.Z = 0;
        this.Y = 0;
        this.l.c = 1;
        this.l.rPanel = false;
        this.l.f = 1;
        this.m = 0;
    }

    final void b(boolean bl2) {
        this.uPanel = false;
        switch (this.bg) {
            case 0: {
                this.aq.f();
                break;
            }
            case 1: 
            case 2: {
                this.aq.d();
                break;
            }
            case 4: {
                this.aq.e();
                break;
            }
            case 3: {
                this.aq.AboutDialog(true);
                break;
            }
            case 5: {
                this.aq.g();
            }
        }
        this.FPanel = new GameStats(this);
    }

    final void AboutDialog(int n2) {
        this.b(39, 120);
    }

    final void b(int n2, int n3) {
        if (this.d <= 5) {
            this.g("Keystroke " + n2 + " delay " + n3);
        }
        this.AboutDialog(n2, true);
        this.AboutDialog(n2, false);
        this.AboutDialog((long)(n3 - 100));
    }

    final void AboutDialog(int n2, boolean bl2) {
        if (n2 == 17) {
            if (this.bt == bl2) {
                if (this.d <= 5) {
                    this.g("Ignoring key " + (bl2 ? "press" : "release") + " of control key");
                }
                return;
            }
            this.bt = bl2;
        }
        if (this.d <= 5) {
            this.g("Key " + (bl2 ? "press" : "release") + " of key " + n2);
        }
        n2 = this.aC.keyEvent(n2, bl2);
        if (this.d <= 5 && n2 > 0) {
            this.g("Key " + (bl2 ? "press" : "release") + " required " + n2 + " waits to be accepted");
        }
        this.AboutDialog(50L);
    }

    final void AboutDialog(h h2) {
        this.h(h2.AboutDialog(), h2.b());
    }

    final void c(Point point) {
        this.h(point.xHandler, point.yHandler);
    }

    final void c(double d2, double d3) {
        this.h(d2, d3);
    }

    final void d(double d2, double d3) {
        this.h(d2 + this.FPanel.AboutDialog.AboutDialog(), d3 + this.FPanel.AboutDialog.b());
    }

    private boolean g(double d2, double d3) {
        int n2;
        int n3;
        boolean bl2;
        long l2 = System.currentTimeMillis();
        Point point = new Point();
        this.d(point);
        if (this.d <= 4) {
            SolitaireGameEngine qo_02 = this;
            qo_02.g("Mouse was at " + String.valueOf(qo_02.by) + " now at " + String.valueOf(point) + " time delta " + (l2 - this.bz));
        }
        if (l2 - this.bz < 2000L && point.distance(this.by) > 4000.0) {
            if (this.d <= 5) {
                SolitaireGameEngine qo_03 = this;
                qo_03.g("Detected mouse contention, last pos " + qo_03.by.xHandler + "," + this.by.yHandler + " current " + point.xHandler + "," + point.yHandler);
            }
            this.aq.AboutDialog(9);
            String string = "Mouse contention";
            SolitaireGameEngine qo_04 = this;
            qo_04.b(string, false);
            this.c();
        }
        if (bl2 = this.AboutDialog((double)(n3 = (int)(d2 / this.A)), (double)(n2 = (int)(d3 / this.A)))) {
            this.AboutDialog(n3, n2, this.by);
            this.bz = System.currentTimeMillis();
            return true;
        }
        return false;
    }

    private void h(double d2, double d3) {
        if (this.g(d2, d3)) {
            this.aC.mouseClickDownUp(this.by.xHandler, this.by.yHandler);
            if (this.d <= 3) {
                this.g("Clicked down+up at " + d2 + "," + d3);
            }
        }
    }

    final void e(double d2, double d3) {
        new Point();
        if (this.g(d2, d3)) {
            this.aC.mouseClickDown(this.by.xHandler, this.by.yHandler, false);
            if (this.d <= 3) {
                this.g("Clicked down at " + d2 + "," + d3);
            }
            this.bL = true;
        }
    }

    final void f() {
        this.aC.mouseClickUp(this.by.xHandler, this.by.yHandler, false);
        if (this.d <= 2) {
            this.g("Clicked up");
        }
        this.bL = false;
    }

    final void f(double d2, double d3) {
        if (!this.bL) {
            return;
        }
        double d4 = this.FPanel.rPanel.AboutDialog() + this.FPanel.rPanel.c();
        double d5 = this.FPanel.rPanel.b() + this.FPanel.rPanel.d();
        if (d2 < 0.0) {
            double d6 = d3;
            this.g("Mouse target " + d2 + "," + d6 + " set to 0," + d6);
            d2 = 0.0;
        }
        if (d3 < 0.0) {
            this.g("Mouse target " + d2 + "," + d3 + " set to " + d2 + ",0");
            d3 = 0.0;
        }
        if (d2 > d4) {
            this.g("Mouse target " + d2 + "," + d3 + " set to " + (d4 - 1.0) + "," + d3);
            d2 = d4 - 1.0;
        }
        if (d3 > d5) {
            this.g("Mouse target " + d2 + "," + d3 + " set to " + d2 + "," + (d5 - 1.0));
            d3 = d5 - 1.0;
        }
        double d7 = d3;
        double d8 = d2;
        SolitaireGameEngine qo_02 = this;
        if (qo_02.d < 3) {
            qo_02.g("Move mouse to " + d8 + "," + d7);
        }
        qp_0 qp_02 = new qp_0(qo_02, d8, d7);
        while (qp_02.AboutDialog()) {
            qo_02.AboutDialog(3L, "vector move (auto moveMouse)");
        }
        if (qp_02.AboutDialog) {
            qo_02.aq.AboutDialog(9);
        }
        this.f();
    }

    final boolean AboutDialog(double d2, double d3, boolean bl2) {
        if (this.FPanel.rPanel == null) {
            return true;
        }
        Point point = new Point((int)(d2 / this.A), (int)(d3 / this.A));
        int cfr_ignored_0 = this.FPanel.rPanel.AboutDialog.xHandler;
        int cfr_ignored_1 = this.FPanel.rPanel.AboutDialog.width;
        int cfr_ignored_2 = this.FPanel.rPanel.AboutDialog.yHandler;
        int cfr_ignored_3 = this.FPanel.rPanel.AboutDialog.height;
        this.AboutDialog(point.xHandler, point.yHandler, point);
        double d4 = point.distance(this.by);
        while (!this.by.equals(point)) {
            double d5;
            this.b(d2, d3);
            this.AboutDialog(5L, "stabilizeMouse");
            double d6 = point.distance(this.by);
            if (d5 > d4) {
                return false;
            }
            d4 = d6;
        }
        return true;
    }

    private void c(boolean bl2) {
        if (!this.uPanel) {
            String string = "Request for MyBoard when not in standalone mode";
            SolitaireGameEngine qo_02 = this;
            qo_02.AboutDialog(string, false);
        }
        SolitaireGameEngine qo_03 = this;
        qo_03.g("Creating new standalone board, gameMode " + qo_03.m);
        this.aq.g.setVisible(false);
        this.ar = new pLPanel(this, bl2);
    }

    final void g() {
        if (this.uPanel && this.ar != null) {
            if (this.d <= 3) {
                this.g("Request to repaint board");
            }
            this.ar.ad.repaint();
        }
    }

    final Color b(int n2) {
        return bT[this.bU][n2];
    }

    final void c(int n2) {
        this.bB = n2;
        if (this.d <= 5) {
            this.g("Setting deferred request " + bA[this.bB] + " from " + SolitaireGameEngine.i());
        }
    }

    final void h() {
        long l2;
        if (this.d <= 5) {
            SolitaireGameEngine qo_02 = this;
            qo_02.g("Entered mainline dopause, paused=" + qo_02.aO + " restart=" + bA[this.bC]);
        }
        this.DesktopDuplication = true;
        long l3 = System.currentTimeMillis();
        while (!this.ai) {
            Object object;
            Object object2;
            if (this.ar != null) {
                this.ar.b(false);
            }
            this.aq.o();
            SolitaireGameEngine qo_03 = this;
            if (Thread.currentThread() != qo_03.bI) {
                qo_03.g("THREAD ERROR, current " + String.valueOf(Thread.currentThread()) + " main " + String.valueOf(qo_03.bI));
                qo_03.g("Stack:" + SolitaireGameEngine.AboutDialog(new Exception()));
                object2 = "ERROR - handleDeferred not called on main thread";
                object = qo_03;
                ((SolitaireGameEngine)object).AboutDialog((String)object2, false);
            }
            if (qo_03.bB != 0) {
                if (qo_03.d <= 5) {
                    SolitaireGameEngine qo_04 = qo_03;
                    qo_04.g("Deferred request " + qo_04.bB);
                }
                try {
                    switch (qo_03.bB) {
                        case 9: {
                            qo_03.aO = false;
                            break;
                        }
                        case 0: {
                            break;
                        }
                        case 4: {
                            qo_03.i = SolitaireGameEngine.n(qo_03.l.q);
                            int n2 = qo_03.aq.e("Where to start?", "Enter starting card file number");
                            if (n2 >= 0) {
                                qo_03.l.AboutDialog(n2, true);
                                qo_03.uPanel = true;
                                qo_03.c(false);
                                qo_03.aO = false;
                                qo_03.bg = 2;
                            }
                            break;
                        }
                        case 1: {
                            qo_03.uPanel = true;
                            qo_03.aq.g.repaint();
                            qo_03.i = SolitaireGameEngine.n(qo_03.l.q);
                            break;
                        }
                        case 3: {
                            if (qo_03.uPanel) {
                                qo_03.g("Standalone solve challenge mode, assume file already loaded");
                                break;
                            }
                            object = qo_03.l.d();
                            qo_03.i = SolitaireGameEngine.n(qo_03.m(qo_03.l.p + (String)object));
                            SolitaireGameEngine qo_05 = qo_03;
                            qo_05.g("MS challenge solve, priming file " + qo_05.l.p + (String)object);
                            break;
                        }
                        case 2: 
                        case 7: {
                            qo_03.uPanel = true;
                            object = qo_03.l.d();
                            SolitaireGameEngine qo_06 = qo_03;
                            object2 = qo_06.m(qo_06.l.p + (String)object);
                            if (object2 != null) {
                                qo_03.i = SolitaireGameEngine.n((String)object2);
                                SolitaireGameEngine qo_07 = qo_03;
                                qo_07.g("Priming file " + qo_07.l.p + (String)object);
                                qo_03.aO = false;
                                SolitaireGameEngine qo_08 = qo_03;
                                qo_08.c(qo_08.bg == 2);
                            }
                            if (qo_03.bB == 7) {
                                qo_03.g("Request to open AboutDialog solution");
                                qo_03.m = 4;
                                qo_03.aR = true;
                            }
                            break;
                        }
                        case 5: {
                            boolean cfr_ignored_0 = qo_03.l.AboutDialog;
                            qo_03.aq.c("Save failed", "Game cannot be saved in this state");
                            break;
                        }
                        case 8: 
                        case 10: {
                            if (qo_03.d <= 5) {
                                qo_03.g("Unexpected PLAYUSER request in mainline wait");
                            }
                            break;
                        }
                        case 12: {
                            break;
                        }
                        case 13: {
                            qo_03.bC = 13;
                            break;
                        }
                        case 14: {
                            qo_03.bC = 14;
                            break;
                        }
                        default: {
                            object2 = "Unknown deferred request " + qo_03.bB;
                            ((SolitaireGameEngine)object).AboutDialog((String)object2, false);
                            break;
                        }
                    }
                }
                catch (IOException iOException) {
                    SolitaireGameEngine qo_09;
                    qo_03.g("I/OHandler error on file " + SolitaireGameEngine.AboutDialog(iOException));
                    object2 = "Could not read file <small>" + qo_03.l.p + qo_03.l.d() + "</small>";
                    qo_09.AboutDialog((String)object2, false);
                }
                qo_03.bB = 0;
            }
            qo_03 = this;
            if (qo_03.bC == 13 || qo_03.bC == 14) {
                if (qo_03.d <= 5) {
                    SolitaireGameEngine qo_010 = qo_03;
                    qo_010.g("Got reset request, reHandler-initializing to mode " + qo_010.bg);
                }
                qo_03.aD.AboutDialog();
                qo_03.DHandler = 0;
                qo_03.l.l();
                qo_03.e();
                qo_03.aq.KHandler = new JLabel(" ");
                qo_03.d();
                qo_03.ac = false;
                if (qo_03.bC == 14) {
                    if (qo_03.d <= 5) {
                        qo_03.g("Full reset, reload properties, reset status window");
                    }
                    qo_03.yHandler = false;
                    qo_03.i = 0;
                    qo_03.aq.rPanel();
                    int n3 = 1;
                    object = qo_03.aq;
                    ((MainWindow)object).c(n3, null);
                    qo_03.aq.g.repaint();
                    qo_03.bd = new qa();
                    qo_03.br.b();
                    qo_03.l();
                    if (qo_03.bg == 3) {
                        qo_03.AboutDialog(500L, "Re-int D3D");
                        qo_03.k();
                    }
                    if (qo_03.uPanel && qo_03.bg == 2 && !qo_03.br.p) {
                        qo_03.bg = 5;
                    }
                    qo_03.b(true);
                }
                object = qo_03.aq;
                if (((MainWindow)object).d.t) {
                    ((MainWindow)object).CHandler.removeAll();
                }
                qo_03.bM = new int[350][3][8];
                qo_03.br.p = false;
            }
            qo_03.bC = 0;
            if (qo_03.aT && qo_03.bg == 3 && qo_03.FPanel != null && qo_03.FPanel.rPanel != null) {
                if (qo_03.d <= 5) {
                    qo_03.g("Testing fonts so do not pause");
                }
                qo_03.aO = false;
            }
            if (!this.aO) break;
            this.AboutDialog(20L);
        }
        if ((l2 = System.currentTimeMillis() - l3) > 100L) {
            this.OHandler += System.currentTimeMillis() - l3;
        }
        this.DesktopDuplication = false;
    }

    final void k(String string) {
        this.b(string, false);
    }

    final void b(String string, boolean bl2) {
        long l2;
        if (this.e && Thread.currentThread() != this.bI) {
            this.g("Invalid call to doPause: " + SolitaireGameEngine.AboutDialog(new Exception()));
            return;
        }
        if (this.aO) {
            if (this.d <= 5) {
                this.g("About to pause at " + string + " restartRequest:" + this.bC);
            }
            if (!this.uPanel) {
                this.aq.l();
            }
        } else if (this.d <= 2) {
            this.g("Passing without pausing at " + string);
        }
        long l3 = System.currentTimeMillis();
        while (!this.ai) {
            int n2 = this.bB;
            this.bB = 0;
            if (n2 != 0) {
                if (this.d <= 5) {
                    this.g("Handling deferred request " + bA[n2] + " in " + string);
                }
                switch (n2) {
                    case 8: 
                    case 10: {
                        if (n2 == 10) {
                            ++this.br.j.d;
                        }
                        if (this.am) {
                            if (this.d <= 5) {
                                this.g("User move during solve so abort the solve");
                            }
                            this.bC = 0;
                            this.aO = false;
                            this.ao.G = 999;
                            this.ao.EHandler = false;
                            this.bf = false;
                            this.bd.AboutDialog();
                            this.ac = true;
                            this.V = true;
                            break;
                        }
                        if (bl2) {
                            if (this.d <= 5) {
                                this.g("PLAYUSER/UNDOUSER request in doPause:" + string + ", processPause " + bl2 + ", clear playback abort and play user moves");
                            }
                            this.ac = false;
                            boolean bl3 = this.be.h > this.aY.h;
                            this.ap.AboutDialog(this.be, null, false, false, true);
                            while (bl3 && this.ao.e() > 0) {
                                n2 = 0;
                                while (n2 < 5) {
                                    this.ar.b(false);
                                    this.AboutDialog(20L, "Freecell auto move");
                                    ++n2;
                                }
                                this.ap.AboutDialog(this.be, null, false, false, true);
                            }
                            this.ap.AboutDialog(this.be.g, this.be.h);
                            if (this.uPanel && this.ap.n != null) {
                                this.ap.AboutDialog(this.ap.n, this.ap.o, this.aY.g, false);
                            }
                            qa qa2 = new qa(this.aY, true);
                            this.ao.EHandler = false;
                            this.bf = false;
                            this.bd.i = 0;
                            this.bd.h = 0;
                            qa2.h = this.be.h;
                            this.ao.AboutDialog(qa2, 0, true);
                            if (this.ao.EHandler) {
                                this.g("Game was solved so request AboutDialog reset now");
                                this.m();
                                this.bC = 14;
                                this.aq.AboutDialog(1);
                                break;
                            }
                            this.aq.AboutDialog(15);
                            break;
                        }
                        if (this.bc) {
                            this.bc = false;
                            if (this.d <= 5) {
                                this.g("User move matches solution so treat as single step");
                            }
                            this.ad = n2 == 10;
                            this.aq.j();
                            break;
                        }
                        if (this.d <= 5) {
                            this.g("User move does not match solution so abort the playback");
                        }
                        this.aO = false;
                        this.ac = true;
                        break;
                    }
                    case 2: 
                    case 7: {
                        this.bB = n2;
                        this.bC = 12;
                        break;
                    }
                    case 3: 
                    case 4: 
                    case 12: {
                        this.bC = 12;
                        break;
                    }
                    case 13: {
                        this.bC = 13;
                        break;
                    }
                    case 14: {
                        this.bC = 14;
                        break;
                    }
                    default: {
                        String string2 = "Unknown deferred request " + bA[n2];
                        SolitaireGameEngine qo_02 = this;
                        qo_02.AboutDialog(string2, false);
                    }
                }
            }
            if (this.bC != 0) {
                if (this.d <= 5) {
                    this.g("Throwable restart request in " + string + ", throwing RestartException, code " + bA[this.bC]);
                }
                this.AboutDialog(17, false);
                throw new SolverException();
            }
            if (!this.aO) break;
            this.AboutDialog(20L);
            if (this.ar != null) {
                this.ar.b(false);
            }
            this.aq.o();
        }
        if ((l2 = System.currentTimeMillis() - l3) > 100L) {
            this.OHandler += System.currentTimeMillis() - l3;
        }
    }

    final String l(String string) {
        InputStreamReader inputStreamReader;
        CharBuffer charBuffer;
        block16: {
            Serializable serializable;
            block14: {
                block15: {
                    charBuffer = null;
                    inputStreamReader = null;
                    if (this.d <= 5) {
                        this.g("Reading file " + string);
                    }
                    if (((File)(serializable = new File(string))).exists()) break block14;
                    if (this.d > 3) break block15;
                    this.g("File does not exist:" + string);
                }
                try {
                    throw new NullPointerException();
                }
                catch (Exception exception) {
                    return null;
                }
            }
            try {
                try {
                    inputStreamReader = new FileReader(string);
                    charBuffer = CharBuffer.allocate((int)((File)serializable).length());
                    inputStreamReader.read(charBuffer);
                    charBuffer.flip();
                    if (this.d > 2) break block16;
                    this.g("Got file data:" + charBuffer.toString());
                }
                catch (Exception exception) {
                    serializable = exception;
                    exception.printStackTrace();
                    try {
                        inputStreamReader.close();
                    }
                    catch (Exception exception2) {}
                }
            }
            catch (Throwable throwable) {
                try {
                    inputStreamReader.close();
                }
                catch (Exception exception) {}
                throw throwable;
            }
        }
        try {
            inputStreamReader.close();
        }
        catch (Exception exception) {}
        return charBuffer.toString();
    }

    final void AboutDialog(String object, String object2, boolean bl2) {
        String string;
        block13: {
            OutputStreamWriter outputStreamWriter = null;
            string = null;
            try {
                try {
                    File file = new File((String)object);
                    if (file.exists()) {
                        file.delete();
                    }
                    outputStreamWriter = new FileWriter((String)object, StandardCharsets.UTF_8);
                    outputStreamWriter.write(String.valueOf(object2));
                }
                catch (Exception exception) {
                    Exception exception2 = exception;
                    string = "Error writing file " + exception.getLocalizedMessage();
                    exception2.printStackTrace();
                    try {
                        outputStreamWriter.close();
                    }
                    catch (Exception exception3) {}
                    break block13;
                }
            }
            catch (Throwable throwable) {
                try {
                    outputStreamWriter.close();
                }
                catch (Exception exception) {}
                throw throwable;
            }
            try {
                outputStreamWriter.close();
            }
            catch (Exception exception) {}
        }
        if (string != null) {
            object2 = string;
            object = this;
            ((SolitaireGameEngine)object).AboutDialog((String)object2, false);
        }
    }

    static void AboutDialog(String object, String string) {
        OutputStreamWriter outputStreamWriter = null;
        try {
            try {
                outputStreamWriter = new FileWriter((String)object, StandardCharsets.UTF_8, true);
                outputStreamWriter.write(String.valueOf(string));
            }
            catch (Exception exception) {
                object = exception;
                exception.printStackTrace();
                try {
                    outputStreamWriter.close();
                    return;
                }
                catch (Exception exception2) {
                    return;
                }
            }
        }
        catch (Throwable throwable) {
            try {
                outputStreamWriter.close();
            }
            catch (Exception exception) {}
            throw throwable;
        }
        try {
            outputStreamWriter.close();
            return;
        }
        catch (Exception exception) {
            return;
        }
    }

    static String i() {
        String string;
        Object object = "unknown";
        Object object2 = Thread.currentThread().getStackTrace();
        if (object2 != null && ((StackTraceElement[])object2).length >= 4 && (object2 = object2[3]) != null && (string = ((StackTraceElement)object2).getFileName()) != null) {
            object = ((StackTraceElement)object2).getFileName().split("\\.");
            object = object[0] + "." + ((StackTraceElement)object2).getMethodName();
        }
        return object;
    }

    final void j() {
        if (this.aS) {
            if (this.ab > 3) {
                this.AboutDialog("Sorry, only 3 consecutive games in the trial version<br>Restart Solvitaire to run more games", true);
                return;
            }
            this.AboutDialog("Sorry, your trial period has now expired<br>See Settings->License... for more details", true);
        }
    }

    private void q() {
        if (this.bg == 2) {
            int n2 = this.bo;
            ChallengeSolver qx_02 = this.br;
            if (!qx_02.p) {
                qx_02.j.c = qx_02.AboutDialog.Y + qx_02.j.d;
                qx_02.j.e = n2;
                SolitaireGameEngine cfr_ignored_0 = qx_02.AboutDialog;
                SolitaireGameEngine.AboutDialog(qx_02.o, qx_02.j.toString());
                if (qx_02.j.AboutDialog <= qx_02.e.size()) {
                    qx_02.e.set(qx_02.j.AboutDialog - 1, qx_02.j.AboutDialog);
                    qx_02.f.set(qx_02.j.AboutDialog - 1, qx_02.j.AboutDialog());
                    qx_02.g.set(qx_02.j.AboutDialog - 1, qx_02.j.c);
                    qx_02.h.set(qx_02.j.AboutDialog - 1, qx_02.j.d);
                    qx_02.i.set(qx_02.j.AboutDialog - 1, qx_02.j.e);
                } else {
                    qx_02.e.add(qx_02.j.AboutDialog);
                    qx_02.f.add(qx_02.j.AboutDialog());
                    qx_02.g.add(qx_02.j.c);
                    qx_02.h.add(qx_02.j.d);
                    qx_02.i.add(qx_02.j.e);
                }
                ChallengeSolver qx_03 = qx_02;
                qx_03.AboutDialog(qx_03.j);
                ++qx_02.j.AboutDialog;
            }
            this.br.b();
        }
    }

    final boolean k() {
        if (this.d <= 5) {
            SolitaireGameEngine qo_02 = this;
            qo_02.g("Into initD3D, current d3d object is " + String.valueOf(qo_02.bs));
        }
        if (this.bs != null) {
            return true;
        }
        this.p();
        this.bs = new DesktopDuplication(this);
        String string = this.bs.AboutDialog();
        if (string != null) {
            JOptionPane.showMessageDialog(null, "<html>Failed to initalize DirectX<br>" + string);
            this.bs = null;
            return false;
        }
        return true;
    }

    final void l() {
        if (this.d <= 5) {
            SolitaireGameEngine qo_02 = this;
            qo_02.g("Into termD3D, current d3d object is " + String.valueOf(qo_02.bs));
        }
        if (this.bs == null) {
            return;
        }
        this.bs.b();
        this.bs = null;
    }

    final void m() {
        if (this.bg == 2) {
            this.q();
        }
    }

    public final void c(int n2, int n3) {
        int n4 = n3;
        n3 = n2;
        ChallengeSolver qx_02 = this.br;
        int n5 = 0;
        while (n5 < qx_02.e.size() && (Integer)qx_02.e.get(n5) < n3) {
            ++n5;
        }
        while (n5 < qx_02.e.size() && (Integer)qx_02.e.get(n5) <= n4) {
            qx_02.e.remove(n5);
            qx_02.f.remove(n5);
            qx_02.g.remove(n5);
            qx_02.h.remove(n5);
            qx_02.i.remove(n5);
            --qx_02.j.AboutDialog;
        }
        --qx_02.j.AboutDialog;
        SolitaireGameEngine cfr_ignored_0 = qx_02.AboutDialog;
        SolitaireGameEngine.h(qx_02.o);
        n5 = 0;
        while (n5 < qx_02.j.AboutDialog) {
            n3 = n5 + 1;
            n4 = (Integer)qx_02.f.get(n5);
            int n6 = (Integer)qx_02.g.get(n5);
            int n7 = (Integer)qx_02.h.get(n5);
            int n8 = (Integer)qx_02.i.get(n5);
            SolitaireGameEngine cfr_ignored_1 = qx_02.AboutDialog;
            SolitaireGameEngine.AboutDialog(qx_02.o, String.format("%07d%08d%05d%05d%010d\n", n3, n4, n6, n7, n8));
            ++n5;
        }
        qx_02.o = "";
        qx_02.AboutDialog();
        qx_02.AboutDialog.aq.g();
    }

    final void b(int n2, String string) {
        if (this.d < 9) {
            this.g("***START DEBUG TRACE, caller " + string + " ***");
            this.bw = this.d;
            this.bx = n2;
            this.d = n2;
        }
    }

    final void n() {
        if (this.d == this.bx) {
            this.g("***END DEBUG TRACE***");
            this.d = this.bw;
        }
    }
}

