#ifndef WEEK_01_H    /* This is an "include guard" */
#define WEEK_01_H    /* prevents the file from being included twice. */
                     /* Including a header file twice causes all kinds */
                     /* of interesting problems.*/




/*Problem 1:
Write the program “Hellow world” included, compile and execute it to learnt how to use the Linux and C environments.*/
void problem_01();

/*
Problem 2:
Modify the previous program to read a name from the keyboard and print the name on the screen.

For example, if said name is John, your program will display “Hello John”*/
void problem_02();

/*Problem 3:
Create a C program that declares an integer, a long int, and a float, assigns them a value, and prints them to the screen in different formats. Then read the two integers separated on the entry line by a space .*/
void problem_03();

/*Problem 4:
Write a C program that displays the parameters that a C process receives on the screen.*/
void problem_04 (int argc, char *argv[]);

/*Problem 5:
Write a program that takes two real numbers as input and prints their sum to 3 decimal places. To add them, a function “add” must be declared that adds both numbers and returns the result.*/
float sumar (float a, float b);

/*Problem 6:
Write a program that takes an integer as an input argument, declares a 10-element vector, initializes it with the argument, and adds the 10 elements of the vector using first for and then while. The results of both sums will be printed on the screen.*/
void problem_06();

/*Problem 7:
Modify the above program so that the sum of the 10 elements of the vector is done in a function. The function will return the sum as a result, which will be printed on the screen.*/

void problem_07();

/*Problem 8:
Calculate the sum of two matrices and display it on the screen

Problem 8:
a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.

Write a c program to check whether a given number is a perfect number or not.*/
void problem_08();

/*Problem 9
Write a program that has a function with an integer parameter that returns 1 if the parameter is a prime number and 0 otherwise. The function will be used to indicate whether a number entered by keyboard is prime or not, and to write on the screen immediately afterwards the prime numbers between 1 and 1000.*/
void problem_09();

/*Problem 10
Define a recursive function called fibonacci that returns the indicated fibonacci series number.*/

void problem_10();

#endif /* WEEK_01_H */