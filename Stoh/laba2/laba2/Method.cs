using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laba2
{
    interface Method
    {
        double Count();
        long getCurrent();
        void setCurrent(long current);
        void ResetVariables();
    }
}
