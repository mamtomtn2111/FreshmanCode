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

namespace Bài_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        SqlConnection con = new SqlConnection(@"Data Source=DESKTOP-L3O70G8\SQLVUHAI;Initial Catalog=Bai2;Integrated Security=True");

        private void DataLoad()
        {
            con.Open();
            string sql = "select * from SinhVien";
            SqlCommand com = new SqlCommand(sql, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            GrdViewSinhVien.DataSource = dt;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            DataLoad();
        }

        private void BtnThem_Click(object sender, EventArgs e)
        {
            if (TxtMSV.Text == "" || TxtTenSV.Text == "" || CBGioiTinh.Text == "" || DTPNgaySinh.Text == "" || TxtDiaChi.Text == "" || TxtSoDT.Text == "")
            {
                MessageBox.Show("Không được để trống thông tin !!!");
            }
            else
            {
                try
                {

                        con.Open();
                        string sqlinsert = "insert into SinhVien values(N'"+TxtMSV.Text+"', N'"+TxtTenSV.Text+"', N'"+CBGioiTinh.Text+"','"+DTPNgaySinh.Text+"',N'"+TxtDiaChi.Text+"','"+TxtSoDT.Text+"')";
                        SqlCommand com = new SqlCommand(sqlinsert, con);
                        com.ExecuteNonQuery();
                        MessageBox.Show("Bạn đã thêm thành công sinh viên!!");
                }
                catch
                {
                    MessageBox.Show("Bạn có thể gặp các lỗi sau:\n- Trùng mã sinh viên\n- Thời gian không hợp lệ\n- Định dạng ngày (MM/dd/YYYY)");
                }
                finally
                {
                    con.Close();
                    DataLoad();
                }
            }
        }

        private void BtnLoaddata_Click(object sender, EventArgs e)
        {
            DataLoad();
        }

        private void CBGioiTinh_Click(object sender, EventArgs e)
        {
            CBGioiTinh.Items.Clear();
            CBGioiTinh.Items.Add("Nam");
            CBGioiTinh.Items.Add("Nữ");
        }

        private void BtnSua_Click(object sender, EventArgs e)
        {
            if (TxtMSV.Text == "" || TxtTenSV.Text == "" || CBGioiTinh.Text == "" || DTPNgaySinh.Text == "" || TxtDiaChi.Text == "" || TxtSoDT.Text == "")
            {
                MessageBox.Show("Không được để trống thông tin !!!");
            }
            else
            {
                try
                {

                    con.Open();
                    string sqlupdate = "update SinhVien set TenSV = N'"+TxtTenSV.Text+"', GioiTinh = N'"+CBGioiTinh.Text+"', NamSinh = '"+DTPNgaySinh.Text+"', DiaChi = N'"+TxtDiaChi.Text+"', SoDienThoai = '"+TxtSoDT.Text+"' where MaSV = N'"+TxtMSV.Text+"'";
                    SqlCommand com = new SqlCommand(sqlupdate, con);
                    com.ExecuteNonQuery();
                    MessageBox.Show("Bạn đã sửa thành công sinh viên!!");
                }
                catch
                {
                    MessageBox.Show("Bạn có thể gặp các lỗi sau:\n- Trùng mã sinh viên\n- Thời gian không hợp lệ\n- Định dạng ngày (MM/dd/YYYY)");
                }
                finally
                {
                    con.Close();
                    DataLoad();
                }
            }
        }

        private void GrdViewSinhVien_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int row_index = GrdViewSinhVien.CurrentCell.RowIndex;
            TxtMSV.Text = GrdViewSinhVien.Rows[row_index].Cells[0].Value.ToString();
            TxtTenSV.Text = GrdViewSinhVien.Rows[row_index].Cells[1].Value.ToString();
            CBGioiTinh.Text = GrdViewSinhVien.Rows[row_index].Cells[2].Value.ToString();
            DTPNgaySinh.Text = GrdViewSinhVien.Rows[row_index].Cells[3].Value.ToString();
            TxtDiaChi.Text = GrdViewSinhVien.Rows[row_index].Cells[4].Value.ToString();
            TxtSoDT.Text = GrdViewSinhVien.Rows[row_index].Cells[5].Value.ToString();
        }

        private void BtnXoa_Click(object sender, EventArgs e)
        {
            if (TxtMSV.Text == "" || TxtTenSV.Text == "" || CBGioiTinh.Text == "" || DTPNgaySinh.Text == "" || TxtDiaChi.Text == "" || TxtSoDT.Text == "")
            {
                MessageBox.Show("Không được để trống thông tin khi xóa !!!");
            }
            else
            {
                try
                {

                    con.Open();
                    string sqldelete = "delete SinhVien where MaSV = N'"+TxtMSV.Text+"'";
                    SqlCommand com = new SqlCommand(sqldelete, con);
                    com.ExecuteNonQuery();
                    MessageBox.Show("Bạn đã xóa thành công sinh viên!!");
                }
                catch
                {
                    MessageBox.Show("Phải để nguyên mục mã sinh viên");
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
            con.Open();
            string SqlFind = "select * from SinhVien where MaSV like N'%" + TxtMSV.Text + "%'";
            SqlCommand com = new SqlCommand(SqlFind, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            GrdViewSinhVien.DataSource = dt;
        }
    }
}
