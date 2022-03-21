
namespace Bai2TH5NangCao
{
    partial class Bai2TH5NC
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.panel1 = new System.Windows.Forms.Panel();
            this.label1 = new System.Windows.Forms.Label();
            this.radioVietNam = new System.Windows.Forms.RadioButton();
            this.label2 = new System.Windows.Forms.Label();
            this.radioUSA = new System.Windows.Forms.RadioButton();
            this.radioItalian = new System.Windows.Forms.RadioButton();
            this.radioPhilippine = new System.Windows.Forms.RadioButton();
            this.pictureBox = new System.Windows.Forms.PictureBox();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.panel1.Controls.Add(this.label1);
            this.panel1.Location = new System.Drawing.Point(1, 1);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(797, 100);
            this.panel1.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Segoe UI", 36F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label1.ForeColor = System.Drawing.Color.OrangeRed;
            this.label1.Location = new System.Drawing.Point(195, 16);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(391, 65);
            this.label1.TabIndex = 0;
            this.label1.Text = "COUNTRY FLAGS";
            // 
            // radioVietNam
            // 
            this.radioVietNam.AutoSize = true;
            this.radioVietNam.Location = new System.Drawing.Point(127, 196);
            this.radioVietNam.Name = "radioVietNam";
            this.radioVietNam.Size = new System.Drawing.Size(74, 19);
            this.radioVietNam.TabIndex = 1;
            this.radioVietNam.TabStop = true;
            this.radioVietNam.Text = "Việt Nam";
            this.radioVietNam.UseVisualStyleBackColor = true;
            this.radioVietNam.CheckedChanged += new System.EventHandler(this.radioVietNam_CheckedChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(113, 153);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(50, 15);
            this.label2.TabIndex = 2;
            this.label2.Text = "Country";
            // 
            // radioUSA
            // 
            this.radioUSA.AutoSize = true;
            this.radioUSA.Location = new System.Drawing.Point(127, 245);
            this.radioUSA.Name = "radioUSA";
            this.radioUSA.Size = new System.Drawing.Size(47, 19);
            this.radioUSA.TabIndex = 1;
            this.radioUSA.TabStop = true;
            this.radioUSA.Text = "USA";
            this.radioUSA.UseVisualStyleBackColor = true;
            this.radioUSA.CheckedChanged += new System.EventHandler(this.radioUSA_CheckedChanged);
            // 
            // radioItalian
            // 
            this.radioItalian.AutoSize = true;
            this.radioItalian.Location = new System.Drawing.Point(127, 298);
            this.radioItalian.Name = "radioItalian";
            this.radioItalian.Size = new System.Drawing.Size(57, 19);
            this.radioItalian.TabIndex = 1;
            this.radioItalian.TabStop = true;
            this.radioItalian.Text = "Italian";
            this.radioItalian.UseVisualStyleBackColor = true;
            this.radioItalian.CheckedChanged += new System.EventHandler(this.radioItalian_CheckedChanged);
            // 
            // radioPhilippine
            // 
            this.radioPhilippine.AutoSize = true;
            this.radioPhilippine.Location = new System.Drawing.Point(127, 351);
            this.radioPhilippine.Name = "radioPhilippine";
            this.radioPhilippine.Size = new System.Drawing.Size(78, 19);
            this.radioPhilippine.TabIndex = 1;
            this.radioPhilippine.TabStop = true;
            this.radioPhilippine.Text = "Philippine";
            this.radioPhilippine.UseVisualStyleBackColor = true;
            this.radioPhilippine.CheckedChanged += new System.EventHandler(this.radioPhilippine_CheckedChanged);
            // 
            // pictureBox
            // 
            this.pictureBox.Location = new System.Drawing.Point(361, 153);
            this.pictureBox.Name = "pictureBox";
            this.pictureBox.Size = new System.Drawing.Size(375, 229);
            this.pictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox.TabIndex = 3;
            this.pictureBox.TabStop = false;
            // 
            // Bai2TH5NC
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.pictureBox);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.radioPhilippine);
            this.Controls.Add(this.radioItalian);
            this.Controls.Add(this.radioUSA);
            this.Controls.Add(this.radioVietNam);
            this.Controls.Add(this.panel1);
            this.Name = "Bai2TH5NC";
            this.Text = "Bài 2 nâng cao - NguyenVuHai";
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.RadioButton radioVietNam;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.RadioButton radioUSA;
        private System.Windows.Forms.RadioButton radioItalian;
        private System.Windows.Forms.RadioButton radioPhilippine;
        private System.Windows.Forms.PictureBox pictureBox;
    }
}

