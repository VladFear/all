using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GaussianDestribution
{
    public partial class welcomeForm : Form
    {
        public welcomeForm()
        {
            InitializeComponent();
        }

        private void StandartGaussButton_Click(object sender, EventArgs e)
        {
            new calcForm("Standart Gaussian Distribution").ShowDialog();
        }

        private void ProbGaussButton_Click(object sender, EventArgs e)
        {
            new calcForm("Probability Density").ShowDialog();
        }

        private void CumulatGaussButton_Click(object sender, EventArgs e)
        {
            new calcForm("Cumulative Gaussian Distribution").ShowDialog();
        }
    }
}
