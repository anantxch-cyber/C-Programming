// This program demonstrates the use of ASCII values with character data type in C
#include<stdio.h>
int main(){
    char ch = 'A'; // character data type can hold only a single character, so it will only store 'A' and not 'ANANT'
    printf("The value of ch is : %c\n",ch); // %c is format specifier for character data type
    printf("The ASCII value of ch is : %d\n",ch); // %d is format specifier for int data type, so it will print the ASCII value of 'A' which is 65
    return 0;
}

// Remember that in C, characters are stored as integers corresponding to their ASCII values. So when we print a character using %c, it shows the character itself, but when we print it using %d, it shows the ASCII value of that character.
// Remember the ascii value of 'A' is 65, 'B' is 66, 'C' is 67 and so on. So if we change the value of ch to 'B', then the ASCII value will be 66 and if we change it to 'C', then the ASCII value will be 67.
// and for small a the ASCII value is 97, for small b it is 98 and for small c it is 99 and so on. So if we change the value of ch to 'a', then the ASCII value will be 97 and if we change it to 'b', then the ASCII value will be 98 and if we change it to 'c', then the ASCII value will be 99.