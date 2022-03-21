
namespace QuanLyVeXe
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
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.MTxtGioXuatPhat = new System.Windows.Forms.MaskedTextBox();
            this.TxtDiemXuatPhat = new System.Windows.Forms.TextBox();
            this.TxtDiemDen = new System.Windows.Forms.TextBox();
            this.TxtGiaTien = new System.Windows.Forms.TextBox();
            this.GrdDanhSachVe = new System.Windows.Forms.DataGridView();
            this.label7 = new System.Windows.Forms.Label();
            this.BtnThem = new System.Windows.Forms.Button();
            this.BtnSua = new System.Windows.Forms.Button();
            this.BtnXoa = new System.Windows.Forms.Button();
            this.BtnTimKiem = new System.Windows.Forms.Button();
            this.TxtLoadDuLieu = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.GrdDanhSachVe)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label1.ForeColor = System.Drawing.SystemColors.Highlight;
            this.label1.Location = new System.Drawing.Point(302, 29);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(157, 22);
            this.label1.TabIndex = 0;
            this.label1.Text = "QUẢN LÝ VÉ XE";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(37, 73);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(54, 15);
            this.label2.TabIndex = 1;
            this.label2.Text = "Mã số vé";
            // 
            // TxtMSV
            // 
            this.TxtMSV.Location = new System.Drawing.Point(139, 70);
            this.TxtMSV.Name = "TxtMSV";
            this.TxtMSV.Size = new System.Drawing.Size(135, 23);
            this.TxtMSV.TabIndex = 2;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(37, 129);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(78, 15);
            this.label3.TabIndex = 1;
            this.label3.Text = "Giờ xuất phát";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(319, 73);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(88, 15);
            this.label4.TabIndex = 4;
            this.label4.Text = "Điểm xuất phát";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(319, 126);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(58, 15);
            this.label5.TabIndex = 4;
            this.label5.Text = "Điểm đến";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(556, 97);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(47, 15);
            this.label6.TabIndex = 4;
            this.label6.Text = "Giá tiền";
            // 
            // MTxtGioXuatPhat
            // 
            this.MTxtGioXuatPhat.Location = new System.Drawing.Point(139, 126);
            this.MTxtGioXuatPhat.Mask = "00:00";
            this.MTxtGioXuatPhat.Name = "MTxtGioXuatPhat";
            this.MTxtGioXuatPhat.Size = new System.Drawing.Size(135, 23);
            this.MTxtGioXuatPhat.TabIndex = 5;
            this.MTxtGioXuatPhat.ValidatingType = typeof(System.DateTime);
            // 
            // TxtDiemXuatPhat
            // 
            this.TxtDiemXuatPhat.Location = new System.Drawing.Point(414, 73);
            this.TxtDiemXuatPhat.Name = "TxtDiemXuatPhat";
            this.TxtDiemXuatPhat.Size = new System.Drawing.Size(123, 23);
            this.TxtDiemXuatPhat.TabIndex = 6;
            // 
            // TxtDiemDen
            // 
            this.TxtDiemDen.Location = new System.Drawing.Point(414, 126);
            this.TxtDiemDen.Name = "TxtDiemDen";
            this.TxtDiemDen.Size = new System.Drawing.Size(123, 23);
            this.TxtDiemDen.TabIndex = 6;
            // 
            // TxtGiaTien
            // 
            this.TxtGiaTien.Location = new System.Drawing.Point(627, 94);
            this.TxtGiaTien.Name = "TxtGiaTien";
            this.TxtGiaTien.Size = new System.Drawing.Size(122, 23);
            this.TxtGiaTien.TabIndex = 6;
            // 
            // GrdDanhSachVe
            // 
            this.GrdDanhSachVe.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.GrdDanhSachVe.Location = new System.Drawing.Point(37, 221);
            this.GrdDanhSachVe.Name = "GrdDanhSachVe";
            this.GrdDanhSachVe.RowTemplate.Height = 25;
            this.GrdDanhSachVe.Size = new System.Drawing.Size(712, 179);
            this.GrdDanhSachVe.TabIndex = 7;
            this.GrdDanhSachVe.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.GrdDanhSachVe_CellClick);
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Times New Roman", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label7.ForeColor = System.Drawing.SystemColors.Highlight;
            this.label7.Location = new System.Drawing.Point(302, 181);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(153, 22);
            this.label7.TabIndex = 0;
            this.label7.Text = "DANH SÁCH VÉ";
            // 
            // BtnThem
            // 
            this.BtnThem.Location = new System.Drawing.Point(104, 415);
            this.BtnThem.Name = "BtnThem";
            this.BtnThem.Size = new System.Drawing.Size(75, 23);
            this.BtnThem.TabIndex = 8;
            this.BtnThem.Text = "Thêm";
            this.BtnThem.UseVisualStyleBackColor = true;
            this.BtnThem.Click += new System.EventHandler(this.BtnThem_Click);
            // 
            // BtnSua
            // 
            this.BtnSua.Location = new System.Drawing.Point(273, 415);
            this.BtnSua.Name = "BtnSua";
            this.BtnSua.Size = new System.Drawing.Size(75, 23);
            this.BtnSua.TabIndex = 8;
            this.BtnSua.Text = "Sửa";
            this.BtnSua.UseVisualStyleBackColor = true;
            this.BtnSua.Click += new System.EventHandler(this.BtnSua_Click);
            // 
            // BtnXoa
            // 
            this.BtnXoa.Location = new System.Drawing.Point(446, 415);
            this.BtnXoa.Name = "BtnXoa";
            this.BtnXoa.Size = new System.Drawing.Size(75, 23);
            this.BtnXoa.TabIndex = 8;
            this.BtnXoa.Text = "Xóa";
            this.BtnXoa.UseVisualStyleBackColor = true;
            this.BtnXoa.Click += new System.EventHandler(this.BtnXoa_Click);
            // 
            // BtnTimKiem
            // 
            this.BtnTimKiem.Location = new System.Drawing.Point(617, 415);
            this.BtnTimKiem.Name = "BtnTimKiem";
            this.BtnTimKiem.Size = new System.Drawing.Size(75, 23);
            this.BtnTimKiem.TabIndex = 8;
            this.BtnTimKiem.Text = "Tìm kiếm";
            this.BtnTimKiem.UseVisualStyleBackColor = true;
            this.BtnTimKiem.Click += new System.EventHandler(this.BtnTimKiem_Click);
            // 
            // TxtLoadDuLieu
            // 
            this.TxtLoadDuLieu.Location = new System.Drawing.Point(674, 192);
            this.TxtLoadDuLieu.Name = "TxtLoadDuLieu";
            this.TxtLoadDuLieu.Size = new System.Drawing.Size(75, 23);
            this.TxtLoadDuLieu.TabIndex = 9;
            this.TxtLoadDuLieu.Text = "Load lại dữ liệu";
            this.TxtLoadDuLieu.UseVisualStyleBackColor = true;
            this.TxtLoadDuLieu.Click += new System.EventHandler(this.TxtLoadDuLieu_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.TxtLoadDuLieu);
            this.Controls.Add(this.BtnTimKiem);
            this.Controls.Add(this.BtnXoa);
            this.Controls.Add(this.BtnSua);
            this.Controls.Add(this.BtnThem);
            this.Controls.Add(this.GrdDanhSachVe);
            this.Controls.Add(this.TxtGiaTien);
            this.Controls.Add(this.TxtDiemDen);
            this.Controls.Add(this.TxtDiemXuatPhat);
            this.Controls.Add(this.MTxtGioXuatPhat);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.TxtMSV);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.GrdDanhSachVe)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox TxtMSV;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.MaskedTextBox MTxtGioXuatPhat;
        private System.Windows.Forms.TextBox TxtDiemXuatPhat;
        private System.Windows.Forms.TextBox TxtDiemDen;
        private System.Windows.Forms.TextBox TxtGiaTien;
        private System.Windows.Forms.DataGridView GrdDanhSachVe;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Button BtnThem;
        private System.Windows.Forms.Button BtnSua;
        private System.Windows.Forms.Button BtnXoa;
        private System.Windows.Forms.Button BtnTimKiem;
        private System.Windows.Forms.Button TxtLoadDuLieu;
    }
}

