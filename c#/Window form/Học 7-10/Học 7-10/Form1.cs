using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Học_7_10
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void TinhB1_Click(object sender, EventArgs e)
        {
            int a, b;
            a = Convert.ToInt32(textA.Text);
            b = Convert.ToInt32(textB.Text);

            float v = (a / b);
            MessageBox.Show("Tổng: " + (a + b)
                            +"\nHiệu: " + (a - b)
                            +"\nTích: " + (a * b)
                            +"\nThương: " + v);

        }
    }
}
