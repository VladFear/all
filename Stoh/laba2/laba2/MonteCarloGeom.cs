using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laba2
{
    class MonteCarloGeom: Method
    {
        private double first = 0;
        private double second = 0;
        private double third = 0;

        private long current = 0;
        private double result = 0;

        private int first_count = 0;
        private int second_count = 0;
        private int third_count = 0;

        private double h = 2.0;
        private int a = 0;
        private int b = 1;
        private double S = 0;

        private Funcs f;

        public MonteCarloGeom(Funcs f)
        {
            this.f = f;
            S = h * (b - a);
        }

        public double Count()
        {                         
            double xP = Methods.random.NextDouble();
            double y = f.func1(xP);
            double yP = h * Methods.random.NextDouble();
            if (y > yP)
            {
                first_count++;
            }
            xP = Methods.random.NextDouble();
            y = f.func2(xP);
            yP = h * Methods.random.NextDouble();
            if (y > yP)
            {
                second_count++;
            }
            xP = Methods.random.NextDouble();
            y = f.func3(xP);
            yP = h * Methods.random.NextDouble();
            if (y > yP)
            {
                third_count++;
            }
            /***RESULTS***/
            first = S * first_count / current;
            second = S * second_count / current;
            third = S * third_count / current;
            result = first * second * third;
            return this.result;
        }

        public void ResetVariables()
        {
            first = 0;
            second = 0;
            third = 0;

            first_count = 0;
            second_count = 0;
            third_count = 0;

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
