// CALCULATING PERCENTAGE & TOTAL MARKS OF 5 SUBJECTS 
#include<stdio.h>
int main(){
    float x1 = 85; //maths
    float x2 = 90; //physics
    float x3 = 78; //biology
    float x4 = 92; //chemistry
    float x5 = 88; //english
    float percentage = (x1 + x2 + x3 + x4 + x5)/5;
    printf("The percentage is : %.2f%%\n",percentage); // %% is used for printing percentage symbol
    float total = x1 + x2 + x3 + x4 + x5;
    printf("Total marks obtained : %.2f\n",total);
    return 0;
}