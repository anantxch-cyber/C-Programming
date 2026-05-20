// Calculate the area of a rectangle
// AREA = LENGTH * WIDTH
// perimeter = 2 * (LENGTH + WIDTH)
#include<stdio.h>
int main(){
    int length;
    printf("Enter the length of the rectangle : ");
    scanf("%d",&length);
    int width;
    printf("Enter the width of the rectangle : ");
    scanf("%d",&width);
    int area = length * width; // calculate the area of the rectangle
    int perimeter = 2 * (length + width); // calculate the perimeter of the rectangle
    
    if(area > perimeter){ // if area is greater than perimeter then print that area is greater than perimeter
        printf("The area of the rectangle is greater than the perimeter of the rectangle.\n");
    }
    else if(area < perimeter){ // if area is less than perimeter then print that area is less than perimeter
        printf("The area of the rectangle is less than the perimeter of the rectangle.\n");
    }
    else{ // if area is equal to perimeter then print that area is equal to perimeter
        printf("The area of the rectangle is equal to the perimeter of the rectangle.\n");
    }
    return 0;
}
// Note: The area of a rectangle is calculated by multiplying its length and width, while the perimeter is calculated by adding the lengths of all sides (which is 2 times the sum of length and width). Depending on the values of area and perimeter, we can compare them to determine their relationship.