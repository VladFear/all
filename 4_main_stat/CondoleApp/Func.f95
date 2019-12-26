module Func
use Init
implicit none
public::f
contains
    function f(x) result (f_value)
        implicit none
            real, intent(in) :: x
            real :: f_value
            f_value = exp(-(x**2.0))
    end function f

    function f2(x, t) result (f_value)
        implicit none
            real, intent(in) :: x, t
            real :: f_value
            f_value = exp(-t)*sin(x*t)
    end function f2

    function f3(x) result (f_value)
        implicit none
            real, intent(in) :: x
            real :: f_value
            f_value = x**2.0
    end function f3

    function f4(x) result(res)
        implicit none
        real,intent(in) :: x
        real:: res
        res = x**2 + 3*x - 28
    end function f4

end module Func
