/*==============================================================================================================
Class:          CIS 054
Assignment:     Lab Assignment 7-1
Name:           Jeffrey Leong
Date:           March 20, 2022

Purpose:        Use an array to display and sort numbers into a 2 column list
Input:          input.dat file
Output:         the numbers sorted
===============================================================================================================*/


#include <iostream>
using namespace std;

void read_file(ifstream& in, int a[], int& array_size);
void sort(int a[], int array_size);
void count(const int a[], int b[][2], int a_size, int& b_size);
void print(const int b[][2], int array_size);