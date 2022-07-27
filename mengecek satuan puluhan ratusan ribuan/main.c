#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    puts("=====Progam Mendeteksi golongan Satuan,Puluhan,Ratusan/Ribuan=====");
    printf("\n");
    printf("Enter your Number: ");scanf("%d",&number);
    if (0<=number&&10>number)
    {
        puts("Your input is a number in the unit");
    }
    else if (10<=number&&100>number)
    {
        puts("Your input is a number in the dozens");
    }
    else if (100<=number&&1000>number)
    {
        puts("Your input is a number in the hundreds");
    }
    else if (1000<=number&&10000>number)
    {
        puts("Your input is a number in the thousands");
    }
    else
    {
       puts("your input is not valid, please enter more than 0 ");
    }
    printf("\n");
    puts("by. Gusvinanda Ellya Ruswati");


    return 0;
}
