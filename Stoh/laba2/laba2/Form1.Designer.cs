namespace laba2
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.NxTextBox = new System.Windows.Forms.TextBox();
            this.ATextBox = new System.Windows.Forms.TextBox();
            this.CTextBox = new System.Windows.Forms.TextBox();
            this.NyTextBox = new System.Windows.Forms.TextBox();
            this.BTextBox = new System.Windows.Forms.TextBox();
            this.NzTextBox = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.analytical_label = new System.Windows.Forms.Label();
            this.rectangle_label = new System.Windows.Forms.Label();
            this.monte_carlo_geom_label = new System.Windows.Forms.Label();
            this.monte_carlo_label = new System.Windows.Forms.Label();
            this.progressBar1 = new System.Windows.Forms.ProgressBar();
            this.progressBar2 = new System.Windows.Forms.ProgressBar();
            this.startStopButton = new System.Windows.Forms.Button();
            this.pauseButton = new System.Windows.Forms.Button();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.warning_label_1 = new System.Windows.Forms.Label();
            this.backgroundWorker2 = new System.ComponentModel.BackgroundWorker();
            this.warning_label_2 = new System.Windows.Forms.Label();
            this.warning_label_3 = new System.Windows.Forms.Label();
            this.progress_label1 = new System.Windows.Forms.Label();
            this.progress_label2 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.label12 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // NxTextBox
            // 
            this.NxTextBox.Location = new System.Drawing.Point(438, 70);
            this.NxTextBox.Name = "NxTextBox";
            this.NxTextBox.Size = new System.Drawing.Size(100, 20);
            this.NxTextBox.TabIndex = 0;
            this.NxTextBox.Text = "1";
            // 
            // ATextBox
            // 
            this.ATextBox.Location = new System.Drawing.Point(181, 69);
            this.ATextBox.Name = "ATextBox";
            this.ATextBox.Size = new System.Drawing.Size(100, 20);
            this.ATextBox.TabIndex = 1;
            this.ATextBox.Text = "1";
            // 
            // CTextBox
            // 
            this.CTextBox.Location = new System.Drawing.Point(181, 139);
            this.CTextBox.Name = "CTextBox";
            this.CTextBox.Size = new System.Drawing.Size(100, 20);
            this.CTextBox.TabIndex = 2;
            this.CTextBox.Text = "0";
            // 
            // NyTextBox
            // 
            this.NyTextBox.Location = new System.Drawing.Point(438, 103);
            this.NyTextBox.Name = "NyTextBox";
            this.NyTextBox.Size = new System.Drawing.Size(100, 20);
            this.NyTextBox.TabIndex = 3;
            this.NyTextBox.Text = "1";
            // 
            // BTextBox
            // 
            this.BTextBox.Location = new System.Drawing.Point(181, 103);
            this.BTextBox.Name = "BTextBox";
            this.BTextBox.Size = new System.Drawing.Size(100, 20);
            this.BTextBox.TabIndex = 4;
            this.BTextBox.Text = "0";
            // 
            // NzTextBox
            // 
            this.NzTextBox.Location = new System.Drawing.Point(438, 140);
            this.NzTextBox.Name = "NzTextBox";
            this.NzTextBox.Size = new System.Drawing.Size(100, 20);
            this.NzTextBox.TabIndex = 5;
            this.NzTextBox.Text = "1";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label1.Location = new System.Drawing.Point(12, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(175, 24);
            this.label1.TabIndex = 6;
            this.label1.Text = "f(x,y,z) = f(x)*f(y)*f(z)";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label2.Location = new System.Drawing.Point(12, 65);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(161, 24);
            this.label2.TabIndex = 7;
            this.label2.Text = "f(x) = A*(1-x)*x A=";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label3.Location = new System.Drawing.Point(11, 103);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(164, 24);
            this.label3.TabIndex = 8;
            this.label3.Text = "f(y) = 1-sin(B*y) B=";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label4.Location = new System.Drawing.Point(11, 135);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(157, 24);
            this.label4.TabIndex = 9;
            this.label4.Text = "f(z) = e^(-C*z) C =";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label5.Location = new System.Drawing.Point(304, 65);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(128, 24);
            this.label5.TabIndex = 10;
            this.label5.Text = "Intervals Nx = ";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label6.Location = new System.Drawing.Point(304, 103);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(127, 24);
            this.label6.TabIndex = 11;
            this.label6.Text = "Intervals Ny = ";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label7.Location = new System.Drawing.Point(304, 134);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(127, 24);
            this.label7.TabIndex = 12;
            this.label7.Text = "Intervals Nz = ";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label8.Location = new System.Drawing.Point(232, 9);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(84, 24);
            this.label8.TabIndex = 13;
            this.label8.Text = "0<=x<=1";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label9.Location = new System.Drawing.Point(349, 9);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(83, 24);
            this.label9.TabIndex = 14;
            this.label9.Text = "0<=y<=1";
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.label10.Location = new System.Drawing.Point(468, 9);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(83, 24);
            this.label10.TabIndex = 15;
            this.label10.Text = "0<=z<=1";
            // 
            // analytical_label
            // 
            this.analytical_label.AutoSize = true;
            this.analytical_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.analytical_label.Location = new System.Drawing.Point(587, 69);
            this.analytical_label.Name = "analytical_label";
            this.analytical_label.Size = new System.Drawing.Size(94, 24);
            this.analytical_label.TabIndex = 16;
            this.analytical_label.Text = "Analytical:";
            // 
            // rectangle_label
            // 
            this.rectangle_label.AutoSize = true;
            this.rectangle_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.rectangle_label.Location = new System.Drawing.Point(587, 169);
            this.rectangle_label.Name = "rectangle_label";
            this.rectangle_label.Size = new System.Drawing.Size(100, 24);
            this.rectangle_label.TabIndex = 17;
            this.rectangle_label.Text = "Rectangle:";
            // 
            // monte_carlo_geom_label
            // 
            this.monte_carlo_geom_label.AutoSize = true;
            this.monte_carlo_geom_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.monte_carlo_geom_label.Location = new System.Drawing.Point(587, 103);
            this.monte_carlo_geom_label.Name = "monte_carlo_geom_label";
            this.monte_carlo_geom_label.Size = new System.Drawing.Size(171, 24);
            this.monte_carlo_geom_label.TabIndex = 18;
            this.monte_carlo_geom_label.Text = "Monte Carlo geom:";
            // 
            // monte_carlo_label
            // 
            this.monte_carlo_label.AutoSize = true;
            this.monte_carlo_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.monte_carlo_label.Location = new System.Drawing.Point(587, 136);
            this.monte_carlo_label.Name = "monte_carlo_label";
            this.monte_carlo_label.Size = new System.Drawing.Size(117, 24);
            this.monte_carlo_label.TabIndex = 19;
            this.monte_carlo_label.Text = "Monte Carlo:";
            // 
            // progressBar1
            // 
            this.progressBar1.Location = new System.Drawing.Point(163, 293);
            this.progressBar1.Name = "progressBar1";
            this.progressBar1.Size = new System.Drawing.Size(555, 23);
            this.progressBar1.TabIndex = 20;
            // 
            // progressBar2
            // 
            this.progressBar2.Location = new System.Drawing.Point(163, 332);
            this.progressBar2.Name = "progressBar2";
            this.progressBar2.Size = new System.Drawing.Size(555, 23);
            this.progressBar2.TabIndex = 21;
            // 
            // startStopButton
            // 
            this.startStopButton.Location = new System.Drawing.Point(854, 403);
            this.startStopButton.Name = "startStopButton";
            this.startStopButton.Size = new System.Drawing.Size(90, 35);
            this.startStopButton.TabIndex = 23;
            this.startStopButton.Text = "Start/Stop";
            this.startStopButton.UseVisualStyleBackColor = true;
            this.startStopButton.Click += new System.EventHandler(this.startStopButton_Click);
            // 
            // pauseButton
            // 
            this.pauseButton.Location = new System.Drawing.Point(727, 403);
            this.pauseButton.Name = "pauseButton";
            this.pauseButton.Size = new System.Drawing.Size(91, 35);
            this.pauseButton.TabIndex = 24;
            this.pauseButton.Text = "Pause";
            this.pauseButton.UseVisualStyleBackColor = true;
            this.pauseButton.Click += new System.EventHandler(this.pauseButton_Click);
            // 
            // backgroundWorker1
            // 
            this.backgroundWorker1.DoWork += new System.ComponentModel.DoWorkEventHandler(this.backgroundWorker1_DoWork);
            this.backgroundWorker1.ProgressChanged += new System.ComponentModel.ProgressChangedEventHandler(this.backgroundWorker1_ProgressChanged);
            this.backgroundWorker1.RunWorkerCompleted += new System.ComponentModel.RunWorkerCompletedEventHandler(this.backgroundWorker1_RunWorkerCompleted);
            // 
            // warning_label_1
            // 
            this.warning_label_1.AutoSize = true;
            this.warning_label_1.Location = new System.Drawing.Point(784, 303);
            this.warning_label_1.Name = "warning_label_1";
            this.warning_label_1.Size = new System.Drawing.Size(0, 13);
            this.warning_label_1.TabIndex = 25;
            // 
            // backgroundWorker2
            // 
            this.backgroundWorker2.DoWork += new System.ComponentModel.DoWorkEventHandler(this.backgroundWorker2_DoWork);
            this.backgroundWorker2.ProgressChanged += new System.ComponentModel.ProgressChangedEventHandler(this.backgroundWorker2_ProgressChanged);
            this.backgroundWorker2.RunWorkerCompleted += new System.ComponentModel.RunWorkerCompletedEventHandler(this.backgroundWorker2_RunWorkerCompleted);        
            // 
            // warning_label_2
            // 
            this.warning_label_2.AutoSize = true;
            this.warning_label_2.Location = new System.Drawing.Point(784, 332);
            this.warning_label_2.Name = "warning_label_2";
            this.warning_label_2.Size = new System.Drawing.Size(0, 13);
            this.warning_label_2.TabIndex = 28;
            // 
            // warning_label_3
            // 
            this.warning_label_3.AutoSize = true;
            this.warning_label_3.Location = new System.Drawing.Point(784, 363);
            this.warning_label_3.Name = "warning_label_3";
            this.warning_label_3.Size = new System.Drawing.Size(0, 13);
            this.warning_label_3.TabIndex = 29;
            // 
            // progress_label1
            // 
            this.progress_label1.AutoSize = true;
            this.progress_label1.Location = new System.Drawing.Point(731, 293);
            this.progress_label1.Name = "progress_label1";
            this.progress_label1.Size = new System.Drawing.Size(21, 13);
            this.progress_label1.TabIndex = 30;
            this.progress_label1.Text = "0%";
            // 
            // progress_label2
            // 
            this.progress_label2.AutoSize = true;
            this.progress_label2.Location = new System.Drawing.Point(731, 332);
            this.progress_label2.Name = "progress_label2";
            this.progress_label2.Size = new System.Drawing.Size(21, 13);
            this.progress_label2.TabIndex = 31;
            this.progress_label2.Text = "0%";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(37, 303);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(93, 13);
            this.label11.TabIndex = 33;
            this.label11.Text = "Monte Carlo geom";
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Location = new System.Drawing.Point(37, 342);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(64, 13);
            this.label12.TabIndex = 34;
            this.label12.Text = "Monte Carlo";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(969, 450);
            this.Controls.Add(this.label12);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.progress_label2);
            this.Controls.Add(this.progress_label1);
            this.Controls.Add(this.warning_label_3);
            this.Controls.Add(this.warning_label_2);
            this.Controls.Add(this.warning_label_1);
            this.Controls.Add(this.pauseButton);
            this.Controls.Add(this.startStopButton);
            this.Controls.Add(this.progressBar2);
            this.Controls.Add(this.progressBar1);
            this.Controls.Add(this.monte_carlo_label);
            this.Controls.Add(this.monte_carlo_geom_label);
            this.Controls.Add(this.rectangle_label);
            this.Controls.Add(this.analytical_label);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.NzTextBox);
            this.Controls.Add(this.BTextBox);
            this.Controls.Add(this.NyTextBox);
            this.Controls.Add(this.CTextBox);
            this.Controls.Add(this.ATextBox);
            this.Controls.Add(this.NxTextBox);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox NxTextBox;
        private System.Windows.Forms.TextBox ATextBox;
        private System.Windows.Forms.TextBox CTextBox;
        private System.Windows.Forms.TextBox NyTextBox;
        private System.Windows.Forms.TextBox BTextBox;
        private System.Windows.Forms.TextBox NzTextBox;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label analytical_label;
        private System.Windows.Forms.Label rectangle_label;
        private System.Windows.Forms.Label monte_carlo_geom_label;
        private System.Windows.Forms.Label monte_carlo_label;
        private System.Windows.Forms.ProgressBar progressBar1;
        private System.Windows.Forms.ProgressBar progressBar2;
        private System.Windows.Forms.Button startStopButton;
        private System.Windows.Forms.Button pauseButton;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.Label warning_label_1;
        private System.ComponentModel.BackgroundWorker backgroundWorker2;
        private System.ComponentModel.BackgroundWorker backgroundWorker3;
        private System.Windows.Forms.Label warning_label_2;
        private System.Windows.Forms.Label warning_label_3;
        private System.Windows.Forms.Label progress_label1;
        private System.Windows.Forms.Label progress_label2;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label12;
    }
}

