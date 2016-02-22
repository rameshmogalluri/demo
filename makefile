all:ss

ss: main.o sort1.o  swap.o 
	gcc main.o sort1.o  swap.o  -o ss.o

main.o: main.c
	gcc -c main.c 


sort1.o: sort1.c
	gcc -c sort1.c


swap.o: swap.c
	gcc -c swap.c 
