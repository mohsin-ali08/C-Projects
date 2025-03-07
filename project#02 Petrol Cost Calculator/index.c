#include <stdio.h>

int main() {
    int liters, price_per_liter, total_cost;

    printf("Enter the number of liters consumed: ");
    scanf("%d", &liters);

    printf("Enter the price per liter: ");
    scanf("%d", &price_per_liter);

    total_cost = liters * price_per_liter;

    printf("Total petrol cost: %d\n", total_cost);

    return 0;
}




// Example Input:
// Enter the number of liters consumed: 10  
// Enter the price per liter: 250  

// Calculation:
// Total cost = 10 * 250 = 2500



// Output:
// Total petrol cost: 2500
