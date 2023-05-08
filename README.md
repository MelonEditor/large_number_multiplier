# large_number_multiplier

Contains a function that is capable of multiplying massive integer numbers stored in arrays
This function was created to multiply numbers that do not fit in the maximum "unsigned long long int" and similar datatypes. 
Such numbers are stored in arrays. To multiply them we use an algorithm similar to the one used for multiplying on paper.

To use the function: 
 
- create an array of type short int that contains the digits of your number. for example:

    short num1[] = {1, 6, 1, 8, 0, 3, 4, 8, 7};
    short num2[] = {0, 6, 4, 7, 1, 2, 8, 1, 5, 7, 0, 8};

- pointers num1 and num2 represent the arrays of numbers you want to multiply
- size1 and size2 represent the amount of digits in the arrays
- the result is a pointer to an array of type short int
