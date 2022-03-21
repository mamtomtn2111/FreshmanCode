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

namespace BaiCungCo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private SqlConnection con = new SqlConnection(@"Data Source=DESKTOP-O8SPSPG\VUHAI;Initial Catalog=BaiTap2110;Integrated Security=True");

        public void DataLoad()
        {
            con.Open();
            string sql = "select * from BanThuoc";
            SqlCommand com = new SqlCommand(sql, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            GridViewThuoc.DataSource = dt;
        }



        private void btnLoadData_Click(object sender, EventArgs e)
        {
            DataLoad();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            DataLoad();
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlInsert = "insert into BanThuoc values('" + TxtMaThuoc.Text + "', '" + TxtTenThuoc.Text + "', '" + TxtNgaySanXuat.Text + "','" + TxtHanDung.Text + "', '" + TxtTien.Text + "')";
            try
            {
                SqlCommand com = new SqlCommand(SqlInsert, con);
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Bạn vừa nhập trùng mã số thuốc hoặc định dạng ngày không đúng !\nPhải đúng định dạng date: mm/dđ/yy");
            }
            con.Close();
            DataLoad();
        }

        private void GridViewThuoc_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int i = GridViewThuoc.CurrentCell.RowIndex;
            TxtMaThuoc.Text = GridViewThuoc.Rows[i].Cells[0].Value.ToString();
            TxtTenThuoc.Text = GridViewThuoc.Rows[i].Cells[1].Value.ToString();
            TxtNgaySanXuat.Text = GridViewThuoc.Rows[i].Cells[2].Value.ToString();
            TxtHanDung.Text = GridViewThuoc.Rows[i].Cells[3].Value.ToString();
            TxtTien.Text = GridViewThuoc.Rows[i].Cells[4].Value.ToString();
        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlUpdate = "update BanThuoc set TenThuoc = '" + TxtTenThuoc.Text + "',NgaySanXuat = '" + TxtNgaySanXuat.Text + "'" +
                ", HanSuDung = '" + TxtHanDung.Text + "', GiaTien = '" + TxtTien.Text + "' where MaThuoc = '" + TxtMaThuoc.Text + "'";
            try
            {
                SqlCommand com = new SqlCommand(SqlUpdate, con);
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Bạn vừa sửa trùng mã số thuốc hoặc định dạng ngày không đúng !\nPhải đúng định dạng date: mm/dđ/yy");
            }
            con.Close();
            DataLoad();
        }

        private void BtnXoa_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlDelete = "delete BanThuoc where MaThuoc = '" + TxtMaThuoc.Text + "'";
            SqlCommand com = new SqlCommand(SqlDelete, con);
            com.ExecuteNonQuery();
            con.Close();
            TxtMaThuoc.Clear();
            TxtTenThuoc.Clear();
            TxtNgaySanXuat.Clear();
            TxtHanDung.Clear();
            TxtTien.Clear();
            TxtMaThuoc.Focus();
            DataLoad();
        }

        private void btnTimKiem_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlFind = "select * from BanThuoc where MaThuoc = '" + TxtMaThuoc.Text + "'";
            SqlCommand com = new SqlCommand(SqlFind, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            GridViewThuoc.DataSource = dt;
        }
    }
}
