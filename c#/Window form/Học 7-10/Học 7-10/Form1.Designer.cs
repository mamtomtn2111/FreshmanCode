
namespace Học_7_10
{
    partial class Form1
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
            this.textA = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.textB = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.TinhB1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Segoe UI", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(28, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(493, 25);
            this.label1.TabIndex = 0;
            this.label1.Text = "Nhập vào 2 số nguyên a và b, tính tổng, hiệu, tích thương";
            // 
            // textA
            // 
            this.textA.Location = new System.Drawing.Point(160, 56);
            this.textA.Name = "textA";
            this.textA.Size = new System.Drawing.Size(100, 23);
            this.textA.TabIndex = 1;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(28, 59);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(82, 15);
            this.label2.TabIndex = 2;
            this.label2.Text = "Nhập vào số a";
            // 
            // textB
            // 
            this.textB.Location = new System.Drawing.Point(160, 104);
            this.textB.Name = "textB";
            this.textB.Size = new System.Drawing.Size(100, 23);
            this.textB.TabIndex = 1;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(28, 107);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(83, 15);
            this.label3.TabIndex = 2;
            this.label3.Text = "Nhập vào số b";
            // 
            // TinhB1
            // 
            this.TinhB1.Location = new System.Drawing.Point(335, 51);
            this.TinhB1.Name = "TinhB1";
            this.TinhB1.Size = new System.Drawing.Size(75, 23);
            this.TinhB1.TabIndex = 3;
            this.TinhB1.Text = "Tính";
            this.TinhB1.UseVisualStyleBackColor = true;
            this.TinhB1.Click += new System.EventHandler(this.TinhB1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.TinhB1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textB);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textA);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textA;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textB;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button TinhB1;
    }
}

