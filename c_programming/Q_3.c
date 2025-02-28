//Perimeter of Rectangle
#include <stdio.h>

int main()
{
    int length,breadth;
    printf("Please Enter Length of Rectangle = ");
    scanf("%d",&length);

    
    printf("Please Enter Breadth of Rectangle = ");
    scanf("%d",&breadth);

    printf("The Perimeter of Rectangle = %d",2*(length+breadth));
    return 0;
}