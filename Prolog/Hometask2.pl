factor(X, Y):- X mod Y =:= 0.
factor(X, Y):- Y * Y < X, Y2 is Y + 2, factor(X, Y2).
remove_prime([El|T], NewT) :- prime(El), remove_prime(T, NewT).
remove_prime([H|T1], [H|T2]) :- not(prime(H)), remove_prime(T1, T2).
remove_other([],[]).
remove_other([El|T], NewT) :- not(prime(El)), remove_other(T, NewT).
remove_other([H|T1], [H|T2]) :- prime(H), remove_other(T1, T2).
delete([],[]).
delete([0|T], L) :- delete(T, L).
delete([H|T], [H|T2]) :- delete(T, T2).

read_list_until(L, End) :-
( read_element(E, End)
-> L = [E|L1],
read_list_until(L1, End)
; L = []
).

read_element(E, End) :-
write("Write your number to array:"),
read(E),
dif(E, End).

start:-read_list_until(L, stop),
nl,

:-start.
