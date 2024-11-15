<h1 align="center"> Libft </h1>

<p align="center">
  <img src="https://github.com/user-attachments/assets/7b8f2c60-66af-48f5-b986-f9adefd267a1" alt="image">
</p>

<h2>This project aims to make you code in C a library of usual functions that will be used for next projects.</h2>

Since in most 42 projects we can't use any of the standard C library functions, the goal of this first project is to replicate some of the usual functions ourselves, as well as some additional functions.

We have to build a library that we will be able to use in our future projects.

🎯 Objectives :
Reviewing.
Basics of programming.

💾 Skills :
Imperative programming
Unix
Rigor

📚 Subject :

C programming can be very tedious when one doesn’t have access to the highly useful standard functions. This project is about understanding the way these functions work, implementing and learning to use them. Your will create your own library. It will be helpful since you will use it in your next C school assignments.
Take the time to expand your libft throughout the year. However, when working on a new project, don’t forget to ensure the functions used in your library are allowed in the project guidelines.

<p align="center">
<img src="https://github.com/user-attachments/assets/56d78c1b-0cf0-41a3-906a-1f20af822a9c" alt="image">
</p>

<p align="center">
<h1>A C static library with recoded standard functions</h1>
</p>

<h2>Index</h2>

<ul>
<li>What is Libft?</li>
<li>Requirements</li>
<li>Functions</li>
<li>Makefile</li>
    <li>How does it work?</li>
   <li> How do I use the library?</li>
    <li>How do I test it?</li>
    <li>42 Cursus</li>
</ul>

<h3>What is Libft?</h3>

The first project at 42 programming school. It consists of a static library with recoded standard functions in C that runs and compiles the code using a Makefile. The library can be used as a support in future school's projects, since it's not allowed to use the original functions. Once you finish the project, you can (and should) include more functions to Libft than previously asked. For example, now the projects get_next_line and ft_printf are part of my library.

The project is divided in three parts - Part I, Part II and Bonus.
Part I.

    In this first part, you must re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.

• isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero • memcpy • memmove • strlcpy • strlcat • toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi • calloc • strdup
Part II.

    In this second part, you must code a set of functions that are either not included in the libc, or included in a different form. Some of these functions can be useful to write Part 1’s functions.

• substr • strjoin • strtrim • split • itoa • strmapi • striteri • putchar_fd • putstr_fd • putendl_fd • putnbr_fd
Bonus.

    In this Bonus part, you must code a set of functions that are useful to manipulate lists.

• lstnew • lstadd_front • lstsize • lstlast • lstadd_back • lstdelone • lstclear • lstiter • lstmap
Requirements

<h3>The project must be written in accordance with the Norm</h3>

The Norm is a programming standard that defines a set of rules to follow when writing code at 42. It applies to all C projects within the Common Core by default, and to any project where it's specified. These are some of them:

Each function must be maximum 25 lines, not counting the function's own curly brackets.

Each line must be at most 80 columns wide, comments included.

A function can take 4 named parameters maximum.

You can't declare more than 5 variables per function.

You're not allowed to use: for , do...while , switch , case ,  goto  ,
ternary operators such as `?' and VLAs - Variable Length Arrays.

The norminette (as we call the norm at 42) is in python and open source.

Its repository is available at https://github.com/42School/norminette.

In addition to the Norm, the subject have other requirements, which are:

It is forbidden to declare global variables.

Using the command libtool to create your library is forbidden.

Your Makefile must compile with the flags -Wall, -Wextra and -Werror.

<h2>Functions</h2>

Those are the my Libft's functions today - some of them are not part of the subject - Once we're allowed to keep expanding our library to help us in other projects at 42.
Functions from <ctype.h>

• ft_isalpha - checks for an alphabetic character.

• ft_isdigit - checks for a digit (0 through 9).

• ft_isalnum - checks for an alphanumeric character.

• ft_isascii - checks whether c fits into the ASCII character set.

• ft_isprint - checks for any printable character.

• ft_toupper - convert char to uppercase.

• ft_tolower - convert char to lowercase.
Functions from <string.h>

• ft_memset - fill memory with a constant byte.

• ft_strlen - calculate the length of a string.

• ft_bzero - zero a byte string.

• ft_memcpy - copy memory area.

• ft_memmove - copy memory area.

• ft_strlcpy - copy string to an specific size.

• ft_strlcat - concatenate string to an specific size.

• ft_strchr - locate character in string.

• ft_strrchr - locate character in string.

• ft_strncmp - compare two strings.

• ft_memchr - scan memory for a character.

• ft_memcmp - compare memory areas.

• ft_strnstr - locate a substring in a string.

• ft_strdup - creates a dupplicate for the string passed as parameter.
Functions from <stdlib.h>

• ft_atoi - convert a string to an integer.

• ft_calloc - allocates memory and sets its bytes' values to 0.
Non-standard functions

• ft_substr - returns a substring from a string.

• ft_strjoin - concatenates two strings.

• ft_strtrim - trims the beginning and end of string with specific set of chars.

• ft_split - splits a string using a char as parameter.

• ft_itoa - converts a number into a string.

• ft_strmapi - applies a function to each character of a string.

• ft_striteri - applies a function to each character of a string.

• ft_putchar_fd - output a char to a file descriptor.

• ft_putstr_fd - output a string to a file descriptor.

• ft_putendl_fd - output a string to a file descriptor, followed by a new line.

• ft_putnbr_fd - output a number to a file descriptor.
Linked list functions

• ft_lstnew - creates a new list element.

• ft_lstadd_front - adds an element at the beginning of a list.

• ft_lstsize - counts the number of elements in a list.

• ft_lstlast - returns the last element of the list.

• ft_lstadd_back - adds an element at the end of a list.

• ft_lstclear - deletes and free list.

• ft_lstiter - applies a function to each element of a list.

• ft_lstmap - applies a function to each element of a list.
get_next_line (2nd Project at 42)

• get_next_line - reads any valid file line by line.
Functions from "ft_printf.h" (3rd Project at 42)

• ft_printf - output a formatted string in stdout.

• ft_argument_c - output a char in stdout.

• ft_arguments_d_i - output an integer number in stdout.

• ft_argument_p - output a memory address(a hexadecimal) in stdout.

• ft_argument_percent - output an percent sign in stdout.

• ft_argument_s - output a string in stdout.

• ft_argument_u - output an unsigned integer in stdout.

• ft_arguments_x - output a hexadecimal number in stdout.

• ft_decimal_length - returns the length of a decimal number.

• ft_free_ptr - free memory for a pointer and set its value to null.

• ft_decimal_converter_to_hex - converts a decimal number to hexadecimal.

• ft_hex_length - returns the length of a hexadecimal number.

• ft_print_reversed_str - print a string backwards.
Useful Functions

• ft_count_occurrences - returns the number of occurrences of a char in a string.

• ft_free_str_array - free memory from an array of strings.
Makefile

<h2>Makefile</h2>

A Makefile defines set of tasks to be executed, in shell script. These tasks are writed on a target in this format:

target: prerequisites
<TAB> recipe

such as:

fclean:	clean
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"
	${REMOVE} ${NAME}
	@echo

The recipe(the commands @echo and so forth) for the target fclean will only be executed when the target clean (the prerequisite) be executed. a target works without prerequisites too:

clean:
	@echo "\n$(NAME): $(RED)object files were deleted$(RESET)"
	${REMOVE} ${OBJS} ${BONUS_OBJS}
	@echo

As you could see, there are a few variables inside the recipe. The variables can be assigned just as follow:

GREEN		= \033[0;32m
RED		= \033[0;31m
RESET		= \033[0m
CC		= clang
FLAGS 		= -Wall -Werror -Wextra

To use the variable value, just use the $ sign with parenthesis:

@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

Using variables makes your Makefile more readable and easily modifiable. Try it :)

It is not necessary for the target to be a file. It could be just a name for the recipe, just as above. We call these phony targets.

But if you have a file with the exact name of your phony target inside of your repo, things can get a little weird. To protected your Makefile from this, just use phony and the name of all your phony targets used:

.PHONY:		all clean fclean re bonus

Here at 42 school, the subject says that

    Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.

The rules are the target, just name some of them as $(NAME), all, clean, fclean and re.

The rule $(NAME), in this case, should create the $(NAME) static library.

all is used to make the principal goal of your Makefile: create the $(NAME) static library.

clean removes the objects created to make the library.

fclean removes the objects created to make the library and the $(NAME).

re just removes the objects created to make the library and the $(NAME), to then recompile everything.

You can run a rule on your Makefile this way:

make $(target_name)

such as:

make clean

In the case of the target all, just type make

make

Colorful Makefile

Choose your color, add it as a variable and use in your Makefile:

BLACK		="\[\033[0;30m\]"        
RED		="\[\033[0;31m\]"       
GREEN		="\[\033[0;32m\]"      
YELLOW		="\[\033[0;33m\]"       
BLUE		="\[\033[0;34m\]"        
PURPLE		="\[\033[0;35m\]"     
CYAN		="\[\033[0;36m\]"         
WHITE		="\[\033[0;37m\]"    
RESET		="\033[0m"

You could use it this way:

@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

So $(NAME) was deleted will be printed in red.

Cool, right?

Remember to reset the color when you're done, otherwise your terminal will keep with the last used colour.
How does it work?

The functioning of the library can be explained just by breaking down the Makefile. The library functions are all coded in .c files. These files are compiled into objects (.o) to be later inserted in the library, we do this just by compiling with the -c and -o flags.

  clang -c example1.c -o example1.o
  clang -c example2.c -o example2.o
  clang -c example3.c -o example3.o
  clang -c example4.c -o example4.o

And then using ar rcs command to create the library with all the objects.

  ar rcs libft.a example1.o example2.o example3.o example4.o

With the files transformed into objects, we don't need to compile all the code again in case there is any change, only the file that was changed would be recompiled.

The Makefile is used to automate the process as there are at least 40 files to be compiled into objects and then linked into the library.
How do I use the library?
It aims to create a library called libft.a from the source files.

To create this library, clone the project:

git clone https://github.com/augustobecker/libft libft

Enter the repository:

cd libft

Run Make (to run the Makefile that will compile the source code and create the library):

make

You should see a libft.a file and some object files (.o).

Now to clean up (removing the .o files), call make clean:

make clean

Now you just have to add this header at your .c files and use the Libft functions:

#include "libft.h"

If you try to compile your .c files with clang using clang example.c you will get an undefined symbol error for Libft functions.

You have to tell the file where your library resides:

clang example.c libft.a

That's it. Now run it using ./a.out

<h2>How do I test it?</h2>

To test the code we're going to be using @jgambard's Libft Tester. There are some good others but I'll only be covering this one.

To test the code in this repo Clone this repo and cd into it:

git clone https://github.com/RenWro/42Berlin_Libft/ libft
 
cd libft/	

Now, clone @jgambard's Libft Tester

git clone https://github.com/Tripouille/libftTester libftTester

Go into the test folder and run the mandatory test and then the bonus test:

cd libftTester
make m
make b

![image](https://github.com/user-attachments/assets/d6ff7aca-1b37-4d02-a0b2-c0797fe3bceb)


<p align="center"><h1>About 42 Berlin</h1></p>

![image](https://github.com/user-attachments/assets/2c94872d-0def-429f-9b3d-5d71c209ad25)



42 is a global education initiative that proposes a new way of learning technology: all 42 schools are using peer2peer gamified methodology and are completely tuition free for students. 42 is a brand well known by employers in many countries as one of the most rigorous educational methodologies. 

PROJECT-BASED LEARNING

Before you start studying with us, you need to complete the Piscine, a 26-day coding challenge.  Once you pass it your 12-18 month coding journey begins. 

The 42 Berlin curriculum, inspired by École 42 in Paris, focuses on hands-on learning and peer collaboration. Furthermore, with 12,000+ global students, it teaches coding from scratch, supporting beginners and advancing those with prior knowledge. 

You advance your knowledge by completing practical projects which then need to be evaluated both by our evaluation software and your peers. This learning process makes our graduates extremely good at communication as well as prepares them for an independent work environment. 

We’re proud to have some of Germany’s largest tech companies by our side. Thanks to their donations and support, our education is accessible to all aspiring coders. Find out more about 42 Berlin partners here.
Volkswagen, partner of 42 Berlin coding school:
<ul>
<li>SAP logo</li>	
<li>Capgemini logo</li>
<li>Microsoft logo</li>
<li>T-Systems logo</li>
<li>Cariad logo</li>
<li>Bayer logo</li>
</ul>

