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

namespace QuanLyVeXe
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.ActiveControl = TxtMSV;
        }

        private SqlConnection con = new SqlConnection(@"Data Source=DESKTOP-L3O70G8\SQLVUHAI;Initial Catalog=BENXE;Integrated Security=True");

        private void DataLoad()
        {
            con.Open();
            string sql = "select * from QLVX";
            SqlCommand com = new SqlCommand(sql, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            GrdDanhSachVe.DataSource = dt;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            DataLoad();
        }

        private void BtnThem_Click(object sender, EventArgs e)
        {
            if (TxtMSV.Text == "" || TxtDiemXuatPhat.Text == "" || TxtDiemDen.Text == "" || MTxtGioXuatPhat.Text == "" || TxtGiaTien.Text == "")
            {
                MessageBox.Show("Cần phải nhập đủ dữ liệu vé !");
            }
            else
            {
                try
                {
                    con.Open();
                    string sqlinsert = "insert into QLVX values(N'" + TxtMSV.Text + "', N'" + TxtDiemXuatPhat.Text + "', N'" + TxtDiemDen.Text + "', '" + MTxtGioXuatPhat.Text + "','" + TxtGiaTien.Text + "')";
                    SqlCommand com = new SqlCommand(sqlinsert, con);
                    com.ExecuteNonQuery();
                    MessageBox.Show("Bạn đã thêm thành công !!");
                }
                catch
                {
                    MessageBox.Show("Bạn đã nhập trùng mã vé hoặc sai định dạng giờ, tiền không phải số !!");
                }
                finally
                {
                    con.Close();
                    DataLoad();
                }
            }
        }

        private void GrdDanhSachVe_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int Row_index = GrdDanhSachVe.CurrentCell.RowIndex;
            TxtMSV.Text = GrdDanhSachVe.Rows[Row_index].Cells[0].Value.ToString();
            TxtDiemXuatPhat.Text = GrdDanhSachVe.Rows[Row_index].Cells[1].Value.ToString();
            TxtDiemDen.Text = GrdDanhSachVe.Rows[Row_index].Cells[2].Value.ToString();
            MTxtGioXuatPhat.Text = GrdDanhSachVe.Rows[Row_index].Cells[3].Value.ToString();
            TxtGiaTien.Text = GrdDanhSachVe.Rows[Row_index].Cells[4].Value.ToString();
        }

        private void BtnSua_Click(object sender, EventArgs e)
        {
            if (TxtMSV.Text == "" || TxtDiemXuatPhat.Text == "" || TxtDiemDen.Text == "" || MTxtGioXuatPhat.Text == "" || TxtGiaTien.Text == "")
            {
                MessageBox.Show("Cần phải nhập đủ dữ liệu vé !");
            }
            else
            {
                try
                {
                    con.Open();
                    string sqlupdate = "update QLVX set DiemXuatPhat = N'"+TxtDiemXuatPhat.Text+"', DiemDen = N'"+TxtDiemDen.Text+"', GioXuatPhat = '"+MTxtGioXuatPhat.Text+"', GiaTien = '"+TxtGiaTien.Text+"' where MaSoVe = N'"+TxtMSV.Text+"'";
                    SqlCommand com = new SqlCommand(sqlupdate, con);
                    com.ExecuteNonQuery();
                    con.Close();
                    MessageBox.Show("Bạn đã sửa thành công");
                }
                catch
                {
                    MessageBox.Show("Bạn đã nhập trùng mã vé hoặc sai định dạng giờ, tiền không phải số");
                }
                finally
                {
                    con.Close();
                    DataLoad();
                }
            }
        }

        private void BtnXoa_Click(object sender, EventArgs e)
        {
            if (TxtMSV.Text == "" || TxtDiemXuatPhat.Text == "" || TxtDiemDen.Text == "" || MTxtGioXuatPhat.Text == "" || TxtGiaTien.Text == "")
            {
                MessageBox.Show("Cần phải nhập đủ dữ liệu vé !");
            }
            else
            {
                try
                {
                    con.Open();
                    string sqldelete = "delete QLVX where MaSoVe = N'"+TxtMSV.Text+"'";
                    SqlCommand com = new SqlCommand(sqldelete, con);
                    com.ExecuteNonQuery();
                    con.Close();
                    MessageBox.Show("Bạn đã xóa thành công");
                }
                catch
                {
                    MessageBox.Show("Bạn đã nhập trùng mã vé hoặc sai định dạng giờ, tiền không phải số");
                }
                finally
                {
                    con.Close();
                    DataLoad();
                }
            }
        }

        private void BtnTimKiem_Click(object sender, EventArgs e)
        {
            String SqlFind = "select * from QLVX where MaSoVe like N'%" + TxtMSV.Text + "%'";
            SqlCommand com = new SqlCommand(SqlFind, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            GrdDanhSachVe.DataSource = dt;
        }

        private void TxtLoadDuLieu_Click(object sender, EventArgs e)
        {
            DataLoad();
        }
    }
}
