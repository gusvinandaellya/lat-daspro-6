#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
int sisi1,sisi2,sisi3;
float luas,keliling,tinggi;

printf("Program jenis segitiga \n\n");
printf("Masukkan Sisi-sisinya : \n\n");
printf("Sisi 1 : ");fflush(stdin);scanf("%i",&sisi1);
printf("Sisi 2 : ");fflush(stdin);scanf("%i",&sisi2);
printf("Sisi 3 : ");fflush(stdin);scanf("%i",&sisi3);
if (sisi1==sisi2 && sisi2==sisi3) {
puts ("Berdasarkan sisi yang dimiliki Luas, Termasuk dalam segitiga SAMA SISI");
tinggi=sqrt(pow(sisi1,2)+pow((sisi3/2),2));
luas=sisi3*tinggi/2;
printf("Luas Segitiga\t: %.2f\n",luas);
keliling=sisi1+sisi2+sisi3;
printf("Keliling Segitiga\t: %.2f\n",keliling);
}
else
if (sisi1==sisi2 && sisi2!=sisi3 || sisi2==sisi3 && sisi3!=sisi1 || sisi3==sisi1 && sisi1!=sisi2) {
puts ("Berdasarkan sisi yang dimiliki Luas, Termasuk dalam segitiga SAMA KAKI");
luas=sisi1*sisi2/2;
printf("Luas Segitiga\t: %.2f\n",luas);
keliling=sisi1+sisi2+sisi3;
printf("Keliling Segitiga\t: %.2f\n",keliling);
}
else {
puts("Berdasarkan sisi yang dimiliki Luas, Termasuk dalam segitiga SEMBARANG");
tinggi=sqrt(pow(sisi1,2)+pow((sisi3/2),2));
luas=sisi3*tinggi/2;
printf("Luas Segitiga\t: %.2f\n",luas);
keliling=sisi1+sisi2+sisi3;
printf("Keliling Segitiga\t: %.2f\n",keliling);
}
getch();

    return 0;
}
