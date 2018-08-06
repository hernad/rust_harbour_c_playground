procedure main()

nA := 1
nB := 2

CLEAR SCREEN

@ 5, 2 SAY "A=" GET nA
@ 6, 2 SAY "B=" GET nB

@ ROW(), 2 SAY ""
READ


? f1( nA + nB )
inkey(0)
RETURN
