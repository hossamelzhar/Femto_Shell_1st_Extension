# Femto_Shell_1st_Extension
Adding New 3 builtin commands to do some functionalities

The main Role Of femto Shell is to echo every thing typed, and when type "exit", its Terminate.

The Extension Adds 3 commands:

1- "rand" -> To return a random value.

2- "fact" -> To calculate the factorial of the number entered by the user.

3- "fib"  -> To display the fibonacci sequence of the number entered by the user.


The used Commands to build:

1- The Object file "main.o"
    
    gcc -o main.o -c main.c  

/* same for rand.o, fact.o, fib.o */
 
2- The static Library "functions.a"
    
    ar -rs -o functions.a rand.o fact.o fib.o
    
3- the dynamic Library (shared object) "functions.so"
    
    gcc -shared -fpic -o functions.so rand.o fact.o fib.o
    
4- Create the Executable file using the static library:
    
    gcc -o femto_shell_Static main.o ./functions.a
    
5- Create the Executable file using the dynamic library:
    
    gcc -o femto_shell_Dynamic main.o ./functions.so
    
############################
