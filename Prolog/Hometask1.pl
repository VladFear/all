woman(kristina).
woman(natasha).
woman(mama).
woman(sestra).

man(vlad).
man(igor).
man(papa).

couple(kristina,vlad).
couple(natasha,igor).
couple(mama,papa).

parent(natash,vlad).
parent(igor,vlad).
parent(mama,kristina).
parent(papa,kristina).
parent(mama,sestra).
parent(papa,sestra).

sister(X,Y) :-
    woman(X),
    parent(Z,Y),
    parent(Z,X),
    X \= Y.

sister(sestra,kristina).

findRelation(Name,Relat):-Relat==couple,couple(Name,X),write(X),write(' is '),write(Name),write('`s couple').
findRelation(Name,Relat):-Relat==couple,couple(X,Name),write(X),write(' is '),write(Name),write('`s couple').
findRelation(Name,Relat):-Relat==parent,parent(X,Name),write(X),write(' is '),write(Name),write('`s parent').
findRelation(Name,Relat):-Relat==child,parent(Name,X),write(X),write(' is '),write(Name),write('`s child').
findRelation(Name,Relat):-Relat==father,parent(X,Name),man(X),write(X),write(' is '),write(Name),write('`s father').
findRelation(Name,Relat):-Relat==mother,parent(X,Name),woman(X),write(X),write(' is '),write(Name),write('`s mother').
findRelation(Name,Relat):-Relat==svoyatch,couple(X,Name),woman(X),sister(Y,X),write(Y),write(' is '),write(Name),write('`s svoyatcheniza').

start:-
    write('Enter name: '),
    read(Name),
    nl,
    write('Enter relation: '),
    read(Relat),
    nl,
    findRelation(Name,Relat).

:-start.
