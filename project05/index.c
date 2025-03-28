#include<stdio.h>

int main () {
    
    int n,i,sum = 0, num;

    printf("Enter the number of values you want to add :");
    scanf("%d" , &n);

    for(i = 1; i <= n; i++){
        printf("Enter number %d" , i);
        scanf("%d" , &num);

        sum += num;

    }

    printf("The sum of the numbers is: %d\n" , sum);
    return 0;

}