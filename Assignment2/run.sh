byacc -d hw2.y
flex hw2.l
gcc lex.yy.c y.tab.c -ll
./a.out < testfile.c