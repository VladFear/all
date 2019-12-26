using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laba2
{
    class MonteCarlo:Method
    {
        private long current = 0;
        private double result = 0;
        private int a = 0;
        private int b = 1;
        private double S = 0;

        private double f1_sum = 0;
        private double f2_sum = 0;
        private double f3_sum = 0;


        private Funcs f;

        public MonteCarlo(Funcs f)
        {
            this.f = f;
            S = (b - a);
        }

        public double Count()
        {
            double first = 0;
            double second = 0;
            double third = 0;

            double x = Methods.random.NextDouble();
            double y = f.func1(x);           
            f1_sum += y;

            x = Methods.random.NextDouble();
            y = f.func2(x);
            f2_sum += y;

            x = Methods.random.NextDouble();
            y = f.func3(x);
            f3_sum += y;

            first = (S / (current+1)) * f1_sum;           
            second = (S / (current+1)) * f2_sum;
            third = (S / (current+1)) * f3_sum;
            result = first * second * third;
            return this.result;
        }

        public void ResetVariables()
        {
            f1_sum = 0;
            f2_sum = 0;
            f3_sum = 0;

            current = 0;
            result = 0;
        }

        public long getCurrent()
        {
            return this.current;
        }

        public void setCurrent(long current)
        {
            this.current = current;
        }
    }
}
