;;;;Group KS-43
;;;Lesson1

;; ******task1******
(sqrt (/ (* 2.5 (+ (expt 3.5 (/ 1 3)) (sin 3)))(- (exp 4) (/ 5.5 3.45)) ))

; => 0.27976497207911594

;; ******task2******
(setq x 1.1 y 2.2 z 3.3)

(setq a (/ (* 2  (cos (- x (/ pi 6))))(+ (/ 1 2) (expt (sin y) 2)))
)

(setq b (+ 1 (/ (expt z 2) (+ 3 (/ (expt z 2) 5))))
)

(print a)
(print b)

; => A=1.4535040958371999
; => B=3.1031286210892235

;; ******task3******
(car(cdr(cdr'(1 2 test 3 4))))
(car(cdr(car(cdr'((1 2) (3 test) 4)))))
(car(cdr(car(cdr(cdr'(1 2 (b test) (4)))))))

; => TEST
; => TEST
; => TEST

;; ******task4******
(setq x '(1 b (2)))
(setq x1 (list(car x)))
(setq x2  (car(cdr x)))
(setq x3  (car(cdr(cdr x))))
(setq test (list x2 'test))
(setq main (list x1 test x3))
(print main)

; => ((1) (B TEST) (2))

;; ******task5******
(setq operations '(+ - * /))
(setq numbers '(3.1 3.2 3.3 3.4 3.5))

(eval(cons(car operations) numbers))
(eval(cons(car (cdr operations)) numbers))
(eval(cons(car (cdr (cdr operations))) numbers))
(eval(cons(car (cdr (cdr (cdr operations)))) numbers))

; => 16.5
; => -10.300000000000001
; => 389.55840000000001
; => 0.024668958492487906

;; ******task6******
(defun number-test(x y z)
	"Check on average value"
	(cond ((> (abs x) (abs y))
		(cond ((< (abs x) (abs z)) )
		))
    )
)

(defun func(x y z)
  (cond (  (> (abs x) (abs y))
      (cond ((< (abs x) (abs z))))
       )
       (   (<(abs z) (abs y))
       )
  )
)

(number-test 1 2 3)
(func 1 2 3)
(number-test 2 1 3)
(func 2 1 3)
(number-test 4 1 9)
(func 4 1 9)

; => NIL
; => T
; => T

;; ******task7******
(defun my-list(x1 x2)
	"Return list of two elements"
	(list x1 x2)
)

(my-list 3 4)

; => (3 4)

;; ******task8******
(setq point1 '(1 2 3))
(setq point2 '(4 5 6))

(defun get_x (point)
	(car point)
)

(defun get_y (point)
	(car(cdr point))
)

(defun get_z (point)
	(car(cdr(cdr point)))
)

(defun distance (point1 point2)
	(sqrt (+ (expt (-(get_x point2) (get_x point1)) 2) 
		    (expt (-(get_y point2) (get_y point1)) 2)  
		    (expt (-(get_z point2) (get_z point1)) 2)))
)

(distance point1 point2)

; => 5.196152422706632

;; ******task9******
(setq list_1 '(Lisp Fortran Pascal))
(setq list_2 '(1958 (1950) ((1970))))
(setq list_3 '(“ - year of creation” ((“test”)) (() “test”)))

(defun year(list2)
	(setq main (list (second list2)(third list2)(fourth list2)(fifth list2)))
)

(defun main_func (list1 list2 list3)
	(setq main (list (first list2)(year list3)(first list1)))
)

(main_func list_1 list_2 list_3)

; => (1958 (- YEAR OF CREATION”) LISP)

;; ******task10******
(setq list_1 '(1 11 111))
(setq list_2 '(2 22 222))
(setq list_3 '(3 33 333))

(defun main_list(list_1 list_2 list_3)
	(setq main (list (first list_1) (second list_2) (third list_3)))
)

(main_list list_1 list_2 list_3)

; => (1 22 333)

;; ******task11******
(defun nech(n)
	(cond((= (rem (floor n) 2) 1)
		)
	)
)

(defun in_cub(x)
	(expt x 3)
)

(defun list_3 (x1 x2 x3)
	(setq main_l (list (in_cub x1) (in_cub x2) (in_cub x3)))
)

(defun main_func (x1 x2 x3)
  (cond ((and (nech x1)(nech x2)(nech x3))(list_3 x1 x2 x3))
    (t(+ x1 x2 x3)))
)

(main_func 1 2 7)
(main_func 1 3 7)

; => 10
; => (1 27 343)

;; ******task12******
(defun znak(n)
	(cond ((>= n 0) "PLUS") (T "MINUS"))
)

(defun get_abs(n)
	(abs n)
)

(defun main_list (n)
	(setq main_l (list (znak n)(get_abs n)))
)

(main_list 9)
(main_list -8)

; => ("PLUS" 9)
; => ("MINUS" 8)

;; ******task13******
(defun get-data(str)
	(print str)
	(read)
)

(get-data '"Input: ")

; => Input: 3
; => 3

;; ******task14******
(defun get-data(str)
	(print str)
	(read)
)

(setq a (get-data '"Input a: "))
; => Input a: 1
; => 1
(setq b (get-data '"Input b: "))
; => Input a: -5
; => -5
(setq c (get-data '"Input c: "))
; => Input a: 4
; => 4

;(setq a 1 b -5 c 14) - complex
;(setq a 1 b -5 c 4) ;- normal

(defun get_diskr (a b c)
	(-(expt b 2)(* 4 a c))
)

(defun sqrt_diskr(n)
	(sqrt n)
)

(defun get_x1(a b s_d)
	(/(+ (- b)s_d)(* 2 a))
)

(defun get_x2(a b s_d)
	(/(- (- b)s_d)(* 2 a))
)

(defun get_result (a b s_d) 
	(setq x1 (get_x1 a b s_d)) 
	(setq x2 (get_x2 a b s_d))
	(print "Results")
)

(defun main_func (a b c)
	(setq diskr (get_diskr a b c))
	(cond ((>= diskr 0) (setq s_d (sqrt_diskr diskr)) 
			(get_result a b s_d) (print x1)(print x2)(print "By method without complex numbers"))
	(T "Oh no, complex numbers"))
)

(defun complex_func (a b c)
	(setq diskr (get_diskr a b c))
	(setq s_d (sqrt_diskr diskr)) 
	(get_result a b s_d) 
	(print x1)
	(print x2)
	(print "By method with complex numbers")
)

(main_func a b c)
(complex_func a b c)

; => "Results" 
; => 4.0 
; => 1.0 
; => "By method without complex numbers" 
; => "By method without complex numbers"
; => "Results" 
; => 4.0 
; => 1.0 
; => "By method with complex numbers" 
; => "By method with complex numbers"
