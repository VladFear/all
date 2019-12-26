using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laba2
{
    class Funcs
    {
        private double A = 0;
        private double B = 0;
        private double C = 0;

        public double A1 { get => A; set => A = value; }
        public double B1 { get => B; set => B = value; }
        public double C1 { get => C; set => C = value; }

        public double func1(double x)
        {
            return A * (1 - x) * x;
        }

        public double func2(double x)
        {
            return 1 - Math.Sin(B * x);
        }

        public double func3(double x)
        {
            return Math.Exp(C * x);
        }
    }
}
