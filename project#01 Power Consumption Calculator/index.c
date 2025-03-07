#include<stdio.h>

int main() {
   int rooms,  fansperroom, acperroom, peraunit, perfanunit, perunitrate,tax;
   int total_units_consumed;
   printf("Enter the number of rooms: ");
    scanf("%d", &rooms);
    printf("Enter the number of fans per room: ");
    scanf("%d", &fansperroom); 
    printf("Enter the number of ACs per room: ");
    scanf("%d", &acperroom);
    printf("Enter the power consumption per unit: ");
    scanf("%d", &perunitrate);
    printf("Enter the power consumption per fan: ");
    scanf("%d", &perfanunit);
    printf("Enter the power consumption per AC: ");
    scanf("%d", &peraunit);
    printf("Enter the tax rate: ");
    scanf("%d", &tax);
    total_units_consumed = (fansperroom * perfanunit + acperroom * peraunit) * rooms;
    printf("Total units consumed: %d\n", total_units_consumed);
    printf("Total bill: %d\n", total_units_consumed * perunitrate + total_units_consumed * perunitrate * tax / 100);
    return 0;
}



// Enter the number of rooms: 5  
// Enter the number of fans per room: 2  
// Enter the number of ACs per room: 1  
// Enter the power consumption per unit: 10  
// Enter the power consumption per fan: 1  
// Enter the power consumption per AC: 5  
// Enter the tax rate: 10  



// output :   Total units consumed: 35  
//            Total bill: 385  
