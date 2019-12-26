namespace GaussianDestribution
{
    partial class welcomeForm
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
            this.standartGaussButton = new System.Windows.Forms.Button();
            this.probGaussButton = new System.Windows.Forms.Button();
            this.cumulatGaussButton = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // standartGaussButton
            // 
            this.standartGaussButton.Font = new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.standartGaussButton.Location = new System.Drawing.Point(10, 75);
            this.standartGaussButton.Name = "standartGaussButton";
            this.standartGaussButton.Size = new System.Drawing.Size(210, 98);
            this.standartGaussButton.TabIndex = 0;
            this.standartGaussButton.Text = "Standart Gaussian Distribution";
            this.standartGaussButton.UseVisualStyleBackColor = true;
            this.standartGaussButton.Click += new System.EventHandler(this.StandartGaussButton_Click);
            // 
            // probGaussButton
            // 
            this.probGaussButton.Font = new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.probGaussButton.Location = new System.Drawing.Point(166, 179);
            this.probGaussButton.Name = "probGaussButton";
            this.probGaussButton.Size = new System.Drawing.Size(210, 98);
            this.probGaussButton.TabIndex = 1;
            this.probGaussButton.Text = "Probability Density";
            this.probGaussButton.UseVisualStyleBackColor = true;
            this.probGaussButton.Click += new System.EventHandler(this.ProbGaussButton_Click);
            // 
            // cumulatGaussButton
            // 
            this.cumulatGaussButton.Font = new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.cumulatGaussButton.Location = new System.Drawing.Point(324, 75);
            this.cumulatGaussButton.Name = "cumulatGaussButton";
            this.cumulatGaussButton.Size = new System.Drawing.Size(210, 98);
            this.cumulatGaussButton.TabIndex = 2;
            this.cumulatGaussButton.Text = "Cumulative Gaussian Distribution";
            this.cumulatGaussButton.UseVisualStyleBackColor = true;
            this.cumulatGaussButton.Click += new System.EventHandler(this.CumulatGaussButton_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 16.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(133, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(293, 33);
            this.label1.TabIndex = 3;
            this.label1.Text = "Please, select the method";
            // 
            // welcomeForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(544, 289);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.cumulatGaussButton);
            this.Controls.Add(this.probGaussButton);
            this.Controls.Add(this.standartGaussButton);
            this.Name = "welcomeForm";
            this.Text = "Gaussian Distributon";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button standartGaussButton;
        private System.Windows.Forms.Button probGaussButton;
        private System.Windows.Forms.Button cumulatGaussButton;
        private System.Windows.Forms.Label label1;
    }
}

