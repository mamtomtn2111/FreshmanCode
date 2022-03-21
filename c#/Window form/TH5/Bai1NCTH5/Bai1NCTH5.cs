using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai1NCTH5
{
    public partial class Bai1NCTH5 : Form
    {
        public Bai1NCTH5()
        {
            InitializeComponent();
        }

        private void radioTimeNew_CheckedChanged(object sender, EventArgs e)
        {
            richTextBox.Font = new Font("Time New Romans", 14);
        }

        private void radioArial_CheckedChanged(object sender, EventArgs e)
        {
            richTextBox.Font = new Font("Arial", 14);
        }

        private void radioTohoma_CheckedChanged(object sender, EventArgs e)
        {
            this.richTextBox.Font = new Font("Tohoma", 14);
        }

        private void radioCourierNew_CheckedChanged(object sender, EventArgs e)
        {
            this.richTextBox.Font = new Font("Courier New", 14);
        }


        private void buttonThoat_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void Bai1NCTH5_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult r;
            r = MessageBox.Show("Bạn có muốn thoát chương trình không?", "Thoát", MessageBoxButtons.YesNo,
                MessageBoxIcon.Question, MessageBoxDefaultButton.Button1);
            if (r == DialogResult.No)
                e.Cancel = true;
        }
    }
}
