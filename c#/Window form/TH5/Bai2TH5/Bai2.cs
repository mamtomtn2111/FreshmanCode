using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai2TH5
{
    public partial class Bai2 : Form
    {
        public Bai2()
        {
            InitializeComponent();
            this.ActiveControl = textSo1;
        }

        private void textSo1_TextChanged(object sender, EventArgs e)
        {
            Control ctr = (Control)sender;
            if (ctr.Text.Trim().Length > 0 && !char.IsDigit(ctr.Text, ctr.Text.Length - 1))
                this.errorProvider1.SetError(textSo1, "Không thể nhập chữ hoặc ký tự đặc biệt !");
            else
                this.errorProvider1.Clear();
        }

        private void textSo1_Leave(object sender, EventArgs e)
        {
            Control ctr = (Control)sender;
            if (ctr.Text.Trim().Length == 0)
                this.errorProvider1.SetError(textSo1, "Bạn không thể để trống số A !");
            else
                this.errorProvider1.Clear();
        }

        private void textSo2_TextChanged(object sender, EventArgs e)
        {
            Control ctr = (Control)sender;
            if (ctr.Text.Trim().Length > 0 && !char.IsDigit(ctr.Text, ctr.Text.Length - 1))
                this.errorProvider2.SetError(textSo2, "Không thể nhập chữ hoặc ký tự đặc biệt !");
            else
                this.errorProvider2.Clear();
        }

        private void textSo2_Leave(object sender, EventArgs e)
        {
            Control ctr = (Control)sender;
            if (ctr.Text.Trim().Length == 0)
                this.errorProvider2.SetError(textSo2, "Bạn không thể để trống số B !");
            else
                this.errorProvider2.Clear();
        }

        private void radioCong_CheckedChanged(object sender, EventArgs e)
        {
            float a, b;
            a = float.Parse(textSo1.Text);
            b = float.Parse(textSo2.Text);
            textKetQua.Text = Convert.ToString(a + b);
        }

        private void radioNhan_CheckedChanged(object sender, EventArgs e)
        {
            float a, b;
            a = float.Parse(textSo1.Text);
            b = float.Parse(textSo2.Text);
            textKetQua.Text = Convert.ToString(a * b);
        }

        private void radioTru_CheckedChanged(object sender, EventArgs e)
        {
            float a, b;
            a = float.Parse(textSo1.Text);
            b = float.Parse(textSo2.Text);
            textKetQua.Text = Convert.ToString(a - b);
        }

        private void radioChia_CheckedChanged(object sender, EventArgs e)
        {
            float a, b;
            a = float.Parse(textSo1.Text);
            b = float.Parse(textSo2.Text);
            textKetQua.Text = Convert.ToString(a / b);
        }

        private void Bai2_Load(object sender, EventArgs e)
        {
            textSo1.Focus();
        }
    }
}
