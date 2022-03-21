
namespace TH5
{
    partial class Bai1
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
            this.components = new System.ComponentModel.Container();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textA = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.textB = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.textNghiem = new System.Windows.Forms.TextBox();
            this.BtnGiai = new System.Windows.Forms.Button();
            this.BtnXoa = new System.Windows.Forms.Button();
            this.BtnThoat = new System.Windows.Forms.Button();
            this.errorProvider1 = new System.Windows.Forms.ErrorProvider(this.components);
            this.errorProvider2 = new System.Windows.Forms.ErrorProvider(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider2)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label1.ForeColor = System.Drawing.SystemColors.HotTrack;
            this.label1.Location = new System.Drawing.Point(151, 36);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(465, 36);
            this.label1.TabIndex = 0;
            this.label1.Text = "GIẢI PT BẬC NHẤT AX + B = 0";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(162, 126);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(47, 15);
            this.label2.TabIndex = 1;
            this.label2.Text = "Nhập A";
            // 
            // textA
            // 
            this.textA.Location = new System.Drawing.Point(265, 123);
            this.textA.Name = "textA";
            this.textA.Size = new System.Drawing.Size(282, 23);
            this.textA.TabIndex = 2;
            this.textA.TextChanged += new System.EventHandler(this.textA_TextChanged);
            this.textA.Leave += new System.EventHandler(this.textA_Leave);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(162, 182);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(46, 15);
            this.label3.TabIndex = 1;
            this.label3.Text = "Nhập B";
            // 
            // textB
            // 
            this.textB.Location = new System.Drawing.Point(265, 179);
            this.textB.Name = "textB";
            this.textB.Size = new System.Drawing.Size(282, 23);
            this.textB.TabIndex = 2;
            this.textB.TextChanged += new System.EventHandler(this.textB_TextChanged);
            this.textB.Leave += new System.EventHandler(this.textB_Leave);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(116, 242);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(123, 15);
            this.label4.TabIndex = 1;
            this.label4.Text = "Nghiệm phương trình";
            // 
            // textNghiem
            // 
            this.textNghiem.Location = new System.Drawing.Point(266, 239);
            this.textNghiem.Name = "textNghiem";
            this.textNghiem.Size = new System.Drawing.Size(282, 23);
            this.textNghiem.TabIndex = 2;
            // 
            // BtnGiai
            // 
            this.BtnGiai.Enabled = false;
            this.BtnGiai.Location = new System.Drawing.Point(162, 325);
            this.BtnGiai.Name = "BtnGiai";
            this.BtnGiai.Size = new System.Drawing.Size(75, 23);
            this.BtnGiai.TabIndex = 3;
            this.BtnGiai.Text = "Giải";
            this.BtnGiai.UseVisualStyleBackColor = true;
            this.BtnGiai.Click += new System.EventHandler(this.BtnGiai_Click);
            // 
            // BtnXoa
            // 
            this.BtnXoa.Enabled = false;
            this.BtnXoa.Location = new System.Drawing.Point(312, 325);
            this.BtnXoa.Name = "BtnXoa";
            this.BtnXoa.Size = new System.Drawing.Size(75, 23);
            this.BtnXoa.TabIndex = 3;
            this.BtnXoa.Text = "Xóa";
            this.BtnXoa.UseVisualStyleBackColor = true;
            this.BtnXoa.Click += new System.EventHandler(this.BtnXoa_Click);
            // 
            // BtnThoat
            // 
            this.BtnThoat.Location = new System.Drawing.Point(472, 325);
            this.BtnThoat.Name = "BtnThoat";
            this.BtnThoat.Size = new System.Drawing.Size(75, 23);
            this.BtnThoat.TabIndex = 3;
            this.BtnThoat.Text = "Thoát";
            this.BtnThoat.UseVisualStyleBackColor = true;
            this.BtnThoat.Click += new System.EventHandler(this.BtnThoat_Click);
            // 
            // errorProvider1
            // 
            this.errorProvider1.ContainerControl = this;
            // 
            // errorProvider2
            // 
            this.errorProvider2.ContainerControl = this;
            // 
            // Bai1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.BtnThoat);
            this.Controls.Add(this.BtnXoa);
            this.Controls.Add(this.BtnGiai);
            this.Controls.Add(this.textNghiem);
            this.Controls.Add(this.textB);
            this.Controls.Add(this.textA);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Bai1";
            this.Text = "Bài 1 - NguyenVuHai";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider2)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textA;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textB;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox textNghiem;
        private System.Windows.Forms.Button BtnGiai;
        private System.Windows.Forms.Button BtnXoa;
        private System.Windows.Forms.Button BtnThoat;
        private System.Windows.Forms.ErrorProvider errorProvider1;
        private System.Windows.Forms.ErrorProvider errorProvider2;
    }
}

