using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace TH7NC
{
    public partial class TH7NC : Form
    {
        public TH7NC()
        {
            InitializeComponent();
            this.ActiveControl = TxtMaSV;
        }

        SqlConnection con = new SqlConnection(@"Data Source=DESKTOP-O8SPSPG\VUHAI;Initial Catalog=TH7NC;Integrated Security=True");
        private void load_data()
        {
            con.Open();
            SqlDataAdapter da = new SqlDataAdapter("select * from QLSV", con);
            DataTable tb = new DataTable();
            da.Fill(tb);
            con.Close();
            DGVSinhVien.DataSource = tb;
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            load_data();
        }

        private void BtnThem_Click(object sender, EventArgs e)
        {
            SqlCommand com = new SqlCommand("insert into QLSV " +
                "values('" + TxtMaSV.Text + "','" + TxtHoSV.Text + "','" + TxtTenSV.Text + "','" + TxtMaKhoa.Text + "','" + DTPNgaySinh.Text + "','" + TxtGioiTinh.Text + "')", con);
            try
            {
                con.Open();
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Bạn vừa nhập trùng mã SV hoặc định dạng ngày không đúng !\nPhải đúng định dạng date: mm/dđ/yy");
            }
            con.Close();
            load_data();
            TxtMaSV.Clear();
            TxtHoSV.Clear();
            TxtTenSV.Clear();
            TxtMaKhoa.Clear();
            TxtGioiTinh.Clear();
            TxtMaSV.Focus();
        }

        private void BtnSua_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlUpdate = "update QLSV set HoSV = N'" + TxtHoSV.Text + "', TenSV = N'" + TxtTenSV.Text + "', MaKhoa = '" + TxtMaKhoa.Text + "', NgaySinh = '" + DTPNgaySinh.Text + "', GioiTinh = N'" + TxtGioiTinh.Text + "' where  MaSV = '" + TxtMaSV.Text + "'";
            try
            {
                SqlCommand com = new SqlCommand(SqlUpdate, con);
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Bạn vừa sửa trùng mã SV hoặc định dạng ngày không đúng !\nPhải đúng định dạng date: mm/dđ/yy");
            }
            con.Close();
            load_data();
        }

        private void DGVSinhVien_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int i = DGVSinhVien.CurrentCell.RowIndex;
            TxtMaSV.Text = DGVSinhVien.Rows[i].Cells[0].Value.ToString();
            TxtHoSV.Text = DGVSinhVien.Rows[i].Cells[1].Value.ToString();
            TxtTenSV.Text = DGVSinhVien.Rows[i].Cells[2].Value.ToString();
            TxtMaKhoa.Text = DGVSinhVien.Rows[i].Cells[3].Value.ToString();
            DTPNgaySinh.Text = DGVSinhVien.Rows[i].Cells[4].Value.ToString();
            TxtGioiTinh.Text = DGVSinhVien.Rows[i].Cells[5].Value.ToString();
        }

        private void BtnXoa_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlDelete = "delete QLSV where MaSV = '"+TxtMaSV.Text+"'";
            SqlCommand com = new SqlCommand(SqlDelete, con);
            com.ExecuteNonQuery();
            con.Close();
            TxtMaSV.Clear();
            TxtHoSV.Clear();
            TxtTenSV.Clear();
            TxtMaKhoa.Clear();
            TxtGioiTinh.Clear();
            TxtMaSV.Focus();
            load_data();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void TH7NC_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult r;
            r = MessageBox.Show("Bạn có muốn thoát chương trình không?", "Thoát", MessageBoxButtons.YesNo,
                MessageBoxIcon.Question, MessageBoxDefaultButton.Button1);
            if (r == DialogResult.No)
                e.Cancel = true;
        }
    }
}
