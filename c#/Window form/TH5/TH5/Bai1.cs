using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TH5
{
    public partial class Bai1 : Form
    {

        public Bai1()
        {
            InitializeComponent();
            this.ActiveControl = textA;
        }

        private void textA_Leave(object sender, EventArgs e)
        {
            Control ctr = (Control)sender;
            if (ctr.Text.Trim().Length == 0)
                this.errorProvider1.SetError(textA, "Bạn không thể để trống số A !");
            else
                this.errorProvider1.Clear();
        }

        private void textA_TextChanged(object sender, EventArgs e)
        {
            Control ctr = (Control)sender;
            if (ctr.Text.Trim().Length > 0 && !char.IsDigit(ctr.Text, ctr.Text.Length - 1))
                this.errorProvider1.SetError(textA, "Không thể nhập chữ hoặc ký tự đặc biệt !");
            else
                this.errorProvider1.Clear();
            if (textA.Text.Length != 0 && textA.Text.Length != 0)
            {
                BtnGiai.Enabled = true;
            }
        }

        private void textB_Leave(object sender, EventArgs e)
        {
            Control ctr = (Control)sender;
            if (ctr.Text.Trim().Length == 0)
                this.errorProvider2.SetError(textB, "Bạn không thể để trống số B !");
            else
                this.errorProvider2.Clear();

        }

        private void textB_TextChanged(object sender, EventArgs e)
        {
            Control ctr = (Control)sender;
            if (ctr.Text.Trim().Length > 0 && !char.IsDigit(ctr.Text, ctr.Text.Length - 1))
                this.errorProvider2.SetError(textB, "Không thể nhập chữ hoặc ký tự đặc biệt !");
            else
                this.errorProvider2.Clear();
            if (textA.Text.Length != 0 && textA.Text.Length != 0)
            {
                BtnGiai.Enabled = true;
            }
        }

        private void BtnGiai_Click(object sender, EventArgs e)
        {
            float a, b, KetQua;
            a = float.Parse(textA.Text);
            b = float.Parse(textB.Text);
            KetQua = -b / a;

            string s;
            if(a == 0 && b != 0)
            {
                s = "Pt vô nghiệm";
                textNghiem.Text = s;
            }
            else if(a == 0 && b == 0)
            {
                s = "Pt vô số nghiệm";
                textNghiem.Text = s;
            }
            else
            {
                textNghiem.Text = Convert.ToString(KetQua);
            }

            BtnGiai.Enabled = false;
            BtnXoa.Enabled = true;
        }

        private void BtnXoa_Click(object sender, EventArgs e)
        {
            BtnXoa.Enabled = false;
            textA.Clear();
            textB.Clear();
            textNghiem.Clear();
            textA.Focus();
        }

        private void BtnThoat_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult r;
            r = MessageBox.Show("Bạn có muốn thoát chương trình không?", "Thoát", MessageBoxButtons.YesNo,
                MessageBoxIcon.Question, MessageBoxDefaultButton.Button1);
            if (r == DialogResult.No)
                e.Cancel = true;
        }
    }
}
