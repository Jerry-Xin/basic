run: main.o print.o sorts.o
	cc -o run main.o print.o sorts.o
main.o: main.c print.h sorts.h
	cc -c main.c 
sorts.o: sorts.c sorts.h
	cc -c sorts.c
print.o: print.c print.h
	cc -c print.c
clean:
	rm run main.o sorts.o print.o
