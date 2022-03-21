
namespace Bai2TH5
{
    partial class Bai2
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
            this.textSo1 = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.textSo2 = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.radioChia = new System.Windows.Forms.RadioButton();
            this.radioNhan = new System.Windows.Forms.RadioButton();
            this.radioTru = new System.Windows.Forms.RadioButton();
            this.radioCong = new System.Windows.Forms.RadioButton();
            this.label3 = new System.Windows.Forms.Label();
            this.textKetQua = new System.Windows.Forms.TextBox();
            this.errorProvider1 = new System.Windows.Forms.ErrorProvider(this.components);
            this.errorProvider2 = new System.Windows.Forms.ErrorProvider(this.components);
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider2)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(147, 66);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(42, 21);
            this.label1.TabIndex = 0;
            this.label1.Text = "Số 1";
            // 
            // textSo1
            // 
            this.textSo1.Location = new System.Drawing.Point(229, 66);
            this.textSo1.Name = "textSo1";
            this.textSo1.Size = new System.Drawing.Size(450, 23);
            this.textSo1.TabIndex = 1;
            this.textSo1.TextChanged += new System.EventHandler(this.textSo1_TextChanged);
            this.textSo1.Leave += new System.EventHandler(this.textSo1_Leave);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label2.Location = new System.Drawing.Point(147, 133);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(42, 21);
            this.label2.TabIndex = 0;
            this.label2.Text = "Số 2";
            // 
            // textSo2
            // 
            this.textSo2.Location = new System.Drawing.Point(229, 130);
            this.textSo2.Name = "textSo2";
            this.textSo2.Size = new System.Drawing.Size(450, 23);
            this.textSo2.TabIndex = 1;
            this.textSo2.TextChanged += new System.EventHandler(this.textSo2_TextChanged);
            this.textSo2.Leave += new System.EventHandler(this.textSo2_Leave);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.radioChia);
            this.groupBox1.Controls.Add(this.radioNhan);
            this.groupBox1.Controls.Add(this.radioTru);
            this.groupBox1.Controls.Add(this.radioCong);
            this.groupBox1.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.groupBox1.Location = new System.Drawing.Point(120, 201);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(559, 110);
            this.groupBox1.TabIndex = 2;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Phép tính";
            // 
            // radioChia
            // 
            this.radioChia.AutoSize = true;
            this.radioChia.Location = new System.Drawing.Point(414, 48);
            this.radioChia.Name = "radioChia";
            this.radioChia.Size = new System.Drawing.Size(62, 25);
            this.radioChia.TabIndex = 0;
            this.radioChia.TabStop = true;
            this.radioChia.Text = "Chia";
            this.radioChia.UseVisualStyleBackColor = true;
            this.radioChia.CheckedChanged += new System.EventHandler(this.radioChia_CheckedChanged);
            // 
            // radioNhan
            // 
            this.radioNhan.AutoSize = true;
            this.radioNhan.Location = new System.Drawing.Point(277, 48);
            this.radioNhan.Name = "radioNhan";
            this.radioNhan.Size = new System.Drawing.Size(70, 25);
            this.radioNhan.TabIndex = 0;
            this.radioNhan.TabStop = true;
            this.radioNhan.Text = "Nhân";
            this.radioNhan.UseVisualStyleBackColor = true;
            this.radioNhan.CheckedChanged += new System.EventHandler(this.radioNhan_CheckedChanged);
            // 
            // radioTru
            // 
            this.radioTru.AutoSize = true;
            this.radioTru.Location = new System.Drawing.Point(158, 48);
            this.radioTru.Name = "radioTru";
            this.radioTru.Size = new System.Drawing.Size(53, 25);
            this.radioTru.TabIndex = 0;
            this.radioTru.TabStop = true;
            this.radioTru.Text = "Trừ";
            this.radioTru.UseVisualStyleBackColor = true;
            this.radioTru.CheckedChanged += new System.EventHandler(this.radioTru_CheckedChanged);
            // 
            // radioCong
            // 
            this.radioCong.AutoSize = true;
            this.radioCong.Location = new System.Drawing.Point(37, 48);
            this.radioCong.Name = "radioCong";
            this.radioCong.Size = new System.Drawing.Size(68, 25);
            this.radioCong.TabIndex = 0;
            this.radioCong.TabStop = true;
            this.radioCong.Text = "Cộng";
            this.radioCong.UseVisualStyleBackColor = true;
            this.radioCong.CheckedChanged += new System.EventHandler(this.radioCong_CheckedChanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label3.Location = new System.Drawing.Point(147, 367);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(68, 21);
            this.label3.TabIndex = 0;
            this.label3.Text = "Kết quả";
            // 
            // textKetQua
            // 
            this.textKetQua.Location = new System.Drawing.Point(229, 364);
            this.textKetQua.Name = "textKetQua";
            this.textKetQua.Size = new System.Drawing.Size(450, 23);
            this.textKetQua.TabIndex = 1;
            // 
            // errorProvider1
            // 
            this.errorProvider1.ContainerControl = this;
            // 
            // errorProvider2
            // 
            this.errorProvider2.ContainerControl = this;
            // 
            // Bai2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.textKetQua);
            this.Controls.Add(this.textSo2);
            this.Controls.Add(this.textSo1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Bai2";
            this.Text = "Bài 2 - NguyenVuHai";
            this.Load += new System.EventHandler(this.Bai2_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider2)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textSo1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textSo2;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton radioChia;
        private System.Windows.Forms.RadioButton radioNhan;
        private System.Windows.Forms.RadioButton radioTru;
        private System.Windows.Forms.RadioButton radioCong;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textKetQua;
        private System.Windows.Forms.ErrorProvider errorProvider1;
        private System.Windows.Forms.ErrorProvider errorProvider2;
    }
}

