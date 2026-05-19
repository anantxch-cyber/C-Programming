// This program demonstrates the use of long long data type in C
// Long long data type is used to store large integer values. It typically takes 8 bytes of memory and can store values from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.
// Range formula for long long data type is : -2^(n-1) to 2^(n-1) - 1, where n is the number of bits used to store the data type. For long long data type, n is 64, so the range is : -2^(64-1) to 2^(64-1) - 1 = -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.
#include<stdio.h>
int main(){
    long long a = 9223372036854775807; // maximum value of long long data type
    printf("The value of a is : %lld\n",a); // %lld is format specifier for long long data type
    return 0;
}
// Remember that when we use long long data type, we should use %lld format specifier in printf and scanf functions to specify that we are working with long long data type. If we use %d format specifier, then it will only print the integer part of the long long value and not the entire value.
