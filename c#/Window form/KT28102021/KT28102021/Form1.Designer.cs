
namespace KT28102021
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
            this.TxtSoPhong = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.TxtSoGiuong = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.TxtGiaTien = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.TxtThongTinThem = new System.Windows.Forms.RichTextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.GridViewKhach = new System.Windows.Forms.DataGridView();
            this.GrdSoPhong = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdSoGiuong = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdGiaTien = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdThongTinTHem = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdTrangThai = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.btnThem = new System.Windows.Forms.Button();
            this.BtnSua = new System.Windows.Forms.Button();
            this.BtnXoa = new System.Windows.Forms.Button();
            this.BtnTimKiem = new System.Windows.Forms.Button();
            this.RBTheoMa = new System.Windows.Forms.RadioButton();
            this.RBTheoTT = new System.Windows.Forms.RadioButton();
            this.CbTrangThai = new System.Windows.Forms.ComboBox();
            ((System.ComponentModel.ISupportInitialize)(this.GridViewKhach)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Segoe UI", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label1.ForeColor = System.Drawing.SystemColors.Highlight;
            this.label1.Location = new System.Drawing.Point(299, 19);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(193, 30);
            this.label1.TabIndex = 0;
            this.label1.Text = "Quản lý khách sạn";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(55, 73);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(58, 15);
            this.label2.TabIndex = 1;
            this.label2.Text = "Số phòng";
            // 
            // TxtSoPhong
            // 
            this.TxtSoPhong.Location = new System.Drawing.Point(172, 73);
            this.TxtSoPhong.Name = "TxtSoPhong";
            this.TxtSoPhong.Size = new System.Drawing.Size(169, 23);
            this.TxtSoPhong.TabIndex = 2;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(50, 143);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(61, 15);
            this.label3.TabIndex = 1;
            this.label3.Text = "Số giường";
            // 
            // TxtSoGiuong
            // 
            this.TxtSoGiuong.Location = new System.Drawing.Point(172, 135);
            this.TxtSoGiuong.Name = "TxtSoGiuong";
            this.TxtSoGiuong.Size = new System.Drawing.Size(169, 23);
            this.TxtSoGiuong.TabIndex = 2;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(55, 206);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(47, 15);
            this.label4.TabIndex = 1;
            this.label4.Text = "Giá tiền";
            // 
            // TxtGiaTien
            // 
            this.TxtGiaTien.Location = new System.Drawing.Point(172, 203);
            this.TxtGiaTien.Name = "TxtGiaTien";
            this.TxtGiaTien.Size = new System.Drawing.Size(169, 23);
            this.TxtGiaTien.TabIndex = 2;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(50, 275);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(89, 15);
            this.label5.TabIndex = 1;
            this.label5.Text = "Thông tin thêm";
            // 
            // TxtThongTinThem
            // 
            this.TxtThongTinThem.Location = new System.Drawing.Point(172, 272);
            this.TxtThongTinThem.Name = "TxtThongTinThem";
            this.TxtThongTinThem.Size = new System.Drawing.Size(169, 97);
            this.TxtThongTinThem.TabIndex = 3;
            this.TxtThongTinThem.Text = "";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(55, 405);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(101, 15);
            this.label6.TabIndex = 1;
            this.label6.Text = "Trạng thái hiện tại";
            // 
            // GridViewKhach
            // 
            this.GridViewKhach.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.GridViewKhach.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.GrdSoPhong,
            this.GrdSoGiuong,
            this.GrdGiaTien,
            this.GrdThongTinTHem,
            this.GrdTrangThai});
            this.GridViewKhach.Location = new System.Drawing.Point(387, 73);
            this.GridViewKhach.Name = "GridViewKhach";
            this.GridViewKhach.RowTemplate.Height = 25;
            this.GridViewKhach.Size = new System.Drawing.Size(383, 296);
            this.GridViewKhach.TabIndex = 4;
            this.GridViewKhach.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.GridViewKhach_CellClick);
            // 
            // GrdSoPhong
            // 
            this.GrdSoPhong.DataPropertyName = "SoPhong";
            this.GrdSoPhong.HeaderText = "Số phòng";
            this.GrdSoPhong.Name = "GrdSoPhong";
            // 
            // GrdSoGiuong
            // 
            this.GrdSoGiuong.DataPropertyName = "SoGiuong";
            this.GrdSoGiuong.HeaderText = "Số giường";
            this.GrdSoGiuong.Name = "GrdSoGiuong";
            // 
            // GrdGiaTien
            // 
            this.GrdGiaTien.DataPropertyName = "GiaTien";
            this.GrdGiaTien.HeaderText = "Giá tiền";
            this.GrdGiaTien.Name = "GrdGiaTien";
            // 
            // GrdThongTinTHem
            // 
            this.GrdThongTinTHem.DataPropertyName = "ThongTinThem";
            this.GrdThongTinTHem.HeaderText = "Thông tin thêm";
            this.GrdThongTinTHem.Name = "GrdThongTinTHem";
            // 
            // GrdTrangThai
            // 
            this.GrdTrangThai.DataPropertyName = "TrangThaiHienTai";
            this.GrdTrangThai.HeaderText = "Trạng thái hiện tại";
            this.GrdTrangThai.Name = "GrdTrangThai";
            // 
            // btnThem
            // 
            this.btnThem.Location = new System.Drawing.Point(387, 405);
            this.btnThem.Name = "btnThem";
            this.btnThem.Size = new System.Drawing.Size(75, 23);
            this.btnThem.TabIndex = 5;
            this.btnThem.Text = "Thêm";
            this.btnThem.UseVisualStyleBackColor = true;
            this.btnThem.Click += new System.EventHandler(this.btnThem_Click);
            // 
            // BtnSua
            // 
            this.BtnSua.Location = new System.Drawing.Point(487, 405);
            this.BtnSua.Name = "BtnSua";
            this.BtnSua.Size = new System.Drawing.Size(75, 23);
            this.BtnSua.TabIndex = 5;
            this.BtnSua.Text = "Sửa";
            this.BtnSua.UseVisualStyleBackColor = true;
            this.BtnSua.Click += new System.EventHandler(this.BtnSua_Click);
            // 
            // BtnXoa
            // 
            this.BtnXoa.Location = new System.Drawing.Point(591, 405);
            this.BtnXoa.Name = "BtnXoa";
            this.BtnXoa.Size = new System.Drawing.Size(75, 23);
            this.BtnXoa.TabIndex = 5;
            this.BtnXoa.Text = "Xóa";
            this.BtnXoa.UseVisualStyleBackColor = true;
            this.BtnXoa.Click += new System.EventHandler(this.BtnXoa_Click);
            // 
            // BtnTimKiem
            // 
            this.BtnTimKiem.Location = new System.Drawing.Point(695, 405);
            this.BtnTimKiem.Name = "BtnTimKiem";
            this.BtnTimKiem.Size = new System.Drawing.Size(75, 23);
            this.BtnTimKiem.TabIndex = 5;
            this.BtnTimKiem.Text = "Tìm kiếm";
            this.BtnTimKiem.UseVisualStyleBackColor = true;
            this.BtnTimKiem.Click += new System.EventHandler(this.BtnTimKiem_Click);
            // 
            // RBTheoMa
            // 
            this.RBTheoMa.AutoSize = true;
            this.RBTheoMa.Location = new System.Drawing.Point(649, 19);
            this.RBTheoMa.Name = "RBTheoMa";
            this.RBTheoMa.Size = new System.Drawing.Size(121, 19);
            this.RBTheoMa.TabIndex = 6;
            this.RBTheoMa.TabStop = true;
            this.RBTheoMa.Text = "Tìm kiếm theo mã";
            this.RBTheoMa.UseVisualStyleBackColor = true;
            // 
            // RBTheoTT
            // 
            this.RBTheoTT.AutoSize = true;
            this.RBTheoTT.Location = new System.Drawing.Point(649, 44);
            this.RBTheoTT.Name = "RBTheoTT";
            this.RBTheoTT.Size = new System.Drawing.Size(128, 19);
            this.RBTheoTT.TabIndex = 7;
            this.RBTheoTT.TabStop = true;
            this.RBTheoTT.Text = "Tìm kiếm trạng thái";
            this.RBTheoTT.UseVisualStyleBackColor = true;
            // 
            // CbTrangThai
            // 
            this.CbTrangThai.FormattingEnabled = true;
            this.CbTrangThai.Location = new System.Drawing.Point(172, 402);
            this.CbTrangThai.Name = "CbTrangThai";
            this.CbTrangThai.Size = new System.Drawing.Size(121, 23);
            this.CbTrangThai.TabIndex = 8;
            this.CbTrangThai.Click += new System.EventHandler(this.CbTrangThai_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.CbTrangThai);
            this.Controls.Add(this.RBTheoTT);
            this.Controls.Add(this.RBTheoMa);
            this.Controls.Add(this.BtnTimKiem);
            this.Controls.Add(this.BtnXoa);
            this.Controls.Add(this.BtnSua);
            this.Controls.Add(this.btnThem);
            this.Controls.Add(this.GridViewKhach);
            this.Controls.Add(this.TxtThongTinThem);
            this.Controls.Add(this.TxtGiaTien);
            this.Controls.Add(this.TxtSoGiuong);
            this.Controls.Add(this.TxtSoPhong);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.GridViewKhach)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox TxtSoPhong;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox TxtSoGiuong;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox TxtGiaTien;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.RichTextBox TxtThongTinThem;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.DataGridView GridViewKhach;
        private System.Windows.Forms.Button btnThem;
        private System.Windows.Forms.Button BtnSua;
        private System.Windows.Forms.Button BtnXoa;
        private System.Windows.Forms.Button BtnTimKiem;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdSoPhong;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdSoGiuong;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdGiaTien;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdThongTinTHem;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdTrangThai;
        private System.Windows.Forms.RadioButton RBTheoMa;
        private System.Windows.Forms.RadioButton RBTheoTen;
        private System.Windows.Forms.RadioButton RBTheoTT;
        private System.Windows.Forms.ComboBox CbTrangThai;
    }
}

