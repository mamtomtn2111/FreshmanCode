
namespace Bai3TH5
{
    partial class Bai3TH5
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
            this.label1 = new System.Windows.Forms.Label();
            this.textTen = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.radioBlack = new System.Windows.Forms.RadioButton();
            this.radioBlue = new System.Windows.Forms.RadioButton();
            this.radioGreen = new System.Windows.Forms.RadioButton();
            this.radioRed = new System.Windows.Forms.RadioButton();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.checkUnderLine = new System.Windows.Forms.CheckBox();
            this.checkItalic = new System.Windows.Forms.CheckBox();
            this.checkBold = new System.Windows.Forms.CheckBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.label2 = new System.Windows.Forms.Label();
            this.LabelKetQua = new System.Windows.Forms.Label();
            this.btnThoat = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.label1.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label1.ForeColor = System.Drawing.Color.Lime;
            this.label1.Location = new System.Drawing.Point(80, 48);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(74, 21);
            this.label1.TabIndex = 0;
            this.label1.Text = "Nhập tên";
            // 
            // textTen
            // 
            this.textTen.Location = new System.Drawing.Point(192, 46);
            this.textTen.Name = "textTen";
            this.textTen.Size = new System.Drawing.Size(146, 23);
            this.textTen.TabIndex = 1;
            this.textTen.TextChanged += new System.EventHandler(this.textTen_TextChanged);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.radioBlack);
            this.groupBox1.Controls.Add(this.radioBlue);
            this.groupBox1.Controls.Add(this.radioGreen);
            this.groupBox1.Controls.Add(this.radioRed);
            this.groupBox1.Location = new System.Drawing.Point(48, 125);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(159, 192);
            this.groupBox1.TabIndex = 2;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Color";
            // 
            // radioBlack
            // 
            this.radioBlack.AutoSize = true;
            this.radioBlack.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.radioBlack.Location = new System.Drawing.Point(6, 150);
            this.radioBlack.Name = "radioBlack";
            this.radioBlack.Size = new System.Drawing.Size(69, 25);
            this.radioBlack.TabIndex = 0;
            this.radioBlack.TabStop = true;
            this.radioBlack.Text = "Black";
            this.radioBlack.UseVisualStyleBackColor = true;
            this.radioBlack.CheckedChanged += new System.EventHandler(this.radioBlack_CheckedChanged);
            // 
            // radioBlue
            // 
            this.radioBlue.AutoSize = true;
            this.radioBlue.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.radioBlue.ForeColor = System.Drawing.Color.Blue;
            this.radioBlue.Location = new System.Drawing.Point(7, 107);
            this.radioBlue.Name = "radioBlue";
            this.radioBlue.Size = new System.Drawing.Size(62, 25);
            this.radioBlue.TabIndex = 0;
            this.radioBlue.TabStop = true;
            this.radioBlue.Text = "Blue";
            this.radioBlue.UseVisualStyleBackColor = true;
            this.radioBlue.CheckedChanged += new System.EventHandler(this.radioBlue_CheckedChanged);
            // 
            // radioGreen
            // 
            this.radioGreen.AutoSize = true;
            this.radioGreen.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.radioGreen.ForeColor = System.Drawing.Color.Green;
            this.radioGreen.Location = new System.Drawing.Point(6, 63);
            this.radioGreen.Name = "radioGreen";
            this.radioGreen.Size = new System.Drawing.Size(73, 25);
            this.radioGreen.TabIndex = 0;
            this.radioGreen.TabStop = true;
            this.radioGreen.Text = "Green";
            this.radioGreen.UseVisualStyleBackColor = true;
            this.radioGreen.CheckedChanged += new System.EventHandler(this.radioGreen_CheckedChanged);
            // 
            // radioRed
            // 
            this.radioRed.AutoSize = true;
            this.radioRed.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.radioRed.ForeColor = System.Drawing.Color.Red;
            this.radioRed.Location = new System.Drawing.Point(7, 23);
            this.radioRed.Name = "radioRed";
            this.radioRed.Size = new System.Drawing.Size(57, 25);
            this.radioRed.TabIndex = 0;
            this.radioRed.TabStop = true;
            this.radioRed.Text = "Red";
            this.radioRed.UseVisualStyleBackColor = true;
            this.radioRed.CheckedChanged += new System.EventHandler(this.radioRed_CheckedChanged);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.checkUnderLine);
            this.groupBox2.Controls.Add(this.checkItalic);
            this.groupBox2.Controls.Add(this.checkBold);
            this.groupBox2.Location = new System.Drawing.Point(293, 125);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(171, 192);
            this.groupBox2.TabIndex = 3;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Font";
            // 
            // checkUnderLine
            // 
            this.checkUnderLine.AutoSize = true;
            this.checkUnderLine.Font = new System.Drawing.Font("Segoe UI", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Underline))), System.Drawing.GraphicsUnit.Point);
            this.checkUnderLine.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.checkUnderLine.Location = new System.Drawing.Point(7, 138);
            this.checkUnderLine.Name = "checkUnderLine";
            this.checkUnderLine.Size = new System.Drawing.Size(110, 25);
            this.checkUnderLine.TabIndex = 0;
            this.checkUnderLine.Text = "Gạnh chân";
            this.checkUnderLine.UseVisualStyleBackColor = true;
            this.checkUnderLine.CheckedChanged += new System.EventHandler(this.checkUnderLine_CheckedChanged);
            // 
            // checkItalic
            // 
            this.checkItalic.AutoSize = true;
            this.checkItalic.Font = new System.Drawing.Font("Segoe UI", 12F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point);
            this.checkItalic.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.checkItalic.Location = new System.Drawing.Point(6, 87);
            this.checkItalic.Name = "checkItalic";
            this.checkItalic.Size = new System.Drawing.Size(134, 25);
            this.checkItalic.TabIndex = 0;
            this.checkItalic.Text = "Nghiêng Italic";
            this.checkItalic.UseVisualStyleBackColor = true;
            this.checkItalic.CheckedChanged += new System.EventHandler(this.checkItalic_CheckedChanged);
            // 
            // checkBold
            // 
            this.checkBold.AutoSize = true;
            this.checkBold.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.checkBold.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.checkBold.Location = new System.Drawing.Point(6, 38);
            this.checkBold.Name = "checkBold";
            this.checkBold.Size = new System.Drawing.Size(104, 25);
            this.checkBold.TabIndex = 0;
            this.checkBold.Text = "Đậm Bold";
            this.checkBold.UseVisualStyleBackColor = true;
            this.checkBold.CheckedChanged += new System.EventHandler(this.checkBold_CheckedChanged);
            // 
            // groupBox3
            // 
            this.groupBox3.Location = new System.Drawing.Point(396, 368);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(8, 8);
            this.groupBox3.TabIndex = 4;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "groupBox3";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.SystemColors.ActiveBorder;
            this.label2.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label2.ForeColor = System.Drawing.Color.Red;
            this.label2.Location = new System.Drawing.Point(80, 360);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(115, 21);
            this.label2.TabIndex = 5;
            this.label2.Text = "Lập trình bởi :";
            // 
            // LabelKetQua
            // 
            this.LabelKetQua.AutoSize = true;
            this.LabelKetQua.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.LabelKetQua.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.LabelKetQua.Location = new System.Drawing.Point(219, 360);
            this.LabelKetQua.Name = "LabelKetQua";
            this.LabelKetQua.Size = new System.Drawing.Size(105, 23);
            this.LabelKetQua.TabIndex = 0;
            this.LabelKetQua.Text = "Mời nhập tên";
            // 
            // btnThoat
            // 
            this.btnThoat.Location = new System.Drawing.Point(389, 415);
            this.btnThoat.Name = "btnThoat";
            this.btnThoat.Size = new System.Drawing.Size(75, 23);
            this.btnThoat.TabIndex = 6;
            this.btnThoat.Text = "Thoát";
            this.btnThoat.UseVisualStyleBackColor = true;
            this.btnThoat.Click += new System.EventHandler(this.btnThoat_Click);
            // 
            // Bai3TH5
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveBorder;
            this.ClientSize = new System.Drawing.Size(490, 450);
            this.Controls.Add(this.btnThoat);
            this.Controls.Add(this.LabelKetQua);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.textTen);
            this.Controls.Add(this.label1);
            this.Name = "Bai3TH5";
            this.Text = "Form1";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Bai3TH5_FormClosing);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textTen;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton radioBlack;
        private System.Windows.Forms.RadioButton radioBlue;
        private System.Windows.Forms.RadioButton radioGreen;
        private System.Windows.Forms.RadioButton radioRed;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.CheckBox checkUnderLine;
        private System.Windows.Forms.CheckBox checkItalic;
        private System.Windows.Forms.CheckBox checkBold;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label LabelKetQua;
        private System.Windows.Forms.Button btnThoat;
    }
}

