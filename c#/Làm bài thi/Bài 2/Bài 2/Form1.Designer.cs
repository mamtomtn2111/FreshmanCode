
namespace Bài_2
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
            this.label2 = new System.Windows.Forms.Label();
            this.TxtMSV = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.TxtTenSV = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.CBGioiTinh = new System.Windows.Forms.ComboBox();
            this.DTPNgaySinh = new System.Windows.Forms.DateTimePicker();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.TxtDiaChi = new System.Windows.Forms.RichTextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.TxtSoDT = new System.Windows.Forms.TextBox();
            this.GrdViewSinhVien = new System.Windows.Forms.DataGridView();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column4 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column5 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column6 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.BtnThem = new System.Windows.Forms.Button();
            this.BtnSua = new System.Windows.Forms.Button();
            this.BtnXoa = new System.Windows.Forms.Button();
            this.BtnTimKiem = new System.Windows.Forms.Button();
            this.BtnLoaddata = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.GrdViewSinhVien)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label1.ForeColor = System.Drawing.SystemColors.HotTrack;
            this.label1.Location = new System.Drawing.Point(285, 31);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(198, 22);
            this.label1.TabIndex = 0;
            this.label1.Text = "QUẢN LÝ SINH VIÊN";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(37, 84);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(74, 15);
            this.label2.TabIndex = 1;
            this.label2.Text = "Mã sinh viên";
            // 
            // TxtMSV
            // 
            this.TxtMSV.Location = new System.Drawing.Point(126, 81);
            this.TxtMSV.Name = "TxtMSV";
            this.TxtMSV.Size = new System.Drawing.Size(161, 23);
            this.TxtMSV.TabIndex = 2;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(37, 138);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(75, 15);
            this.label3.TabIndex = 1;
            this.label3.Text = "Tên sinh viên";
            // 
            // TxtTenSV
            // 
            this.TxtTenSV.Location = new System.Drawing.Point(126, 135);
            this.TxtTenSV.Name = "TxtTenSV";
            this.TxtTenSV.Size = new System.Drawing.Size(161, 23);
            this.TxtTenSV.TabIndex = 2;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(38, 198);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(52, 15);
            this.label4.TabIndex = 1;
            this.label4.Text = "Giới tính";
            // 
            // CBGioiTinh
            // 
            this.CBGioiTinh.FormattingEnabled = true;
            this.CBGioiTinh.Location = new System.Drawing.Point(126, 198);
            this.CBGioiTinh.Name = "CBGioiTinh";
            this.CBGioiTinh.Size = new System.Drawing.Size(161, 23);
            this.CBGioiTinh.TabIndex = 3;
            this.CBGioiTinh.Click += new System.EventHandler(this.CBGioiTinh_Click);
            // 
            // DTPNgaySinh
            // 
            this.DTPNgaySinh.Format = System.Windows.Forms.DateTimePickerFormat.Short;
            this.DTPNgaySinh.Location = new System.Drawing.Point(126, 256);
            this.DTPNgaySinh.Name = "DTPNgaySinh";
            this.DTPNgaySinh.Size = new System.Drawing.Size(161, 23);
            this.DTPNgaySinh.TabIndex = 4;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(38, 262);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(60, 15);
            this.label5.TabIndex = 1;
            this.label5.Text = "Ngày sinh";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(36, 323);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(43, 15);
            this.label6.TabIndex = 1;
            this.label6.Text = "Địa chỉ";
            // 
            // TxtDiaChi
            // 
            this.TxtDiaChi.Location = new System.Drawing.Point(126, 306);
            this.TxtDiaChi.Name = "TxtDiaChi";
            this.TxtDiaChi.Size = new System.Drawing.Size(161, 75);
            this.TxtDiaChi.TabIndex = 5;
            this.TxtDiaChi.Text = "";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(38, 410);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(76, 15);
            this.label7.TabIndex = 1;
            this.label7.Text = "Số điện thoại";
            // 
            // TxtSoDT
            // 
            this.TxtSoDT.Location = new System.Drawing.Point(127, 407);
            this.TxtSoDT.Name = "TxtSoDT";
            this.TxtSoDT.Size = new System.Drawing.Size(160, 23);
            this.TxtSoDT.TabIndex = 2;
            // 
            // GrdViewSinhVien
            // 
            this.GrdViewSinhVien.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.GrdViewSinhVien.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Column1,
            this.Column2,
            this.Column3,
            this.Column4,
            this.Column5,
            this.Column6});
            this.GrdViewSinhVien.Location = new System.Drawing.Point(390, 84);
            this.GrdViewSinhVien.Name = "GrdViewSinhVien";
            this.GrdViewSinhVien.RowTemplate.Height = 25;
            this.GrdViewSinhVien.Size = new System.Drawing.Size(359, 254);
            this.GrdViewSinhVien.TabIndex = 6;
            this.GrdViewSinhVien.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.GrdViewSinhVien_CellClick);
            // 
            // Column1
            // 
            this.Column1.DataPropertyName = "MaSV";
            this.Column1.HeaderText = "Mã sinh viên";
            this.Column1.Name = "Column1";
            // 
            // Column2
            // 
            this.Column2.DataPropertyName = "TenSV";
            this.Column2.HeaderText = "Tên sinh viên";
            this.Column2.Name = "Column2";
            // 
            // Column3
            // 
            this.Column3.DataPropertyName = "GioiTinh";
            this.Column3.HeaderText = "Giới tính";
            this.Column3.Name = "Column3";
            // 
            // Column4
            // 
            this.Column4.DataPropertyName = "NamSinh";
            this.Column4.HeaderText = "Năm sinh";
            this.Column4.Name = "Column4";
            // 
            // Column5
            // 
            this.Column5.DataPropertyName = "DiaChi";
            this.Column5.HeaderText = "Địa chỉ";
            this.Column5.Name = "Column5";
            // 
            // Column6
            // 
            this.Column6.DataPropertyName = "SoDienThoai";
            this.Column6.HeaderText = "Số điện thoại";
            this.Column6.Name = "Column6";
            // 
            // BtnThem
            // 
            this.BtnThem.Location = new System.Drawing.Point(390, 390);
            this.BtnThem.Name = "BtnThem";
            this.BtnThem.Size = new System.Drawing.Size(75, 23);
            this.BtnThem.TabIndex = 7;
            this.BtnThem.Text = "Thêm";
            this.BtnThem.UseVisualStyleBackColor = true;
            this.BtnThem.Click += new System.EventHandler(this.BtnThem_Click);
            // 
            // BtnSua
            // 
            this.BtnSua.Location = new System.Drawing.Point(491, 390);
            this.BtnSua.Name = "BtnSua";
            this.BtnSua.Size = new System.Drawing.Size(75, 23);
            this.BtnSua.TabIndex = 7;
            this.BtnSua.Text = "Sửa";
            this.BtnSua.UseVisualStyleBackColor = true;
            this.BtnSua.Click += new System.EventHandler(this.BtnSua_Click);
            // 
            // BtnXoa
            // 
            this.BtnXoa.Location = new System.Drawing.Point(585, 390);
            this.BtnXoa.Name = "BtnXoa";
            this.BtnXoa.Size = new System.Drawing.Size(75, 23);
            this.BtnXoa.TabIndex = 7;
            this.BtnXoa.Text = "Xóa";
            this.BtnXoa.UseVisualStyleBackColor = true;
            this.BtnXoa.Click += new System.EventHandler(this.BtnXoa_Click);
            // 
            // BtnTimKiem
            // 
            this.BtnTimKiem.Location = new System.Drawing.Point(683, 390);
            this.BtnTimKiem.Name = "BtnTimKiem";
            this.BtnTimKiem.Size = new System.Drawing.Size(75, 23);
            this.BtnTimKiem.TabIndex = 7;
            this.BtnTimKiem.Text = "Tìm kiếm";
            this.BtnTimKiem.UseVisualStyleBackColor = true;
            this.BtnTimKiem.Click += new System.EventHandler(this.BtnTimKiem_Click);
            // 
            // BtnLoaddata
            // 
            this.BtnLoaddata.Location = new System.Drawing.Point(638, 52);
            this.BtnLoaddata.Name = "BtnLoaddata";
            this.BtnLoaddata.Size = new System.Drawing.Size(108, 23);
            this.BtnLoaddata.TabIndex = 8;
            this.BtnLoaddata.Text = "Load lại data";
            this.BtnLoaddata.UseVisualStyleBackColor = true;
            this.BtnLoaddata.Click += new System.EventHandler(this.BtnLoaddata_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.BtnLoaddata);
            this.Controls.Add(this.BtnTimKiem);
            this.Controls.Add(this.BtnXoa);
            this.Controls.Add(this.BtnSua);
            this.Controls.Add(this.BtnThem);
            this.Controls.Add(this.GrdViewSinhVien);
            this.Controls.Add(this.TxtDiaChi);
            this.Controls.Add(this.DTPNgaySinh);
            this.Controls.Add(this.CBGioiTinh);
            this.Controls.Add(this.TxtSoDT);
            this.Controls.Add(this.TxtTenSV);
            this.Controls.Add(this.TxtMSV);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.GrdViewSinhVien)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox TxtMSV;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox TxtTenSV;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.ComboBox CBGioiTinh;
        private System.Windows.Forms.DateTimePicker DTPNgaySinh;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.RichTextBox TxtDiaChi;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox TxtSoDT;
        private System.Windows.Forms.DataGridView GrdViewSinhVien;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column3;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column4;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column5;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column6;
        private System.Windows.Forms.Button BtnThem;
        private System.Windows.Forms.Button BtnSua;
        private System.Windows.Forms.Button BtnXoa;
        private System.Windows.Forms.Button BtnTimKiem;
        private System.Windows.Forms.Button BtnLoaddata;
    }
}

