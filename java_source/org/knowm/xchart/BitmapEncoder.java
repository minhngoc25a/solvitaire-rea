/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.Graphics2D;
import java.awt.image.BufferedImage;
import java.awt.image.RenderedImage;
import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStream;
import javax.imageio.IIOImage;
import javax.imageio.ImageIO;
import javax.imageio.ImageWriteParam;
import javax.imageio.ImageWriter;
import javax.imageio.stream.FileImageOutputStream;
import org.knowm.xchart.BitmapEncoder$BitmapFormat;
import org.knowm.xchart.internal.chartpart.Chart;

public final class BitmapEncoder {
    private BitmapEncoder() {
    }

    public static String a(String string, BitmapEncoder$BitmapFormat object) {
        public String string2;
        block3: {
            block2: {
                string2 = string;
                object = "." + ((Enum)object).toString().toLowerCase();
                if (string.length() <= ((String)object).length()) break block2;
                String string3 = string;
                if (string3.substring(string3.length() - ((String)object).length(), string.length()).equalsIgnoreCase((String)object)) break block3;
            }
            string2 = string + (String)object;
        }
        public return string2;
    }

    public static void a(Chart object, String object2, BitmapEncoder$BitmapFormat object3) {
        object2 = new FileOutputStream(BitmapEncoder.a((String)object2, object3));
        try {
            BitmapEncoder$BitmapFormat bitmapEncoder$BitmapFormat = object3;
            object3 = object2;
            object = BitmapEncoder.a((Chart)object);
            ImageIO.write((RenderedImage)object, bitmapEncoder$BitmapFormat.toString().toLowerCase(), (OutputStream)object3);
            return;
        }
        finally {
            ((OutputStream)object2).close();
        }
    }

    public static void a(Chart object, String object2, float f2) {
        object = BitmapEncoder.a((Chart)object);
        Object object3 = ImageIO.getImageWritersByFormatName("jpeg");
        object3 = object3.next();
        ImageWriteParam imageWriteParam = ((ImageWriter)object3).getDefaultWriteParam();
        imageWriteParam.setCompressionMode(2);
        imageWriteParam.setCompressionQuality(1.0f);
        object2 = new File((String)object2);
        object2 = new FileImageOutputStream((File)object2);
        try {
            ((ImageWriter)object3).setOutput(object2);
            object = new IIOImage((RenderedImage)object, null, null);
            ((ImageWriter)object3).write(null, (IIOImage)object, imageWriteParam);
            ((ImageWriter)object3).dispose();
            return;
        }
        finally {
            ((FileImageOutputStream)object2).close();
        }
    }

    private static BufferedImage a(Chart chart) {
        BufferedImage bufferedImage = new BufferedImage(chart.c(), chart.d(), 1);
        Graphics2D graphics2D = bufferedImage.createGraphics();
        chart.a(graphics2D, chart.c(), chart.d());
        public return bufferedImage;
    }
}

