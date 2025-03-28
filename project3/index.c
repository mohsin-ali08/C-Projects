#include<stdio.h>

int main ()
        {
            int incom_sindh , incom_panjab , incom_kpk , incom_balochistan ;
            int incom_import , incom_export , total_incom;

            printf("Incom from sindh :");
            scanf("%d" , &incom_sindh);

            printf("Incom from Panjab:");
            scanf("%d", &incom_panjab);

            printf("Incom from KpK:");
            scanf("%d" , &incom_kpk);

            printf("Incom from Balochistan:");
            scanf("%d" , &incom_balochistan);

            printf("Incom from import:");
            scanf("%d" , &incom_import);

            printf("Incom from export:");
            scanf("%d" , &incom_export);

            total_incom = incom_sindh + incom_panjab + incom_kpk + incom_balochistan + incom_import + incom_export;
            printf("\n Total Incom all over the Pakitan: %d" , total_incom);

            return 0;

        }