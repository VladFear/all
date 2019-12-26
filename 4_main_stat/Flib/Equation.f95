module Equation
use Func
use Init
use NDeriv

implicit none

contains
    function dihotom(f4,a,b,eps) result(res)
        implicit none
        real,intent(in)::a
        real,intent(in)::b
        real,intent(in)::eps
        real::res,mya,myb,myx

        interface
            function f4(x) result(res)
                implicit none
                real,intent(in)::x
                real::res
            end function f4
        end interface

        mya = a
        myb = b
        do while(abs(mya-myb)>eps)
            myx = mya + (myb-mya)/2.0
            if(f4(myx)<0) then
                if(f4(mya)>0) then
                    myb = myx
                else
                    mya = myx
                end if
            else
                 if(f4(mya)>0) then
                    mya = myx
                else
                    myb = myx
                end if
            end if
        end do
        res = myx
    end function dihotom

    function sekush(fun,x,x1,eps) result(res)
        implicit none
        real,intent(in)::x
        real,intent(in)::x1
        real,intent(in)::eps
        real::res,myx,prevx,chisl,znam

        interface
            function fun(x) result(res)
                implicit none
                real,intent(in)::x
                real::res
            end function fun
        end interface
        prevx = x
        myx = x1
        do
            if(abs(fun(myx))<eps) then
                exit
            end if
            chisl = (myx - prevx)
            znam = fun(myx) - fun(prevx)
            prevx = myx
            myx = myx - fun(myx)*(chisl/znam)
        end do
        res = myx
    end function sekush


function Equal(f, a, b, eps, method) result (res)
    implicit none
        interface
            real function f(x)
                real,intent(in) :: x
            end function f

            real function method(f, a, b, eps)
                interface
                    real function f(x)
                        real,intent(in) :: x
                    end function f
                end interface

                real, intent(in):: a, b, eps
            end function method
        end interface

    real, intent(in) :: a, b, eps
    real :: res

    res = method (f, a, b, eps)

end function Equal

end module Equation
