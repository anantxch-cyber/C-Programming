// PROGRAMMING TO CALCULATE SIMPLE INTEREST, FORMULA : SI = (P * R * T) / 100
#include<stdio.h>
int main(){
    float p,r,t,si;
    
    printf("Enter the principal amount, rate of interest and time in years :\n");
    scanf("%f %f %f",&p,&r,&t); // & is for storing value into memory address

    si = (p * r * t) / 100; // SI = (P * R * T) / 100
    printf("The simple interest is : %.2f\n",si);
    return 0;
}