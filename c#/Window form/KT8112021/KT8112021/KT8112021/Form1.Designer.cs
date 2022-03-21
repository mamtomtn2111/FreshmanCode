
namespace KT8112021
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
            this.TxtMaHoaDon = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.TxtTenChuHo = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.TxtChiSoCu = new System.Windows.Forms.TextBox();
            this.TxtChiSoMoi = new System.Windows.Forms.TextBox();
            this.GrdViewHoaDon = new System.Windows.Forms.DataGridView();
            this.grdMaHoaDon = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdTenChuHo = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdThoiGian = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdChiSoCu = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdChiSoMoi = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.BtnThem = new System.Windows.Forms.Button();
            this.BtnSua = new System.Windows.Forms.Button();
            this.BtnXoa = new System.Windows.Forms.Button();
            this.BtnTimKiem = new System.Windows.Forms.Button();
            this.DTPThoiGian = new System.Windows.Forms.DateTimePicker();
            ((System.ComponentModel.ISupportInitialize)(this.GrdViewHoaDon)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label1.ForeColor = System.Drawing.SystemColors.Highlight;
            this.label1.Location = new System.Drawing.Point(184, 31);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(406, 22);
            this.label1.TabIndex = 0;
            this.label1.Text = "PHẦN MỀM QUẢN LÝ HÓA ĐƠN TIỀN ĐIỆN";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(37, 109);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(74, 15);
            this.label2.TabIndex = 1;
            this.label2.Text = "Mã hóa đơn:";
            // 
            // TxtMaHoaDon
            // 
            this.TxtMaHoaDon.Location = new System.Drawing.Point(117, 106);
            this.TxtMaHoaDon.Name = "TxtMaHoaDon";
            this.TxtMaHoaDon.Size = new System.Drawing.Size(141, 23);
            this.TxtMaHoaDon.TabIndex = 2;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(37, 177);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(65, 15);
            this.label3.TabIndex = 1;
            this.label3.Text = "Tên chủ hộ";
            // 
            // TxtTenChuHo
            // 
            this.TxtTenChuHo.Location = new System.Drawing.Point(117, 174);
            this.TxtTenChuHo.Name = "TxtTenChuHo";
            this.TxtTenChuHo.Size = new System.Drawing.Size(141, 23);
            this.TxtTenChuHo.TabIndex = 2;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(37, 239);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(62, 15);
            this.label4.TabIndex = 3;
            this.label4.Text = "Thời gian: ";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(37, 312);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(56, 15);
            this.label5.TabIndex = 4;
            this.label5.Text = "Chỉ số cũ";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(37, 385);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(64, 15);
            this.label6.TabIndex = 5;
            this.label6.Text = "Chỉ số mới";
            // 
            // TxtChiSoCu
            // 
            this.TxtChiSoCu.Location = new System.Drawing.Point(117, 312);
            this.TxtChiSoCu.Name = "TxtChiSoCu";
            this.TxtChiSoCu.Size = new System.Drawing.Size(141, 23);
            this.TxtChiSoCu.TabIndex = 7;
            // 
            // TxtChiSoMoi
            // 
            this.TxtChiSoMoi.Location = new System.Drawing.Point(117, 382);
            this.TxtChiSoMoi.Name = "TxtChiSoMoi";
            this.TxtChiSoMoi.Size = new System.Drawing.Size(141, 23);
            this.TxtChiSoMoi.TabIndex = 8;
            // 
            // GrdViewHoaDon
            // 
            this.GrdViewHoaDon.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.GrdViewHoaDon.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.grdMaHoaDon,
            this.GrdTenChuHo,
            this.GrdThoiGian,
            this.GrdChiSoCu,
            this.GrdChiSoMoi});
            this.GrdViewHoaDon.Location = new System.Drawing.Point(353, 91);
            this.GrdViewHoaDon.Name = "GrdViewHoaDon";
            this.GrdViewHoaDon.RowTemplate.Height = 25;
            this.GrdViewHoaDon.Size = new System.Drawing.Size(426, 314);
            this.GrdViewHoaDon.TabIndex = 9;
            this.GrdViewHoaDon.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.GrdViewHoaDon_CellClick);
            // 
            // grdMaHoaDon
            // 
            this.grdMaHoaDon.DataPropertyName = "MaHoaDon";
            this.grdMaHoaDon.HeaderText = "Mã hóa đơn";
            this.grdMaHoaDon.Name = "grdMaHoaDon";
            // 
            // GrdTenChuHo
            // 
            this.GrdTenChuHo.DataPropertyName = "TenChuHo";
            this.GrdTenChuHo.HeaderText = "Tên chủ hộ";
            this.GrdTenChuHo.Name = "GrdTenChuHo";
            // 
            // GrdThoiGian
            // 
            this.GrdThoiGian.DataPropertyName = "ThoiGian";
            this.GrdThoiGian.HeaderText = "Thời gian";
            this.GrdThoiGian.Name = "GrdThoiGian";
            // 
            // GrdChiSoCu
            // 
            this.GrdChiSoCu.DataPropertyName = "ChiSoCu";
            this.GrdChiSoCu.HeaderText = "Chỉ số cũ";
            this.GrdChiSoCu.Name = "GrdChiSoCu";
            // 
            // GrdChiSoMoi
            // 
            this.GrdChiSoMoi.DataPropertyName = "ChiSoMoi";
            this.GrdChiSoMoi.HeaderText = "Chỉ số mới";
            this.GrdChiSoMoi.Name = "GrdChiSoMoi";
            // 
            // BtnThem
            // 
            this.BtnThem.Location = new System.Drawing.Point(353, 415);
            this.BtnThem.Name = "BtnThem";
            this.BtnThem.Size = new System.Drawing.Size(75, 23);
            this.BtnThem.TabIndex = 10;
            this.BtnThem.Text = "Thêm";
            this.BtnThem.UseVisualStyleBackColor = true;
            this.BtnThem.Click += new System.EventHandler(this.BtnThem_Click);
            // 
            // BtnSua
            // 
            this.BtnSua.Location = new System.Drawing.Point(466, 415);
            this.BtnSua.Name = "BtnSua";
            this.BtnSua.Size = new System.Drawing.Size(75, 23);
            this.BtnSua.TabIndex = 11;
            this.BtnSua.Text = "Sửa";
            this.BtnSua.UseVisualStyleBackColor = true;
            this.BtnSua.Click += new System.EventHandler(this.BtnSua_Click);
            // 
            // BtnXoa
            // 
            this.BtnXoa.Location = new System.Drawing.Point(588, 415);
            this.BtnXoa.Name = "BtnXoa";
            this.BtnXoa.Size = new System.Drawing.Size(75, 23);
            this.BtnXoa.TabIndex = 11;
            this.BtnXoa.Text = "Xóa";
            this.BtnXoa.UseVisualStyleBackColor = true;
            this.BtnXoa.Click += new System.EventHandler(this.BtnXoa_Click);
            // 
            // BtnTimKiem
            // 
            this.BtnTimKiem.Location = new System.Drawing.Point(704, 415);
            this.BtnTimKiem.Name = "BtnTimKiem";
            this.BtnTimKiem.Size = new System.Drawing.Size(75, 23);
            this.BtnTimKiem.TabIndex = 11;
            this.BtnTimKiem.Text = "Tìm kiếm";
            this.BtnTimKiem.UseVisualStyleBackColor = true;
            this.BtnTimKiem.Click += new System.EventHandler(this.BtnTimKiem_Click);
            // 
            // DTPThoiGian
            // 
            this.DTPThoiGian.Format = System.Windows.Forms.DateTimePickerFormat.Short;
            this.DTPThoiGian.Location = new System.Drawing.Point(117, 239);
            this.DTPThoiGian.Name = "DTPThoiGian";
            this.DTPThoiGian.Size = new System.Drawing.Size(198, 23);
            this.DTPThoiGian.TabIndex = 12;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.DTPThoiGian);
            this.Controls.Add(this.BtnTimKiem);
            this.Controls.Add(this.BtnXoa);
            this.Controls.Add(this.BtnSua);
            this.Controls.Add(this.BtnThem);
            this.Controls.Add(this.GrdViewHoaDon);
            this.Controls.Add(this.TxtChiSoMoi);
            this.Controls.Add(this.TxtChiSoCu);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.TxtTenChuHo);
            this.Controls.Add(this.TxtMaHoaDon);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.GrdViewHoaDon)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox TxtMaHoaDon;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox TxtTenChuHo;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox TxtChiSoCu;
        private System.Windows.Forms.TextBox TxtChiSoMoi;
        private System.Windows.Forms.DataGridView GrdViewHoaDon;
        private System.Windows.Forms.DataGridViewTextBoxColumn grdMaHoaDon;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdTenChuHo;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdThoiGian;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdChiSoCu;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdChiSoMoi;
        private System.Windows.Forms.Button BtnThem;
        private System.Windows.Forms.Button BtnSua;
        private System.Windows.Forms.Button BtnXoa;
        private System.Windows.Forms.Button BtnTimKiem;
        private System.Windows.Forms.DateTimePicker DTPThoiGian;
    }
}

