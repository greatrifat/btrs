#include<stdio.h>
#include<string.h>

typedef struct
{
    char transid [100];
}payment;
char txid [100];

int pay() {



     FILE *transactionfile;
     payment trans_pay [50];
     transactionfile = fopen("transaction.txt","r");
     if(transactionfile == NULL)
     {
         printf("Error opening file");
         exit(1);
     }

     int count = 0;
     while(1)
     {
        int status = fscanf(transactionfile,"%s",&trans_pay[count].transid);
        if(status == -1)
            {
               break;
            }
            count++;
     }
     fclose(transactionfile);


     while(1)
     {
         char trans_user[100];
         printf("Enter transaction id :\n");
         gets(trans_user);
         int flag = 0;
         int i;
         for(i = 0 ; i < count ; i++)
         {
             if(strcmp(trans_pay[i].transid,trans_user) == 0)
             {
                 strcpy(txid,trans_user);
                 flag = 1;
                 break;
             }
         }
         if(flag == 0)
         {
             printf("Wrong input\n");
         }
         else
            {
               F_RED();
               printf("Please Wait. your payment is varyfing..\n");
               Set_default();
               sleep(3);
               F_BLUE();
               printf("payment successful\n");
               Set_default();
               break;
            }


     }
    // printf("%s",txid);

}
