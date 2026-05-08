// WRITING CODE FOR VOULUME OF A SPHERE AND THE FORMULA IS 4 PI R*R*R / 3
#include<stdio.h>
int main(){
    int radius = 7;
    float volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;
    printf("The volume of a sphere is : %.2f\n",volume);
    return 0;
}