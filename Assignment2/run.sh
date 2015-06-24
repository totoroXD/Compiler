byacc -d 101062391_hw2.y
flex 101062391_hw2.l
gcc lex.yy.c y.tab.c -ll
./a.out < testfile.c