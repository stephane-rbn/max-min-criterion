# -*- MakeFile -*-

CC = clang -std=c89
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

clean:
	$(PRINT) "==> Cleaning directory"
	$(RM) *.o output a.out
