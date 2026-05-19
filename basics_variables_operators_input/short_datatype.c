// This program demonstrates the use of short data type in C
// Short data type is used to store small integer values. It typically takes 2 bytes of memory and can store values from -32,768 to 32,767.
#include<stdio.h>
int main(){
    short a = 32222;
    printf("The value of a is : %d\n",a); // %d is format specifier for int data type, but it can also be used for short data type as short is promoted to int when used in expressions
    return 0;
}