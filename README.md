*This project has been created as part of the 42 curriculum by grodrig2.*

# Description
*Push_swap* is an algorithmic project from the 42 curriculum focused on sorting data using a restricted set of operations.  
The goal of the project is to sort a stack of integers in ascending order using the smallest possible number of operations, while respecting a predefined instruction set.

The program receives a list of integers as arguments, stores them in a stack (`stack A`), and outputs a sequence of operations that will sort the stack using an auxiliary stack (`stack B`).  
Only specific operations such as swap, push, rotate, and reverse rotate are allowed.

Example:
"./push_swap 3 2 1"
Expected:
*sa*
*rra*

Two moves to organize.

For maximum project validation (100%) must:
-   Sort 100 random numbers in fewer than 700 operations.
    Sort 500 random numbers in no more than 5500 operations.

For minimal project validation (which implies a minimum grade of 80%):
-   100 numbers in under 1100 operations and 500 numbers in under 8500 operations (✓)
-   100 numbers in under 700 operations and 500 numbers in under 11500 operations
-   100 numbers in under 1300 operations and 500 numbers in under 5500 operations

## Instructions
make *- To compile*
make clean *- To erase all object files*
make fclean *- Erase all generated files*
make re *- "make fclean" followed by "make"*

Type "make" in your push_swap root folder terminal, it will generate all object files and the executable "push_swap".

### Checker-linux
To test with the checker, you need to download the checker from the 42School's Page and put into the project's root folder. Then you can type something like this:

"./push_swap 3 2 1 | ./checker_linux 3 2 1"
Expected: *Ok*
Error Result: *Ko*

#### Visualize
To test and visualize, you can make like the example above on *Instructions* or, my suggestion, use the online tester shown on *Resources*, you can generate *n* numbers you want and copy. Then you just click on *copy* and paste it in your terminal. 

You have to erase the end "| pbcopy" OR you can change this last part for "| wl-copy" but you need to install it first (it is on Resources). This copies all the instructions generated. Otherwise, you will have to copy by yourself.

Then, you return to your online tester go on *instructions* and paste the instructions.

Then, you go to *simulation*, choose your time and *play*. You will visualize the sorting process.

##### Resources
Online tester - https://push-swap42-visualizer.vercel.app/

Easier to copy  -   sudo apt install wl-clipboard
                    wl-copy

###### Others
Ai was used during the development proccess to help with some concepts, review explanations and perform small tests.
