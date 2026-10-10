#include<stdio.h>

int main ()
{
     // K = °C + 273.15

     int C = 27;
     float K = C + 273.15;
     double Kel = C + 273.15;

     printf("%d Celcius Temperature into Kelvin will be %f K \n", C, K);
     printf("%d Celcius Temperature into Kelvin will be %f K \n", C, Kel); // We can use double instead of float for price 0.15 value.
     printf("%d Celcius Temperature into Kelvin will be %.2f K \n", C, K); // %.2f --> consider only upto 2 significant figures
     return 0;
}