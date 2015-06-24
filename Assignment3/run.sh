byacc -d 101062391_hw3.y
flex 101062391_hw3.l
gcc lex.yy.c y.tab.c -ll
./a.out < test2.c