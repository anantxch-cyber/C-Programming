// CALCULATING PERCENTAGE OF 5 SUBJECTS AND FINDING OUT THE GRADE
#include<stdio.h>
int main(){
    float x1 = 85;
    float x2 = 90;
    float x3 = 78;
    float x4 = 92;
    float x5 = 88;
    float percentage = (x1 + x2 + x3 + x4 + x5)/5;
    printf("The percentage is : %.2f%%\n",percentage); // %% is used for printing percentage symbol
    return 0;
}