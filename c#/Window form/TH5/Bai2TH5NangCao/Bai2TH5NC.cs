using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai2TH5NangCao
{
    public partial class Bai2TH5NC : Form
    {
        public Bai2TH5NC()
        {
            InitializeComponent();
        }

        private void radioVietNam_CheckedChanged(object sender, EventArgs e)
        {
            Image VN = new Bitmap("D:\\SAVE CODE\\c#\\Window form\\TH5\\Bai2TH5NangCao\\Image\\800px-Flag_of_Vietnam.svg.png");
            pictureBox.Image = VN;
        }

        private void radioUSA_CheckedChanged(object sender, EventArgs e)
        {
            Image USA = new Bitmap("D:\\SAVE CODE\\c#\\Window form\\TH5\\Bai2TH5NangCao\\Image\\1920px-Flag_of_the_United_States.svg.png");
            pictureBox.Image = USA;
        }

        private void radioItalian_CheckedChanged(object sender, EventArgs e)
        {
            Image Italy = new Bitmap("D:\\SAVE CODE\\c#\\Window form\\TH5\\Bai2TH5NangCao\\Image\\800px-Flag_of_Italy.svg.png");
            pictureBox.Image = Italy;
        }

        private void radioPhilippine_CheckedChanged(object sender, EventArgs e)
        {
            Image Phi = new Bitmap("D:\\SAVE CODE\\c#\\Window form\\TH5\\Bai2TH5NangCao\\Image\\Flag-Philippines.jpg");
            pictureBox.Image = Phi;
        }
    }
}
