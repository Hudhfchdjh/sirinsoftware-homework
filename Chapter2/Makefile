CC = gcc
CFLAGS = -Wall -g

ALL = exercise-2-1 exercise-2-2 exercise-2-3 exercise-2-4 exercise-2-5
ALL += exercise-2-6 exercise-2-7 exercise-2-8 exercise-2-10

all: $(ALL)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(ALL)
