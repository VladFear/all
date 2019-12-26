program main
use Init
use Func
use NDeriv
use Integr
use Integral_one
use Equation

implicit none
    real ::  n

    print *, "der3ptCentre"
    n = ND(f, 1.0, der3ptCentre, 0.1, 0.0001)
    print *, n

    print *, "der3ptBack"
    n = ND(f, 1.0, der3ptBack, 0.1, 0.0001)
    print *,n

    print *, "der3ptForward"
    n = ND(f, 1.0, der3ptForward, 0.1, 0.0001)
    print *,n

    print *, "der5ptCentre"
    n = ND(f, 1.0, der5ptCentre, 0.1, 0.0001)
    print *,n

    print *, "der5ptBack"
    n = ND(f, 1.0, der5ptBack, 0.1, 0.0001)
    print *,n

    print *, "der5ptForward"
    n = ND(f, 1.0, der5ptForward, 0.1, 0.0001)
    print *,n

    print *, "left_trian"
    n = left_trian(f2, 0.0, 1.0, 1.0, 10)
    print *, n

    print *, "right_trian"
    n = right_trian(f2, 0.0, 1.0, 1.0, 10)
    print *, n

    print *, "medium_trian"
    n = medium_trian(f2, 0.0, 1.0, 1.0, 10)
    print *, n

    print *, "trap"
    n = trap(f2, 0.0, 1.0, 1.0, 10)
    print *, n

    print *, "sims"
    n = sims (f2, 0.0, 1.0, 1.0, 0.01)
    print *, n

    print *, "left_trian_one"
    n = Integr_one(f3, 2.0, 5.0, 100, left_trian_one)
    print *, n

    print *, "right_trian_one"
    n = Integr_one(f3, 2.0, 5.0, 100, right_trian_one)
    print *, n

    print *, "medium_trian_one"
    n = Integr_one(f3, 2.0, 5.0, 100, medium_trian_one)
    print *, n

    print *, "trap_one"
    n = Integr_one(f3, 2.0, 5.0, 100, trap_one)
    print *, n

    print *, "sims_one"
    n = sims_one(f3, 2.0, 5.0, 0.01)
    print *, n

    print *, "dihotom"
    n = Equal(f4, -5.0, 5.0, 0.0001, dihotom)
    print *, n

    print *, "sec"
    n = Equal(f4, -5.0, 5.0, 0.0001, sekush)
    print *, n



    print *, "hehehe"
end program main
