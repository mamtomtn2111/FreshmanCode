
namespace Bai1NCTH5
{
    partial class Bai1NCTH5
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
            this.richTextBox = new System.Windows.Forms.RichTextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.radioTimeNew = new System.Windows.Forms.RadioButton();
            this.radioArial = new System.Windows.Forms.RadioButton();
            this.radioTohoma = new System.Windows.Forms.RadioButton();
            this.radioCourierNew = new System.Windows.Forms.RadioButton();
            this.buttonThoat = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // richTextBox
            // 
            this.richTextBox.Font = new System.Drawing.Font("Segoe UI", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.richTextBox.Location = new System.Drawing.Point(117, 70);
            this.richTextBox.Name = "richTextBox";
            this.richTextBox.Size = new System.Drawing.Size(319, 257);
            this.richTextBox.TabIndex = 0;
            this.richTextBox.Text = "WHAT FONT IS THIS?";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(117, 28);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(107, 21);
            this.label1.TabIndex = 1;
            this.label1.Text = "Nhập văn bản";
            // 
            // radioTimeNew
            // 
            this.radioTimeNew.AutoSize = true;
            this.radioTimeNew.Location = new System.Drawing.Point(490, 96);
            this.radioTimeNew.Name = "radioTimeNew";
            this.radioTimeNew.Size = new System.Drawing.Size(124, 19);
            this.radioTimeNew.TabIndex = 2;
            this.radioTimeNew.TabStop = true;
            this.radioTimeNew.Text = "Time New Romans";
            this.radioTimeNew.UseVisualStyleBackColor = true;
            this.radioTimeNew.CheckedChanged += new System.EventHandler(this.radioTimeNew_CheckedChanged);
            // 
            // radioArial
            // 
            this.radioArial.AutoSize = true;
            this.radioArial.Location = new System.Drawing.Point(490, 145);
            this.radioArial.Name = "radioArial";
            this.radioArial.Size = new System.Drawing.Size(49, 19);
            this.radioArial.TabIndex = 2;
            this.radioArial.TabStop = true;
            this.radioArial.Text = "Arial";
            this.radioArial.UseVisualStyleBackColor = true;
            this.radioArial.CheckedChanged += new System.EventHandler(this.radioArial_CheckedChanged);
            // 
            // radioTohoma
            // 
            this.radioTohoma.AutoSize = true;
            this.radioTohoma.Location = new System.Drawing.Point(490, 198);
            this.radioTohoma.Name = "radioTohoma";
            this.radioTohoma.Size = new System.Drawing.Size(68, 19);
            this.radioTohoma.TabIndex = 2;
            this.radioTohoma.TabStop = true;
            this.radioTohoma.Text = "Tohoma";
            this.radioTohoma.UseVisualStyleBackColor = true;
            this.radioTohoma.CheckedChanged += new System.EventHandler(this.radioTohoma_CheckedChanged);
            // 
            // radioCourierNew
            // 
            this.radioCourierNew.AutoSize = true;
            this.radioCourierNew.Location = new System.Drawing.Point(490, 251);
            this.radioCourierNew.Name = "radioCourierNew";
            this.radioCourierNew.Size = new System.Drawing.Size(91, 19);
            this.radioCourierNew.TabIndex = 2;
            this.radioCourierNew.TabStop = true;
            this.radioCourierNew.Text = "Courier New";
            this.radioCourierNew.UseVisualStyleBackColor = true;
            this.radioCourierNew.CheckedChanged += new System.EventHandler(this.radioCourierNew_CheckedChanged);
            // 
            // buttonThoat
            // 
            this.buttonThoat.Location = new System.Drawing.Point(328, 362);
            this.buttonThoat.Name = "buttonThoat";
            this.buttonThoat.Size = new System.Drawing.Size(108, 31);
            this.buttonThoat.TabIndex = 3;
            this.buttonThoat.Text = "Thoát";
            this.buttonThoat.UseVisualStyleBackColor = true;
            this.buttonThoat.Click += new System.EventHandler(this.buttonThoat_Click);
            // 
            // Bai1NCTH5
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.buttonThoat);
            this.Controls.Add(this.radioCourierNew);
            this.Controls.Add(this.radioTohoma);
            this.Controls.Add(this.radioArial);
            this.Controls.Add(this.radioTimeNew);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.richTextBox);
            this.Name = "Bai1NCTH5";
            this.Text = "Bài 1 nâng cao - NguyenVuHai";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Bai1NCTH5_FormClosing);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RichTextBox richTextBox;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.RadioButton radioTimeNew;
        private System.Windows.Forms.RadioButton radioArial;
        private System.Windows.Forms.RadioButton radioTohoma;
        private System.Windows.Forms.RadioButton radioCourierNew;
        private System.Windows.Forms.Button buttonThoat;
    }
}

