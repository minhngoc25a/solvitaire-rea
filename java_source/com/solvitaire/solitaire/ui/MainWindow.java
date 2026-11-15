/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui;

import com.solvitaire.solitaire.ui.AboutDialog;
import com.solvitaire.solitaire.ui.ModeSelector;
import com.solvitaire.solitaire.ui.handlers.qIHandler;
import com.solvitaire.solitaire.ui.handlers.qKHandler;
import com.solvitaire.solitaire.ui.handlers.qMHandler;
import com.solvitaire.solitaire.ui.handlers.qOHandler;
import com.solvitaire.solitaire.ui.handlers.qPHandler;
import com.solvitaire.solitaire.ui.handlers.qQHandler;
import com.solvitaire.solitaire.ui.handlers.qSHandler;
import com.solvitaire.solitaire.ui.handlers.qWHandler;
import com.solvitaire.solitaire.ui.handlers.qXHandler;
import com.solvitaire.solitaire.util.qY;
import com.solvitaire.solitaire.ui.qbFrame;
import com.solvitaire.solitaire.util.qc_0;
import com.solvitaire.solitaire.ui.handlers.qd_0Handler;
import com.solvitaire.solitaire.ui.handlers.qe_0Handler;
import com.solvitaire.solitaire.ui.handlers.qf_0Handler;
import com.solvitaire.solitaire.ui.handlers.qg_0Handler;
import com.solvitaire.solitaire.ui.handlers.qh_0Handler;
import com.solvitaire.solitaire.ui.handlers.qj_0Handler;
import com.solvitaire.solitaire.ui.handlers.ql_0Handler;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.util.qn_0;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.ui.handlers.qr_0Handler;
import com.solvitaire.solitaire.ui.handlers.qt_0Handler;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.ui.handlers.qu_0Handler;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.ui.handlers.qv_0Handler;
import com.solvitaire.solitaire.challenge.ChallengeSolver;
import com.solvitaire.solitaire.ui.handlers.qz_0Handler;
import com.solvitaire.solitaire.ui.handlers.raHandler;
import com.solvitaire.solitaire.ui.handlers.ra_0Handler;
import com.solvitaire.solitaire.ui.handlers.rbHandler;
import com.solvitaire.solitaire.ui.handlers.rb_0Handler;
import com.solvitaire.solitaire.ui.handlers.rcHandler;
import com.solvitaire.solitaire.ui.handlers.rc_0Handler;
import com.solvitaire.solitaire.ui.handlers.rdHandler;
import com.solvitaire.solitaire.ui.handlers.rd_0Handler;
import com.solvitaire.solitaire.ui.handlers.reHandler;
import com.solvitaire.solitaire.ui.handlers.re_0Handler;
import com.solvitaire.solitaire.ui.handlers.rfHandler;
import com.solvitaire.solitaire.util.rf_0;
import com.solvitaire.solitaire.ui.handlers.rgHandler;
import com.solvitaire.solitaire.ui.handlers.rg_0Handler;
import com.solvitaire.solitaire.ui.handlers.rhHandler;
import com.solvitaire.solitaire.ui.handlers.rh_0Handler;
import com.solvitaire.solitaire.ui.handlers.riHandler;
import com.solvitaire.solitaire.ui.handlers.ri_0Handler;
import com.solvitaire.solitaire.util.rj;
import com.solvitaire.solitaire.ui.handlers.rj_0Handler;
import com.solvitaire.solitaire.ui.handlers.rkHandler;
import com.solvitaire.solitaire.ui.handlers.rk_0Handler;
import com.solvitaire.solitaire.ui.handlers.rlHandler;
import com.solvitaire.solitaire.ui.handlers.rl_0Handler;
import com.solvitaire.solitaire.ui.handlers.rmHandler;
import com.solvitaire.solitaire.ui.handlers.rm_0Handler;
import com.solvitaire.solitaire.ui.handlers.rnHandler;
import com.solvitaire.solitaire.ui.handlers.rn_0Handler;
import com.solvitaire.solitaire.ui.handlers.roHandler;
import com.solvitaire.solitaire.ui.handlers.ro_0Handler;
import com.solvitaire.solitaire.ui.handlers.rpHandler;
import com.solvitaire.solitaire.ui.handlers.rp_0Handler;
import com.solvitaire.solitaire.ui.handlers.rqHandler;
import com.solvitaire.solitaire.ui.handlers.rq_0Handler;
import com.solvitaire.solitaire.ui.handlers.rrHandler;
import com.solvitaire.solitaire.ui.handlers.rr_0Handler;
import com.solvitaire.solitaire.ui.handlers.rsHandler;
import com.solvitaire.solitaire.ui.handlers.rs_0Handler;
import com.solvitaire.solitaire.ui.handlers.rtHandler;
import com.solvitaire.solitaire.ui.handlers.rt_0Handler;
import com.solvitaire.solitaire.util.ru;
import com.solvitaire.solitaire.ui.handlers.ru_0Handler;
import com.solvitaire.solitaire.ui.handlers.rvHandler;
import com.solvitaire.solitaire.ui.handlers.rv_0Handler;
import com.solvitaire.solitaire.ui.handlers.rwHandler;
import com.solvitaire.solitaire.ui.handlers.rw_0Handler;
import com.solvitaire.solitaire.ui.handlers.rxHandler;
import com.solvitaire.solitaire.util.rx_0;
import com.solvitaire.solitaire.ui.handlers.ryHandler;
import com.solvitaire.solitaire.ui.handlers.ry_0Handler;
import com.solvitaire.solitaire.ui.handlers.rzHandler;
import com.solvitaire.solitaire.ui.handlers.rz_0Handler;
import com.solvitaire.solitaire.ui.panels.saPanel;
import com.solvitaire.solitaire.ui.panels.sbPanel;
import com.solvitaire.solitaire.util.sc;
import com.solvitaire.solitaire.util.se;
import com.solvitaire.solitaire.util.sg;
import com.solvitaire.solitaire.ui.panels.shPanel;
import com.solvitaire.solitaire.util.si;
import java.awt.Color;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.EventQueue;
import java.awt.Font;
import java.awt.FontMetrics;
import java.awt.Image;
import java.awt.geom.Point2D;
import java.awt.image.BaseMultiResolutionImage;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Properties;
import javax.imageio.ImageIO;
import javax.swing.AbstractButton;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JCheckBoxMenuItem;
import javax.swing.JComponent;
import javax.swing.JFileChooser;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.ToolTipManager;
import javax.swing.UIManager;
import javax.swing.border.Border;
import javax.swing.border.CompoundBorder;

/*
 * Renamed from com.solvitaire.app.qB
 */
public final class MainWindow {
    static final Color AboutDialog = new Color(255, 165, 0);
    static final Color b = new Color(127, 127, 255);
    static final Color c = new Color(100, 200, 100);
    public SolitaireGameEngine d;
    public si e;
    private Font X;
    public Font f;
    private FontMetrics Y;
    public JFrame g;
    private String Z;
    public int h;
    public int i;
    public int j;
    public int k;
    private int aa;
    public boolean l;
    private boolean ab;
    private boolean ac = false;
    private sc ad;
    private se ae;
    private se af;
    private se ag;
    private se ah;
    private se ai;
    private se DesktopDuplication;
    private se ak;
    private se al;
    private se am;
    private se an;
    private se ao;
    private se ap;
    private sc aq;
    private se ar;
    private se as;
    private se at;
    private se au;
    public JCheckBoxMenuItem m;
    public JCheckBoxMenuItem n;
    public JCheckBoxMenuItem o;
    public JCheckBoxMenuItem p;
    public JCheckBoxMenuItem q;
    public JCheckBoxMenuItem rPanel;
    public JCheckBoxMenuItem s;
    private JMenuItem av;
    private JMenuItem aw;
    private JMenuItem ax;
    private JMenuItem ay;
    private JMenuItem az;
    private JMenuItem aA;
    public JCheckBoxMenuItem t;
    public JCheckBoxMenuItem uPanel;
    public JCheckBoxMenuItem v;
    public JCheckBoxMenuItem wHandler;
    private sc aB;
    private se aC;
    private se aD;
    private se aE;
    private se aF;
    private se aG;
    private se aH;
    private se aI;
    private sc aJ;
    private se aK;
    private se aL;
    private se aM;
    private se aN;
    private se aO;
    private se aP;
    private se aQ;
    private se aR;
    private se aS;
    private se aT;
    private se aU;
    private se aV;
    private sc aW;
    private se aX;
    private se aY;
    private sc aZ;
    private se ba;
    private se bb;
    private se bc;
    private se bd;
    private se be;
    private se bf;
    private se bg;
    private se bh;
    private se bi;
    private sc bj;
    private se bk;
    private se bl;
    private se bm;
    private JMenuItem bn;
    private JMenuBar bo;
    private JMenu bp;
    private JMenuItem bq;
    private JMenuItem br;
    private JMenuItem bs;
    private JMenuItem bt;
    private JMenuItem bu;
    private JMenu bv;
    private JMenuItem bw;
    private JMenuItem bx;
    private JMenuItem by;
    private JMenuItem bz;
    private JMenuItem bA;
    private JMenuItem bB;
    private JMenuItem bC;
    private JMenuItem bD;
    private JMenu bE;
    private JMenuItem bF;
    private JMenuItem bG;
    private JMenuItem bH;
    private JMenuItem bI;
    private JMenuItem bJ;
    private JMenuItem bK;
    private JMenuItem bL;
    private JMenuItem bM;
    private JMenuItem bN;
    private JMenuItem bO;
    private JMenuItem bP;
    private JMenuItem bQ;
    private JMenuItem bR;
    private JMenuItem bS;
    private JMenuItem bT;
    private JMenuItem bU;
    private JMenuItem bV;
    private JMenuItem bW;
    private JMenuItem bX;
    private JMenuItem bY;
    private JMenuItem bZ;
    private JMenuItem ca;
    private JMenuItem cb;
    private JMenuItem cc;
    private JMenuItem cd;
    private JMenu ce;
    private JMenuItem cf;
    private JMenuItem cg;
    private JMenuItem ch;
    private JMenuItem ci;
    private JMenuItem cj;
    private JMenuItem ck;
    private JMenuItem cl;
    private JMenuItem cm;
    public AboutDialog xHandler;
    private Properties cn = new Properties();
    public Container yHandler;
    public JPanel z;
    public JPanel A;
    JPanel B;
    public JPanel CHandler;
    private saPanel[][] co;
    ModeSelector DHandler;
    shPanel EHandler;
    private JPanel cp;
    private JPanel cq;
    private sbPanel cr;
    private sbPanel cs;
    private sbPanel ct;
    private sbPanel cu;
    private JLabel cv;
    private JLabel cw;
    private JLabel cx;
    private JLabel cy;
    JButton FPanel;
    public sg G;
    JButton H;
    JButton I;
    JButton J;
    public JLabel KHandler = new JLabel(" ");
    public JLabel LHandler = new JLabel(" ");
    private JLabel cz;
    private JLabel cA;
    private ImageIcon cB;
    private ImageIcon cC;
    private ImageIcon cD;
    private ImageIcon cE;
    private ImageIcon cF;
    private ImageIcon cG;
    private ImageIcon cH;
    private ImageIcon cI;
    private ImageIcon cJ;
    private ImageIcon cK;
    private ImageIcon cL;
    private ImageIcon cM;
    ImageIcon MHandler;
    private ImageIcon cN;
    private ImageIcon cO;
    private ImageIcon cP;
    ImageIcon NHandler;
    ImageIcon OHandler;
    private ImageIcon cQ;
    private ImageIcon cR;
    private ImageIcon cS;
    private ImageIcon cT;
    ImageIcon PPanel;
    ImageIcon Q;
    ImageIcon R;
    ImageIcon SPanel;
    private long cU;
    int T = 0;
    private String cV;
    int U;
    String V = " ";
    private int cW;
    private String cX = " ";
    static final Color W = new Color(60, 150, 40);
    private static String[] cY = new String[]{"", "NORMAL", "PLAYBACK", "SOLVE", "UNCHANGED", "GETCARD", "SOLVE_MS", "UNDO", "MOUSEMOVED", "MOUSECONT", "PLAYNEXT", "PLAYDONE", "OPENFILE", "ALLCARDS", "MENUPAUSE", "SOLVECONT", "NOSOLUTION", "FAILED", "COMPLETE", "GAMECHOOSER", "FILECHOOSER", "MODECHOOSER", "PAUSEBUTTON", "UNDOEXPOSE", "EXPOSE", "STATS"};
    private int cZ = -1;
    private int da = -1;
    private Point2D.Double db = new Point2D.Double();
    private boolean dc = false;
    private qc_0 dd = new qc_0(this);
    private qn_0 de = new qn_0(this);
    private ImageIcon df = null;
    private long dg = 0L;
    private qY dh = new qY(this);
    private static Object[] di = new Object[]{"Don't show again", "  OK  "};
    private static Object[] dj = new Object[]{"  OK  "};
    private static Object[] dk = new Object[]{"  OK  ", "Cancel"};

    final ImageIcon AboutDialog(String object) {
        BufferedImage bufferedImage = null;
        try {
            object = this.getClass().getResourceAsStream("/resources/" + (String)object);
            bufferedImage = ImageIO.read((InputStream)object);
        }
        catch (Exception exception) {
            this.d.g("Failed to read image:" + SolitaireGameEngine.AboutDialog(exception));
        }
        double[] dArray = new double[]{0.5, 0.625, 0.75, 0.875, 1.0, 1.125, 1.25, 1.375, 1.5};
        object = dArray;
        int cfr_ignored_0 = dArray.length;
        Image[] imageArray = new BufferedImage[9];
        int n2 = 0;
        while (n2 < 9) {
            imageArray[n2] = SolitaireGameEngine.AboutDialog(bufferedImage, (double)object[n2], (double)object[n2]);
            ++n2;
        }
        return new ImageIcon(new BaseMultiResolutionImage(imageArray));
    }

    public MainWindow(SolitaireGameEngine object) {
        Object object2;
        Object object3;
        this.d = object;
        object = this;
        ((MainWindow)object).cn.clear();
        try {
            SolitaireGameEngine.e(((MainWindow)object).d.as);
            object3 = ((MainWindow)object).d.as + File.separator + "solvitaire.properties";
            if (((MainWindow)object).d.d <= 5) {
                ((MainWindow)object).d.g("Reading properties file " + (String)object3);
            }
            if (!((File)(object2 = new File((String)object3))).exists()) {
                ((File)object2).createNewFile();
                SolitaireGameEngine.e(((MainWindow)object).d.at);
                SolitaireGameEngine.e(((MainWindow)object).d.au);
                SolitaireGameEngine.e(((MainWindow)object).d.au + "klondike");
                SolitaireGameEngine.e(((MainWindow)object).d.au + "spider");
                SolitaireGameEngine.e(((MainWindow)object).d.au + "freecell");
                SolitaireGameEngine.e(((MainWindow)object).d.au + "pyramid");
                SolitaireGameEngine.e(((MainWindow)object).d.au + "tripeaks");
                SolitaireGameEngine.e(((MainWindow)object).d.as + SolitaireGameEngine.q);
                SolitaireGameEngine.e(((MainWindow)object).d.as + SolitaireGameEngine.s);
                SolitaireGameEngine.e(((MainWindow)object).d.as + SolitaireGameEngine.s + "klondike");
                SolitaireGameEngine.e(((MainWindow)object).d.as + SolitaireGameEngine.s + "spider");
                SolitaireGameEngine.e(((MainWindow)object).d.as + SolitaireGameEngine.s + "freecell");
                SolitaireGameEngine.e(((MainWindow)object).d.as + SolitaireGameEngine.s + "pyramid");
                SolitaireGameEngine.e(((MainWindow)object).d.as + SolitaireGameEngine.s + "tripeaks");
                SolitaireGameEngine.e(((MainWindow)object).d.as + SolitaireGameEngine.rPanel);
                object2 = object.getClass().getResourceAsStream("/resources/sampleKlondike.txt");
                object2 = ((InputStream)object2).readAllBytes();
                ((MainWindow)object).d.AboutDialog(((MainWindow)object).d.au + "sampleKlondike.txt", new String((byte[])object2), true);
                object2 = object.getClass().getResourceAsStream("/resources/sampleSpider.txt");
                object2 = ((InputStream)object2).readAllBytes();
                ((MainWindow)object).d.AboutDialog(((MainWindow)object).d.au + "sampleSpider.txt", new String((byte[])object2), true);
                object2 = object.getClass().getResourceAsStream("/resources/sampleFreecell.txt");
                object2 = ((InputStream)object2).readAllBytes();
                ((MainWindow)object).d.AboutDialog(((MainWindow)object).d.au + "sampleFreecell.txt", new String((byte[])object2), true);
                object2 = object.getClass().getResourceAsStream("/resources/samplePyramid.txt");
                object2 = ((InputStream)object2).readAllBytes();
                ((MainWindow)object).d.AboutDialog(((MainWindow)object).d.au + "samplePyramid.txt", new String((byte[])object2), true);
                object2 = object.getClass().getResourceAsStream("/resources/sampleTripeaks.txt");
                object2 = ((InputStream)object2).readAllBytes();
                ((MainWindow)object).d.AboutDialog(((MainWindow)object).d.au + "sampleTripeaks.txt", new String((byte[])object2), true);
            }
            object2 = new FileInputStream(new File((String)object3));
            ((MainWindow)object).cn.load((InputStream)object2);
            ((InputStream)object2).close();
        }
        catch (Exception exception) {
            ((MainWindow)object).d.i("ERROR - Exception loading properties file: " + String.valueOf(exception));
        }
        object3 = ((MainWindow)object).cn.getProperty("pmDebugMode", "notPresent");
        if (!((String)object3).equals("notPresent")) {
            ((MainWindow)object).d.e = ((String)object3).equals("true");
        }
        if (!((String)(object2 = ((MainWindow)object).cn.getProperty("pmTimings", "notPresent"))).equals("notPresent")) {
            ((MainWindow)object).d.f = ((String)object2).equals("true");
        }
        object2 = ((MainWindow)object).cn.getProperty("traceLevel", "9");
        ((MainWindow)object).d.d = Integer.parseInt((String)object2);
    }

    public final void AboutDialog() {
        this.DHandler = new ModeSelector(this.d);
        this.e = new si(this.d);
        try {
            UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
            this.X = new Font("Helvetica", 0, 12);
            this.f = new Font("Helvetica", 0, 11);
            UIManager.put("Label.font", this.X);
            ToolTipManager.sharedInstance().setDismissDelay(3000);
        }
        catch (Exception exception) {
            this.d.i("Error loading Java UIManager:" + exception.getLocalizedMessage());
        }
        this.ad = new sc(this, "playbackDelay", 2);
        MainWindow qb_02 = this;
        this.ae = new se(qb_02, qb_02.ad, 0, "Max speed (will require move retries)");
        MainWindow qb_03 = this;
        this.af = new se(qb_03, qb_03.ad, 50, "Delay 0.05 seconds");
        MainWindow qb_04 = this;
        this.ag = new se(qb_04, qb_04.ad, 100, "Delay 0.1 seconds");
        MainWindow qb_05 = this;
        this.ah = new se(qb_05, qb_05.ad, 200, "Delay 0.2 seconds");
        MainWindow qb_06 = this;
        this.ai = new se(qb_06, qb_06.ad, 300, "Delay 0.3 seconds");
        MainWindow qb_07 = this;
        this.DesktopDuplication = new se(qb_07, qb_07.ad, 400, "Delay 0.4 seconds");
        MainWindow qb_08 = this;
        this.ak = new se(qb_08, qb_08.ad, 500, "Delay 0.5 seconds");
        MainWindow qb_09 = this;
        this.al = new se(qb_09, qb_09.ad, 700, "Delay 0.7 seconds");
        MainWindow qb_010 = this;
        this.am = new se(qb_010, qb_010.ad, 1000, "Delay 1.0 seconds");
        MainWindow qb_011 = this;
        this.an = new se(qb_011, qb_011.ad, 1500, "Delay 1.5 seconds");
        MainWindow qb_012 = this;
        this.ao = new se(qb_012, qb_012.ad, 2000, "Delay 2.0 seconds");
        MainWindow qb_013 = this;
        this.ap = new se(qb_013, qb_013.ad, 5000, "Delay 5.0 seconds");
        this.aq = new sc(this, "gpuGroup", 7);
        MainWindow qb_014 = this;
        this.ar = new se(qb_014, qb_014.aq, 0, "Regular polling rate");
        MainWindow qb_015 = this;
        this.as = new se(qb_015, qb_015.aq, 1, "Fast polling rate");
        MainWindow qb_016 = this;
        this.at = new se(qb_016, qb_016.aq, 2, "Ultra polling rate");
        if (this.d.e) {
            MainWindow qb_017 = this;
            this.au = new se(qb_017, qb_017.aq, 3, "Debug polling rate");
        }
        this.m = new JCheckBoxMenuItem("Allow single click moves");
        this.n = new JCheckBoxMenuItem("In Klondike do not allow move back from ace pile");
        this.o = new JCheckBoxMenuItem("No pause before playing through the solution");
        this.o.setToolTipText("<html>Set this if you want to watch Solvitaire<br>play Microsoft Solitaire Collection games continuously</html>");
        this.p = new JCheckBoxMenuItem("Hide the window displaying moves");
        this.p.setToolTipText("<html>Set this if you do not want the overhead or distraction of Solvitaire<br>displaying AboutDialog window containing the moves it is playing</html>");
        this.q = new JCheckBoxMenuItem("Use 'New' to restart from insoluble games");
        this.rPanel = new JCheckBoxMenuItem("Show board analysis at start");
        this.s = new JCheckBoxMenuItem("Assume reversed board layout");
        this.av = new JMenuItem("Show board snapshot for font diagnostics");
        this.aw = new JMenuItem("Capture scaled tabRect to file");
        this.ax = new JMenuItem("Capture scaled dialogRect to file");
        this.ay = new JMenuItem("Locate orange button in dialog");
        this.az = new JMenuItem("Locate close button in advert");
        this.aA = new JMenuItem("Perform AboutDialog garbage collection");
        this.t = new JCheckBoxMenuItem("Test fonts");
        this.uPanel = new JCheckBoxMenuItem("Disable mouse contention detection");
        this.v = new JCheckBoxMenuItem("Capture all screen grabs");
        this.wHandler = new JCheckBoxMenuItem("Capture failing screen grabs");
        this.aJ = new sc(this, "screensize", 6);
        MainWindow qb_018 = this;
        this.aS = new se(qb_018, qb_018.aJ, 1280, "Small window (prevents ad popup over table)");
        MainWindow qb_019 = this;
        this.aR = new se(qb_019, qb_019.aJ, 1366, "Limit to 1366 pixels wide");
        MainWindow qb_020 = this;
        this.aT = new se(qb_020, qb_020.aJ, 1660, "Limit to 1660 pixels wide");
        MainWindow qb_021 = this;
        this.aU = new se(qb_021, qb_021.aJ, 1920, "Limit to 1920 pixels wide");
        MainWindow qb_022 = this;
        this.aV = new se(qb_022, qb_022.aJ, 2880, "Limit to 2880 pixels wide");
        MainWindow qb_023 = this;
        this.aQ = new se(qb_023, qb_023.aJ, 999999, "No limit on window size (accept performance hit on 4K screens)");
        MainWindow qb_024 = this;
        this.aL = new se(qb_024, qb_024.aJ, 1, "Klondike reference dimensions");
        MainWindow qb_025 = this;
        this.aM = new se(qb_025, qb_025.aJ, 2, "Spider   reference dimensions");
        MainWindow qb_026 = this;
        this.aN = new se(qb_026, qb_026.aJ, 3, "Freecell reference dimensions");
        MainWindow qb_027 = this;
        this.aO = new se(qb_027, qb_027.aJ, 4, "Pyramid  reference dimensions");
        MainWindow qb_028 = this;
        this.aP = new se(qb_028, qb_028.aJ, 5, "Tripeaks reference dimensions");
        MainWindow qb_029 = this;
        this.aK = new se(qb_029, qb_029.aJ, 999999, "Debug settings unavailable at this resolution");
        this.ce = new JMenu("Show statistics");
        this.cf = new JMenuItem("Klondike 1 card deal");
        this.cg = new JMenuItem("Klondike 3 card deal");
        this.ch = new JMenuItem("Spider 1 suit");
        this.ci = new JMenuItem("Spider 2 suit");
        this.cj = new JMenuItem("Spider 4 suit");
        this.ck = new JMenuItem("Freecell");
        this.cl = new JMenuItem("Pyramid");
        this.cm = new JMenuItem("Tripeaks");
        this.aW = new sc(this, "numerical", 3);
        MainWindow qb_030 = this;
        this.aX = new se(qb_030, qb_030.aW, 1, "Numerical statistics");
        MainWindow qb_031 = this;
        this.aY = new se(qb_031, qb_031.aW, 0, "Graphical statistics");
        this.aZ = new sc(this, "tryFor", 5);
        MainWindow qb_032 = this;
        this.ba = new se(qb_032, qb_032.aZ, 0, "No improvement needed");
        MainWindow qb_033 = this;
        this.bb = new se(qb_033, qb_033.aZ, 5000, "Try improving for 5 seconds");
        MainWindow qb_034 = this;
        this.bc = new se(qb_034, qb_034.aZ, 20000, "Try improving for 20 seconds");
        MainWindow qb_035 = this;
        this.bd = new se(qb_035, qb_035.aZ, 60000, "Try improving for 60 seconds");
        MainWindow qb_036 = this;
        this.be = new se(qb_036, qb_036.aZ, 600000, "Try improving for 10 minutes");
        MainWindow qb_037 = this;
        this.bf = new se(qb_037, qb_037.aZ, 3600000, "Try improving for an hour");
        MainWindow qb_038 = this;
        this.bg = new se(qb_038, qb_038.aZ, 36000000, "Try improving for 10 hours");
        MainWindow qb_039 = this;
        this.bh = new se(qb_039, qb_039.aZ, 86400000, "Try improving for AboutDialog day");
        MainWindow qb_040 = this;
        this.bi = new se(qb_040, qb_040.aZ, 864000000, "Try improving for 10 days");
        this.bj = new sc(this, "dealPassLimit", 8);
        MainWindow qb_041 = this;
        this.bk = new se(qb_041, qb_041.bj, 1, "Once through the pack");
        MainWindow qb_042 = this;
        this.bl = new se(qb_042, qb_042.bj, 3, "Three times through the pack");
        MainWindow qb_043 = this;
        this.bm = new se(qb_043, qb_043.bj, 999, "No limit to number of times");
        this.bn = new JMenuItem("Accept the current solution");
        this.rPanel();
        this.bp = new JMenu("Run all historical games");
        this.bq = new JMenuItem("Klondike");
        this.br = new JMenuItem("Spider");
        this.bs = new JMenuItem("Freecell");
        this.bt = new JMenuItem("Pyramid");
        this.bu = new JMenuItem("Tripeaks");
        this.bv = new JMenu("Generate random games");
        this.bw = new JMenuItem("Klondike 1 card");
        this.bx = new JMenuItem("Klondike 3 card");
        this.by = new JMenuItem("Spider 1 suit");
        this.bz = new JMenuItem("Spider 2 suits");
        this.bA = new JMenuItem("Spider 4 suits");
        this.bB = new JMenuItem("Freecell");
        this.bC = new JMenuItem("Pyramid");
        this.bD = new JMenuItem("Tripeaks");
        this.bE = new JMenu("Generate difficlty matrix");
        this.bN = new JMenuItem("Trace difficulties");
        this.bF = new JMenuItem("Klondike 1 card");
        this.bG = new JMenuItem("Klondike 3 card");
        this.bH = new JMenuItem("Spider 1 suit");
        this.bI = new JMenuItem("Spider 2 suits");
        this.bJ = new JMenuItem("Spider 4 suits");
        this.bK = new JMenuItem("Freecell");
        this.bL = new JMenuItem("Pyramid");
        this.bM = new JMenuItem("Tripeaks");
        this.bO = new JMenuItem("Open card file...");
        this.bP = new JMenuItem("Open solution file...");
        this.bQ = new JMenuItem("New game...");
        this.bR = new JMenuItem("Save currently known cards");
        this.bS = new JMenuItem("Log current state of stacks");
        this.bT = new JMenuItem("Exit game and reset");
        this.bT.setToolTipText("<html>Exit the game and start again<br>(but stay in the same mode)</html>");
        this.bU = new JMenuItem("Choose AboutDialog different mode...");
        this.bU.setToolTipText("<html>Choose the mode from:<ul><li>solving Microsoft Solitaire Collection games&nbsp;</li><li>reading games from file</li><li>just playing AboutDialog game</li></ul></html>");
        this.bV = new JMenuItem("License...");
        this.bV.setToolTipText("<html>When the 30 day trial period has expired<br>you can purchase AboutDialog license for unlimited use<br>for AboutDialog small fee</html>");
        this.bW = new JMenuItem("About...");
        this.bX = new JMenuItem("Web site...");
        this.bY = new JMenuItem("Run");
        this.bZ = new JMenuItem("Step");
        this.ca = new JMenuItem("Pause");
        this.cb = new JMenuItem("Undo");
        this.cc = new JMenuItem("Solve AboutDialog specific challenge...");
        this.cc.setToolTipText("<html>Use this if you want to solve AboutDialog specific challenge<br>(such as removing three Jacks from the board)</html>");
        this.cd = new JMenuItem("Playback AboutDialog saved challenge...");
        this.cd.setToolTipText("<html>Once you have solved AboutDialog challenge the solution is stored in AboutDialog file<br>Use this if you want to reload and replay the saved solution</html>");
        this.cB = new ImageIcon(this.getClass().getResource("/resources/alert36.gif"));
        this.cC = new ImageIcon(this.getClass().getResource("/resources/analyze36.gif"));
        this.cD = new ImageIcon(this.getClass().getResource("/resources/gears36.gif"));
        this.cE = new ImageIcon(this.getClass().getResource("/resources/infostatic37.gif"));
        this.cF = new ImageIcon(this.getClass().getResource("/resources/laughing36.gif"));
        this.cG = new ImageIcon(this.getClass().getResource("/resources/pausestatic37.gif"));
        this.cI = new ImageIcon(this.getClass().getResource("/resources/prize36.gif"));
        this.cJ = new ImageIcon(this.getClass().getResource("/resources/puzzledstatic36.gif"));
        this.cK = new ImageIcon(this.getClass().getResource("/resources/skipbackwards36.gif"));
        this.cL = new ImageIcon(this.getClass().getResource("/resources/spinner36.gif"));
        this.cS = new ImageIcon(this.getClass().getResource("/resources/walker36.gif"));
        this.cT = this.AboutDialog("solvitaire64.gif");
        this.cM = this.AboutDialog("stepbutton64.gif");
        this.MHandler = this.AboutDialog("startbutton64.gif");
        this.cN = this.AboutDialog("solvebutton64.gif");
        this.cO = this.AboutDialog("okbutton64.gif");
        this.cP = this.AboutDialog("undobutton64.gif");
        this.NHandler = this.AboutDialog("exposebutton64.gif");
        this.OHandler = this.AboutDialog("hidebutton64.gif");
        this.cQ = this.AboutDialog("startchallenge64.gif");
        this.cR = this.AboutDialog("restartbutton64.gif");
        this.cH = this.AboutDialog("pausebutton64.gif");
        this.PPanel = this.AboutDialog("nocards64.gif");
        this.Q = this.AboutDialog("king.jpg");
        this.R = this.AboutDialog("queen.jpg");
        this.SPanel = this.AboutDialog("jack.jpg");
        this.Z = "Solvitaire";
        this.g = new JFrame(this.Z);
        this.g.setIconImage(this.cT.getImage());
        if (this.d.d <= 5) {
            this.d.g("Constructor setting statusWindow invisible");
        }
        this.g.setVisible(false);
        this.yHandler = this.g.getContentPane();
        this.yHandler.setBackground(this.d.b(0));
        this.z = new JPanel();
        this.z.setOpaque(false);
        this.yHandler.add((Component)this.z, "First");
        this.A = new JPanel();
        this.A.setOpaque(false);
        this.yHandler.add((Component)this.A, "Center");
        this.B = new JPanel();
        this.B.setOpaque(false);
        this.B.setLayout(new BoxLayout(this.B, 0));
        this.yHandler.add((Component)this.B, "Last");
        this.bo = new JMenuBar();
        this.bo.setFocusTraversalKeysEnabled(true);
        this.g.setJMenuBar(this.bo);
        Object object = new JMenu(" Start ");
        ((AbstractButton)object).setMnemonic(83);
        JMenu jMenu = new JMenu(" Settings ");
        jMenu.setMnemonic(84);
        JMenu jMenu2 = new JMenu(" View ");
        jMenu2.setMnemonic(86);
        JMenu jMenu3 = new JMenu(" Debug ");
        jMenu3.setMnemonic(68);
        JMenu jMenu4 = new JMenu(" Help ");
        jMenu4.setMnemonic(72);
        ((JMenu)object).add(this.bT);
        this.bT.setMnemonic(84);
        ((JMenu)object).addSeparator();
        ((JMenu)object).add(this.bU);
        ((JMenu)object).addSeparator();
        ((JMenu)object).add(this.bY);
        this.bY.setMnemonic(82);
        ((JMenu)object).add(this.bZ);
        this.bZ.setMnemonic(83);
        ((JMenu)object).add(this.ca);
        this.ca.setMnemonic(80);
        ((JMenu)object).add(this.cb);
        this.ca.setMnemonic(85);
        ((JMenu)object).addSeparator();
        ((JMenu)object).add(this.cc);
        this.cc.setMnemonic(79);
        ((JMenu)object).add(this.cd);
        this.cd.setMnemonic(76);
        JMenu jMenu5 = new JMenu(" Screen polling frequancy ");
        jMenu5.setToolTipText("<html>Use this option to change the rate<br>that Solvitaire takes AboutDialog snapshot of the screen.<br>High frequency polling puts more load on the GPU.<br> This will slightly speed up playback on high-end graphics cards<br> but will slow down playback on low-end graphics cards.</html>");
        jMenu5.add(this.ar);
        jMenu5.add(this.as);
        jMenu5.add(this.at);
        if (this.d.e) {
            jMenu5.add(this.au);
        }
        jMenu.add(jMenu5);
        jMenu5 = new JMenu(" Playback delay ");
        jMenu5.setToolTipText("<html>Use this to slow down the moves<br>if you want to watch what Solvitaire is doing</html>");
        jMenu5.add(this.ae);
        jMenu5.add(this.af);
        jMenu5.add(this.ag);
        jMenu5.add(this.ah);
        jMenu5.add(this.ai);
        jMenu5.add(this.DesktopDuplication);
        jMenu5.add(this.ak);
        jMenu5.add(this.al);
        jMenu5.add(this.am);
        jMenu5.add(this.an);
        jMenu5.add(this.ao);
        jMenu5.add(this.ap);
        jMenu.add(jMenu5);
        jMenu5.setMnemonic(80);
        jMenu5 = new JMenu(" Score improvement ");
        jMenu5.setToolTipText("<html>The first solution is not necessarily the shortest one<br>You can ask Solvitaire to take time to search for AboutDialog shorter one</html>");
        jMenu5.add(this.ba);
        jMenu5.add(this.bb);
        jMenu5.add(this.bc);
        jMenu5.add(this.bd);
        jMenu5.add(this.be);
        jMenu5.add(this.bf);
        jMenu5.add(this.bg);
        jMenu5.add(this.bh);
        jMenu5.add(this.bi);
        jMenu5.addSeparator();
        jMenu5.add(this.bn);
        jMenu.add(jMenu5);
        jMenu5.setMnemonic(83);
        jMenu.add(this.m);
        this.m.setMnemonic(65);
        this.m.setToolTipText("<html>With single click set Solvitaire will choose AboutDialog valid move<br>If running against Microsoft Solitaire Collection then this setting<br>must match Single Tap to Move in the Game Options</html>");
        jMenu.add(this.o);
        this.o.setMnemonic(82);
        this.o.setToolTipText("<html>Set this when running with Microsoft Solitaire Collection if<br>you want Solvitaire to move on to the next game without pausing</html>");
        jMenu.add(this.q);
        this.q.setMnemonic(85);
        this.q.setToolTipText("<html>Suppress the insoluble error message and continue<br>(A few Klondike 3 card deals from Microsoft Solitaire are insoluble)</html>");
        jMenu.add(this.n);
        this.n.setToolTipText("<html>In Klondike it is not permitted to move cards back<br>from an ace pile to add to AboutDialog run</html>");
        jMenu5 = new JMenu(" Klondike Pass Limit ");
        jMenu5.setToolTipText("<html>Limit the number of times Solvitaire is permitted to <br>return to the start of the stack of cards to be dealt.</html>");
        jMenu5.add(this.bm);
        jMenu5.add(this.bk);
        jMenu5.add(this.bl);
        jMenu.add(jMenu5);
        jMenu.addSeparator();
        jMenu.add(this.bV);
        this.bV.setMnemonic(76);
        this.bV.setToolTipText("Takes you to AboutDialog web page where you can purchase AboutDialog license for AboutDialog small fee");
        jMenu2.add(this.ce);
        this.ce.add(this.cf);
        this.ce.add(this.cg);
        this.ce.add(this.ch);
        this.ce.add(this.ci);
        this.ce.add(this.cj);
        this.ce.add(this.ck);
        this.ce.add(this.cl);
        this.ce.add(this.cm);
        jMenu2.add(this.p);
        jMenu2.addSeparator();
        jMenu2.add(this.aQ);
        this.aQ.setToolTipText("<html>If you get slow or jerky card movement<br>with Microsoft Solitaire on AboutDialog UHD screen then you<br>can reduce the window size that Solviaire will set</html>");
        if (this.d.e) {
            if (this.d.CHandler.width == 1920 && this.d.H == 1.25) {
                jMenu2.add(this.aL);
                jMenu2.add(this.aM);
                jMenu2.add(this.aN);
                jMenu2.add(this.aO);
                jMenu2.add(this.aP);
            } else {
                jMenu2.add(this.aK);
            }
        }
        if (this.d.CHandler.width >= 1920) {
            jMenu2.add(this.aS);
            jMenu2.add(this.aR);
        }
        if (this.d.CHandler.width > 1920) {
            jMenu2.add(this.aT);
            jMenu2.add(this.aU);
            jMenu2.add(this.aV);
        }
        if (this.d.e) {
            jMenu2.addSeparator();
            jMenu2.add(this.aY);
            jMenu2.add(this.aX);
        }
        jMenu5 = new JMenu(" Log level");
        jMenu5.add(this.aC);
        jMenu5.add(this.aD);
        jMenu5.add(this.aE);
        jMenu5.add(this.aF);
        jMenu5.add(this.aG);
        jMenu5.add(this.aH);
        jMenu5.add(this.aI);
        jMenu3.add(this.bR);
        this.bR.setMnemonic(83);
        jMenu3.add(this.bS);
        jMenu3.add(jMenu5);
        jMenu3.add(this.rPanel);
        jMenu3.add(this.av);
        if (this.d.e) {
            jMenu3.add(this.s);
            jMenu3.add(this.aA);
            jMenu3.add(this.aw);
            jMenu3.add(this.ax);
            jMenu3.add(this.ay);
            jMenu3.add(this.az);
            jMenu3.add(this.t);
            jMenu3.add(this.uPanel);
            jMenu3.add(this.v);
            jMenu3.add(this.wHandler);
            jMenu3.addSeparator();
            jMenu3.add(this.bp);
            this.bp.add(this.bq);
            this.bp.add(this.br);
            this.bp.add(this.bs);
            this.bp.add(this.bt);
            this.bp.add(this.bu);
            jMenu3.add(this.bv);
            this.bv.add(this.bw);
            this.bv.add(this.bx);
            this.bv.add(this.by);
            this.bv.add(this.bz);
            this.bv.add(this.bA);
            this.bv.add(this.bB);
            this.bv.add(this.bC);
            this.bv.add(this.bD);
            jMenu3.add(this.bE);
            this.bE.add(this.bF);
            this.bE.add(this.bG);
            this.bE.add(this.bH);
            this.bE.add(this.bI);
            this.bE.add(this.bJ);
            this.bE.add(this.bK);
            this.bE.add(this.bL);
            this.bE.add(this.bM);
            jMenu3.add(this.bN);
        }
        jMenu4.add(this.bW);
        this.bW.setMnemonic(65);
        jMenu4.add(this.bX);
        this.bX.setMnemonic(87);
        this.bo.add((JMenu)object);
        this.bo.add(jMenu);
        this.bo.add(jMenu2);
        this.bo.add(jMenu3);
        this.bo.add(jMenu4);
        this.bo.add(Box.createHorizontalGlue());
        object = this;
        ((MainWindow)object).bq.addActionListener(new qf_0Handler((MainWindow)object));
        ((MainWindow)object).br.addActionListener(new qg_0Handler((MainWindow)object));
        ((MainWindow)object).bs.addActionListener(new qh_0Handler((MainWindow)object));
        ((MainWindow)object).bt.addActionListener(new qIHandler((MainWindow)object));
        ((MainWindow)object).bu.addActionListener(new qj_0Handler((MainWindow)object));
        ((MainWindow)object).cf.addActionListener(new qKHandler((MainWindow)object));
        ((MainWindow)object).cg.addActionListener(new ql_0Handler((MainWindow)object));
        ((MainWindow)object).ch.addActionListener(new qMHandler((MainWindow)object));
        ((MainWindow)object).ci.addActionListener(new qOHandler((MainWindow)object));
        ((MainWindow)object).cj.addActionListener(new qPHandler((MainWindow)object));
        ((MainWindow)object).ck.addActionListener(new qQHandler((MainWindow)object));
        ((MainWindow)object).cl.addActionListener(new qr_0Handler((MainWindow)object));
        ((MainWindow)object).cm.addActionListener(new qSHandler((MainWindow)object));
        ((MainWindow)object).av.addActionListener(new qt_0Handler((MainWindow)object));
        ((MainWindow)object).aw.addActionListener(new qu_0Handler((MainWindow)object));
        ((MainWindow)object).ax.addActionListener(new qv_0Handler((MainWindow)object));
        ((MainWindow)object).ay.addActionListener(new qWHandler((MainWindow)object));
        ((MainWindow)object).az.addActionListener(new qXHandler((MainWindow)object));
        ((MainWindow)object).aA.addActionListener(new qz_0Handler((MainWindow)object));
        ((MainWindow)object).bw.addActionListener(new raHandler((MainWindow)object));
        ((MainWindow)object).bx.addActionListener(new rbHandler((MainWindow)object));
        ((MainWindow)object).by.addActionListener(new rcHandler((MainWindow)object));
        ((MainWindow)object).bz.addActionListener(new rdHandler((MainWindow)object));
        ((MainWindow)object).bA.addActionListener(new reHandler((MainWindow)object));
        ((MainWindow)object).bB.addActionListener(new rfHandler((MainWindow)object));
        ((MainWindow)object).bC.addActionListener(new rgHandler((MainWindow)object));
        ((MainWindow)object).bD.addActionListener(new rhHandler((MainWindow)object));
        ((MainWindow)object).bF.addActionListener(new riHandler((MainWindow)object));
        ((MainWindow)object).bG.addActionListener(new rkHandler((MainWindow)object));
        ((MainWindow)object).bH.addActionListener(new rlHandler((MainWindow)object));
        ((MainWindow)object).bI.addActionListener(new rmHandler((MainWindow)object));
        ((MainWindow)object).bJ.addActionListener(new rnHandler((MainWindow)object));
        ((MainWindow)object).bK.addActionListener(new roHandler((MainWindow)object));
        ((MainWindow)object).bL.addActionListener(new rpHandler((MainWindow)object));
        ((MainWindow)object).bM.addActionListener(new rqHandler((MainWindow)object));
        ((MainWindow)object).bN.addActionListener(new rrHandler((MainWindow)object));
        ((MainWindow)object).bU.addActionListener(new rsHandler((MainWindow)object));
        ((MainWindow)object).bQ.addActionListener(new rtHandler((MainWindow)object));
        ((MainWindow)object).bO.addActionListener(new rvHandler((MainWindow)object));
        ((MainWindow)object).bP.addActionListener(new rwHandler((MainWindow)object));
        ((MainWindow)object).bT.addActionListener(new rxHandler((MainWindow)object));
        ((MainWindow)object).bY.addActionListener(new ryHandler((MainWindow)object));
        ((MainWindow)object).bZ.addActionListener(new rzHandler((MainWindow)object));
        ((MainWindow)object).ca.addActionListener(new ra_0Handler((MainWindow)object));
        ((MainWindow)object).cb.addActionListener(new rb_0Handler((MainWindow)object));
        ((MainWindow)object).bR.addActionListener(new rc_0Handler((MainWindow)object));
        ((MainWindow)object).bS.addActionListener(new rd_0Handler((MainWindow)object));
        ((MainWindow)object).q.addActionListener(new re_0Handler((MainWindow)object));
        ((MainWindow)object).o.addActionListener(new rg_0Handler((MainWindow)object));
        ((MainWindow)object).p.addActionListener(new rh_0Handler((MainWindow)object));
        ((MainWindow)object).bn.addActionListener(new ri_0Handler((MainWindow)object));
        ((MainWindow)object).m.addActionListener(new rj_0Handler((MainWindow)object));
        ((MainWindow)object).n.addActionListener(new rk_0Handler((MainWindow)object));
        ((MainWindow)object).t.addActionListener(new rl_0Handler((MainWindow)object));
        ((MainWindow)object).uPanel.addActionListener(new rm_0Handler((MainWindow)object));
        ((MainWindow)object).v.addActionListener(new rn_0Handler((MainWindow)object));
        ((MainWindow)object).wHandler.addActionListener(new ro_0Handler((MainWindow)object));
        ((MainWindow)object).rPanel.addActionListener(new rp_0Handler((MainWindow)object));
        ((MainWindow)object).s.addActionListener(new rr_0Handler((MainWindow)object));
        ((MainWindow)object).cc.addActionListener(new rs_0Handler((MainWindow)object));
        ((MainWindow)object).cd.addActionListener(new rt_0Handler((MainWindow)object));
        ((MainWindow)object).bV.addActionListener(new ru_0Handler((MainWindow)object));
        ((MainWindow)object).bW.addActionListener(new rv_0Handler((MainWindow)object));
        ((MainWindow)object).bX.addActionListener(new rw_0Handler((MainWindow)object));
        this.g.addWindowListener(new rj(this));
        this.g.addWindowFocusListener(new ru(this));
        this.g.addComponentListener(new rf_0(this));
        this.yHandler.setFont(this.X);
        this.Y = this.yHandler.getFontMetrics(this.X);
        this.g.revalidate();
        this.g.repaint();
        if (this.d.d <= 4) {
            this.d.g("Starting status thread");
        }
        this.dh.start();
        if (this.d.d <= 4) {
            this.d.g("Status thread started");
        }
    }

    final void AboutDialog(int n2, String string) {
        if (this.d.d <= 5) {
            MainWindow qb_02 = this;
            this.d.g("Set pause mode " + cY[5] + " msg " + string + " from " + qb_02.d.i());
        }
        this.cX = string;
        this.AboutDialog(5);
    }

    public final void AboutDialog(int n2) {
        if (this.d.d <= 5) {
            MainWindow qb_02 = this;
            this.d.g("Set pause mode " + cY[n2] + " from " + qb_02.d.i());
        }
        this.d.aQ = false;
        this.d.MHandler = n2;
        switch (n2) {
            case 1: {
                this.G.setIcon(this.MHandler);
                this.G.setToolTipText("Play the solution");
                this.e("Press Run or Step to play the solution");
                this.d.aQ = this.d.Z > 0;
                break;
            }
            case 24: {
                this.G.setIcon(this.MHandler);
                this.G.setToolTipText("Expose unknown card");
                this.e("Press Run or Step to expose unknown card");
                this.d.aQ = false;
                break;
            }
            case 3: {
                this.G.setIcon(this.cN);
                this.G.setToolTipText("Solve this game");
                this.e("Make AboutDialog move, choose AboutDialog challenge or press ? to solve board");
                this.d.aP = false;
                break;
            }
            case 15: {
                this.G.setIcon(this.cN);
                this.G.setToolTipText("Solve this game");
                this.e("Make AboutDialog move or press ? to try AboutDialog solve from here");
                this.d.aQ = this.d.aY.h > 0;
                break;
            }
            case 6: {
                if (this.G != null) {
                    this.G.setIcon(this.cN);
                    this.G.setToolTipText("Solve AboutDialog Microsoft Solitaire Collection game");
                }
                this.e("Choose AboutDialog challenge or press ? to solve board");
                break;
            }
            case 5: {
                this.G.setIcon(this.cO);
                this.G.setToolTipText("Confirm your card choice");
                MainWindow qb_03 = this;
                qb_03.e(qb_03.cX);
                this.d.aP = false;
                break;
            }
            case 13: {
                this.G.setIcon(this.cN);
                MainWindow qb_04 = this;
                qb_04.e("Press Run to solve saved " + qb_04.d.l.q + " games starting at cards" + this.d.l.AboutDialog(false));
                break;
            }
            case 2: {
                if (this.G == null) break;
                this.G.setIcon(this.cQ);
                this.G.setToolTipText("Play through the challenge");
                MainWindow qb_05 = this;
                qb_05.e("Press Run for " + qb_05.d.l.k());
                break;
            }
            case 4: {
                this.e(null);
                break;
            }
            case 7: {
                this.e("Press Run or Step to undo moves");
                this.d.aQ = false;
                break;
            }
            case 23: {
                this.e("Press Run or Step to undo moves");
                this.G.setIcon(this.MHandler);
                this.G.setToolTipText("Run the undo");
                this.d.aQ = false;
                this.d.aP = true;
                break;
            }
            case 8: {
                this.e("Paused because the mouse moved off <br>the Solitaire window");
                this.G.setIcon(this.MHandler);
                this.G.setToolTipText("Continue");
                this.d.aP = true;
                this.d.aQ = true;
                break;
            }
            case 9: {
                this.e("Paused due to mouse contention");
                this.G.setIcon(this.MHandler);
                this.G.setToolTipText("Continue");
                this.d.aP = true;
                this.d.aQ = true;
                break;
            }
            case 10: {
                int n3 = this.d.l.g() - 1;
                String string = this.d.l.k();
                if (this.d.d <= 5) {
                    this.d.g("Completed playback of " + n3 + " prompt for " + string);
                }
                this.e("Playback complete for challenge " + n3 + "<br>Press Run to play " + string);
                break;
            }
            case 11: {
                int n4 = this.d.l.g() - 1;
                if (this.d.d <= 5) {
                    this.d.g("Completed playback of " + n4 + " and no more so return to normal mode");
                }
                this.e("Playback complete for challenge " + n4);
                break;
            }
            case 12: {
                this.e("Open AboutDialog new file");
                break;
            }
            case 14: {
                this.e("Paused because it looks like<br>the Solitaire menu is pulled down");
                this.G.setIcon(this.MHandler);
                this.G.setToolTipText("Continue");
                break;
            }
            case 16: {
                this.e("No solution exists at this level.  You must undo from here");
                this.d.aQ = true;
                break;
            }
            case 17: {
                this.d.i("Failed to solve this board.  Did you choose AboutDialog random seed or set an impossible challenge?");
                break;
            }
            case 18: {
                this.e("Run complete");
                break;
            }
            case 19: {
                this.e("Choose the game you want to play");
                break;
            }
            case 20: {
                this.e("Choose the card or solution file");
                break;
            }
            case 21: {
                this.e("Choose the mode");
                break;
            }
            case 22: {
                this.G.setIcon(this.MHandler);
                this.G.setToolTipText("Continue");
                this.e("Pause button pressed");
                if (!this.d.uPanel) break;
                this.d.aQ = true;
                break;
            }
            case 25: {
                this.e("Hit OK when done");
                break;
            }
            default: {
                this.d.i("Invalid pause mode " + n2);
            }
        }
        if (this.G != null) {
            this.G.setEnabled(true);
            this.G.setFocusable(true);
            this.bY.setEnabled(true);
            this.FPanel.setEnabled(this.d.aP);
            if (this.d.aP) {
                this.FPanel.setFocusable(this.d.aP);
            }
            this.bZ.setEnabled(this.d.aP);
            this.H.setEnabled(false);
            this.ca.setEnabled(false);
            this.I.setEnabled(this.d.aQ);
            if (this.d.aQ) {
                this.I.setFocusable(this.d.aQ);
            }
            this.cb.setEnabled(this.d.aQ);
            this.cc.setEnabled(n2 == 6 || n2 == 3);
            this.cd.setEnabled(n2 == 6 || n2 == 3);
        } else {
            this.bY.setEnabled(false);
            this.bZ.setEnabled(false);
            this.ca.setEnabled(false);
            this.cb.setEnabled(false);
            this.cc.setEnabled(false);
            this.cd.setEnabled(false);
        }
        this.ce.setEnabled(n2 != 6 && n2 != 12);
    }

    final void b() {
        boolean bl2;
        int n2 = this.g.getWidth();
        int n3 = this.g.getHeight();
        int n4 = this.g.getX();
        int n5 = this.g.getY();
        int n6 = this.g.getExtendedState();
        boolean bl3 = bl2 = n2 != this.j || n3 != this.k || n4 != this.h || n5 != this.i || n6 != this.aa;
        if (this.d.d <= 5) {
            this.d.g("Processing resize,  xHandler " + this.h + "->" + n4 + ", yHandler " + this.i + "->" + n5 + ", wHandler " + this.j + "->" + n2 + ", h " + this.k + "->" + n3 + " new state " + n6);
        }
        this.h = n4;
        this.i = n5;
        this.j = n2;
        this.k = n3;
        this.aa = n6;
        if (this.d.uPanel) {
            if (bl2) {
                this.l = true;
                this.g.repaint();
                if (this.d.d <= 5) {
                    this.d.g("Standalone UI frame resized to" + this.j + "," + this.k + " flagged redoLayout");
                }
                if (this.dc) {
                    if (this.d.d <= 5) {
                        this.d.g("Capturing resizes so storing size " + this.j + "xHandler" + this.k);
                    }
                    Properties properties = this.cn;
                    synchronized (properties) {
                        if (this.aa == 0) {
                            this.cn.setProperty("statusX", "" + this.h);
                            this.cn.setProperty("statusY", "" + this.i);
                            this.cn.setProperty("statusWidth", "" + this.j);
                            this.cn.setProperty("statusHeight", "" + this.k);
                        }
                        this.cn.setProperty("statusState", "" + this.aa);
                        this.t();
                    }
                }
            } else if (this.d.d <= 5) {
                this.d.g("No change to size/position so ignoring");
            }
        }
        if (this.e != null) {
            this.e.b();
        }
    }

    final void c() {
        this.dc = true;
        this.d.uPanel = true;
        this.d.br.b();
        this.bT.setEnabled(true);
    }

    private void uPanel() {
        if (this.d.d <= 4) {
            this.d.g("Clear UI for new dialog");
        }
        this.g.setVisible(false);
        this.G = null;
        this.dc = false;
        this.d.uPanel = false;
        this.d.t = false;
        this.d.m = 0;
        this.z.removeAll();
        this.z.setOpaque(false);
        this.A.removeAll();
        this.B.removeAll();
        this.yHandler.setBackground(this.d.b(0));
        this.B.setBackground(this.d.b(0));
    }

    public final void d() {
        this.uPanel();
        this.DHandler.b();
        this.c(1);
        this.AboutDialog(19);
        this.bT.setEnabled(false);
    }

    public final void e() {
        this.uPanel();
        this.DHandler.c();
        this.c(4);
        this.AboutDialog(20);
        this.bT.setEnabled(false);
    }

    public final void f() {
        this.uPanel();
        this.e.AboutDialog = null;
        this.DHandler.AboutDialog();
        this.c(0);
        this.AboutDialog(21);
        this.bT.setEnabled(false);
    }

    public final void g() {
        this.uPanel();
        this.e.AboutDialog = null;
        this.c(5);
        this.DHandler.d();
        this.AboutDialog(25);
        this.bT.setEnabled(false);
    }

    final JLabel h() {
        this.cA = new JLabel("Status");
        CompoundBorder compoundBorder = BorderFactory.createCompoundBorder(BorderFactory.createLoweredBevelBorder(), BorderFactory.createEmptyBorder(5, 5, 5, 5));
        this.cA.setBorder(compoundBorder);
        return this.cA;
    }

    public final void AboutDialog(boolean bl2) {
        Object object;
        if (this.d.d <= 5) {
            this.d.g("Into setupMSUI");
        }
        if (this.d.g && !this.b("singleTapWarned", false)) {
            JOptionPane.showInternalMessageDialog(null, "You have the \"single tap to move\" option set.\nFor this to work you must have the same option\nset within Microsoft Solitaire Collection\n", "Single tap to move is set", 1);
            object = this.cn;
            synchronized (object) {
                this.cn.setProperty("singleTapWarned", "true");
                this.t();
            }
        }
        if (!this.d.k()) {
            this.d.AboutDialog("Failed to initialize Direct3D", true);
        }
        this.d.ar = null;
        this.d.m = 0;
        this.bT.setEnabled(true);
        this.uPanel();
        this.d.t = true;
        this.dc = true;
        this.A.setLayout(new BoxLayout(this.A, 1));
        this.A.setBorder(BorderFactory.createEmptyBorder(0, 10, 0, 10));
        this.X = new Font("Helvetica", 1, 12);
        this.z.setLayout(new BoxLayout(this.z, 0));
        this.KHandler = new JLabel(" ");
        this.KHandler.setFont(this.X);
        this.LHandler = new JLabel(" ");
        this.LHandler.setFont(this.X);
        this.KHandler.setBorder(BorderFactory.createEmptyBorder(5, 0, 5, 0));
        this.LHandler.setBorder(BorderFactory.createEmptyBorder(5, 0, 5, 0));
        this.z.add(Box.createHorizontalGlue());
        this.z.add(this.KHandler);
        this.z.add(this.LHandler);
        this.z.add(Box.createHorizontalGlue());
        object = new JPanel();
        ((JComponent)object).setOpaque(false);
        ((Container)object).setLayout(new BoxLayout((Container)object, 0));
        this.CHandler = new JPanel();
        this.CHandler.setOpaque(false);
        ((Container)object).add(this.CHandler);
        this.A.add(Box.createVerticalGlue());
        this.A.add((Component)object);
        ((JComponent)object).setPreferredSize(new Dimension(300, 300));
        this.A.add(Box.createVerticalGlue());
        this.i();
        this.A.add(this.EHandler);
        this.A.add(Box.createVerticalGlue());
        this.A.add(Box.createVerticalStrut(6));
        object = new JPanel();
        ((JComponent)object).setOpaque(false);
        ((Container)object).setLayout(new BoxLayout((Container)object, 0));
        this.A.add((Component)object);
        this.A.add(Box.createVerticalStrut(6));
        JPanel jPanel = this.b(false);
        ((Container)object).add(jPanel);
        ((Container)object).add(Box.createHorizontalStrut(4));
        object = this.h();
        this.B.add((Component)object);
        this.B.setBackground(this.d.b(0));
        this.B.setBorder(BorderFactory.createEmptyBorder());
        this.c(3);
        this.dc = true;
        int n2 = 1;
        object = this;
        ((MainWindow)object).c(n2, null);
        if (bl2) {
            this.AboutDialog(6);
        }
        this.d.j();
    }

    final void i() {
        if (this.d.d <= 5) {
            this.d.g("Setup stats");
        }
        this.EHandler = new shPanel(this);
        this.EHandler.setOpaque(true);
        this.EHandler.setBackground(this.d.b(0));
        this.EHandler.setLayout(new BoxLayout(this.EHandler, 0));
        this.cp = new JPanel();
        this.cp.setOpaque(false);
        this.cp.setLayout(new BoxLayout(this.cp, 1));
        this.EHandler.add(this.cp);
        this.EHandler.add(Box.createHorizontalGlue());
        this.cq = new JPanel();
        this.cq.setOpaque(false);
        this.cq.setLayout(new BoxLayout(this.cq, 1));
        this.EHandler.add(this.cq);
        this.cr = null;
        this.cv = null;
    }

    final JPanel b(boolean bl2) {
        int n2 = bl2 ? 4 : 8;
        JPanel jPanel = new JPanel();
        jPanel.setOpaque(false);
        jPanel.setLayout(new BoxLayout(jPanel, 0));
        JPanel jPanel2 = new JPanel();
        jPanel2.setOpaque(false);
        jPanel2.setLayout(new BoxLayout(jPanel2, 0));
        jPanel2.add(Box.createHorizontalStrut(n2 / 2));
        this.G = new sg(this);
        this.G.setPreferredSize(new Dimension(40, 40));
        this.G.setMaximumSize(new Dimension(40, 40));
        jPanel2.add(this.G);
        jPanel2.add(Box.createHorizontalStrut(n2));
        this.G.setFocusable(true);
        this.FPanel = new JButton(this.cM);
        this.FPanel.setPreferredSize(new Dimension(40, 40));
        this.FPanel.setMaximumSize(new Dimension(40, 40));
        jPanel2.add(this.FPanel);
        jPanel2.add(Box.createHorizontalStrut(n2));
        this.FPanel.setFocusable(true);
        this.FPanel.setToolTipText("Step forward one move");
        this.H = new JButton(this.cH);
        this.H.setPreferredSize(new Dimension(40, 40));
        this.H.setMaximumSize(new Dimension(40, 40));
        jPanel2.add(this.H);
        this.H.setFocusable(true);
        this.H.setToolTipText("Pause the replay");
        jPanel2.add(Box.createHorizontalStrut(n2));
        this.I = new JButton(this.cP);
        this.I.setPreferredSize(new Dimension(40, 40));
        this.I.setMaximumSize(new Dimension(40, 40));
        jPanel2.add(this.I);
        this.I.setFocusable(true);
        this.I.setToolTipText("Step back one move");
        jPanel2.add(Box.createHorizontalStrut(n2 / 2));
        jPanel.add(jPanel2);
        jPanel.add(Box.createHorizontalStrut(n2 << 1));
        this.cz = new JLabel("");
        Border border = BorderFactory.createEtchedBorder(0);
        this.cz.setBorder(border);
        jPanel.add(this.cz);
        this.cz.setPreferredSize(new Dimension(42, 42));
        this.cz.setMaximumSize(new Dimension(42, 42));
        this.cz.setToolTipText("This icon represents the current state of play");
        if (bl2) {
            jPanel.add(Box.createHorizontalGlue());
            this.J = new JButton(this.NHandler);
            this.J.setPreferredSize(new Dimension(40, 40));
            this.J.setMaximumSize(new Dimension(40, 40));
            jPanel.add(this.J);
            this.J.setFocusable(true);
            this.J.setToolTipText("Display the cards that are not yet exposed");
            this.J.addActionListener(new rq_0Handler(this));
        }
        this.I.addActionListener(new ry_0Handler(this));
        this.FPanel.addActionListener(new rz_0Handler(this));
        this.G.addActionListener(new qd_0Handler(this));
        this.H.addActionListener(new qe_0Handler(this));
        return jPanel;
    }

    final void AboutDialog(String string, int n2) {
        this.d.uPanel = true;
        if (this.d.br == null) {
            this.d.br = new ChallengeSolver(this.d);
        }
        if (this.d.br.e == null) {
            this.d.bk = "Easy";
        }
        this.d.bg = 5;
        this.d.br.AboutDialog(string, n2, this.d.bk);
        this.d.c(14);
    }

    final void b(String string, int n2) {
        int n3 = this.e("How many files to generate?", "Enter number of files");
        if (n3 > 0) {
            String string2 = this.d.as + SolitaireGameEngine.p + string + String.valueOf(n2 > 0 ? Integer.valueOf(n2) : "");
            this.d.l.AboutDialog(string2, false);
            int n4 = 0;
            while (n4 < n3) {
                if (this.d.d <= 9) {
                    this.d.g("***Generating analysis file " + n4 + " for " + string + ",1");
                }
                String string3 = ModeSelector.AboutDialog(string, n2, n4);
                this.d.AboutDialog(this.d.l.p + "cards" + n4 + ".txt", string3, true);
                ++n4;
            }
            this.d.l.AboutDialog(n3);
        }
    }

    public final void j() {
        this.d.AboutDialog(this.db);
        this.d.aR = true;
        this.ac = true;
        MainWindow qb_02 = this;
        qb_02.c(true);
    }

    final void b(int n2, String string) {
        this.AboutDialog(n2, string, "");
    }

    final void AboutDialog(int n2, String object2, String string) {
        if (this.d.d <= 5) {
            this.d.g("Entered menuRequest with request " + n2);
        }
        if (n2 == 5) {
            if (this.d.d <= 5) {
                this.d.g("menuRequest request to save file");
            }
            if (this.d.ao != null) {
                object2 = new StringBuffer();
                this.d.ao.AboutDialog((StringBuffer)object2);
                this.d.AboutDialog(this.d.at + "allknowncards.txt", ((StringBuffer)object2).toString(), true);
                this.d.aq.c("Debug cards saved", "The currently identified cards have been saved to " + this.d.at + "allknowncards.txt");
                return;
            }
        } else {
            boolean bl2;
            if (n2 == 6) {
                if (this.d.ao == null) {
                    return;
                }
                CardStack[] qvArray = this.d.aY.AboutDialog;
                int n3 = this.d.aY.AboutDialog.length;
                n2 = 0;
                while (n2 < n3) {
                    object2 = qvArray[n2];
                    if (object2 != null) {
                        Card[] quArray = ((CardStack)object2).f;
                        int n4 = ((CardStack)object2).f.length;
                        int n5 = 0;
                        while (n5 < n4) {
                            object2 = quArray[n5];
                            StringBuffer stringBuffer = new StringBuffer();
                            stringBuffer.append("Stack ");
                            stringBuffer.append(object2);
                            stringBuffer.append(": ");
                            for (Object object2 : ((Card)object2).e) {
                                int n6 = 0;
                                while (n6 < ((CardRun)object2).AboutDialog) {
                                    SolitaireSolver cfr_ignored_0 = this.d.ao;
                                    stringBuffer.append(SolitaireSolver.b(((CardRun)object2).c[n6]));
                                    stringBuffer.append(",");
                                    ++n6;
                                }
                            }
                            this.d.g(stringBuffer.toString());
                            ++n5;
                        }
                    }
                    ++n2;
                }
                return;
            }
            this.d.yHandler = false;
            this.d.l.l();
            this.d.e();
            this.d.d();
            this.d.l.rPanel = false;
            if (n2 == 4) {
                if (this.d.d <= 5) {
                    this.d.g("menuRequest request to run all cards");
                }
                this.d.l.AboutDialog(this.d.au + (String)object2 + File.separator, false);
                this.d.l.q = object2;
                this.d.m = 1;
                this.d.c(4);
                return;
            }
            if (n2 == 11) {
                if (this.d.d <= 5) {
                    this.d.g("menuRequest request to generate difficulty matrix");
                }
                this.d.l.AboutDialog(this.d.as + SolitaireGameEngine.p + (String)object2 + string + File.separator, false);
                this.d.bp = 30000;
                this.d.l.q = object2;
                this.d.m = 1;
                this.d.c(4);
                return;
            }
            if (n2 == 3) {
                if (this.d.d <= 5) {
                    this.d.g("menuRequest request to play back AboutDialog challenge");
                }
                this.d.l.AboutDialog();
                new qbFrame(this.d);
                this.d.AboutDialog(500L, "Allow dialog to close");
                return;
            }
            if (n2 == 2) {
                boolean bl3 = this.b(null);
                if (bl3) {
                    if (this.d.d <= 5) {
                        this.d.g("Passing request " + n2 + " to deferred handler");
                    }
                    this.d.c(2);
                    return;
                }
            } else if (n2 == 7 && (bl2 = this.c(null))) {
                if (this.d.d <= 5) {
                    this.d.g("Passing request " + n2 + " to deferred handler");
                }
                this.d.c(7);
            }
        }
    }

    final boolean b(String object) {
        boolean bl2;
        Object object2;
        if (this.d.d <= 5) {
            this.d.g("menuRequest request to open existing file:" + (String)object);
        }
        if (object == null) {
            object2 = new JFileChooser();
            ((JFileChooser)object2).setCurrentDirectory(new File(this.d.af));
            ((JFileChooser)object2).setFileSelectionMode(2);
            ((JFileChooser)object2).setAcceptAllFileFilterUsed(false);
            ((JFileChooser)object2).addChoosableFileFilter(this.dd);
            int n2 = ((JFileChooser)object2).showOpenDialog(this.g);
            if (n2 != 0) {
                return false;
            }
            object = ((JFileChooser)object2).getSelectedFile();
        } else {
            object = new File((String)object);
        }
        object2 = ((File)object).getParent();
        if (object2 == null) {
            this.d.i("Invalid filename, no parent directory found in:" + ((File)object).getAbsolutePath());
            return false;
        }
        this.d.l.AboutDialog(((File)object).getParent(), false);
        object = ((File)object).getName();
        if (this.d.d <= 5) {
            this.d.g("File selected:" + this.d.l.p + (String)object);
        }
        if (!(bl2 = this.d.l.AboutDialog((String)object))) {
            this.d.i("Error interpreting the card file name");
            return false;
        }
        if (!this.k()) {
            return false;
        }
        this.d.m = 2;
        return true;
    }

    final boolean c(String object) {
        boolean bl2;
        if (this.d.d <= 5) {
            this.d.g("menuRequest request to open AboutDialog solution");
        }
        if (object == null) {
            object = new JFileChooser();
            ((JFileChooser)object).setCurrentDirectory(new File(this.d.af));
            ((JFileChooser)object).setFileSelectionMode(2);
            ((JFileChooser)object).setAcceptAllFileFilterUsed(false);
            ((JFileChooser)object).addChoosableFileFilter(this.de);
            int n2 = ((JFileChooser)object).showOpenDialog(this.g);
            if (n2 != 0) {
                return false;
            }
            object = ((JFileChooser)object).getSelectedFile();
        } else {
            object = new File((String)object);
        }
        this.d.l.AboutDialog(((File)object).getParent(), false);
        object = ((File)object).getName();
        if (this.d.d <= 5) {
            this.d.g("File selected:" + this.d.l.p + (String)object);
        }
        if (!(bl2 = this.d.l.b((String)object))) {
            this.d.i("Error interpreting the solution file name");
            return false;
        }
        String string = this.d.l.d();
        File file = new File(this.d.l.p + string);
        if (!file.exists()) {
            this.d.i("Could not find AboutDialog corresponding card file " + this.d.l.d());
            return false;
        }
        this.d.m = 4;
        return true;
    }

    final boolean k() {
        Object object = this.d.l.f();
        if (object != null && !this.d.ah) {
            int n2 = JOptionPane.showConfirmDialog(null, "This game already has AboutDialog solution file.\nIf you continue it will be replaced by AboutDialog new solution.\nOK to continue?", "Solution Already Exists", 0, 3);
            if (n2 != 0) {
                if (this.d.d <= 5) {
                    this.d.g("Not overwriting existing solution");
                }
                return false;
            }
            if (this.d.d <= 5) {
                this.d.g("Overwriting existing solution");
            }
            try {
                if (this.d.l.p == null || this.d.l.p.equals("") || this.d.l.p.equals(File.separator)) {
                    this.d.i("Invalid directory " + this.d.l.p);
                } else {
                    object = Path.of(this.d.l.p + (String)object, new String[0]);
                    Files.delete((Path)object);
                }
            }
            catch (Exception exception) {
                this.d.g("Error removing solution file:" + exception.getMessage());
                this.d.i("Unexpected error removing old solution file");
            }
        }
        return true;
    }

    public final void l() {
        if (this.ac && this.db != null) {
            this.d.AboutDialog(this.db.xHandler, this.db.yHandler, true);
            this.ac = false;
        }
    }

    private void v() {
        if (this.cr != null) {
            this.cr.AboutDialog();
            this.ct.AboutDialog();
            this.cs.AboutDialog();
            this.cu.AboutDialog();
        }
    }

    final void b(int n2) {
        if (this.d.d <= 4) {
            this.d.g("Setup stats cells, width " + n2);
        }
        if (n2 == 0) {
            return;
        }
        this.cp.removeAll();
        this.cq.removeAll();
        if (this.d.aN) {
            this.cv = MainWindow.AboutDialog(this.cp, n2, "Elapsed");
            this.cx = MainWindow.AboutDialog(this.cp, n2, "Depth");
            this.cw = MainWindow.AboutDialog(this.cq, n2, "Iterations");
            this.cy = MainWindow.AboutDialog(this.cq, n2, "Credit");
            return;
        }
        this.cr = new sbPanel(this, 1, this.cp, n2, "Elapsed");
        this.ct = new sbPanel(this, 3, this.cp, n2, "Depth");
        this.cs = new sbPanel(this, 2, this.cq, n2, "Iterations");
        this.cu = new sbPanel(this, 4, this.cq, n2, "Credit");
    }

    final void m() {
        if (!this.ab) {
            if (this.d.d <= 5) {
                this.d.g("prepareToShow setting statusWindow invisible");
            }
            this.g.setVisible(false);
        }
    }

    public final void n() {
        MainWindow qb_02 = this;
        qb_02.c(qb_02.d.bg);
    }

    public void c(int n2) {
        switch (n2) {
            case 2: 
            case 4: {
                if (n2 == 4 && this.d.m == 0) {
                    if (this.d.d <= 5) {
                        this.d.g("READFILE so set window size to 600x300");
                    }
                    this.AboutDialog(false, 600, 300, 100, 50, 0);
                    break;
                }
                n2 = this.c("statusX", -4);
                int n3 = this.c("statusY", 0);
                int n4 = this.c("statusWidth", -1);
                int n5 = this.c("statusHeight", -1);
                int n6 = this.c("statusState", 0);
                if (n4 < 500) {
                    n4 = this.d.AboutDialog((double)this.d.CHandler.width);
                }
                if (n5 < 400) {
                    n5 = this.d.b((double)this.d.CHandler.height);
                }
                if (this.d.d <= 5) {
                    this.d.g("PLAYGAME (standalone UI) so setting size to " + n4 + "," + n5);
                }
                this.AboutDialog(true, n4, n5, n2, n3, n6);
                break;
            }
            case 3: {
                int n7;
                int n8;
                int n9;
                if (this.d.CHandler != null && this.d.FPanel != null && this.d.FPanel.rPanel != null) {
                    n9 = this.d.AboutDialog((double)(this.d.CHandler.width - this.d.FPanel.rPanel.AboutDialog.width + 2 * this.d.J));
                    if (n9 > 300) {
                        n9 = 300;
                    }
                    if ((n8 = this.d.b((double)this.d.CHandler.height * 0.55)) > 450) {
                        n8 = 450;
                    }
                    if (this.d.d <= 4) {
                        this.d.g("Unscaled Solitaire window height " + this.d.FPanel.rPanel.AboutDialog.height + ", menu height " + this.d.FPanel.s.AboutDialog);
                    }
                    n2 = this.d.AboutDialog((double)(this.d.FPanel.rPanel.AboutDialog.xHandler + this.d.FPanel.rPanel.AboutDialog.width - this.d.J));
                    n7 = this.d.b((double)this.d.CHandler.yHandler);
                    if (this.d.d <= 5) {
                        this.d.g("MICROSOFT request and board present so move window to " + n2 + "," + n7 + " and size to " + n9 + "xHandler" + n8);
                    }
                } else {
                    if (this.d.d <= 5) {
                        this.d.g("MICROSOFT request and no board so set window size to 300x450");
                    }
                    n9 = 300;
                    n8 = 450;
                    n2 = this.d.AboutDialog((double)this.d.CHandler.xHandler + (double)this.d.CHandler.width * 0.3);
                    n7 = this.d.b((double)this.d.CHandler.yHandler + (double)this.d.CHandler.height * 0.3);
                    if (this.d.d <= 5) {
                        this.d.g("MS UI and no board so set default size");
                    }
                }
                this.AboutDialog(false, n9, n8, n2, n7, 0);
                this.ab = true;
                if (!this.d.KHandler) break;
                this.A.setBorder(BorderFactory.createEmptyBorder(0, 5, 0, 5));
                break;
            }
            case 0: {
                if (this.d.d <= 5) {
                    this.d.g("CHOOSEMODE so set window size to 900x500");
                }
                this.AboutDialog(false, 900, 500, 100, 50, 0);
                break;
            }
            case 1: {
                this.d.AboutDialog(200L);
                if (this.d.d <= 5) {
                    this.d.g("CHOOSEGAME so set window size to 600x620");
                }
                this.AboutDialog(false, 600, 620, 100, 50, 0);
                break;
            }
            case 5: {
                if (this.d.d <= 5) {
                    this.d.g("STATSPANE so set window size to 1400x750");
                }
                this.AboutDialog(false, 1400, 750, 50, 0, 0);
                break;
            }
            default: {
                this.d.i("Invalid size request " + n2);
            }
        }
        if (!this.g.isVisible()) {
            if (this.d.d <= 5) {
                this.d.g("setSizeAndPosition() setting statusWindow visible");
            }
            this.g.setVisible(true);
        }
        this.d.v = this.d.d("Solvitaire");
        if (this.d.d <= 5) {
            this.d.g(String.format("Solvitaire window handle is %08x", this.d.v));
        }
        if (this.d.v == 0) {
            this.d.i("Could not get handle to new status window");
        }
    }

    private void AboutDialog(boolean bl2, int n2, int n3, int n4, int n5, int n6) {
        boolean bl3;
        boolean bl4 = bl3 = n2 != this.j || n3 != this.k || n4 != this.h || n5 != this.i || n6 != this.aa;
        if (this.d.d <= 5) {
            this.d.g("Handling set of status window size,  xHandler " + this.h + "->" + n4 + ", yHandler " + this.i + "->" + n5 + ", wHandler " + this.j + "->" + n2 + ", h " + this.k + "->" + n3 + ", state " + this.aa + "->" + n6);
        }
        if (this.aa != 0 && n6 != this.aa) {
            if (this.d.d <= 5) {
                this.d.g("Window state not normal and changing so set to normal before resize");
            }
            if (!this.g.isVisible()) {
                if (this.d.d <= 5) {
                    this.d.g("setSizeAndPosition() setting statusWindow visible");
                }
                this.g.setVisible(true);
            }
            this.g.setExtendedState(0);
        }
        if (this.d.d <= 5) {
            this.d.g("Now set size to " + n2 + "xHandler" + n3);
        }
        this.g.setSize(n2, n3);
        this.g.setLocation(n4, n5);
        if (n6 != 0) {
            if (this.d.d <= 5) {
                this.d.g("Window state changed to " + n6);
            }
            this.g.setExtendedState(n6);
        }
        this.aa = n6;
        this.j = n2;
        this.k = n3;
        this.h = n4;
        this.i = n5;
        if (bl2) {
            if (bl3) {
                if (this.d.d <= 5) {
                    this.d.g(String.format("SAVED status window position", new Object[0]));
                }
                Properties properties = this.cn;
                synchronized (properties) {
                    this.cn.setProperty("statusX", "" + this.h);
                    this.cn.setProperty("statusY", "" + this.i);
                    this.cn.setProperty("statusWidth", "" + this.j);
                    this.cn.setProperty("statusHeight", "" + this.k);
                    this.cn.setProperty("statusState", "" + this.aa);
                    this.t();
                }
            } else if (this.d.d <= 5) {
                this.d.g("Not saving because no change in size");
            }
            this.l = true;
        }
    }

    private static JLabel AboutDialog(JPanel jPanel, int n2, String object) {
        JLabel jLabel = new JLabel("", 4);
        object = BorderFactory.createTitledBorder((String)object);
        jLabel.setBorder((Border)object);
        Dimension dimension = new Dimension(n2, 40);
        jLabel.setPreferredSize(dimension);
        jLabel.setMaximumSize(dimension);
        jLabel.setMinimumSize(dimension);
        jPanel.add(jLabel);
        return jLabel;
    }

    private void e(String string) {
        if (this.d.d <= 5) {
            this.d.g("Set pause  with reason '" + string + "', continuing to next doPause");
        }
        this.d.aO = true;
        if (string != null) {
            this.c(16, string);
        }
    }

    final void c(boolean bl2) {
        if (this.d.d <= 5) {
            this.d.g("Set run, release pause and show normal status msg");
        }
        if (this.G != null) {
            this.G.setEnabled(false);
            this.bY.setEnabled(false);
            this.FPanel.setEnabled(false);
            this.bZ.setEnabled(false);
            this.cb.setEnabled(false);
            this.H.setEnabled(true);
            this.H.setFocusable(true);
            this.ca.setEnabled(true);
        }
        this.d.c();
        this.d.aO = false;
        if (bl2) {
            MainWindow qb_02 = this;
            int n2 = qb_02.U;
            MainWindow qb_03 = qb_02;
            qb_02.c(n2, null);
        }
    }

    public final void d(String string) {
        if (this.d.t && !this.g.isVisible()) {
            this.c(3);
            this.d.g("setError setting statusWindow visible");
            this.g.setVisible(true);
        }
        EventQueue.invokeLater(new rx_0(this));
        this.d.g(string);
        this.c(8, string);
        if (this.G != null) {
            this.G.setIcon(this.cR);
            this.G.setEnabled(true);
            this.G.setFocusable(true);
            this.FPanel.setEnabled(false);
            this.H.setEnabled(false);
        }
    }

    public final void o() {
        this.wHandler();
    }

    public final synchronized void c(int n2, String string) {
        if (n2 != 16) {
            this.U = n2;
            if (string != null) {
                this.V = string;
            }
            if (this.d.d <= 3) {
                this.d.g("Set normal status mode of " + this.U + " with msg " + string);
            }
        } else {
            if (this.d.d <= 3) {
                this.d.g("Set paused status of " + n2 + " with msg " + string);
            }
            this.cW = n2;
            if (string != null) {
                this.cX = string;
            }
        }
        if (this.d.aO && !this.d.yHandler) {
            if (this.d.d <= 3) {
                this.d.g("Display paused status:" + this.cX);
            }
            this.T = this.cW;
            this.cV = this.cX;
        } else {
            if (this.d.d <= 3) {
                this.d.g("Display normal status:" + this.V);
            }
            this.T = this.U;
            this.cV = this.V;
        }
        this.wHandler();
    }

    private void AboutDialog(ImageIcon imageIcon, String object) {
        boolean bl2 = false;
        String string = object;
        object = imageIcon;
        MainWindow qb_02 = this;
        if (string == null || string.length() < 2) {
            string = "<br>";
        }
        if (qb_02.cA != null) {
            qb_02.cA.setText("<html>" + string + "</html>");
        }
        if (qb_02.cz != null) {
            qb_02.cz.setIcon((Icon)object);
        }
        qb_02.df = null;
        qb_02.dg = qb_02.cU + 700L;
    }

    private void wHandler() {
        if (this.X == null) {
            return;
        }
        if (!this.g.isVisible()) {
            if (this.d.d <= 5) {
                this.d.g("showStatus setting statusWindow visible");
            }
            this.g.setVisible(true);
        }
        this.p();
        switch (this.T) {
            case 1: {
                if (this.d.t) {
                    if (this.d.m == 4 || this.d.m == 3) {
                        this.KHandler.setText(this.d.l.k());
                    } else {
                        this.KHandler.setText("Game " + this.d.ab);
                    }
                    MainWindow qb_02 = this;
                    qb_02.AboutDialog(qb_02.cC, "Inspecting layout...");
                    this.d(true);
                    this.v();
                    return;
                }
                if (this.d.m != 2) break;
                this.KHandler.setText(this.d.l.j());
                return;
            }
            case 2: {
                this.V = " ";
                MainWindow qb_03 = this;
                qb_03.AboutDialog(qb_03.cC, this.cV);
                MainWindow qb_04 = this;
                qb_04.d(false);
                return;
            }
            case 4: {
                MainWindow qb_05 = this;
                qb_05.AboutDialog(qb_05.cS, this.cV);
                MainWindow qb_06 = this;
                qb_06.d(false);
                return;
            }
            case 6: {
                MainWindow qb_07 = this;
                qb_07.AboutDialog(qb_07.cI, this.cV);
                MainWindow qb_08 = this;
                qb_08.d(false);
                return;
            }
            case 5: {
                if (this.U != 2 && this.cV.length() > 1) {
                    MainWindow qb_09 = this;
                    qb_09.AboutDialog(qb_09.cD, this.cV);
                } else {
                    MainWindow qb_010 = this;
                    qb_010.AboutDialog(qb_010.cD, "Running...");
                }
                MainWindow qb_011 = this;
                qb_011.d(false);
                return;
            }
            case 3: {
                MainWindow qb_012 = this;
                qb_012.AboutDialog(qb_012.cL, this.cV);
                MainWindow qb_013 = this;
                qb_013.d(false);
                return;
            }
            case 7: {
                MainWindow qb_014 = this;
                qb_014.AboutDialog(qb_014.cF, " ");
                return;
            }
            case 9: {
                MainWindow qb_015 = this;
                qb_015.AboutDialog(qb_015.cE, this.cV);
                return;
            }
            case 8: {
                MainWindow qb_016 = this;
                qb_016.AboutDialog(qb_016.cB, this.cV);
                return;
            }
            case 16: {
                MainWindow qb_017 = this;
                qb_017.AboutDialog(qb_017.cG, this.cV);
                return;
            }
            case 10: {
                MainWindow qb_018 = this;
                qb_018.AboutDialog(qb_018.cK, "Undo to start of game");
                return;
            }
            default: {
                MainWindow qb_019 = this;
                qb_019.AboutDialog(qb_019.cD, "Running...");
                this.d.g("Set default icon of gears");
            }
        }
    }

    final synchronized void p() {
        if (this.X == null || this.d.ao == null || this.EHandler == null) {
            return;
        }
        MainWindow qb_02 = this;
        if (qb_02.df != null && qb_02.cU > qb_02.dg) {
            qb_02.cz.setIcon(qb_02.df);
            qb_02.df = null;
            qb_02.dg = qb_02.cU + 400L;
        }
        this.cU = System.currentTimeMillis();
        long l2 = this.d.aO ? this.d.NHandler - this.d.LHandler - this.d.OHandler : this.cU - this.d.LHandler - this.d.OHandler;
        if (this.d.aN) {
            if (this.cv != null) {
                this.cv.setText("" + l2 / 1000L);
                this.cw.setText("" + this.d.PPanel);
                this.cy.setText(-this.d.T + "(" + -this.d.U + ")");
                int n2 = this.d.aZ.h;
                if (this.T != 5) {
                    n2 = this.d.Y;
                }
                this.cx.setText(String.format("%3d:%3d:%3d", this.d.X, this.d.Z, n2));
                return;
            }
        } else if (this.cr != null) {
            double d2 = l2;
            sbPanel sb2 = this.cr;
            sb2.AboutDialog(d2, 0.0, 0.0);
            d2 = this.d.PPanel;
            sb2 = this.cs;
            sb2.AboutDialog(d2, 0.0, 0.0);
            double d3 = -this.d.U;
            double d4 = -this.d.T;
            sb2 = this.cu;
            sb2.AboutDialog(d4, d3, 0.0);
            int n3 = 0;
            if (this.d.aZ != null) {
                n3 = this.d.aZ.h;
            }
            if (this.T != 5) {
                n3 = this.d.Y;
            }
            double d5 = this.d.X;
            d3 = this.d.Z;
            d4 = n3;
            sbPanel sb3 = this.ct;
            sb3.AboutDialog(d4, d3, d5);
        }
    }

    private void xHandler() {
        if (!this.d.t) {
            return;
        }
        if (this.d.ao == null) {
            return;
        }
        int n2 = this.k / 30;
        switch (this.d.i) {
            case 1: {
                break;
            }
            case 2: {
                break;
            }
            case 3: {
                break;
            }
            case 4: {
                n2 = this.k / 20;
                break;
            }
            case 5: {
                n2 = this.k / 16;
            }
        }
        int n3 = this.j / (this.d.ao.f + 2);
        this.CHandler.removeAll();
        this.CHandler.setLayout(new BoxLayout(this.CHandler, 1));
        this.d.ao.g();
        if (this.d.d <= 2) {
            this.d.g("Stack count is " + this.d.ao.f);
        }
        int n4 = this.d.ao.t.length;
        int n5 = this.d.ao.t[0].length;
        JPanel[] jPanelArray = new JPanel[n5];
        this.co = new saPanel[n4][n5];
        int n6 = 0;
        while (n6 < n5) {
            if (this.d.d <= 2) {
                this.d.g("Adding row panel " + n6 + " to exposePane");
            }
            jPanelArray[n6] = new JPanel();
            jPanelArray[n6].setOpaque(false);
            jPanelArray[n6].setLayout(new BoxLayout(jPanelArray[n6], 0));
            this.CHandler.add(jPanelArray[n6]);
            jPanelArray[n6].add(Box.createHorizontalGlue());
            int n7 = 0;
            while (n7 < n4) {
                block18: {
                    saPanel sa2;
                    block19: {
                        block21: {
                            block23: {
                                block22: {
                                    block20: {
                                        block17: {
                                            sa2 = new saPanel(this, n3, n2);
                                            if (this.d.i != 4) break block17;
                                            if (n7 > n6) {
                                                sa2.setOpaque(false);
                                            } else {
                                                this.co[n7][n6] = sa2;
                                                this.d.ao.t[n7][n6] = 1;
                                                jPanelArray[n6].add(sa2);
                                            }
                                            break block18;
                                        }
                                        if (this.d.i != 5) break block19;
                                        if (n6 != 0) break block20;
                                        if (n7 > 6) break block18;
                                        if (n7 == 0 || n7 == 3 || n7 == 6) {
                                            this.co[n7][n6] = sa2;
                                            this.d.ao.t[n7][n6] = 1;
                                        } else {
                                            sa2.setOpaque(false);
                                        }
                                        break block21;
                                    }
                                    if (n6 != 1) break block22;
                                    if (n7 > 7) break block18;
                                    if (n7 != 2 && n7 != 5) break block23;
                                    sa2.setOpaque(false);
                                    break block21;
                                }
                                if (n6 != 2) break block23;
                                if (n7 > 8) break block18;
                                this.co[n7][n6] = sa2;
                                this.d.ao.t[n7][n6] = 1;
                                break block21;
                            }
                            this.co[n7][n6] = sa2;
                            this.d.ao.t[n7][n6] = 1;
                        }
                        jPanelArray[n6].add(sa2);
                        break block18;
                    }
                    this.d.ao.t[n7][n6] = 0;
                    this.co[n7][n6] = sa2;
                    jPanelArray[n6].add(sa2);
                }
                ++n7;
            }
            jPanelArray[n6].add(Box.createHorizontalGlue());
            ++n6;
        }
    }

    final void q() {
        this.d(false);
    }

    final void d(boolean bl2) {
        if (this.d.uPanel) {
            return;
        }
        if (this.d.ao == null || this.d.ao.t == null) {
            return;
        }
        if (bl2) {
            this.xHandler();
        }
        this.d.ao.g();
        int n2 = this.d.ao.t.length;
        int n3 = this.d.ao.t[0].length;
        int n4 = 0;
        while (n4 < n2) {
            int n5 = 0;
            while (n5 < n3) {
                if (this.co[n4][n5] != null) {
                    this.co[n4][n5].AboutDialog(this.d.ao.t[n4][n5], bl2);
                }
                ++n5;
            }
            ++n4;
        }
    }

    public final void rPanel() {
        Properties properties = this.cn;
        synchronized (properties) {
            this.aB = new sc(this, "traceLevel", 1);
            MainWindow qb_02 = this;
            this.aC = new se(qb_02, qb_02.aB, 1, "1 Ultra detailed logging (ultra slow)");
            MainWindow qb_03 = this;
            this.aD = new se(qb_03, qb_03.aB, 2, "2 Very detailed logging (very slow)");
            MainWindow qb_04 = this;
            this.aE = new se(qb_04, qb_04.aB, 3, "3 Detailed logging (slow)");
            MainWindow qb_05 = this;
            this.aF = new se(qb_05, qb_05.aB, 4, "4 Informational logging");
            MainWindow qb_06 = this;
            this.aG = new se(qb_06, qb_06.aB, 5, "5 High level logging");
            MainWindow qb_07 = this;
            this.aH = new se(qb_07, qb_07.aB, 6, "6 Errors and recovery logging");
            MainWindow qb_08 = this;
            this.aI = new se(qb_08, qb_08.aB, 9, "9 Minimal logging");
            Object object = this.aB;
            this.d.d = ((sc)object).AboutDialog("0");
            if (this.d.d == 0) {
                this.d.d = 9;
            }
            JCheckBoxMenuItem jCheckBoxMenuItem = this.q;
            String string = "skipInsoluble";
            object = this;
            this.d.aF = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.o;
            string = "runContinuously";
            object = this;
            this.d.aG = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.p;
            string = "hideMoves";
            object = this;
            this.d.aH = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.m;
            string = "useSingleClick";
            object = this;
            this.d.g = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.n;
            string = "disallowMoveOffAces";
            object = this;
            this.d.h = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.t;
            string = "testFonts";
            object = this;
            this.d.aT = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.uPanel;
            string = "noMouseDetection";
            object = this;
            this.d.aV = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.v;
            string = "testImages";
            object = this;
            this.d.wHandler = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.wHandler;
            string = "errorImages";
            object = this;
            this.d.xHandler = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.rPanel;
            string = "showBoard";
            object = this;
            this.d.aW = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            jCheckBoxMenuItem = this.s;
            string = "reversedBoard";
            object = this;
            this.d.aX = ((MainWindow)object).b(string, jCheckBoxMenuItem, false);
            object = this.aZ;
            this.d.aL = ((sc)object).AboutDialog("0");
            this.d.aE = this.bj.AboutDialog("999");
            this.d.aI = this.ad.AboutDialog("50");
            this.d.aJ = this.aq.AboutDialog("0");
            this.d.aN = this.aW.AboutDialog();
            this.d.G = this.aJ.AboutDialog("999999");
            this.d.ay = this.f("installDate");
            this.d.aw = this.f("email");
            this.d.az = this.f("pc");
            this.d.ax = this.f("licensed").equals("true");
            this.d.aA = this.f("signature");
            this.d.af = this.b("fileDirectory", this.d.au);
            this.d.ag = this.b("chalDirectory", this.d.as + SolitaireGameEngine.q);
            this.j = this.c("statusWidth", -1);
            this.k = this.c("statusHeight", -1);
            this.h = this.c("statusX", -4);
            this.i = this.c("statusY", 0);
            this.d.bi = this.b("modeRemembered", false);
            if (this.d.bi) {
                this.d.bg = this.c("modeChoice", 0);
            }
            this.d.bj = null;
            return;
        }
    }

    public final void s() {
        try {
            Object object = this.d.as + File.separator + "solvitaire.properties";
            if (this.d.d <= 5) {
                this.d.g("Clearing properties file " + (String)object);
            }
            if (((File)(object = new File((String)object))).exists()) {
                ((File)object).delete();
                return;
            }
        }
        catch (Exception exception) {
            this.d.i("ERROR - Exception deleting properties file: " + String.valueOf(exception));
        }
    }

    final void AboutDialog(String string, String string2) {
        if (this.d.d <= 5) {
            this.d.g("Set property " + string + " to " + string2);
        }
        this.cn.setProperty(string, string2);
    }

    public final void t() {
        try {
            Object object = this.d.as + File.separator + "solvitaire.properties";
            if (this.d.d <= 4) {
                this.d.g("Writing properties file " + (String)object);
            }
            object = new FileOutputStream(new File((String)object));
            this.cn.store((OutputStream)object, "Solitaire properties");
            ((OutputStream)object).close();
            return;
        }
        catch (Exception exception) {
            this.d.i("ERROR - Exception storing properties file: " + String.valueOf(exception));
            return;
        }
    }

    final int c(String string, int n2) {
        Properties properties = this.cn;
        synchronized (properties) {
            String string2 = this.cn.getProperty(string, "?");
            if (this.d.d <= 4) {
                this.d.g("Read property " + string + " as " + string2);
            }
            if (!string2.equals("?")) {
                try {
                    n2 = Integer.parseInt(string2);
                }
                catch (Exception exception) {}
            }
            return n2;
        }
    }

    private boolean b(String string, boolean bl2) {
        Properties properties = this.cn;
        synchronized (properties) {
            boolean bl3 = false;
            String string2 = this.cn.getProperty(string, "?");
            if (this.d.d <= 4) {
                this.d.g("Read property " + string + " as " + string2);
            }
            if (!string2.equals("?")) {
                bl3 = string2.equals("true");
            }
            return bl3;
        }
    }

    final String b(String string, String string2) {
        Properties properties = this.cn;
        synchronized (properties) {
            string2 = this.cn.getProperty(string, string2);
            if (this.d.d <= 4) {
                this.d.g("Read property " + string + " as " + string2);
            }
            return string2;
        }
    }

    private String f(String string) {
        Properties properties = this.cn;
        synchronized (properties) {
            String string2 = this.cn.getProperty(string, "");
            if (this.d.d <= 4) {
                this.d.g("Read property " + string + " as " + string2);
            }
            return string2;
        }
    }

    private boolean b(String string, AbstractButton abstractButton, boolean bl2) {
        Properties properties = this.cn;
        synchronized (properties) {
            boolean bl3 = this.cn.getProperty(string, "false").equals("true");
            if (this.d.d <= 4) {
                this.d.g("Read property " + string + " as " + bl3);
            }
            abstractButton.setSelected(bl3);
            return bl3;
        }
    }

    final void AboutDialog(String string, boolean bl2) {
        Properties properties = this.cn;
        synchronized (properties) {
            this.cn.setProperty(string, bl2 ? "true" : "false");
            if (this.d.d <= 4) {
                this.d.g("Set property " + string + " to " + bl2);
            }
            this.t();
            return;
        }
    }

    final boolean AboutDialog(String string, AbstractButton serializable, boolean bl2) {
        bl2 = false;
        if (serializable.isSelected()) {
            bl2 = true;
        }
        serializable = this.cn;
        synchronized (serializable) {
            this.cn.setProperty(string, bl2 ? "true" : "false");
            if (this.d.d <= 4) {
                this.d.g("Set property " + string + " to " + bl2);
            }
            this.t();
        }
        return bl2;
    }

    public final boolean AboutDialog(String string, String string2, String string3) {
        boolean bl2 = false;
        String string4 = this.cn.getProperty(string, "false");
        if ("false".equals(string4)) {
            int n2 = JOptionPane.showOptionDialog(this.d.aq.g, "\n\n" + string3 + "\n\n", string2, 0, 2, null, di, di[1]);
            if (n2 == 0) {
                Properties properties = this.cn;
                synchronized (properties) {
                    this.cn.setProperty(string, "true");
                    this.t();
                }
            } else {
                bl2 = true;
            }
        }
        return bl2;
    }

    public final void c(String string, String string2) {
        JOptionPane.showOptionDialog(this.d.aq.g, "\n\n" + string2 + "\n\n", string, 0, 2, null, dj, dj[0]);
    }

    public final boolean d(String string, String string2) {
        int n2 = JOptionPane.showOptionDialog(this.d.aq.g, "\n\n" + string2 + "\n\n", string, 0, 2, null, dk, dk[0]);
        return n2 == 0;
    }

    public final int e(String string, String string2) {
        string = JOptionPane.showInputDialog(this.d.aq.g, "\n\n" + string2 + "\n\n", string, -1);
        int n2 = -1;
        try {
            n2 = Integer.parseInt(string.trim());
        }
        catch (Exception exception) {}
        return n2;
    }
}

