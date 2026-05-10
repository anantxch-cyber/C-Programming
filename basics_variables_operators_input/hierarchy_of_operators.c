// // This program demonstrates operator precedence and integer division in C
#include<stdio.h>
int main(){
    int i;
    i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8; // operator precedence is : () > * / % > + - and if there are multiple operators with same precedence then it is evaluated from left to right
    // If operators have same precedence, evaluation happens from left to right
    // Integer division removes the decimal part and gives only the integer part as output, for example : 5 / 2 = 2 (integer division) and 5.0 / 2 = 2.5 (float division)
    // So the expression is evaluated as follows :
    // 2 * 3 = 6
    // 6 / 4 = 1 (integer division)
    // 4 / 4 = 1
    // 5 / 8 = 0 (integer division)
    // so the expression becomes : 1 + 1 + 8 - 2 + 0 = 8
    printf("The value of i is : %d\n",i);
    return 0;
}

// ab agar mereko. user se numbers lene hai for calculation then this is the code for that :

/* #include <stdio.h>

int main() {

    int a,b,c,d,e,f,g,h,j;
    int i;

    printf("Enter values:\n");
    scanf("%d %d %d %d %d %d %d %d %d",
          &a,&b,&c,&d,&e,&f,&g,&h,&j);

    i = a * b / c + d / e + f - g + h / j;

    printf("The value of i is : %d\n", i);

    return 0;
} */