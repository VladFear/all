using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Text.RegularExpressions;

namespace laba2
{
    public partial class Form1 : Form
    {
        private bool canceled = false;
        private bool paused = false;
        private double percent = 0;
        private double percent2 = 0;
        private const int MIN_STEPS = 0;
        private const int MAX_STEPS = 100;

        private bool done = false;
        private bool done2 = false;

        private long Nx = 0;
        private long Ny = 0;
        private long Nz = 0;


        private Methods methods = new Methods();

        private static readonly Regex regexp = new Regex("^[1-9][0-9]{0,9}$");
        private static readonly Regex doubleRegexp = new Regex("^[-+]?[0-9]*\\.?[0-9]+$");

        public Form1()
        {
            InitializeComponent();           
            backgroundWorker1.WorkerReportsProgress = true;
            backgroundWorker1.WorkerSupportsCancellation = true;

            backgroundWorker2.WorkerReportsProgress = true;
            backgroundWorker2.WorkerSupportsCancellation = true;
        }

        /****************************************************BUTTONS***********************************************************/

        /***Start_Button***/
        private void startStopButton_Click(object sender, EventArgs e)
        {
            if (!checkRegExp())
                return;

            if (done == true && done2 == true)
            {
                canceled = true;
                done = false;
                done2 = false;
            }
                

            if (this.canceled == true)
            {
                progressBar1.Value = 0;
                progressBar2.Value = 0;
                progress_label1.Text = "0%";
                progress_label2.Text = "0%";
                this.canceled = false;              
            }

            if (backgroundWorker1.IsBusy != true && backgroundWorker2.IsBusy != true)
            {
                if (!this.setValues())
                    return;

                //PROGRESS BAR SETTINGS
                progressBar1.Minimum = MIN_STEPS;
                progressBar1.Maximum = MAX_STEPS;               
                progressBar1.Step = 1;

                progressBar2.Minimum = MIN_STEPS;
                progressBar2.Maximum = MAX_STEPS;
                progressBar2.Step = 1;

                percent = this.Nx / 100.00;
                percent2 = this.Ny / 100.00;
                methods.Reset();
                disableGUI();
                warning_label_1.Text = "Processing...";
                warning_label_2.Text = "Processing...";
                this.methods.Analytical();               
                this.analytical_label.Text = "Analytical:" + methods.Analytical_result.ToString();
                this.methods.Rectangle(Nz);
                rectangle_label.Text = "Rectangle:" + methods.Rectangle_result.ToString();
                backgroundWorker1.RunWorkerAsync();
                backgroundWorker2.RunWorkerAsync();
            }
            else
            {
                // Cancel the asynchronous operation.
                EnableGUI();
                this.canceled = true;
                backgroundWorker1.CancelAsync();
                backgroundWorker2.CancelAsync();
            }   
        }

        /***Pause_Button***/
        private void pauseButton_Click(object sender, EventArgs e)
        {
            if (backgroundWorker1.IsBusy != true && backgroundWorker2.IsBusy != true)
            {
                this.paused = false;
                disableGUI();
                backgroundWorker1.RunWorkerAsync();
                backgroundWorker2.RunWorkerAsync();
                if(done!=true)
                    warning_label_1.Text = "Processing...";
                if(done2!=true)
                    warning_label_2.Text = "Processing...";
            }
            else
            {
                this.paused = true;
                backgroundWorker1.CancelAsync();
                backgroundWorker2.CancelAsync();
                EnableGUI();
                return;
            }         
        }

        /****************************************************BACKGROUND WORKERS***********************************************************/

        /***Do_work***/
        private void backgroundWorker1_DoWork(object sender, DoWorkEventArgs e)
        {
            BackgroundWorker worker = sender as BackgroundWorker;            
            double stepCount = 0;
            for (long i = methods.getMonteCarloGeomCurrent(); i < this.Nx; i++)
            {
                if (worker.CancellationPending == true)
                {
                    e.Cancel = true;
                    return;
                }

                this.methods.Monte_Carlo_Geom();
                stepCount += 1;

                if (stepCount >= percent)
                {
                    //System.Threading.Thread.Sleep(1);
                    if (stepCount >= percent)
                    {                        
                        worker.ReportProgress(1);
                    }
                    stepCount = 0;
                }
            }
           
            while (progressBar1.Value != 100)
            {
                //System.Threading.Thread.Sleep(1);
                worker.ReportProgress(1);
            }

        }

        /***Do_work 2***/
        private void backgroundWorker2_DoWork(object sender, DoWorkEventArgs e)
        {
            BackgroundWorker worker = sender as BackgroundWorker;
            
            double stepCount = 0;
            for (long i = methods.getMonteCarloCurrent(); i < this.Ny; i++)
            {

                if (worker.CancellationPending == true)
                {
                    e.Cancel = true;
                    return;
                }

                this.methods.Monte_Carlo();
                stepCount += 1;

                if (stepCount >= percent)
                {
                    //System.Threading.Thread.Sleep(1);
                    if (stepCount >= percent)
                    {
                        worker.ReportProgress(1);
                    }
                    stepCount = 0;
                }
            }
            while (progressBar2.Value != 100)
            {
                //System.Threading.Thread.Sleep(1);
                worker.ReportProgress(1);
            }

        }

       

        /***Progress_Changed***/
        private void backgroundWorker1_ProgressChanged(object sender, ProgressChangedEventArgs e)
        {
            progressBar1.PerformStep();
            progress_label1.Text = progressBar1.Value + "%";
        }


        /***Progress_Changed 2***/
        private void backgroundWorker2_ProgressChanged(object sender, ProgressChangedEventArgs e)
        {
            progressBar2.PerformStep();
            progress_label2.Text = progressBar2.Value + "%";
        }


     

        /***Worker_Complete***/
        private void backgroundWorker1_RunWorkerCompleted(object sender, RunWorkerCompletedEventArgs e)
        {
            if(this.paused == true)
            {
               warning_label_1.Text = "Paused";
            }
            else
            {
                warning_label_1.Text = "Done!";
                if (progressBar1.Value ==MAX_STEPS)
                {
                    done = true;
                    Console.WriteLine("first done 100%");
                }
            }
            monte_carlo_geom_label.Text = "Monte Carlo geom:" + methods.Monte_carlo_geom_result.ToString();
            EnableGUI();
        }

        /***Worker_Complete 2***/
        private void backgroundWorker2_RunWorkerCompleted(object sender, RunWorkerCompletedEventArgs e)
        {
            if (this.paused == true)
            {
                warning_label_2.Text = "Paused";
            }
            else
            {
                warning_label_2.Text = "Done!";
                if (progressBar2.Value == MAX_STEPS)
                {
                    done2 = true;
                    Console.WriteLine("second done 100%");
                }
            }
            monte_carlo_label.Text = "Monte Carlo:" + methods.Monte_carlo_result.ToString();
            EnableGUI();
        }    

        /****************************************************OTHERS***********************************************************/

        /***Regexp***/
        public bool checkRegExpStr(string s)
        {
            MatchCollection matches = regexp.Matches(s);
            if (s.Equals(""))
                return false;
            if (matches.Count == 0)
            {
                return false;
            }
            return true;
        }

        /***Double Regexp***/
        public bool checkDoubleRegExp(string s)
        {
            MatchCollection matches = doubleRegexp.Matches(s);
            if (s.Equals(""))
                return false;
            if (matches.Count ==0)
            {
                return false;
            }
            return true;
        }


        /***Check textboxes for regexp***/
        private bool checkRegExp()
        {
            warning_label_1.Text = "";
            string s =ATextBox.Text;
            if (!checkDoubleRegExp(s))
            {
                warning_label_1.Text = "Wrong data format (A)";
                return false;
            }

            s = BTextBox.Text;
            if (!checkDoubleRegExp(s))
            {
                warning_label_1.Text = "Wrong data format (B)";
                return false;
            }

            s = CTextBox.Text;
            if (!checkDoubleRegExp(s))
            {
                warning_label_1.Text = "Wrong data format (C)";
                return false;
            }
            s = NxTextBox.Text;
            if (!checkRegExpStr(s))
            {
                warning_label_1.Text = "Wrong data format (Nx)";
                return false;
            }
            s = NyTextBox.Text;
            if (!checkRegExpStr(s))
            {
                warning_label_1.Text = "Wrong data format (Ny)";
                return false;
            }
            s = NzTextBox.Text;
            if (!checkRegExpStr(s))
            {
                warning_label_1.Text = "Wrong data format (Nz)";
                return false;
            }
            return true;
        }

        /***Set the values of the variables***/
        private bool setValues()
        {
            double A = Double.Parse(ATextBox.Text, CultureInfo.InvariantCulture);
            double B = Double.Parse(BTextBox.Text, CultureInfo.InvariantCulture);
            double C = Double.Parse(CTextBox.Text, CultureInfo.InvariantCulture);

            this.Nx = Int64.Parse(NxTextBox.Text);
            this.Ny = Int64.Parse(NyTextBox.Text);
            this.Nz = Int64.Parse(NzTextBox.Text);


            methods.setArgs(A,B,C);
            return true;
        }

            /***Enable Gui for editing***/
            private void EnableGUI()
        {
            ATextBox.Enabled = true;
            BTextBox.Enabled = true;
            CTextBox.Enabled = true;

            NxTextBox.Enabled = true;
            NyTextBox.Enabled = true;
            NzTextBox.Enabled = true;

        }

        /***Disable Gui for editing***/
        private void disableGUI()
        {
            ATextBox.Enabled = false;
            BTextBox.Enabled = false;
            CTextBox.Enabled = false;

            NxTextBox.Enabled = false;
            NyTextBox.Enabled = false;
            NzTextBox.Enabled = false;

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
