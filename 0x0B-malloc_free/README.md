# 0x0B - malloc, free
## Learning Objectives
- What is the difference between automatic and dynamic allocation
- What is malloc and free and how to use them
- Why and when use malloc
- How to use valgrind to check for memory leak
## Tasks
[0. Float like a butterfly, sting like a bee](0-create_array.c) - A function that creates an array of chars, and initializes it with a specific char.  
[1. The woman who has no imagination has no wings](1-strdup.c) - A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as paremeter.  
[2. He who is not courageous enough to take risks will accomplish nothing in life](2-str_concat.c) - A function that concatenates two strings.  
[3. If you even dream of beating me you'd better wake up and apologize](3-alloc_grid.c) - A function that returns a pointer to a 2 dimensional array of integers.  
[4. It's not bragging if you can back it up](4-free_grid.c) - A function that frees a 2 dimensional grid previously created using [alloc_grid](3-alloc_grid.c).  
## Requirements
All the files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
The code uses the Betty style. Checked using betty-style.pl and betty-doc.pl.
_putchar.c is used to write the output.
In the examples, the main.c files are shown as examples. You can use them to test the functions.
main.h - The custom header file.
