#include<stdio.h>


int main ()
{
            float  petrol , rate , total_bill; 

            printf("Total Petrol Required:");
            scanf("%f" , &petrol);

            printf("Rate per Liter:");
            scanf("%f" , &rate);

            total_bill = petrol * rate;

            printf("\n Total Bill in PKR = %f" , total_bill);

            return 0;
        }