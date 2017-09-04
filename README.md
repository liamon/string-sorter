# string-sorter
This was an assignment in the First-Year Programming module.
The version I originally handed up was in one file, but I have split it into two .c files and one .h file for GitHub.
I compiled this version by the command line, so I took out the `#include "stdafx.h"` that is only required by Visual Studio.

## Assignment Instructions
>- In this week’s assignment you must create a program which you will call from the command line as in the sample input
>- As inputs on the command line you must enter a file name followed by up to 20 words
>- The program will:
>    - retrieve these inputs
>    - Sort the words alphabetically
>    - Save the sorted list of words to the file specified in the input
>- Your code MUST contain a function to sort the words and a function to write them to a file. Sample prototypes:
>
>        void sortStrings (int numStrings, char *strings[]);
>        void writeToFile (int numStrings, char *filename, char *strings[]);
