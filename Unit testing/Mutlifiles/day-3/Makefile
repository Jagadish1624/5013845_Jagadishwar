object : def.c test.c unity.c
	gcc $^ -c

all : def.o test.o unity.o
	gcc $^ -o all.out

run : all
	./all.out

clean : 
	rm -rf *.o *.out