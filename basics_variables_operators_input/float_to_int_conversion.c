// Take float input and print the fractional part of the real number.
// isme hum float input lenge aur uska fractional part print karenge, fractional part nikalne ke liye hum number me se uska integer part minus kar dengen aur hume fractional part mil jayega 
#include<stdio.h>
int main(){
    float x;
    printf("Enter the number : ");
    scanf("%f",&x);

    int y; // yaha hum integer part nikalne ke liye float number ko integer me convert karenge, isse hume number ka integer part mil jayega
    y = x; // yaha hum float number ko integer me convert kar rahe hai, isse hume number ka integer part mil jayega

    float z; // z me hum fractional part nikalne ke liye number me se uska integer part minus kar dengen aur hume fractional part mil jayega
    z = x - y; // z me hum fractional part nikalne ke liye number me se uska integer part minus kar dengen aur hume fractional part mil jayega
    printf("The fractional part of %.2f is : %.2f\n",x,z);
    return 0;
}