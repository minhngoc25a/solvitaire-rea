/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.Writer;
import org.knowm.xchart.XYChart;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.series.AxesChartSeriesNumericalNoErrorBars;
import org.knowm.xchart.internal.series.Series;

public class CSVExporter {
    /*
     * Loose catch block
     */
    public static void a(XYChart object, String string) {
        for (Object object2 : ((Chart)object).o().values()) {
            Object object3 = string;
            object3 = new File((String)object3 + ((Series)object2).u() + ".csv");
            Writer writer = null;
            writer = new BufferedWriter(new OutputStreamWriter((OutputStream)new FileOutputStream((File)object3), "UTF8"));
            object3 = ((AxesChartSeriesNumericalNoErrorBars)object2).q();
            double[] dArray = ((AxesChartSeriesNumericalNoErrorBars)object2).r();
            object2 = ((AxesChartSeriesNumericalNoErrorBars)object2).s();
            for (int i2 = 0; i2 < ((Object)object3).length; ++i2) {
                StringBuilder stringBuilder = new StringBuilder();
                stringBuilder.append((double)object3[i2]).append(",");
                stringBuilder.append(dArray[i2]).append(",");
                if (object2 != null) {
                    stringBuilder.append((double)object2[i2]).append(",");
                }
                StringBuilder stringBuilder2 = stringBuilder;
                stringBuilder2.setLength(stringBuilder2.length() - 1);
                stringBuilder.append(System.getProperty("line.separator"));
                writer.write(stringBuilder.toString());
            }
            try {
                writer.flush();
                writer.close();
            }
            catch (IOException iOException) {}
            continue;
            catch (Exception exception) {
                try {
                    object3 = exception;
                    exception.printStackTrace();
                    if (writer == null) continue;
                }
                catch (Throwable throwable) {
                    if (writer != null) {
                        try {
                            writer.flush();
                            writer.close();
                        }
                        catch (IOException iOException) {}
                    }
                    throw throwable;
                }
                try {
                    writer.flush();
                    writer.close();
                }
                catch (IOException iOException) {}
            }
        }
    }
}

