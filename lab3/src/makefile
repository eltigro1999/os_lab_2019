all: sequential_min_max parallell_min_max execl

utils.o: utils.c
	gcc -c utils.c -o utils.o

find_min_max.o: find_min_max.c
	gcc -c find_min_max.c -o find_min_max.o

sequential_min_max.o: sequential_min_max.c
	gcc -c sequential_min_max.c -o sequential_min_max.o

sequential_min_max: utils.o find_min_max.o sequential_min_max.o
	gcc  utils.o find_min_max.o sequential_min_max.o -o sequential_min_max

parallel_min_max.o: parallel_min_max.c
	gcc -c parallel_min_max.c -o parallel_min_max.o

parallell_min_max:   utils.o find_min_max.o parallel_min_max.o
	gcc  utils.o find_min_max.o parallel_min_max.o -o parallel_min_max

execl.o:execl.c
	gcc -c execl.c -o execl.o

execl: execl.o
	gcc execl.o -o execl

clean: 
	rm *.o
