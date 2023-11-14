/**
 * Description: WS10
 * Author names: Abdugafur Dalerzoda, Quang Le
 * abdugafur.dalerzoda@sjsu.edu, quang.h.le@sjsu.edu, 
 * Last modified date: 11/13/2023
 * Creation date: 11/13/2023
 **/

#include <stdio.h>
#include <string.h>

#include "ItemToPurchase.h"

int main() {
    ItemToPurchase item1, item2;
    char c;

    printf("Item 1\n");
    printf("Enter the item name:\n");
    fgets(item1.itemName, sizeof(item1.itemName), stdin);
    item1.itemName[strcspn(item1.itemName, "\n")] = 0;

    printf("Enter the item price:\n");
    scanf("%d", &item1.itemPrice);

    printf("Enter the item quantity:\n");
    scanf("%d", &item1.itemQuantity);

    c = getchar();
    while (c != '\n' && c != EOF) {
        c = getchar();
    }

    printf("\nItem 2\n");
    printf("Enter the item name:\n");
    fgets(item2.itemName, sizeof(item2.itemName), stdin);
    item2.itemName[strcspn(item2.itemName, "\n")] = 0;

    printf("Enter the item price:\n");
    scanf("%d", &item2.itemPrice);

    printf("Enter the item quantity:\n");
    scanf("%d", &item2.itemQuantity);

    printf("\nTOTAL COST\n");
    PrintItemCost(&item1);
    PrintItemCost(&item2);
    printf("\nTotal: $%d\n", (item1.itemPrice * item1.itemQuantity) + (item2.itemPrice * item2.itemQuantity));

    return 0;
}