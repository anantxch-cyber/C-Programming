// Take integer as input and print half of the number.
#include<stdio.h>
int main(){
    int x;
    printf("Enter the number :\n");
    scanf("%d",&x); // & is for storing value into memory address

    float half = x / 2.0; // yaha 2.0 isliye use kiya hai taki hume decimal value mile otherwise agar hum 2 use karte to hume integer value milti
    printf("Half of %d is : %.2f\n",x,half);
    return 0;
}