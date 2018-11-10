# -*- MakeFile -*-

CC = clang -std=c89
CCTEST = clang -std=c99 -lcriterion
CFLAGS = -c
OFLAGS = -o
WFLAGS = -pedantic-errors -Wall -Wextra -Werror
RM = rm -f
PRINT = @echo

all: output

output: main.o
	$(PRINT) "==> Linking object files..."
	$(CC) main.o $(OFLAGS) output

main.o: main.c
	$(PRINT) "==> Compiling main.c file..."
	$(CC) $(WFLAGS) $(CFLAGS) main.c

functions.o: functions.c
	$(PRINT) "==> Compiling functions.c file..."
	$(CC) $(WFLAGS) $(CFLAGS) functions.c

test:
	$(PRINT) "==> Compiling test.c file..."
	$(CCTEST) $(OFLAGS) test test.c
	$(PRINT) "==> Running tests..."
	./test
	$(PRINT) "==> Cleaning test file..."
	$(RM) test

clean:
	$(PRINT) "==> Cleaning directory"
	$(RM) *.o output
