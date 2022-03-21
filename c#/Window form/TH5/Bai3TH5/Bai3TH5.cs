using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai3TH5
{
    public partial class Bai3TH5 : Form
    {
        public Bai3TH5()
        {
            InitializeComponent();
            radioRed.Checked = true;
            this.ActiveControl = textTen;
        }

        private void radioRed_CheckedChanged(object sender, EventArgs e)
        {
            if (radioRed.Checked == true)
            {
                LabelKetQua.ForeColor = System.Drawing.Color.Red;
            }
        }

        private void radioGreen_CheckedChanged(object sender, EventArgs e)
        {
            if (radioGreen.Checked == true)
            {
                LabelKetQua.ForeColor = System.Drawing.Color.Green;
            }
        }

        private void radioBlue_CheckedChanged(object sender, EventArgs e)
        {
            if (radioBlue.Checked == true)
            {
                LabelKetQua.ForeColor = System.Drawing.Color.Blue;
            }
        }

        private void radioBlack_CheckedChanged(object sender, EventArgs e)
        {
            if (radioBlack.Checked == true)
            {
                LabelKetQua.ForeColor = System.Drawing.Color.Black;
            }
        }

        private void checkBold_CheckedChanged(object sender, EventArgs e)
        {
            LabelKetQua.Font = new Font(LabelKetQua.Font.Name,
                LabelKetQua.Font.Size,
                LabelKetQua.Font.Style ^ FontStyle.Bold) ;
        }

        private void checkItalic_CheckedChanged(object sender, EventArgs e)
        {
            LabelKetQua.Font = new Font(LabelKetQua.Font.Name,
                LabelKetQua.Font.Size,
                LabelKetQua.Font.Style ^ FontStyle.Italic);
        }

        private void checkUnderLine_CheckedChanged(object sender, EventArgs e)
        {
            LabelKetQua.Font = new Font(LabelKetQua.Font.Name,
                LabelKetQua.Font.Size,
                LabelKetQua.Font.Style ^ FontStyle.Underline);
        }

        private void textTen_TextChanged(object sender, EventArgs e)
        {
            LabelKetQua.Text = textTen.Text;
        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void Bai3TH5_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult r;
            r = MessageBox.Show("Bạn có muốn thoát chương trình không?", "Thoát", MessageBoxButtons.YesNo,
                MessageBoxIcon.Question, MessageBoxDefaultButton.Button1);
            if (r == DialogResult.No)
                e.Cancel = true;
        }
    }
}
