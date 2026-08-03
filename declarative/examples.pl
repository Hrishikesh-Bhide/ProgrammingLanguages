takes(jane, cs4999).
takes(alicia, cs2020).
takes(alice, cs4000).
takes(mary, cs1021).
takes(bob, cs1021).
takes(bob, cs8000).
takes(kristi, cs4000).
takes(sam, cs1021).
takes(will, cs2080).
takes(alicia, cs3050).

plays(hrishi).

student(hrishi).

student(X) :- takes(X, Y) ; plays(X).
ftstudent(X) :- takes(X, Y) , takes(X, Z), Y @< Z.

related(alice, bob).
related(bob, charles).
related(charles, hrishi).
related(alice, charles).

related(A, B) :- related(A, C), related(C, B).

