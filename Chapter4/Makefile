all: exercise-4-2 exercise-4-3 exercise-4-11 exercise-4-12-x ostatok_ot_delenia_test exercise-4-1-x

exercise-4-1-x: exercise-4-1-x.c
	gcc -g -Wall exercise-4-1-x.c -o exercise-4-1-x
	
exercise-4-2: exercise-4-2.c
	gcc -g -Wall exercise-4-2.c -o exercise-4-2 -lm

exercise-4-3: exercise-4-3.c
	gcc -g -Wall exercise-4-3.c -o exercise-4-3 -lm

exercise-4-11: exercise-4-11.c
	gcc -g -Wall exercise-4-11.c -o exercise-4-11

exercise-4-12-x: exercise-4-12-x.c
	gcc -g -Wall exercise-4-12-x.c -o exercise-4-12-x

ostatok_ot_delenia_test: ostatok_ot_delenia_test.c
	gcc -g -Wall ostatok_ot_delenia_test.c -o ostatok_ot_delenia_test.o 
clean:
	rm -f exercise-4-2
	rm -f exercise-4-3
	rm -f exercise-4-11
	rm -f exercise-4-12-x
	rm -f ostatok_ot_delenia_test
	rm -f exercise-4-1-x
