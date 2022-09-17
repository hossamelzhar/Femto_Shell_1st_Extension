.PHONY: clean

femto_shell_Dynamic: main.o functions.so femto_shell_Static
	gcc -o femto_shell_Dynamic main.o ./functions.so

femto_shell_Static: main.o functions.a
	gcc -o femto_shell_Static main.o ./functions.a

functions.so: rand.o fact.o fib.o
	gcc -shared -fpic -o functions.so rand.o fact.o fib.o

functions.a: rand.o fact.o fib.o
	ar -rs -o functions.a rand.o fact.o fib.o

%.o: %.c
	@echo "Building $<"
	gcc -o $@ -c $<

clean: 
	rm *.o
