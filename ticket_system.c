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
        {
            printf("\nThank you for using Bangladesh Railway!\n");
            return 1;
        }
    // Line 1 - 97 done by Juhair Islam Sami

    //From this line the code is written by Md Nayemul Hasan

         if(choice==1)
        {
            goto Book_Tickets;
        }
        /*if(choice==2)
        {
            goto Avaiable_Seats;
        }*/

        Book_Tickets:
            printf("----------------------------------\n");
            printf("----------------------------------\n");
            printf("        |Available Trains:|\n");
            printf("----------------------------------\n");
            printf("----------------------------------\n");
            printf("1.Ekota Express\n");
            printf("2.Drutojan Express\n");
            int train,ticket;
            do{
                printf("Enter your choice:");
            scanf("%d",&train);
            getchar();
            } while(train < 1 || train > 2);

            if(train==1)
            {
                printf("----------------------------------\n");
                printf("----------------------------------\n");
                printf("        |Compartments:|\n");
                printf("----------------------------------\n");
                printf("----------------------------------\n");
                printf("1.AC\n");
                printf("2.Non AC\n");
                int comp;
                 do{
                printf("Enter your choice:");
            scanf("%d",&comp);
            getchar();
            } while(comp < 1 || comp > 2);
                if(comp==1)
                {
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    printf("        |Available Seats:|\n");
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    int seat=1;
                    for(int i=0;i<2;i++)
                    {
                        for(int j=0;j<2;j++)
                        {
                            printf("[%d]",seat);
                            seat++;
                        }
                        printf("  ");
                        for(int j=0;j<3;j++)
                        {
                            printf("[%d]",seat);
                            seat++;
                        }
                        printf("\n");
                    }
                    printf("How many tickets you want to book:");
                    scanf("%d",&ticket);
                    int ac[ticket];
                    printf("Book your tickets:");
                    for(int i=0;i<ticket;i++)
                    {
                        scanf("%d",&ac[i]);
                    }

                }
                else
                {
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    printf("        |Available Seats:|\n");
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    int seat=1;
                    for(int i=0;i<2;i++)
                    {
                        for(int j=0;j<2;j++)
                        {
                            printf("[%d]",seat);
                            seat++;
                        }
                        printf("  ");
                        for(int j=0;j<3;j++)
                        {
                            printf("[%d]",seat);
                            seat++;
                        }
                        printf("\n");
                    }
                    printf("How many tickets you want to book:");
                    scanf("%d",&ticket);
                    int nac[ticket];
                    printf("Book your tickets(You can only book 4 at a time):");
                    for(int i=0;i<ticket;i++)
                    {
                        scanf("%d",&nac[i]);
                    }
                }

            }

            else

            {
                printf("----------------------------------\n");
                printf("----------------------------------\n");
                printf("        |Compartments:|\n");
                printf("----------------------------------\n");
                printf("----------------------------------\n");
                printf("1.AC\n");
                printf("2.Non AC\n");

                int comp;
                do{
                printf("Enter your choice:");
            scanf("%d",&comp);
            getchar();
            } while(comp < 1 || comp > 2);
                if(comp==1)
                {
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    printf("        |Available Seats:|\n");
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    int seat=1;
                    for(int i=0;i<2;i++)
                    {
                        for(int j=0;j<2;j++)
                        {
                            printf("[%d]",seat);
                            seat++;
                        }
                        printf("  ");
                        for(int j=0;j<3;j++)
                        {
                            printf("[%d]",seat);
                            seat++;
                        }
                        printf("\n");
                    }
                    printf("How many tickets you want to book:");
                    scanf("%d",&ticket);
                    int ac[ticket];
                    printf("Book your tickets:");
                    for(int i=0;i<ticket;i++)
                    {
                        scanf("%d",&ac[i]);
                    }

                }
                else
                {
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    printf("        |Available Seats:|\n");
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    int seat=1;
                    for(int i=0;i<2;i++)
                    {
                        for(int j=0;j<2;j++)
                        {
                            printf("[%d]",seat);
                            seat++;
                        }
                        printf("  ");
                        for(int j=0;j<3;j++)
                        {
                            printf("[%d]",seat);
                            seat++;
                        }
                        printf("\n");
                    }
                    printf("How many tickets you want to book:");
                    scanf("%d",&ticket);
                    int nac[ticket];
                    printf("Book your tickets:");
                    for(int i=0;i<ticket;i++)
                    {
                        scanf("%d",&nac[i]);
                    }
                }
            } goto post_login;

    }
    // Line 98-294 done by Md Nayemul Hasan
    return 0;
}
