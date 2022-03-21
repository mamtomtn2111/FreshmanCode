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

namespace KT8112021
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        SqlConnection con = new SqlConnection(@"Data Source=DESKTOP-L3O70G8\SQLVUHAI;Initial Catalog=KT8112021;Integrated Security=True");

        private void DataLoad()
        {
            con.Open();
            string sql = "select * from HoaDon";
            SqlCommand com = new SqlCommand(sql, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            GrdViewHoaDon.DataSource = dt;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            DataLoad();
        }

        private void BtnThem_Click(object sender, EventArgs e)
        {
            if (TxtMaHoaDon.Text == "" || TxtTenChuHo.Text == "" || DTPThoiGian.Text == "" || TxtChiSoMoi.Text == ""||
                TxtChiSoCu.Text == "")
            {
                MessageBox.Show("Cần phải nhập đủ dữ liệu hóa đơn !");
            }
            else
            {
                try
                {
                    float ChiSoMoi = (float)Convert.ToDouble(TxtChiSoMoi.Text), ChiSoCu = (float)Convert.ToDouble(TxtChiSoCu.Text);
                    if(ChiSoMoi - ChiSoCu > 0)
                    {
                        con.Open();
                        string sqlinsert = "insert into HoaDon values(N'" + TxtMaHoaDon.Text + "', N'" + TxtTenChuHo.Text + "', '" + DTPThoiGian.Text + "', '" + TxtChiSoCu.Text + "','" + TxtChiSoMoi.Text + "')";
                        SqlCommand com = new SqlCommand(sqlinsert, con);
                        com.ExecuteNonQuery();
                        MessageBox.Show("Bạn đã thêm thành công hóa đơn!!");
                    }
                    else
                    {
                        MessageBox.Show("- Chỉ số mới không được bé hơn chỉ số cũ ");
                    }
                }
                catch
                {
                    MessageBox.Show("Bạn có thể gặp các lỗi sau:\n- Trùng mã hóa đơn\n- Thời gian không hợp lệ\n- Định dạng ngày (MM/dd/YYYY)");
                }
                finally
                {
                    con.Close();
                    DataLoad();
                }
            }
        }

        private void BtnSua_Click(object sender, EventArgs e)
        {
            if (TxtMaHoaDon.Text == "" || TxtTenChuHo.Text == "" || DTPThoiGian.Text == "" || TxtChiSoMoi.Text == "" ||
                TxtChiSoCu.Text == "")
            {
                MessageBox.Show("Cần phải nhập đủ dữ liệu hóa đơn !");
            }
            else
            {
                try
                {
                    float ChiSoMoi = (float)Convert.ToDouble(TxtChiSoMoi.Text), ChiSoCu = (float)Convert.ToDouble(TxtChiSoCu.Text);
                    if (ChiSoMoi - ChiSoCu > 0)
                    {
                        con.Open();
                        string sqlupdate = "update HoaDon set TenChuHo = N'"+TxtTenChuHo.Text+"', ThoiGian = '"+DTPThoiGian.Text+"', ChiSoCu = '"+TxtChiSoCu.Text+"', ChiSoMoi = '"+TxtChiSoMoi.Text+"' where MaHoaDon = N'"+TxtMaHoaDon.Text+"'";
                        SqlCommand com = new SqlCommand(sqlupdate, con);
                        com.ExecuteNonQuery();
                        MessageBox.Show("Bạn đã sửa thành công hóa đơn!!");
                    }
                    else
                    {
                        MessageBox.Show("- Chỉ số mới không được bé hơn chỉ số cũ ");
                    }
                }
                catch
                {
                    MessageBox.Show("Bạn có thể gặp các lỗi sau:\n- Trùng mã hóa đơn\n- Thời gian không hợp lệ\n- Định dạng ngày (MM/dd/YYYY)");
                }
                finally
                {
                    con.Close();
                    DataLoad();
                }
            }
        }

        private void GrdViewHoaDon_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int row_index = GrdViewHoaDon.CurrentCell.RowIndex;
            TxtMaHoaDon.Text = GrdViewHoaDon.Rows[row_index].Cells[0].Value.ToString();
            TxtTenChuHo.Text = GrdViewHoaDon.Rows[row_index].Cells[1].Value.ToString();
            DTPThoiGian.Text = GrdViewHoaDon.Rows[row_index].Cells[2].Value.ToString();
            TxtChiSoCu.Text = GrdViewHoaDon.Rows[row_index].Cells[3].Value.ToString();
            TxtChiSoMoi.Text = GrdViewHoaDon.Rows[row_index].Cells[4].Value.ToString();
        }

        private void BtnXoa_Click(object sender, EventArgs e)
        {
            if (TxtMaHoaDon.Text == "" || TxtTenChuHo.Text == "" || DTPThoiGian.Text == "" || TxtChiSoMoi.Text == "" ||
                TxtChiSoCu.Text == "")
            {
                MessageBox.Show("Cần phải chọn dữ liệu hóa đơn !");
            }
            else
            {
                try
                {
                        con.Open();
                        string sqldelete = "delete HoaDon where MaHoaDon = N'"+TxtMaHoaDon.Text+"'";
                        SqlCommand com = new SqlCommand(sqldelete, con);
                        com.ExecuteNonQuery();
                        MessageBox.Show("Bạn đã xóa thành công hóa đơn!!");
                }
                catch
                {
                    MessageBox.Show("Lỗi xảy ra !!");
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
            string SqlFind = "select * from HoaDon where MaHoaDon like N'%"+TxtMaHoaDon.Text+"%'";
            SqlCommand com = new SqlCommand(SqlFind, con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            con.Close();
            GrdViewHoaDon.DataSource = dt;
        }
    }
}
