#include<stdio.h>
#include<string.h>
#include"select_seat.h"
#include"Payment.h"
#include"ticket_booking.h"
#include"ticket_data.h"

    char coach[20] = "[830-AC(DA)]";
    char str2[20] = "VIP Bus Point";
    char str3[20] = "11 Oct 2020";
int updatefile()
{
    //write update seat
    seatfile = fopen("seat.txt", "w");
    if(seatfile == NULL)
    {
       printf("Error Opening File");
         exit(1);
     }
     for(int i = 0 ; i < count; i++)
     {
        fprintf(seatfile,"%s %s %s  %s\n",seat_num[i].First_Column,seat_num[i].Second_Column,
                                                    seat_num[i].Third_Column,seat_num[i].Fourth_Column);
     }
     fclose(seatfile);


    //store user info
    FILE *finalticket;
    char fileName[50];

    strcpy(fileName, txid);
    strcat(fileName,".txt");
    finalticket = fopen(fileName, "w");
     if(finalticket == NULL)
     {
         printf("Error Opening File");
         exit(1);
     }
    fprintf(finalticket,"\n");
    fprintf(finalticket,"\t\t ----------UIU BUS Transport (PVT) LTD----------\n");
    fprintf(finalticket,"____________________________________________________________\n\n\n");
    fprintf(finalticket,"\tName         : %s\n", name);
    fprintf(finalticket,"\tFrom         : %s           To : %s\n", a, b);
    fprintf(finalticket,"\tJourney Date : %s\tTime : %s\n", d, t);
    fprintf(finalticket,"\tSeat : ");
    for(int i = 0; i< seat_count; i++)
     {
         fprintf(finalticket,"%s",selected_seat[i].Seat);
     }

    fprintf(finalticket,"\t\tCoach No : %s\n", coach);
    fprintf(finalticket,"\n");
    fprintf(finalticket,"\tBus Type  : %s\n\tBoarding  : %s\n\tIssued On : %s\n", c, str2, str3);
    fprintf(finalticket,"____________________________________________________________\n\n\n");
    fprintf(finalticket,"\n");
    fprintf(finalticket,"\n");
    fprintf(finalticket,"\t\t\t'Thank you'\n\t\t\tHave a safe journey\n");

    fclose(finalticket);

}
