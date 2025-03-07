#include<stdio.h>


int main()
{
    int length,width,depth;
    int recatangle;
    printf("enter a length : ");
    scanf("%d",&length);
    printf("enter a width : ");
    scanf("%d",&width);
    printf("enter a depth : ");
    scanf("%d",&depth); 

    recatangle = length * width * depth;
    printf("\nthe area of rectangle : %d",recatangle);
    return 0;
}