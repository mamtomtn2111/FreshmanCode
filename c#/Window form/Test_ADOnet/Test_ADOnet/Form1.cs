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

namespace Test_ADOnet
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private SqlConnection con = new SqlConnection(@"Data Source=DESKTOP-L3O70G8\SQLVUHAI;Initial Catalog=TEST_SQL_C#;Integrated Security=True");

        public void HienThi()
        {
            con.Open();
            string sql = "select * from SACH";
            SqlCommand com = new SqlCommand(sql, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            dataGV.DataSource = dt;
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            HienThi();
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            con.Open();
            string sqlinsert = "insert into SACH values ('"+txtMaSach.Text+"', '"+txtTenSach.Text+"', '"+txtSoLuong.Text+"', '"+txtGia.Text+"')";
            SqlCommand com = new SqlCommand(sqlinsert, con);
            com.ExecuteNonQuery();
            con.Close();
            HienThi();
        }

        private void dataGV_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int i = dataGV.CurrentCell.RowIndex;
            txtMaSach.Text = dataGV.Rows[i].Cells[0].Value.ToString();
            txtTenSach.Text = dataGV.Rows[i].Cells[1].Value.ToString();
            txtSoLuong.Text = dataGV.Rows[i].Cells[3].Value.ToString();
            txtGia.Text = dataGV.Rows[i].Cells[2].Value.ToString();
        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlUpdate = "update sach set TieuDe = '"+txtTenSach.Text+"', SoLuong = '"+txtSoLuong.Text+"', Gia = '"+txtGia.Text+"' where MaSach = '"+txtMaSach.Text+"'";
            SqlCommand com = new SqlCommand(SqlUpdate, con);
            com.ExecuteNonQuery();
            con.Close();
            HienThi();
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlDelete = "delete SACH Where MaSach = '" + txtMaSach.Text + "'";
            SqlCommand com = new SqlCommand(SqlDelete, con);
            com.ExecuteNonQuery();
            con.Close();
            txtMaSach.Clear();
            txtTenSach.Clear();
            txtSoLuong.Clear();
            txtGia.Clear();
            HienThi();
        }

        private void btnTim_Click(object sender, EventArgs e)
        {
            con.Open();
            string sqlFind = "select * from SACH where MaSach = '"+txtMaSach.Text+"'";
            SqlCommand com = new SqlCommand(sqlFind, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            dataGV.DataSource = dt;
        }
    }
}
