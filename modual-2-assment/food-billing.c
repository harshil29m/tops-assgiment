#include <stdio.h>

main()
{
    int choice, qty;
    int total = 0;
    char more;

    do
    {
        printf("\n*****FOOD MENU*****\n");
        printf("\n");
        
        printf("\nFOOD NAME - PRISE\n");
        printf("\n");
        
        printf(" 1. Pizza - 200\n");
        printf(" 2. Burger - 100\n");
        printf(" 3. Tea - 20\n");
        
        printf("\n*****CHOOSE YOUR ITEM*****");
        printf("\n");

        printf("Enter item number: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch(choice)
        {
            case 1:
                total = total + 200 * qty;
                break;

            case 2:
                total = total + 100 * qty;
                break;

            case 3:
                total = total + 20 * qty;
                break;

            default:
                printf("Invalid choice\n");
        }

        printf("Order more? (y/n): ");
        scanf(" %c", &more);

    } while(more == 'y' || more == 'Y');

    printf("\nTotal Bill = %d\n", total);


}
