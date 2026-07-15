#include <stdio.h>

int main()
{
    int category, item, qty;
    float total = 0;

    printf("===== HOTEL MENU CARD =====\n");
    printf("1. Veg\n");
    printf("2. Non-Veg\n");
    printf("3. Drinks\n");

    printf("Enter your category: ");
    scanf("%d", &category);

    if (category == 1)
    {
        printf("\n--- Veg Menu ---\n");
        printf("1. Paneer Butter Masala - Rs.200\n");
        printf("2. Veg Biryani - Rs.180\n");
        printf("3. Dal Fry - Rs.150\n");

        printf("Enter item: ");
        scanf("%d", &item);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (item == 1)
            total = 200 * qty;
        else if (item == 2)
            total = 180 * qty;
        else if (item == 3)
            total = 150 * qty;
        else
            printf("Invalid Item!\n");
    }
    else if (category == 2)
    {
        printf("\n--- Non-Veg Menu ---\n");
        printf("1. Chicken Biryani - Rs.250\n");
        printf("2. Butter Chicken - Rs.300\n");
        printf("3. Chicken Curry - Rs.220\n");

        printf("Enter item: ");
        scanf("%d", &item);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (item == 1)
            total = 250 * qty;
        else if (item == 2)
            total = 300 * qty;
        else if (item == 3)
            total = 220 * qty;
        else
            printf("Invalid Item!\n");
    }
    else if (category == 3)
    {
        printf("\n--- Drinks Menu ---\n");
        printf("1. Tea - Rs.20\n");
        printf("2. Coffee - Rs.30\n");
        printf("3. Cold Drink - Rs.40\n");

        printf("Enter item: ");
        scanf("%d", &item);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (item == 1)
            total = 20 * qty;
        else if (item == 2)
            total = 30 * qty;
        else if (item == 3)
            total = 40 * qty;
        else
            printf("Invalid Item!\n");
    }
    else
    {
        printf("Invalid Category!\n");
    }

    if (total > 0)
    {
        printf("\n-------------------------\n");
        printf("Total Bill = Rs. %.2f\n", total);
        printf("Thank You! Visit Again.\n");
    }

    return 0;
}