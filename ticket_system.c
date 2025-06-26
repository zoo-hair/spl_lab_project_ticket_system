//
// Created by Zuhair on 6/16/2025.
//
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    printf("----------------------------------\n");
    printf("----------------------------------\n");
    printf("  WELCOME TO BANGLADESH RAILWAY\n");
    printf("----------------------------------\n");
    printf("----------------------------------\n");

    int train,ticket,comp,tr1_ac[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},tr1_nac[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},tr2_ac[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},tr2_nac[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int choice, suc;
    char user_name[50];
    char password[50];
    char name[50];
    char pass[50];

    printf("1) Register\n");
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
         if(choice==2)
         {
            goto Avaiable_Seats;
         }
        Book_Tickets:
            printf("----------------------------------\n");
            printf("----------------------------------\n");
            printf("        |Available Trains:|\n");
            printf("----------------------------------\n");
            printf("----------------------------------\n");
            printf("1.Ekota Express\n");
            printf("2.Drutojan Express\n");
            // int train,ticket;
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
                // int comp;
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
                    // int tr1_ac[ticket];
                    printf("Book your tickets:");
                    for(int i=0;i<ticket;i++)
                    {
                        scanf("%d",&tr1_ac[i]);
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
                    // int tr1_nac[ticket];
                    printf("Book your tickets:");
                    for(int i=0;i<ticket;i++)
                    {
                        scanf("%d",&tr1_nac[i]);
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
                    // int tr2_ac[ticket];
                    printf("Book your tickets:");
                    for(int i=0;i<ticket;i++)
                    {
                        scanf("%d",&tr2_ac[i]);
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
                    // int tr2_nac[ticket];
                    printf("Book your tickets:");
                    for(int i=0;i<ticket;i++)
                    {
                        scanf("%d",&tr2_nac[i]);
                    }
                }
            } goto post_booking;

             // Line 98-294 done by Md Nayemul Hasan

            //From this line the code is written by Abrar khan

             Avaiable_Seats:

            printf("----------------------------------\n");
            printf("----------------------------------\n");
            printf("        |Available Trains:|\n");
            printf("----------------------------------\n");
            printf("----------------------------------\n");
            printf("1.Ekota Express\n");
            printf("2.Drutojan Express\n");

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
                int t1_ac[10]={1,2,3,4,5,6,7,8,9,10};
            for(int i=0;i<10;i++){
                for(int j=0;j<ticket;j++){
                    if(t1_ac[i]==tr1_ac[j]){
                        t1_ac[i]=0;
                    }
                }
            }
             for(int i=0;i<10;i++){
                 if(t1_ac[i]!=0){
                     printf(" %d ",t1_ac[i]);
                 }
                 if(t1_ac[i]==0){
                     printf(" B ");
                 }
             }
            }
            if(comp==2){
                printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    printf("        |Available Seats:|\n");
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                int t1_nac[10]={1,2,3,4,5,6,7,8,9,10};
            for(int i=0;i<10;i++){
                for(int j=0;j<ticket;j++){
                    if(t1_nac[i]==tr1_nac[j]){
                        t1_nac[i]=0;
                    }
                }
            }
             for(int i=0;i<10;i++){
                 if(t1_nac[i]!=0){
                     printf(" %d ",t1_nac[i]);
                 }
                 if(t1_nac[i]==0){
                     printf(" B ");
                 }
             }
            }
            }
            if(train==2){
                printf("----------------------------------\n");
                printf("----------------------------------\n");
                printf("        |Compartments:|\n");
                printf("----------------------------------\n");
                printf("----------------------------------\n");
                printf("1.AC\n");
                printf("2.Non AC\n");
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
                int t2_ac[10]={1,2,3,4,5,6,7,8,9,10};
            for(int i=0;i<10;i++){
                for(int j=0;j<ticket;j++){
                    if(t2_ac[i]==tr2_ac[j]){
                        t2_ac[i]=0;
                    }
                }
            }
             for(int i=0;i<10;i++){
                 if(t2_ac[i]!=0){
                     printf(" %d ",t2_ac[i]);
                 }
                 if(t2_ac[i]==0){
                     printf(" B ");
                 }
             }
            }
            if(comp==2){
                printf("----------------------------------\n");
                    printf("----------------------------------\n");
                    printf("        |Available Seats:|\n");
                    printf("----------------------------------\n");
                    printf("----------------------------------\n");
                int t2_nac[10]={1,2,3,4,5,6,7,8,9,10};
            for(int i=0;i<10;i++){
                for(int j=0;j<ticket;j++){
                    if(t2_nac[i]==tr2_nac[j]){
                        t2_nac[i]=0;
                    }
                }
            }
             for(int i=0;i<10;i++){
                 if(t2_nac[i]!=0){
                     printf(" %d ",t2_nac[i]);
                 }
                 if(t2_nac[i]==0){
                     printf(" B ");
                 }
             }
            }
            }
        //from 295 to 436 is written by Md Nayemul Hasan
            goto post_booking;



            //This part is written by Md Nayemul Hasan



            post_booking:
                printf("\n1) Change Bookings\n");
        printf("2) Show available seats\n");
        printf("3) Payment\n");
        printf("4) Exit\n");

        do
        {
            printf("Enter your choice (press 1, 2, 3 or 4): ");
            scanf("%d", &choice);
            getchar();
        } while (choice < 1 || choice > 4);

        if (choice == 4)
        {
            printf("\nThank you for using Bangladesh Railway!\n");
            return 1;
        }


         if(choice==1)
        {
            goto Book_Tickets;
        }
         if(choice==2)
         {
            goto Avaiable_Seats;
         }

         if(choice==3)
         {
            goto payment;
         }

        //from 98 to 294 and 441 to 489 is written by Md Nayemul Hasan


          //from 482 to 577 is written by Jannatun Nayema Jerin

         payment:
          printf("\n\nProcessing your payment request");
          for(int i=0; i<3; i++){
            printf(".");
            fflush(stdout);
            sleep(1);
          }

           int totalprice;
   if(comp==1)
   {
    int price=1500;
    totalprice=price*ticket;
   }
   else
   {
     int price=750;
    totalprice = price*ticket;
   }
   printf("\nTotal price: %d\n", totalprice);
   int pay, no, expiry_date, cvc, otp;
   char pin;
   printf("Choose your way of payment:\n1.Credit/debit card\n2.Bkash\n3.Nagad\n");
   scanf("%d", &pay);
   if(pay==1)
   {
       printf("Enter card no:");
       scanf("%d", &no);
       printf("Enter cvc no:");
       scanf("%d", &cvc);
       printf("Enter expiry date:");
       scanf("%d", &expiry_date);
       printf("Enter pin: ");
       scanf("%d", &pin);
       printf("Enter otp: ");
       scanf("%d", &otp);
   }
   else
   {
       printf("Enter mobile number:");
       scanf("%d", &no);
       printf("Enter otp: ");
       scanf("%d", &otp);
       printf("Enter pin: ");
       scanf("%d", &pin);
   }
   printf("\n\n**Payment successfull\n");


printf("\n------------------------------------------------------------\n");
printf("Name: %s \nDestination: Dhaka-Dinajpur\n",name);

if(train==1){
        printf("Train name: Ekota Express\nDeparture Time:10:10\n");
        if(comp==1){
                printf("Seat No: ");
            for(int i=0;i<ticket;i++)
                    {
                        printf("%d ", tr1_ac[i]);
                    }
        }
        else {
            printf("Seat No: ");
            for(int i=0;i<ticket;i++)
                    {
                        printf("%d ", tr1_nac[i]);
                    }
        }
    }
else {
        printf("Train name: Drutojan Express\nDeparture Time: 20:00\n");
         if(comp==1){
                printf("Seat No: ");
            for(int i=0;i<ticket;i++)
                    {
                        printf("%d ", tr2_ac[i]);
                    }
        }
        else {
            printf("Seat No: ");
            for(int i=0;i<ticket;i++)
                    {
                        printf("%d ", tr2_nac[i]);
                    }
        }
    }
    printf("\n------------------------------------------------------------\n");
    printf("\nEnter 3 to exit the program");

    goto post_login;
    }




    return 0;
}
