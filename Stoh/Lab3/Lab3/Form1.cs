using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab3
{
    public partial class Form1 : Form
    {

        double cost0;
        double cost00;
        double cost000;
        double hx;
        double m;
        double k;
        double ppogl;
        Random rand;
        Random rand1;
        double l;
        double x;
        double x00;
        long stat;
        int progress;
        int Dback, Dahead, Din;
        double cosW;
        string stopSender;
        double[] backStat;
        double[] aheadStat;
        double[] inStat;
        double length;
        double lengthSq;

        public Form1()
        {
            InitializeComponent();
            backgroundWorker1.WorkerReportsProgress = true;
            backgroundWorker1.WorkerSupportsCancellation = true;
            chart1.ChartAreas[0].AxisX.MajorGrid.Enabled = false;
            chart1.ChartAreas[0].AxisY.MajorGrid.Enabled = false;
            chart2.ChartAreas[0].AxisX.MajorGrid.Enabled = false;
            chart2.ChartAreas[0].AxisY.MajorGrid.Enabled = false;
            chart3.ChartAreas[0].AxisX.MajorGrid.Enabled = false;
            chart3.ChartAreas[0].AxisY.MajorGrid.Enabled = false;
            rand = new Random();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

            label6.Text = "";
            test.Text = "";
            label7.Text = "";
            label8.Text = "";
            label9.Text = "";
            label10.Text = "";
            label11.Text = "";
            label12.Text = "";
            // test.Text = FindInterval(3.5, 0, 5, 1).ToString();
        }


        private int FindInterval (double val, double a, double b, double step)
        {
            int ind = 1;
            for (double i = a; i < b; i += step)
            {
                if (val <= i)
                {
                    break;                
                }
                ind++;
            }
            return ind-1;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (backgroundWorker1.IsBusy != true)
            {

                if (label7.Text + label8.Text + label9.Text + label10.Text +
                        label11.Text + label12.Text == "")
                {
                    cost00 = Math.Cos(Convert.ToDouble(T0.Text));
                    cost000 = Math.Cos(Convert.ToDouble(T0.Text));
                    hx = Convert.ToDouble(Hx.Text);
                    m = Convert.ToDouble(M.Text);
                    k = Convert.ToDouble(K.Text);
                    ppogl = Convert.ToDouble(Ppogl.Text);
                    stat = Convert.ToInt32(statistics.Text);
                }

                if (cost00 < -1 || cost00 > 1)
                {
                    label7.Text = "Число должно быть от -1 до 1";
                } else
                {
                    label7.Text = "";
                }

                if (hx < 0)
                {
                    label8.Text = "Число должно быть положительным";
                } else
                {
                    label8.Text = "";
                }

                if (m == 0)
                {
                    label9.Text = "Число должно быть отличным от нуля";
                }
                else
                {
                    label9.Text = "";
                }

                if (k < 0)
                {
                    label10.Text = "Число должно быть положительным";
                }
                else
                {
                    label10.Text = "";
                }

                if (ppogl < 0 || ppogl > 1)
                {
                    label11.Text = "Число должно быть от 0 до 1";
                }
                else
                {
                    label11.Text = "";
                }

                if (stat < 0)
                {
                    label12.Text = "Число должно быть положительным";
                }
                else
                {
                    label12.Text = "";
                }

                if (label7.Text + label8.Text + label9.Text + label10.Text +
                       label11.Text + label12.Text == "")
                {
                    Dback = 0;
                    Dahead = 0;
                    Din = 0;
                    progress = 0;
                    x = 0;
                    backStat = new double[21];
                    aheadStat = new double[21];
                    inStat = new double[21];
                    turnOff();
                    button1.Enabled = false;
                    button2.Enabled = true;
                    button3.Enabled = true;
                    label6.Text = "";
                    length = 0;
                    lengthSq = 0;
                    
                    backgroundWorker1.RunWorkerAsync();
                }
                   
            }                
        }

        private void backgroundWorker1_DoWork(object sender, DoWorkEventArgs e)
        {
            BackgroundWorker worker = sender as BackgroundWorker;


            cost00 = cost000;
            double x0 = 0;
            //double tmpProb = 0;
            double step = 0.05;
            double stepX = hx / 20;
            for (int i = progress; i < stat; i++)
            {
                progress++;
                if (worker.CancellationPending == true)
                {
                    e.Cancel = true;
                    break;
                } else
                {
                    x = x0;
                    cost0 = cost00;

                    while (true)
                    {
                        l = -(Math.Log(1 - rand.NextDouble())) / m;
                        x += l * cost0;
                        //tmpProb = 
                        if (x > hx )
                        {
                            Dahead++;
                            x -= l * cost0;
                            length += hx - x;
                            lengthSq += (hx - x) * (hx - x);
                            aheadStat[FindInterval(cost0,0,1,step)]++;
                            break;
                        }
                        else if (x < 0 )
                        {
                            Dback++;
                            x -= l * cost0;
                            length += x;
                            lengthSq += x * x;
                            backStat[FindInterval(cost0, -1, 0, step)]++;
                            break;
                        }
                        else if (rand.NextDouble() < ppogl)
                        {
                            Din++;
                            //int ind = FindInterval(x - l * cost0, 0, hx, stepX);
                            inStat[FindInterval(x, 0, hx, stepX)]++;
                            break;
                        }
                        else
                        {
                            cosW = Math.Pow(rand.NextDouble(), k);
                            cost0 = cost0 * cosW - Math.Sin(Math.Acos(cost0)) * Math.Sin(Math.Acos(cosW)) * Math.Sin(2 * Math.PI * rand.NextDouble());
                            length += l;
                            lengthSq += l * l;
                        }
                    }

                    if (i % 100 == 0)
                    {
                        double per = Convert.ToDouble(i) / stat * 100;
                        worker.ReportProgress(Convert.ToInt16(per));
                    }

                    if (i == stat - 1)
                    {
                        worker.ReportProgress(100);
                    }
                }             
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (backgroundWorker1.WorkerSupportsCancellation == true)
            {
                backgroundWorker1.CancelAsync();
                stopSender = "stop";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (button3.Text == "Pause")
            {
                if (backgroundWorker1.WorkerSupportsCancellation == true)
                {
                    backgroundWorker1.CancelAsync();
                    stopSender = "pause";
                    //turnOff();
                    button1.Enabled = false;
                    button2.Enabled = false;
                    button3.Enabled = true;
                    button3.Text = "Continue";
                }
            }
            else if (button3.Text == "Continue")
            {
                if (backgroundWorker1.IsBusy != true)
                {
                    backgroundWorker1.RunWorkerAsync();
                    button1.Enabled = false;
                    button3.Enabled = true;
                    button2.Enabled = true;
                    button3.Text = "Pause";
                   // turnOff();
                }
            }
        }

        private void backgroundWorker1_ProgressChanged(object sender, ProgressChangedEventArgs e)
        {
            progressBar1.Value = e.ProgressPercentage;
        }

        private void backgroundWorker1_RunWorkerCompleted(object sender, RunWorkerCompletedEventArgs e)
        {
            if (e.Cancelled == true)
            {
                if (stopSender == "pause")
                {
                    //turnOff();
                    //button3.Enabled = false;
                    button2.Enabled = false;
                    Result();
                    DrawChart();
                    label6.Text = "Процесс приостановлен! Обработано " + progress.ToString() + " розыгрышей.";
                    //drawChart();
                }
                else if (stopSender == "stop")
                {
                    button3.Enabled = false;
                    button2.Enabled = false;
                    button1.Enabled = true;
                    turnOn();
                    Result();
                    DrawChart();
                    label6.Text = "Процесс остановлен! Обработано " + progress.ToString() + " розыгрышей.";
                    //drawChart();
                }
            }
            else if (e.Error != null)
            {
                label6.Text = "Error: " + e.Error.Message;
            }
            else
            {
                Result();
                stopSender = "";
                turnOn();
                DrawChart();
                button1.Enabled = true;
                button2.Enabled = false;
                button3.Enabled = false;
            }

               
           /* for (int i = 0; i <coord.Length; i++)
            {
                richTextBox1.Text += coord[i].ToString() + " " + status[i] + "\n";
            }
            richTextBox1.Text += Dback.ToString() + " " + Dahead.ToString() + " " + Din.ToString(); */
        }

        private void Result()
        {
            test.Text = "Back: " + (Dback / Sum()).ToString() + "±" + Pogr(Dback / Sum()).ToString() + "\n \n"
                + "Ahead: " + (Dahead / Sum()).ToString() + "±" + Pogr(Dahead / Sum()).ToString() + "\n \n" +
                "Ahead expectation: " + (Math.Exp(-m*hx/cost00)).ToString() + "\n \n" +
                "In: " + (Din / Sum()).ToString() + "±" + Pogr(Din / Sum()).ToString() + "\n \n";
            double av = length / Sum();
            double avSq = lengthSq / Sum();
            test.Text += "Average path length: " + av.ToString() + "±" + Math.Sqrt(Math.Abs(avSq - av * av)/Sum()).ToString();
            test.Text += "Average ahead: " + av.ToString() + "±" + Math.Sqrt(Math.Abs(avSq - av * av) / aheadStat.Sum()).ToString();
            test.Text += "Average back: " + av.ToString() + "±" + Math.Sqrt(Math.Abs(avSq - av * av) / backStat.Sum()).ToString();
        }
        private void turnOff()
        {
            statistics.Enabled = false;
            M.Enabled = false;
            Hx.Enabled = false;
            K.Enabled = false;
            T0.Enabled = false;
            Ppogl.Enabled = false;
        }

        private double Sum()
        {
            return aheadStat.Sum() + backStat.Sum() + inStat.Sum();
        }
        private void T0_TextChanged(object sender, EventArgs e)
        {
            try
            {
                cost0 = Convert.ToDouble(T0.Text);
                label7.Text = "";
            } catch (FormatException e1)
            {
                label7.Text = "Введите действительное число.";
            }
        }

        private void Hx_TextChanged(object sender, EventArgs e)
        {
            try
            {
                hx = Convert.ToDouble(Hx.Text);
                label8.Text = "";
            }
            catch (FormatException e1)
            {
                label8.Text = "Введите действительное число.";
            }
        }

        private void M_TextChanged(object sender, EventArgs e)
        {
            try
            {
                m = Convert.ToDouble(M.Text);
                label9.Text = "";
            }
            catch (FormatException e1)
            {
                label9.Text = "Введите действительное число.";
            }
        }

        private void K_TextChanged(object sender, EventArgs e)
        {
            try
            {
                k = Convert.ToDouble(K.Text);
                label10.Text = "";
            }
            catch (FormatException e1)
            {
                label10.Text = "Введите действительное число.";
            }
        }

        private void Ppogl_TextChanged(object sender, EventArgs e)
        {
            try
            {
                ppogl = Convert.ToDouble(Ppogl.Text);
                label11.Text = "";
            }
            catch (FormatException e1)
            {
                label11.Text = "Введите действительное число.";
            }
        }

        private void statistics_TextChanged(object sender, EventArgs e)
        {
            try
            {
                stat = Convert.ToInt32(statistics.Text);
                label12.Text = "";
            }
            catch (FormatException e1)
            {
                label12.Text = "Введите целое число.";
            }
        }

        private void turnOn()
        {
            statistics.Enabled = true;
            M.Enabled = true;
            Hx.Enabled = true;
            K.Enabled = true;
            T0.Enabled = true;
            Ppogl.Enabled = true;
        }

        private void DrawChart()
        {
            chart1.Series[0].Points.Clear();
            int ind = 0;
            for (double i = 0; i < 1.05; i += 0.05)
            {
                chart1.Series[0].Points.AddXY(i, aheadStat[ind] / Dahead);
                ind++;
            }


            chart2.Series[0].Points.Clear();
            ind = 1;
            for (double i = -1; i <= 0; i += 0.05)
            {
                chart2.Series[0].Points.AddXY(i, backStat[ind] / Dback);
                ind++;
            }

            chart3.Series[0].Points.Clear();
            ind = 1;
            for (double i = hx / 20; i < hx; i += hx / 20)
            {
                chart3.Series[0].Points.AddXY(i, inStat[ind] / Din);
                ind++;
            }

        }

        private double Pogr(double val)
        {
            return Math.Sqrt(Math.Abs(val*(1 - val))/Sum());
        }
    }
}
