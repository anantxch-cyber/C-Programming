// Check if a person has made a profit or a loss
#include<stdio.h>
int main(){
    int cp; // cost price
    printf("Enter the cost price of the product : ");
    scanf("%d",&cp);
    int sp; // selling price
    printf("Enter the selling price of the product : ");
    scanf("%d",&sp);
    if(sp>cp){ // if selling price is greater than cost price then it is a profit
        printf("You have made a profit of %d\n", sp-cp); // print the profit
    }
    if(sp<cp){ // if selling price is less than cost price then it is a loss
        printf("You have made a loss of %d\n", cp-sp); // print the loss
    }
    if(sp==cp){ // if selling price is equal to cost price then it is neither a profit nor a loss
        printf("You have neither made a profit nor a loss.\n"); // print that there is no profit or loss
    }
    return 0;
}
// Note: Profit is calculated as selling price minus cost price, and loss is calculated as cost price minus selling price. If the selling price is greater than the cost price, it is a profit; if the selling price is less than the cost price, it is a loss; and if both are equal, there is no profit or loss.
