using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace GaussianDestribution
{
    public partial class calcForm : Form
    {
        [DllImport("Gaussian.dll", EntryPoint = "__gaussian_distribution_MOD_cumulative_distribution_function", CallingConvention = CallingConvention.Cdecl)]
        private static extern double cumulativeDistribution(ref double x, ref double mu, ref double lambda);
        [DllImport("Gaussian.dll", EntryPoint = "__gaussian_distribution_MOD_probability_density_function", CallingConvention = CallingConvention.Cdecl)]
        private static extern double probabilityDensity(ref double x, ref double mu, ref double lambda);
        [DllImport("Gaussian.dll", EntryPoint = "__gaussian_distribution_MOD_standart_gaussian_distribution", CallingConvention = CallingConvention.Cdecl)]
        private static extern double standartGaussianDistribution(ref double x);  
        [DllImport("Gaussian.dll", EntryPoint = "__gaussian_distribution_MOD_gaussian_random", CallingConvention = CallingConvention.Cdecl)]
        private static extern double gaussianRandom(ref double mu, ref double lambda);

        private String distributionName;
        private double mu;
        private double lambda;
        private double testNumber;//
        private Random randomizer;
        public calcForm(String distributionName)
        {
            InitializeComponent();
            this.distributionName = distributionName;
            randomizer = new Random();
            prepareForm();
        }

        void prepareData()
        {
            if(distributionName != "Standart Gaussian Distribution")
            {
                mu = Convert.ToDouble(muTextBox.Text);
                lambda = Convert.ToDouble(LambdaTextBox.Text);
            }
            testNumber = Convert.ToDouble(testNumberTextBox.Text);
        }

        private double myProb(double x, double mu, double lambda)
        {
            return Math.Sqrt(lambda / (2.0 * Math.PI * Math.Pow(x,3))) * Math.Exp(-1.0 * (lambda * (Math.Pow((x - mu), 2.0)) / (2.0 * mu * mu * x)));
        }
        private void setFieldsActive()
        {
            foreach(TextBox box in this.components.Components)
            {
                box.Enabled = true;
            }
        }

        private void setFieldsDiactive()
        {
            foreach (TextBox box in this.Controls.OfType<TextBox>())
            {
                box.Enabled = false;
            }
        }

        private void prepareForm()
        {
            this.Text = distributionName;
            switch (distributionName)
            {
                case "Standart Gaussian Distribution":
                    {
                        setFieldsDiactive();
                        testNumberTextBox.Enabled = true;
                        break;
                    }
            }
        }

        private void StartButton_Click(object sender, EventArgs e)
        {
            prepareData();
            double x;
            double y;
            foreach(Series seria in chart1.Series){
                seria.Points.Clear();
                seria.ChartType = SeriesChartType.Column;
                
            }
            chart1.ChartAreas[0].AxisX.Maximum = 3.0;

            switch (distributionName)
            {
                case "Standart Gaussian Distribution":
                    {
                        for (double i = 0.0; i <= testNumber; i += 0.10)
                        {
                            x = i;
                            y = standartGaussianDistribution(ref x);
                            Console.WriteLine("for x = " + i + "res:" + y);
                            chart1.Series[0].Points.AddXY(x, y);
                        }
                        break;
                    }
                case "Probability Density":
                    {
                        Dictionary<Double, int> stat = new Dictionary<double, int>();
                        for (int i = 0; i < testNumber; i++)
                        {
                            x = Math.Round(randomizer.Next(1, 4) - randomizer.NextDouble(), 4);
                            y = Math.Round(probabilityDensity(ref x, ref mu, ref lambda), 3);
                            if (stat.ContainsKey(y))
                            {
                                stat[y] += 1;
                            }
                            else
                            {
                                stat.Add(y, 1);
                            }
                        }
                        int sum = 0;
                        foreach (Double key in stat.Keys)
                        {
                            sum += stat[key];
                        }
                        foreach (Double key in stat.Keys)
                        {
                            chart1.Series[0].Points.AddXY(key, stat[key] / (Double)sum);
                        }
                        break;
                    }
                case "Cumulative Gaussian Distribution":
                    {
                        Dictionary<Double, int> stat = new Dictionary<double, int>();
                        for (int i = 0; i < testNumber; i++)
                        {
                            //x = Math.Round(randomizer.Next(1, 4) - randomizer.NextDouble(), 4);
                            y = Math.Round(gaussianRandom(ref mu, ref lambda), 3);
                            if (stat.ContainsKey(y))
                            {
                                stat[y] += 1;
                            }
                            else
                            {
                                stat.Add(y, 1);
                            }
                        }
                        int sum = 0;
                        foreach (Double key in stat.Keys)
                        {
                            sum += stat[key];
                        }
                        foreach (Double key in stat.Keys)
                        {
                            chart1.Series[0].Points.AddXY(key, stat[key] / (Double)sum);
                        }
                        break;
                    }
            }
        }
    }
}
