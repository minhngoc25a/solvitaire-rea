/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  org.knowm.xchart.VectorGraphicsEncoder
 *  org.knowm.xchart.VectorGraphicsEncoder$VectorGraphicsFormat
 */
package org.knowm.xchart;

import java.awt.Component;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Toolkit;
import java.awt.print.PageFormat;
import java.awt.print.Paper;
import java.awt.print.PrinterException;
import java.awt.print.PrinterJob;
import java.io.File;
import java.io.IOException;
import javax.swing.JFileChooser;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.KeyStroke;
import javax.swing.UIManager;
import javax.swing.filechooser.FileFilter;
import org.knowm.xchart.BitmapEncoder;
import org.knowm.xchart.BitmapEncoder$BitmapFormat;
import org.knowm.xchart.CSVExporter;
import org.knowm.xchart.MyCategoryChart;
import org.knowm.xchart.VectorGraphicsEncoder;
import org.knowm.xchart.XChartPanel$Printer;
import org.knowm.xchart.XYChart;
import org.knowm.xchart.a;
import org.knowm.xchart.b;
import org.knowm.xchart.c;
import org.knowm.xchart.d;
import org.knowm.xchart.e;
import org.knowm.xchart.f;
import org.knowm.xchart.g;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ToolTips;

public class XChartPanel
extends JPanel {
    private final Chart a;
    private final Dimension b;
    private String c = "Save As...";
    private String d = "Export To...";
    private String e = "Print...";
    private String f = "Reset Zoom";
    private ToolTips g = null;

    public XChartPanel(MyCategoryChart myCategoryChart) {
        this.a = myCategoryChart;
        this.b = new Dimension(myCategoryChart.c(), myCategoryChart.d());
        this.addMouseListener(new d(this, 0));
        KeyStroke keyStroke = KeyStroke.getKeyStroke(83, Toolkit.getDefaultToolkit().getMenuShortcutKeyMask());
        this.getInputMap(2).put(keyStroke, "save");
        this.getActionMap().put("save", new f(this));
        keyStroke = KeyStroke.getKeyStroke(69, Toolkit.getDefaultToolkit().getMenuShortcutKeyMask());
        this.getInputMap(2).put(keyStroke, "export");
        this.getActionMap().put("export", new c(this));
        keyStroke = KeyStroke.getKeyStroke(80, Toolkit.getDefaultToolkit().getMenuShortcutKeyMask());
        this.getInputMap(2).put(keyStroke, "print");
        this.getActionMap().put("print", new e(this));
        if (myCategoryChart.b().aK()) {
            this.g = new ToolTips(myCategoryChart);
            XChartPanel xChartPanel = this;
            xChartPanel.addMouseMotionListener(xChartPanel.g);
        }
        this.addComponentListener(new a(this, myCategoryChart));
    }

    @Override
    protected void paintComponent(Graphics graphics) {
        super.paintComponent(graphics);
        graphics = (Graphics2D)graphics.create();
        this.a.a((Graphics2D)graphics, this.getWidth(), this.getHeight());
        graphics.dispose();
    }

    @Override
    public Dimension getPreferredSize() {
        return this.b;
    }

    private void a(Component[] componentArray) {
        for (Component component : componentArray) {
            if (component instanceof JPanel) {
                this.a(((JPanel)component).getComponents());
                continue;
            }
            if (!(component instanceof JTextField)) continue;
            component.setVisible(false);
            return;
        }
    }

    private void b(Component[] componentArray) {
        for (Component component : componentArray) {
            if (component instanceof JPanel) {
                this.b(((JPanel)component).getComponents());
                continue;
            }
            if (!(component instanceof JLabel)) continue;
            component.setVisible(false);
            return;
        }
    }

    static /* synthetic */ ToolTips a(XChartPanel xChartPanel) {
        return xChartPanel.g;
    }

    static /* synthetic */ ToolTips a(XChartPanel xChartPanel, ToolTips toolTips) {
        xChartPanel.g = toolTips;
        return xChartPanel.g;
    }

    static /* synthetic */ void b(XChartPanel serializable) {
        block15: {
            UIManager.put("FileChooser.saveButtonText", "Save");
            UIManager.put("FileChooser.fileNameLabelText", "File Name:");
            JFileChooser jFileChooser = new JFileChooser();
            Object object = new g("png");
            jFileChooser.addChoosableFileFilter((FileFilter)object);
            jFileChooser.addChoosableFileFilter(new g("jpg"));
            jFileChooser.addChoosableFileFilter(new g("bmp"));
            jFileChooser.addChoosableFileFilter(new g("gif"));
            try {
                Class.forName("de.erichseifert.vectorgraphics2d.VectorGraphics2D");
                jFileChooser.addChoosableFileFilter(new g("svg"));
                jFileChooser.addChoosableFileFilter(new g("eps"));
            }
            catch (ClassNotFoundException classNotFoundException) {}
            try {
                Class.forName("de.rototor.pdfbox.graphics2d.PdfBoxGraphics2D");
                jFileChooser.addChoosableFileFilter(new g("pdf"));
            }
            catch (ClassNotFoundException classNotFoundException) {}
            jFileChooser.setAcceptAllFileFilterUsed(false);
            jFileChooser.setFileFilter((FileFilter)object);
            if (jFileChooser.showSaveDialog(null) == 0 && jFileChooser.getSelectedFile() != null) {
                object = jFileChooser.getSelectedFile();
                try {
                    if (jFileChooser.getFileFilter() == null) {
                        BitmapEncoder.a(serializable.a, ((File)object).getCanonicalPath(), BitmapEncoder$BitmapFormat.a);
                        break block15;
                    }
                    if (jFileChooser.getFileFilter().getDescription().equals("*.jpg,*.JPG")) {
                        BitmapEncoder.a(serializable.a, BitmapEncoder.a(((File)object).getCanonicalPath(), BitmapEncoder$BitmapFormat.b), 1.0f);
                        break block15;
                    }
                    if (jFileChooser.getFileFilter().getDescription().equals("*.png,*.PNG")) {
                        BitmapEncoder.a(serializable.a, ((File)object).getCanonicalPath(), BitmapEncoder$BitmapFormat.a);
                        break block15;
                    }
                    if (jFileChooser.getFileFilter().getDescription().equals("*.bmp,*.BMP")) {
                        BitmapEncoder.a(serializable.a, ((File)object).getCanonicalPath(), BitmapEncoder$BitmapFormat.c);
                        break block15;
                    }
                    if (jFileChooser.getFileFilter().getDescription().equals("*.gif,*.GIF")) {
                        BitmapEncoder.a(serializable.a, ((File)object).getCanonicalPath(), BitmapEncoder$BitmapFormat.d);
                        break block15;
                    }
                    if (jFileChooser.getFileFilter().getDescription().equals("*.svg,*.SVG")) {
                        VectorGraphicsEncoder.saveVectorGraphic((Chart)serializable.a, (String)((File)object).getCanonicalPath(), (VectorGraphicsEncoder.VectorGraphicsFormat)VectorGraphicsEncoder.VectorGraphicsFormat.SVG);
                        break block15;
                    }
                    if (jFileChooser.getFileFilter().getDescription().equals("*.eps,*.EPS")) {
                        VectorGraphicsEncoder.saveVectorGraphic((Chart)serializable.a, (String)((File)object).getCanonicalPath(), (VectorGraphicsEncoder.VectorGraphicsFormat)VectorGraphicsEncoder.VectorGraphicsFormat.EPS);
                        break block15;
                    }
                    if (jFileChooser.getFileFilter().getDescription().equals("*.pdf,*.PDF")) {
                        VectorGraphicsEncoder.saveVectorGraphic((Chart)serializable.a, (String)((File)object).getCanonicalPath(), (VectorGraphicsEncoder.VectorGraphicsFormat)VectorGraphicsEncoder.VectorGraphicsFormat.PDF);
                    }
                    return;
                }
                catch (IOException iOException) {
                    serializable = iOException;
                    iOException.printStackTrace();
                }
            }
        }
    }

    static /* synthetic */ void c(XChartPanel serializable) {
        UIManager.put("FileChooser.saveButtonText", "Export");
        UIManager.put("FileChooser.fileNameLabelText", "Export To:");
        UIManager.put("FileChooser.fileNameLabelMnemonic", "Export To:");
        JFileChooser jFileChooser = new JFileChooser();
        jFileChooser.setCurrentDirectory(new File(System.getProperty("user.home")));
        serializable.b(jFileChooser.getComponents());
        serializable.a(jFileChooser.getComponents());
        jFileChooser.setFileSelectionMode(1);
        jFileChooser.setFileFilter(new b((XChartPanel)serializable));
        jFileChooser.setAcceptAllFileFilterUsed(false);
        jFileChooser.setDialogTitle("Export");
        if (jFileChooser.showSaveDialog(null) == 0) {
            File file = null;
            if (jFileChooser.getSelectedFile() != null) {
                file = jFileChooser.getSelectedFile().exists() ? jFileChooser.getSelectedFile() : new File(jFileChooser.getSelectedFile().getParent());
            }
            try {
                CSVExporter.a((XYChart)serializable.a, file.getCanonicalPath() + File.separatorChar);
                return;
            }
            catch (IOException iOException) {
                serializable = iOException;
                iOException.printStackTrace();
            }
        }
    }

    static /* synthetic */ void d(XChartPanel xChartPanel) {
        PrinterJob printerJob = PrinterJob.getPrinterJob();
        if (printerJob.printDialog()) {
            try {
                PageFormat pageFormat = printerJob.defaultPage();
                Object object = pageFormat.getPaper();
                if (xChartPanel.getWidth() > xChartPanel.getHeight()) {
                    pageFormat.setOrientation(0);
                    ((Paper)object).setImageableArea(0.0, 0.0, pageFormat.getHeight(), pageFormat.getWidth());
                } else {
                    ((Paper)object).setImageableArea(0.0, 0.0, pageFormat.getWidth(), pageFormat.getHeight());
                }
                pageFormat.setPaper((Paper)object);
                pageFormat = printerJob.validatePage(pageFormat);
                object = "XChart " + xChartPanel.a.e().trim();
                printerJob.setJobName((String)object);
                printerJob.setPrintable(new XChartPanel$Printer(xChartPanel), pageFormat);
                printerJob.print();
                return;
            }
            catch (PrinterException printerException) {
                PrinterException printerException2 = printerException;
                printerException.printStackTrace();
            }
        }
    }

    static /* synthetic */ String e(XChartPanel xChartPanel) {
        return xChartPanel.c;
    }

    static /* synthetic */ String f(XChartPanel xChartPanel) {
        return xChartPanel.e;
    }

    static /* synthetic */ Chart g(XChartPanel xChartPanel) {
        return xChartPanel.a;
    }

    static /* synthetic */ String h(XChartPanel xChartPanel) {
        return xChartPanel.d;
    }
}

