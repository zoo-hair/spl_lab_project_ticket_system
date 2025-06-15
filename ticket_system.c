//
// Created by Zuhair on 6/16/2025.
//
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("----------------------------------\n");
    printf("----------------------------------\n");
    printf("  WELCOME TO BANGLADESH RAILWAY\n");
    printf("----------------------------------\n");
    printf("----------------------------------\n");

    int choice, suc;
    char user_name[50];
    char password[50];
    char name[50];
    char pass[50];

    printf("1. Register\n");
    printf("2) Exit\n");
    do
    {
        printf("Enter your choice (press 1 or 2): ");
        scanf("%d", &choice);
        getchar();
    } while (choice < 1 || choice > 2);

    while (1)
    {
        if (choice == 1)
        {
            printf("----------------------------------\n");
            printf("        | REGISTRATION |\n");
            printf("----------------------------------\n");

            printf("\nEnter your username (small letters, digits, no special characters allowed except _) :" );
            gets(name);

            printf("\nEnter your password (small letters, digits, no special characters allowed except _) :" );
            gets(password);

            printf("\n*** REGISTRATION SUCCESSFUL ***\n");

            suc = 1;

            goto login;
        }
        else if (choice == 2)
        {
            printf("\nThank you for using Bangladesh Railway!\n");
            return 1;
        }

        login:
        if (suc == 1)
        {
            printf("\n***LOG IN***\n");
            printf("\nUsername: ");
            gets(user_name);

            printf("Password: ");
            gets(pass);

            if (strcmp(name, user_name) == 0 && strcmp(password, pass) ==0)
            {
                printf("\n***LOG IN SUCCESSFUL!!***\n");
                goto post_login;
            }
            else if (strcmp(name, user_name) != 0)
            {
                printf("Incorrect Username, try again\n");
                goto login;
            }
            else if (strcmp(password, pass) != 0)
            {
                printf("Incorrect Password, try again\n");
                goto login;
            }
        }
        post_login:
        printf("\n1) Book tickets\n");
        printf("2) Show available seats\n");
        printf("3) Exit\n");

        do
        {
            printf("Enter your choice (press 1, 2 or 3): ");
            scanf("%d", &choice);
            getchar();
        } while (choice < 1 || choice > 3);

        if (choice == 3)
            return 1;
    }
    // Line 1 - 97 done by Juhair Islam Sami

    return 0;
}
