
#include<stdio.h>

void choice();
void pizza();
void burger();
void french_fries();
void fried_chicken();
void nachos();

int main()
{
    printf("The Food available are : \n 1. Pizza (rs.100) \n 2. Burger (rs.90) \n 3. French Fries (rs.60) \n 4. Fried Chicken (rs.150) \n 5. Nachos (rs.40)");
    choice();
}

void choice()
{
    int choice;
    printf("\n\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        pizza();
    case 2:
        burger();
    case 3:
        french_fries();
    case 4:
        fried_chicken();
    case 5:
        nachos();
    default:
        printf("Enter a valid input");
    }
}

void pizza()
{
    int confirm_order1;
    int different_order1;
    printf("\nYou have selected pizza \nYou have to pay rs.100 \nDo you want to confirm your order? 1/2  ");
    scanf("%d",&confirm_order1);
    switch(confirm_order1)
    {
    case 1:
        printf("\nYour order item number 1(pizza) has been confirmed");
    case 2:
        printf("\nDo you want to order any other food? 1/2  ");
        scanf("%d",&different_order1);
        if(different_order1==1)
        {
            printf("\nThe Food available are : \n 1. Pizza (rs.100) \n 2. Burger (rs.90) \n 3. French Fries (rs.60) \n 4. Fried Chicken (rs.150) \n 5. Nachos (rs.40)");
            choice();
        }
        else
            printf("Thankyou for visiting our food ordering portal!");
            exit(0);

    }
}
void burger()
{
    int confirm_order2;
    int different_order2;
    printf("\nYou have selected burger \nYou have to pay rs.90 \nDo you want to confirm your order? 1/2  ");
    scanf("%d",&confirm_order2);
    switch(confirm_order2)
    {
    case 1:
        printf("\nYour order item number 2(burger) has been confirmed");
    case 2:
        printf("\nDo you want to order any other food? 1/2  ");
        scanf("%d",&different_order2);
        if(different_order2==1)
        {
            printf("\nThe Food available are : \n 1. Pizza (rs.100) \n 2. Burger (rs.90) \n 3. French Fries (rs.60) \n 4. Fried Chicken (rs.150) \n 5. Nachos (rs.40)");
            choice();
        }
        else
            printf("Thankyou for visiting our food ordering portal!");
            exit(0);

    }
}

void french_fries()
{
    int confirm_order3;
    int different_order3;
    printf("\nYou have selected french_fries \nYou have to pay rs.60 \nDo you want to confirm your order? 1/2  ");
    scanf("%d",&confirm_order3);
    switch(confirm_order3)
    {
    case 1:
        printf("\nYour order item number 3(french_fries) has been confirmed");
    case 2:
        printf("\nDo you want to order any other food? 1/2  ");
        scanf("%d",&different_order3);
        if(different_order3==1)
        {
            printf("\nThe Food available are : \n 1. Pizza (rs.100) \n 2. Burger (rs.90) \n 3. French Fries (rs.60) \n 4. Fried Chicken (rs.150) \n 5. Nachos (rs.40)");
            choice();
        }
        else
            printf("Thankyou for visiting our food ordering portal!");
            exit(0);

    }
}

void fried_chicken()
{
    int confirm_order4;
    int different_order4;
    printf("\nYou have selected fried_chicken \nYou have to pay rs.150 \nDo you want to confirm your order? 1/2  ");
    scanf("%d",&confirm_order4);
    switch(confirm_order4)
    {
    case 1:
        printf("\nYour order item number 4(fried_chicken) has been confirmed");
    case 2:
        printf("\nDo you want to order any other food? 1/2  ");
        scanf("%d",&different_order4);
        if(different_order4==1)
        {
            printf("\nThe Food available are : \n 1. Pizza (rs.100) \n 2. Burger (rs.90) \n 3. French Fries (rs.60) \n 4. Fried Chicken (rs.150) \n 5. Nachos (rs.40)");
            choice();
        }
        else
            printf("Thankyou for visiting our food ordering portal!");
            exit(0);
    }
}
void nachos()
{
    int confirm_order5;
    int different_order5;
    printf("\nYou have selected nachos \nYou have to pay rs.40 \nDo you want to confirm your order? 1/2  ");
    scanf("%d",&confirm_order5);
    switch(confirm_order5)
    {
    case 1:
        printf("\nYour order item number 5(nachos) has been confirmed");
    case 2:
        printf("\nDo you want to order any other food? 1/2  ");
        scanf("%d",&different_order5);
        if(different_order5==1)
        {
            printf("\nThe Food available are : \n 1. Pizza (rs.100) \n 2. Burger (rs.90) \n 3. French Fries (rs.60) \n 4. Fried Chicken (rs.150) \n 5. Nachos (rs.40)");
            choice();
        }
        else
            printf("Thankyou for visiting our food ordering portal!");
            exit(0);


    }
}
