module Integral_one
use Init
use Func
implicit none
contains

function Integr_one(f3, a, b, n, method) result (res)
    implicit none
        interface
            real function f3(x)
                real,intent(in) :: x
            end function f3

            real function method(f3, a, b, n)
                interface
                    real function f3(x)
                        real,intent(in) :: x
                    end function f3
                end interface

                real, intent(in):: a, b
                integer ::  n
            end function method
        end interface

        real :: res, a, b
        integer :: n

        res = method (f3, a, b, n)

end function Integr_one

function left_trian_one (f3, a, b, n)  result (res)
implicit none
    real:: res, summa, h, b_left
    real, intent(in) :: a, b
    integer :: n, i

    interface
        function f3(x) result (res)
        implicit none
            real, intent(in) :: x
            real :: res
    end function f3
    end interface

    summa = 0.0
    h = (b-a)/n
    b_left=a

    do i = 0, n-1
        summa = summa + f3(b_left)
        b_left = b_left + h
    end do

    res = h*summa

end function left_trian_one

function right_trian_one(f3, a, b, n)  result (res)
implicit none
    real :: res, summa, h, b_right
    real, intent(in) :: a, b
    integer :: i, n

    interface
        real function f3(x)
        implicit none
            real, intent(in) :: x
    end function f3
    end interface

    summa = 0.0
    h = (b-a)/n
    b_right=a+h

    do i = 0, n-1
        summa = summa + f3(b_right)
        b_right = b_right + h
    end do

    res = h*summa

end function right_trian_one

function medium_trian_one (f3, a, b, n)  result (res)
implicit none
    real :: res, summa, h, b_medium
    real, intent(in) :: a, b
    integer :: i, n

    interface
        real function f3(x)
        implicit none
            real, intent(in) :: x
    end function f3
    end interface

    summa = 0.0
    h = (b-a)/n
    b_medium  = a + h/2
    do i = 0, n-1
        summa = summa + f3(b_medium)
        b_medium = b_medium + h
    end do

    res = h*summa

end function medium_trian_one

function trap_one (f3, a, b, n)  result (res)
implicit none
    real :: res, summa, expression, h, b_trap
    real, intent(in) :: a, b
    integer :: i, n

    interface
        real function f3(x)
        implicit none
            real, intent(in) :: x
    end function f3
    end interface

    summa = 0.0
    h = (b-a)/n
    b_trap  = a

    expression = (f3(a)+ f3(b))/2

    do i = 1, n-1
        summa = summa + f3(b_trap)
        b_trap = b_trap + h
    end do

    res = h* (summa+expression)

end function trap_one

function sims_one (f3, a, b, eps) result(res)
implicit none
    real,intent(in) :: a, b, eps
    real :: res,summ,summ2,h,myb,n
    real :: prevInt,currx,currInt,halfx

    interface
        real function f3(x)
        implicit none
            real, intent(in) :: x
    end function f3
    end interface

            prevInt = 1000000.0
            summ = 0.0
            summ2 = 0.0
            n = 100.0
            do
                summ = 0.0
                summ2 = 0.0
                myb = b
                h = (b - a)/n
                currx = h
                do while(currx<=myb)
                    halfx = (2*currx - h)/2.0
                    summ = summ + f3(halfx)
                    currx = currx + h
                end do

                currx = h
                myb = b - h
                do while(currx<myb)
                    summ2 = summ2 + f3(currx)
                    currx = currx + h
                end do
                currInt = (h/6.0)*(f3(a) + f3(b) + 4.0*summ + 2.0*summ2)
                if(abs(prevInt-currInt) < eps) then
                    exit
                end if
                prevInt = currInt
                n = n*2.0
            end do
            res = currInt
end function sims_one

end module Integral_one
