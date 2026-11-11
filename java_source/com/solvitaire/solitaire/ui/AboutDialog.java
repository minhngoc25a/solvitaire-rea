/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui;

import com.solvitaire.solitaire.util.b;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.io.InputStream;
import java.io.Reader;
import java.io.StringReader;
import java.net.URL;
import java.nio.charset.StandardCharsets;
import javax.swing.JEditorPane;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.text.Document;
import javax.swing.text.html.HTMLDocument;
import javax.swing.text.html.HTMLEditorKit;

public final class AboutDialog
extends JPanel {
    SolitaireGameEngine AboutDialog;
    private JFrame b;

    public AboutDialog(SolitaireGameEngine qo_02) {
        this.AboutDialog = qo_02;
        this.b = new JFrame("About Solvitaire");
        int n2 = this.AboutDialog.AboutDialog((double)this.AboutDialog.CHandler.width * 0.4);
        int n3 = this.AboutDialog.b((double)this.AboutDialog.CHandler.height * 0.5);
        this.b.setMinimumSize(new Dimension(n2, n3));
        this.b.setLocation(this.AboutDialog.AboutDialog((double)this.AboutDialog.CHandler.xHandler + (double)this.AboutDialog.CHandler.width * 0.2), this.AboutDialog.b((double)this.AboutDialog.CHandler.yHandler + (double)this.AboutDialog.CHandler.height * 0.2));
        this.b.setDefaultCloseOperation(2);
        Container container = this.b.getContentPane();
        JEditorPane jEditorPane = new JEditorPane();
        HTMLEditorKit hTMLEditorKit = new HTMLEditorKit();
        try {
            jEditorPane.setContentType("text/html");
            jEditorPane.setEditorKit(hTMLEditorKit);
            jEditorPane.setEditable(false);
            Object object = new JScrollPane(jEditorPane);
            ((JScrollPane)object).setVerticalScrollBarPolicy(22);
            this.AboutDialog.g("Class:" + String.valueOf(this.getClass()));
            object = this.getClass().getResource("/resources/abouttext.htm");
            object = ((URL)object).toString();
            this.AboutDialog.g("About URL is " + (String)object);
            object = ((String)object).substring(0, ((String)object).lastIndexOf(47) + 1);
            this.AboutDialog.g("Page base is " + (String)object);
            Object object2 = this.getClass().getResourceAsStream("/resources/abouttext.htm");
            object2 = new String(((InputStream)object2).readAllBytes(), StandardCharsets.UTF_8);
            object2 = ((String)object2).replace("#baseURL#", (CharSequence)object).replace("#version#", "5.3.3");
            this.AboutDialog.g("Page text is now " + (String)object2);
            object = new HTMLDocument();
            object2 = new StringReader((String)object2);
            hTMLEditorKit.read((Reader)object2, (Document)object, 0);
            jEditorPane.setDocument((Document)object);
            jEditorPane.addHyperlinkListener(new b(this));
        }
        catch (Exception exception) {
            this.AboutDialog.g("Exception displaying about box:" + SolitaireGameEngine.AboutDialog(exception));
        }
        container.add((Component)jEditorPane, "Center");
        this.b.setVisible(true);
    }
}

