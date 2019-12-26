using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laba2
{
    class Rectangle : Method
    {
        private double current = 0;
        private double max = 0;
        private double result = 0;

        private double f1_sum = 0;
        private double f2_sum = 0;
        private double f3_sum = 0;

        private double eps = 0;
        private Funcs f;

        public Rectangle(Funcs f)
        {
            this.f = f;
        }

        public double Count()
        {
            double first = 0;
            double second = 0;
            double third = 0;
            for (double i = 0; i<1; i+=eps) { 
                f1_sum += f.func1(i);
                f2_sum += f.func2(i);
                f3_sum += f.func3(i);
                
                first = eps * f1_sum;
                second = eps * f2_sum;
                third = eps * f3_sum;
            }
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
            return 0;
        }

        public void setCurrent(long current)
        {          
            this.max = current;
            this.eps = 1.0 / max;
        }
    }
}
