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
            string sql = "select * from KHACHSAN";
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
            string SqlInsert = "insert into KHACHSAN values('" + TxtSoPhong.Text + "', '" + TxtSoGiuong.Text + "','" + TxtGiaTien.Text + "',N'" + TxtThongTinThem.Text + "',N'" + CbTrangThai.Text + "')";
            try
            {
                SqlCommand com = new SqlCommand(SqlInsert, con);
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Bạn vừa nhập trùng mã phòng hoặc định dạng không đúng !!!\nKhông thể thêm mới");
            }
            con.Close();
            DataLoad();
        }

        private void GridViewKhach_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int i = GridViewKhach.CurrentCell.RowIndex;
            TxtSoPhong.Text = GridViewKhach.Rows[i].Cells[0].Value.ToString();
            TxtSoGiuong.Text = GridViewKhach.Rows[i].Cells[1].Value.ToString();
            TxtGiaTien.Text = GridViewKhach.Rows[i].Cells[2].Value.ToString();
            TxtThongTinThem.Text = GridViewKhach.Rows[i].Cells[3].Value.ToString();
            CbTrangThai.Text = GridViewKhach.Rows[i].Cells[4].Value.ToString();
        }

        private void BtnSua_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlUpdate = "update KHACHSAN set SoGiuong = '" + TxtSoGiuong.Text + "', GiaTien = '" + TxtGiaTien.Text + "', ThongTinThem = N'" + TxtThongTinThem.Text + "', TrangThaiHienTai = N'" + CbTrangThai.Text + "' where SoPhong = '"+TxtSoPhong.Text+"'";
            try
            {
                SqlCommand com = new SqlCommand(SqlUpdate, con);
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Bạn vừa nhập trùng mã phòng hoặc định dạng không đúng !!!\nKhông thể sửa số phòng "+TxtSoPhong.Text);
            }
            con.Close();
            DataLoad();
        }

        private void BtnXoa_Click(object sender, EventArgs e)
        {
            con.Open();
            string SqlDelete = "delete KHACHSAN where SoPhong = '"+TxtSoPhong.Text+"'";
            try
            {
                SqlCommand com = new SqlCommand(SqlDelete, con);
                com.ExecuteNonQuery();
            }
            catch
            {
                MessageBox.Show("Lỗi số phòng, không thể xóa đối tượng !!!\nKhông thể xóa số phòng " + TxtSoPhong.Text);
            }
            con.Close();
            TxtSoPhong.Clear();
            TxtSoGiuong.Clear();
            TxtGiaTien.Clear();
            TxtThongTinThem.Clear();
            TxtSoPhong.Focus();
            DataLoad();
        }

        private void BtnTimKiem_Click(object sender, EventArgs e)
        {
            con.Open();
            if(RBTheoMa.Checked == true)
            {
                String SqlFind = "select * from KHACHSAN where SoPhong like N'%" + TxtSoPhong.Text + "%'";
                SqlCommand com = new SqlCommand(SqlFind, con);
                SqlDataAdapter da = new SqlDataAdapter(com);
                DataTable dt = new DataTable();
                da.Fill(dt);
                con.Close();
                GridViewKhach.DataSource = dt;
            }
            else if(RBTheoTT.Checked == true)
            {
                String SqlFind = "select * from KHACHSAN where TrangThaiHienTai like N'%" + CbTrangThai.Text + "%'";
                SqlCommand com = new SqlCommand(SqlFind, con);
                SqlDataAdapter da = new SqlDataAdapter(com);
                DataTable dt = new DataTable();
                da.Fill(dt);
                con.Close();
                GridViewKhach.DataSource = dt;
            }
            else
            {
                String SqlFind = "select * from KHACHSAN where SoPhong like N'%" + TxtSoPhong.Text + "%'";
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
            CbTrangThai.Items.Clear();
            CbTrangThai.Items.Add("Trống");
            CbTrangThai.Items.Add("Rảnh");
            CbTrangThai.Items.Add("Đang sửa chữa");
        }
    }
}
