CC := g++
CFLAGS := -O1 -Wall -g -fsanitize=address



lab10_prog.exe: main.o calculator.o
	# fill in commands here
	$(CC) $(CFLAGS) $^ -o $@

%.exe: %.c
	$(CC) $(CFLAGS) $< -c

.PHONY: clean
clean:
	rm -f *.exe
	rm -f lab9_prog.exe