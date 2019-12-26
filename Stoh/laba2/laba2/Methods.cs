using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laba2
{
    class Methods
    {
        public static Random random = new Random();

        private Funcs f = new Funcs();

        private Method monte_carlo_geom;
        private Method monte_carlo;
        private Method rectangle;

        private double analytical_result = 0;
        private double monte_carlo_result = 0;
        private double monte_carlo_geom_result = 0;
        private double rectangle_result = 0;      

        private double Nx = 0;
        private double Ny = 0;
        private double Nz = 0;
      
        public double Nx1 { get => Nx; set => Nx = value; }
        public double Ny1 { get => Ny; set => Ny = value; }
        public double Nz1 { get => Nz; set => Nz = value; }
        public double Analytical_result { get => analytical_result; set => analytical_result = value; }
        public double Monte_carlo_result { get => monte_carlo_result; set => monte_carlo_result = value; }
        public double Monte_carlo_geom_result { get => monte_carlo_geom_result; set => monte_carlo_geom_result = value; }
        public double Rectangle_result { get => rectangle_result; set => rectangle_result = value; }

        public Methods()
        {
            monte_carlo_geom = new MonteCarloGeom(f);
            monte_carlo = new MonteCarlo(f);
            rectangle = new Rectangle(f);

        }

        /****************************************************MONTE CARLO***********************************************************/
        public void Monte_Carlo()
        {
            lock (this) { 
                this.monte_carlo_result = this.monte_carlo.Count();
                long s = this.monte_carlo.getCurrent() + 1;
                this.monte_carlo.setCurrent(s);
            }
        }

        public long getMonteCarloCurrent()
        {
            return this.monte_carlo.getCurrent();
        }

        /****************************************************MONTE CARLO GEOM***********************************************************/
        public void Monte_Carlo_Geom()
        {
            lock (this) { 
                this.monte_carlo_geom_result = monte_carlo_geom.Count();
                long s = this.monte_carlo_geom.getCurrent() + 1;
                this.monte_carlo_geom.setCurrent(s);
            }
        }

        public long getMonteCarloGeomCurrent()
        {
            return this.monte_carlo_geom.getCurrent();
        }

        /****************************************************ANALYTICAL***********************************************************/
        public void Analytical()
        {
            double first = 0;
            double second = 0;
            double third = 0;
            double x, y, z = 0;
            double second0, second1 = 0;
            double third0, third1 = 0;
            x = 1;      
            first = f.A1*Math.Pow(x,2)/2 - (Math.Pow(x,3)/3);
            x = 0;
            if (f.B1 != 0) { 
                second0 = (1/f.B1)*Math.Cos(f.B1*x)+x;
                x = 1;
                second1 = (1/f.B1) * Math.Cos(f.B1*x)+x;
                second = second1 - second0;
            }
            else
            {
                second = 1;
            }
            x = 0;
            if (f.C1 != 0)
            {
                third0 = Math.Exp(f.C1 * x) / f.C1;
                x = 1;
                third1 = Math.Exp(f.C1 * x) / f.C1;
                third = third1 - third0;
            }
            else
            {
                third = 1;
            }
            this.analytical_result = first * second * third;
        }

        /****************************************************RECTANGLES***********************************************************/
        public void Rectangle(long N)
        {     
              this.rectangle.setCurrent(N);
              this.rectangle_result = rectangle.Count();
        }  
        /****************************************************OTHERS***********************************************************/

        public void setArgs(double A, double B, double C)
        {
            this.f.A1 = A;
            this.f.B1 = B;
            this.f.C1 = 0 - C;
        }

        public void Reset()
        {
            this.monte_carlo_geom.ResetVariables();
            this.rectangle.ResetVariables();
            this.monte_carlo.ResetVariables();
        }

    }
}
