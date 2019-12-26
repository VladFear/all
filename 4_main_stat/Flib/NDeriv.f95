module NDeriv
use Init
use Func

implicit none

contains

function ND(f, x, method, h_init, eps) result (res)
    implicit none
        interface
            real function f(x)
                real,intent(in) :: x
            end function f

            real function method(f, x, h)
                interface
                    real function f(x)
                        real,intent(in) :: x
                    end function f
                end interface

                real, intent(in):: x
                real, intent(in):: h
            end function method
        end interface

    real, intent(in):: x
    real, intent(in) :: eps
    real :: res, h_init

    integer i
    real :: d0, d1, d2, h
    h = h_init
    d0 = method(f, x, h)
    h = 0.1*h
    d1 = method(f, x, h)

    do i = 1, 100
        h = 0.1*h
        d2 = method(f, x, h)
            if ( (abs(d2-d1) >= abs(d1-d0)) .or. (abs(d1-d0) < eps) ) then
                exit
            end if
                d0 = d1
                d1 = d2
    end do

    res = d1

end function ND

function der3ptCentre(f, x, h) result (res)
    implicit none
        real, intent(in):: x
        real, intent(in):: h
        real :: res

    interface
        real function f(x)
        implicit none
            real, intent(in) :: x
    end function f
    end interface

    res = (f(x + h) - f(x - h))/(2.0*h)

end function der3ptCentre

function der3ptBack(f, x, h) result (res)
    implicit none
        real, intent(in):: x
        real, intent(in):: h
        real :: res

    interface
        real function f(x)
        implicit none
            real, intent(in) :: x
    end function f
    end interface

    res = (f(x-2.0*h)-4.0*f(x-h)+3.0*f(x))/(2.0*h)

end function der3ptBack

function der3ptForward(f, x, h) result (res)
    implicit none
        real, intent(in):: x
        real, intent(in):: h
        real :: res

    interface
        real function f(x)
        implicit none
            real, intent(in) :: x
    end function f
    end interface

    res = (-3.0*f(x)+4.0*f(x+h)-f(x+2.0*h))/(2.0*h)

end function der3ptForward

function der5ptCentre(f, x, h) result (res)
    implicit none
        real, intent(in):: x
        real, intent(in):: h
        real :: res

    interface
        real function f(x)
        implicit none
            real, intent(in) :: x
    end function f
    end interface

    res = (f(x -2.0*h) - 8.0*f(x - h)+8.0*f(x+h)-f(x+2.0*h))/(12.0*h)

end function der5ptCentre

function der5ptBack(f, x, h) result (res)
    implicit none
        real, intent(in):: x
        real, intent(in):: h
        real :: res

    interface
        real function f(x)
        implicit none
            real, intent(in) :: x
    end function f
    end interface

    res = (3.0*f(x -4.0*h) - 16.0*f(x - 3.0*h)+36.0*f(x - 2.0*h)-48.0*f(x - h)+25.0*f(x))/(12.0*h)

end function der5ptBack

function der5ptForward(f, x, h) result (res)
    implicit none
        real, intent(in):: x
        real, intent(in):: h
        real :: res

    interface
        real function f(x)
        implicit none
            real, intent(in) :: x
    end function f
    end interface

    res = (-25.0*f(x) + 48.0*f(x + h) - 36.0*f(x + 2.0*h) + 16.0*f(x + 3.0*h) - 3.0*f(x + 4.0*h))/(12.0*h)

end function der5ptForward

end module NDeriv
