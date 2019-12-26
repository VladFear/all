module Integr
use Init
use Func
implicit none
contains
function left_trian (f2, a, b, x, n)  result (res)
implicit none
    real :: res, summa, h, b_left
    real, intent(in) :: a, b, x
    integer :: n, i

    interface
        real function f2(x, t) result (res)
        implicit none
            real, intent(in) :: x, t
    end function f2
    end interface

    summa = 0.0
    h = (b-a)/n
    b_left=a

    do i = 0, n-1
        summa = summa + f2(x, b_left)
        b_left = b_left + h
    end do

    res = h*summa

end function left_trian

function right_trian (f2, a, b, x, n)  result (res)
implicit none
    real :: res, summa, h, b_right
    real, intent(in) :: a, b, x
    integer :: i, n

    interface
        real function f2(x, t)
        implicit none
            real, intent(in) :: x, t
    end function f2
    end interface

    summa = 0.0
    h = (b-a)/n
    b_right=a+h

    do i = 0, n-1
        summa = summa + f2(x, b_right)
        b_right = b_right + h
    end do

    res = h*summa

end function right_trian

function medium_trian (f2, a, b, x, n)  result (res)
implicit none
    real :: res, summa, h, b_medium
    real, intent(in) :: a, b, x
    integer :: i, n

    interface
        real function f2(x, t)
        implicit none
            real, intent(in) :: x, t
    end function f2
    end interface

    summa = 0.0
    h = (b-a)/n
    b_medium  = a + h/2
    do i = 0, n-1
        summa = summa + f2(x, b_medium)
        b_medium = b_medium + h
    end do

    res = h*summa

end function medium_trian

function trap (f2, a, b, x, n)  result (res)
implicit none
    real :: res, summa, expression, h, b_trap
    real, intent(in) :: a, b, x
    integer :: i, n

    interface
        real function f2(x, t)
        implicit none
            real, intent(in) :: x, t
    end function f2
    end interface

    summa = 0.0
    h = (b-a)/n
    b_trap  = a

    expression = (f2(x, a)+ f2(x, b))/2

    do i = 1, n-1
        summa = summa + f2(x, b_trap)
        b_trap = b_trap + h
    end do

    res = h* (summa+expression)

end function trap

function sims (f2, a, b, x, eps) result(res)
implicit none
    real,intent(in) :: a, b, eps, x
    real :: res,summ,summ2,h,myb,n
    real :: prevInt,currx,currInt,halfx

    interface
        real function f2(x, t)
        implicit none
            real, intent(in) :: x, t
    end function f2
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
                    summ = summ + f2(x, halfx)
                    currx = currx + h
                end do

                currx = h
                myb = b - h
                do while(currx<myb)
                    summ2 = summ2 + f2(x, currx)
                    currx = currx + h
                end do
                currInt = (h/6.0)*(f2(x, a) + f2(x, b) + 4.0*summ + 2.0*summ2)
                if(abs(prevInt-currInt) < eps) then
                    exit
                end if
                prevInt = currInt
                n = n*2.0
            end do
            res = currInt
end function sims


end module Integr
