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

namespace KT28102021
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.ActiveControl = TxtSoPhong;
        }

        private SqlConnection con = new SqlConnection(@"Data Source=DESKTOP-O8SPSPG\VUHAI;Initial Catalog=De4;Integrated Security=True");

        private void DataLoad()
        {
            con.Open();
            string sql = "select * from HoaDon";
            SqlCommand com = new SqlCommand(sql, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            GridViewKhach.DataSource = dt;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            DataLoad();
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlInsert = "insert into HoaDon values('" + TxtMaHoaDon.Text + "', '" + TxtTenChuHo.Text + "','" + TxtThang.Text + "',N'" + TxtChiSoMoi.Text + "',N'" + CbChiSoCu.Text + "')";
            try
            {
                SqlCommand com = new SqlCommand(SqlInsert, con);
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Bạn vừa nhập trùng mã hóa đơn hoặc định dạng không đúng !!!\nKhông thể thêm mới");
            }
            con.Close();
            DataLoad();
        }

        private void GridViewHangHoa_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int i = GridViewKhach.CurrentCell.RowIndex;
            TxtMaHoaDon.Text = GridViewKhach.Rows[i].Cells[0].Value.ToString();
            TxtTenChuHo.Text = GridViewKhach.Rows[i].Cells[1].Value.ToString();
            TxtThang.Text = GridViewKhach.Rows[i].Cells[2].Value.ToString();
            TxtChiSoMoi.Text = GridViewKhach.Rows[i].Cells[3].Value.ToString();
            CbChiSoCu.Text = GridViewKhach.Rows[i].Cells[4].Value.ToString();
        }

        private void BtnSua_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlUpdate = "update HoaDon set TenChuHo = '" + TxtTenChuHo.Text + "', Thang = '" + TxtThang.Text + "', ChiSoMoi = '" + TxtChiSoMoi.Text + "', ChiSoCu = '" + CbChiSoCu.Text + "' where MaHoaDon = '"+ TxtMaHoaDon.Text + "'";
            try
            {
                SqlCommand com = new SqlCommand(SqlUpdate, con);
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Bạn vừa nhập trùng mã hóa đơn hoặc định dạng không đúng !!!\nKhông thể sửa số phòng "+TxtSoPhong.Text);
            }
            con.Close();
            DataLoad();
        }

        private void BtnXoa_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlDelete = "delete HoaDon where MaHoaDon  = '" + TxtMaHoaDon.Text + "'";
            try
            {
                SqlCommand com = new SqlCommand(SqlDelete, con);
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Lỗi số hóa đơn, không thể xóa đối tượng !!!\nKhông thể xóa số hóa đơn " + TxtSoPhong.Text);
            }
            con.Close();
            TxtMaHoaDon.Clear();
            TxtTenChuHo.Clear();
            TxtThang..Clear();
            TxtChiSoMoi.Clear();
            CbChiSoCu.Focus();
            DataLoad();
        }

        private void BtnTimKiem_Click(object sender, EventArgs e)
        {
            con.Open();
            if(RBTheoMa.Checked == true)
            {
                String SqlFind = "select * from HoaDon where MaHoaDon like N'%" + TxtMaHoaDon.Text + "%'";
                SqlCommand com = new SqlCommand(SqlFind, con);
                SqlDataAdapter da = new SqlDataAdapter(com);
                DataTable dt = new DataTable();
                da.Fill(dt);
                con.Close();
                GridViewKhach.DataSource = dt;
            }
        }
        
        private void CbTrangThai_Click(object sender, EventArgs e)
        {
            CbThang.Items.Clear();
            CbThang.Items.Add("1");
            CCbThang.Items.Add("2");
            CbThang.Items.Add("3");
            CbThang.Items.Add("4");
            CbThang.Items.Add("5");
            CbThang.Items.Add("6");
            CbThang.Items.Add("7");
            CbThang.Items.Add("8");
            CbThang.Items.Add("9");
            CbThang.Items.Add("10");
            CbThang.Items.Add("11");
            CbThang.Items.Add("12");
        }
    }
}
