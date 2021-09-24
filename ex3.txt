Exercise 3
1 This is valid

2 This is valid

3 'return' expects a value to follow it, therefore this
expression returns an error

4 Debatable, this is a function from C, and it's generally
encouraged to avoid using this functions, although I would know
no alternative. It is true, as indeed the size of 'c' is 1.

5 This is not true since argc provides the number of
arguments (including the program name) and argv is the
array of arguments where counting starts at 0.
argv[argc-1] gives the name of the executable and
argv[argc] segfaults.

6 This is not good practice since programs should be well
structured, have one beginning and one end. Having an exit
deep inside implies the code is not easily readable.
Moreover exit(0) may leave the computer in a volatile state.

7 Yes, the latter is unnecessary and difficulty readability.

8 Yes, the resulting code evaluates index [2] first,
followed by index [3]
