#include <stdio.h>
int main()
{
    printf("Hello World\n");  // \n will print it to next line
    printf("Hello World\n");
    int number = 25;
    char star ='*';
    int _age=22;
    float pi =3.14;

    printf("Age is %d\n",_age); //integers
    printf("Value of pie is %f\n",pi); // real numbers
    printf("Star look like this %c\n",star); //characters
    
    _age=24; //variable can be updated like this
    return 0;
}