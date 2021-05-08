all:parallel_min_max process_memory number_5_parallel_min_max clean
find_min_max.o: find_min_max.c
	gcc -c find_min_max.c -o find_min_max.o

utils.o:utils.c
	gcc -c utils.c -o utils.o

parallel_min_max.o: parallel_min_max.c
	gcc -c parallel_min_max.c -o parallel_min_max.o

parallel_min_max: find_min_max.o utils.o parallel_min_max.o
	gcc find_min_max.o utils.o parallel_min_max.o -o parallel_min_max

process_memory.o:process_memory.c
	gcc -c process_memory.c -o process_memory.o

process_memory:process_memory.o
	gcc process_memory.o -o process_memory

sum.o:sum.c
	gcc -c sum.c -o sum.o

number_5_parallel_min_max:utils.o find_min_max.o parallel_min_max.o sum.o
	gcc utils.o find_min_max.o parallel_min_max.o sum.o -o number_5_parallel_min_max

clean:
	rm *.o
