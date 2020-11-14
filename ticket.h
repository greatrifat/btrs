#include<stdio.h>

int print_ticket(char txid[100])
{
    //Check Valid ticket
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
         int flag = 0;
         int i;
         for(i = 0 ; i < count ; i++)
         {
             if(strcmp(trans_pay[i].transid,txid) == 0)
             {
                 flag = 1;
                 break;
             }
         }
         if(flag == 0)
         {
             printf("Wrong input\n");
             return 0;
         }
          else
            {
               printf("\n\t***Here is your ticket***\n\n");
               break;
            }

    }

 //show ticket from file
        char FILENAME[150];
        strcpy(FILENAME, txid);
        strcat(FILENAME,".txt");

        FILE* FILEPOINTER;
        int BUFFERLENGTH = 255;
        char BUFFER[BUFFERLENGTH];

        FILEPOINTER = fopen(FILENAME, "r");

        while(fgets(BUFFER, BUFFERLENGTH, FILEPOINTER)){
            printf("%s", BUFFER);
        }

        fclose(FILEPOINTER);
        return 0;
}
