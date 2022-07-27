#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kode;

    printf("===============================================================================\n");
    printf("Progam menenentukan input ascii termasuk karakter,angka,atau sebuah simbol lain\n");
    printf("===============================================================================\n\n");
    printf("Enter code ASCII: ");scanf("%d",&kode);
    if ((0<=kode&&32>=kode)||(kode==127))
    {
        puts("Your input is word");
    }
    else if ((33<=kode&&47>=kode)||(58<=kode&&64>=kode)||(92<=kode&&96>=kode)||(123<=kode&&126>=kode))
    {
        puts("Your input is consonant");
    }
    else if (48<=kode&&57>=kode)
    {
        puts("Your input is odd number");
        if (kode %2 == 0)
        {
           puts("Genap");
        }
        else if (kode = 0)
        {
            puts("Nol");
        }
        else
        {
            puts("Ganjil");
        }
    }
   else if ((65<=kode&&90>=kode)||(97<=kode&&122>=kode))
   {
       if ((kode==65)||(kode==69)||(kode==73)||(kode==79)||(kode==85)||(kode==97)||(kode==101)||(kode==105)||(kode==111)||(kode==117))
    {
       puts("Your input is a vocal");
    }
    else
    {
        puts("Your input is a character");
    }
   }
   else if(0>kode)
   {
       puts("Your input is not valid, please enter more than 0");
   }
   else
   {
       puts("Your input is not valid, please enter less than 128");
   }



    return 0;
}
