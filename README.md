# Counting Occurences
 CIS-054


Description
Write a program that reads in a list of 50 or fewer integers from a file into an array, sort the integers, and output the number of occurrences of each integer present in the file. 

The output will be a two-column list. The first column is a list of the distinct integer, sorted from smallest to largest (ascending order). The second column is the count of each integer. See lecture video 7-5 for discussion of this homework. 

Demo
For example, if the input file that contains the following integers:

-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12
After sorting, your array will look like:

-12 -12 -12 -12 -1 1 1 1 1 2 2 3 3 3 4 4
The output will look something like:

Welcome to Number Cruncher!
===========================
Which file do you want us to crunch?
test1.dat

Here is the stats:
N Count
-12 4
-1 1
1 4
2 2
3 3
4 2

Requirements
1. This module is about arrays. For sure arrays are required :D
2. Your program will ask user for input file name.
3. Implement at least one function. More functions will probably make your program easier to debug. 
4. No need to loop to check if user wants to stop the program.
5. Comments and program/function headers.