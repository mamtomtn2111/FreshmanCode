
namespace BaiCungCo
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
            this.TxtMaThuoc = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.TxtTenThuoc = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.TxtNgaySanXuat = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.TxtHanDung = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.TxtTien = new System.Windows.Forms.TextBox();
            this.GridViewThuoc = new System.Windows.Forms.DataGridView();
            this.GrdMaThuoc = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.grdTenThuoc = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdNgaySanXuat = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdHanDung = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.GrdGiaTien = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.btnThem = new System.Windows.Forms.Button();
            this.btnSua = new System.Windows.Forms.Button();
            this.BtnXoa = new System.Windows.Forms.Button();
            this.btnTimKiem = new System.Windows.Forms.Button();
            this.btnLoadData = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.GridViewThuoc)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(35, 111);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(58, 15);
            this.label1.TabIndex = 0;
            this.label1.Text = "Mã thuốc";
            // 
            // TxtMaThuoc
            // 
            this.TxtMaThuoc.Location = new System.Drawing.Point(126, 108);
            this.TxtMaThuoc.Name = "TxtMaThuoc";
            this.TxtMaThuoc.Size = new System.Drawing.Size(140, 23);
            this.TxtMaThuoc.TabIndex = 1;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Segoe UI", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label2.ForeColor = System.Drawing.SystemColors.HotTrack;
            this.label2.Location = new System.Drawing.Point(292, 31);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(136, 30);
            this.label2.TabIndex = 2;
            this.label2.Text = "BÁN THUỐC";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(35, 168);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(59, 15);
            this.label3.TabIndex = 0;
            this.label3.Text = "Tên thuốc";
            // 
            // TxtTenThuoc
            // 
            this.TxtTenThuoc.Location = new System.Drawing.Point(126, 165);
            this.TxtTenThuoc.Name = "TxtTenThuoc";
            this.TxtTenThuoc.Size = new System.Drawing.Size(140, 23);
            this.TxtTenThuoc.TabIndex = 1;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(35, 220);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(82, 15);
            this.label4.TabIndex = 0;
            this.label4.Text = "Ngày sản xuất";
            // 
            // TxtNgaySanXuat
            // 
            this.TxtNgaySanXuat.Location = new System.Drawing.Point(126, 217);
            this.TxtNgaySanXuat.Name = "TxtNgaySanXuat";
            this.TxtNgaySanXuat.Size = new System.Drawing.Size(140, 23);
            this.TxtNgaySanXuat.TabIndex = 1;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(35, 279);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(75, 15);
            this.label5.TabIndex = 0;
            this.label5.Text = "Hạn sử dụng";
            // 
            // TxtHanDung
            // 
            this.TxtHanDung.Location = new System.Drawing.Point(126, 276);
            this.TxtHanDung.Name = "TxtHanDung";
            this.TxtHanDung.Size = new System.Drawing.Size(140, 23);
            this.TxtHanDung.TabIndex = 1;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(35, 335);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(24, 15);
            this.label6.TabIndex = 0;
            this.label6.Text = "Giá";
            // 
            // TxtTien
            // 
            this.TxtTien.Location = new System.Drawing.Point(126, 332);
            this.TxtTien.Name = "TxtTien";
            this.TxtTien.Size = new System.Drawing.Size(140, 23);
            this.TxtTien.TabIndex = 1;
            // 
            // GridViewThuoc
            // 
            this.GridViewThuoc.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.GridViewThuoc.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.GrdMaThuoc,
            this.grdTenThuoc,
            this.GrdNgaySanXuat,
            this.GrdHanDung,
            this.GrdGiaTien});
            this.GridViewThuoc.Location = new System.Drawing.Point(303, 102);
            this.GridViewThuoc.Name = "GridViewThuoc";
            this.GridViewThuoc.RowTemplate.Height = 25;
            this.GridViewThuoc.Size = new System.Drawing.Size(485, 253);
            this.GridViewThuoc.TabIndex = 3;
            this.GridViewThuoc.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.GridViewThuoc_CellClick);
            // 
            // GrdMaThuoc
            // 
            this.GrdMaThuoc.DataPropertyName = "MaThuoc";
            this.GrdMaThuoc.HeaderText = "Mã thuốc";
            this.GrdMaThuoc.Name = "GrdMaThuoc";
            // 
            // grdTenThuoc
            // 
            this.grdTenThuoc.DataPropertyName = "TenThuoc";
            this.grdTenThuoc.HeaderText = "Tên thuốc";
            this.grdTenThuoc.Name = "grdTenThuoc";
            // 
            // GrdNgaySanXuat
            // 
            this.GrdNgaySanXuat.DataPropertyName = "NgaySanXuat";
            this.GrdNgaySanXuat.HeaderText = "Ngày sản xuất";
            this.GrdNgaySanXuat.Name = "GrdNgaySanXuat";
            // 
            // GrdHanDung
            // 
            this.GrdHanDung.DataPropertyName = "HanSuDung";
            this.GrdHanDung.HeaderText = "Hạn sử dụng";
            this.GrdHanDung.Name = "GrdHanDung";
            // 
            // GrdGiaTien
            // 
            this.GrdGiaTien.DataPropertyName = "GiaTien";
            this.GrdGiaTien.HeaderText = "Giá tiền";
            this.GrdGiaTien.Name = "GrdGiaTien";
            // 
            // btnThem
            // 
            this.btnThem.Location = new System.Drawing.Point(303, 394);
            this.btnThem.Name = "btnThem";
            this.btnThem.Size = new System.Drawing.Size(75, 23);
            this.btnThem.TabIndex = 4;
            this.btnThem.Text = "Thêm";
            this.btnThem.UseVisualStyleBackColor = true;
            this.btnThem.Click += new System.EventHandler(this.btnThem_Click);
            // 
            // btnSua
            // 
            this.btnSua.Location = new System.Drawing.Point(438, 394);
            this.btnSua.Name = "btnSua";
            this.btnSua.Size = new System.Drawing.Size(75, 23);
            this.btnSua.TabIndex = 4;
            this.btnSua.Text = "Sửa";
            this.btnSua.UseVisualStyleBackColor = true;
            this.btnSua.Click += new System.EventHandler(this.btnSua_Click);
            // 
            // BtnXoa
            // 
            this.BtnXoa.Location = new System.Drawing.Point(580, 394);
            this.BtnXoa.Name = "BtnXoa";
            this.BtnXoa.Size = new System.Drawing.Size(75, 23);
            this.BtnXoa.TabIndex = 4;
            this.BtnXoa.Text = "Xóa";
            this.BtnXoa.UseVisualStyleBackColor = true;
            this.BtnXoa.Click += new System.EventHandler(this.BtnXoa_Click);
            // 
            // btnTimKiem
            // 
            this.btnTimKiem.Location = new System.Drawing.Point(713, 394);
            this.btnTimKiem.Name = "btnTimKiem";
            this.btnTimKiem.Size = new System.Drawing.Size(75, 23);
            this.btnTimKiem.TabIndex = 4;
            this.btnTimKiem.Text = "Tìm kiếm";
            this.btnTimKiem.UseVisualStyleBackColor = true;
            this.btnTimKiem.Click += new System.EventHandler(this.btnTimKiem_Click);
            // 
            // btnLoadData
            // 
            this.btnLoadData.Location = new System.Drawing.Point(691, 46);
            this.btnLoadData.Name = "btnLoadData";
            this.btnLoadData.Size = new System.Drawing.Size(97, 32);
            this.btnLoadData.TabIndex = 4;
            this.btnLoadData.Text = "Load lại data";
            this.btnLoadData.UseVisualStyleBackColor = true;
            this.btnLoadData.Click += new System.EventHandler(this.btnLoadData_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnLoadData);
            this.Controls.Add(this.btnTimKiem);
            this.Controls.Add(this.BtnXoa);
            this.Controls.Add(this.btnSua);
            this.Controls.Add(this.btnThem);
            this.Controls.Add(this.GridViewThuoc);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.TxtTien);
            this.Controls.Add(this.TxtHanDung);
            this.Controls.Add(this.TxtNgaySanXuat);
            this.Controls.Add(this.TxtTenThuoc);
            this.Controls.Add(this.TxtMaThuoc);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.GridViewThuoc)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox TxtMaThuoc;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox TxtTenThuoc;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox TxtNgaySanXuat;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox TxtHanDung;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox TxtTien;
        private System.Windows.Forms.DataGridView GridViewThuoc;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdMaThuoc;
        private System.Windows.Forms.DataGridViewTextBoxColumn grdTenThuoc;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdNgaySanXuat;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdHanDung;
        private System.Windows.Forms.DataGridViewTextBoxColumn GrdGiaTien;
        private System.Windows.Forms.Button btnThem;
        private System.Windows.Forms.Button btnSua;
        private System.Windows.Forms.Button BtnXoa;
        private System.Windows.Forms.Button btnTimKiem;
        private System.Windows.Forms.Button btnLoadData;
    }
}

