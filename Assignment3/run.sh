byacc -d 101062391_hw3.y
flex 101062391_hw3.l
gcc lex.yy.c y.tab.c -ll -D DEBUG_LEX=0 -D DEBUG_YACC=0 -lm
./a.out < test2.c