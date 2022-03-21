using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PTBac2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            float a, b, c;
            a = float.Parse(textA.Text);
            b = float.Parse(textB.Text);
            c = float.Parse(textC.Text);

            float delta = b * b - 4 * a * c;
            if(delta < 0)
            {
                MessageBox.Show("PT vô nghiệm !");
            }else if(delta == 0)
            {
                float NghiemKep = (float)(-b / (2 * a));
                MessageBox.Show("PT có nghiệm kép: " + NghiemKep);
            }else if(delta > 0)
            {
                float Nghiem1, Nghiem2;
                Nghiem1 = (float)((-b - Math.Sqrt(delta)) / (2 * a));
                Nghiem2 = (float)((-b + Math.Sqrt(delta)) / (2 * a));
                MessageBox.Show("PT có 2 nghiệm phân biệt !"
                    + "\nNghiệm 1: " + Nghiem1
                    + "\nNghiệm 2: " + Nghiem2);
            }
        }
    }
}
