#include<stdlib.h>
#include<string.h>
#include<stdio.h>

typedef struct
{
    char First_Column [100];
    char Second_Column [100];
    char Third_Column [100];
    char Fourth_Column [100];
}seat;
typedef struct
{
    char Seat [100];
}selected;

selected selected_seat[5];
int seat_count=0;
FILE *seatfile;
int count = 0;
seat seat_num[1000];

int select_seat()
{
    seatfile = fopen("seat.txt", "r");
    if (seatfile == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }


    //read seat file
    while(1)
    {
        int status = fscanf(seatfile,"%s %s %s %s",&seat_num[count].First_Column,&seat_num[count].Second_Column,
                                                    &seat_num[count].Third_Column,&seat_num[count].Fourth_Column);
            if(status == -1)
            {
               break;
            }
            count++;
    }
    fclose(seatfile);

    //print seat
    printf("\t\t\t\t*****   Available Seat   *****\n\t\t\t\t  (XX is already booked!!)\n\n");
    printf("\t\t\t\t|Entry|\t\t |Driver|\n\n");
    int i;
    for(i = 0 ; i<count ; i++)
    {
        //conditon for clor chnge
        if(strcmp(seat_num[i].First_Column,"XX") == 0){
            F_RED();
            printf("\t\t\t\t|%s|",&seat_num[i].First_Column);
            Set_default();
        }else{
            F_GREEN();
            printf("\t\t\t\t|%s|",&seat_num[i].First_Column);
            Set_default();
        }
    //2nd
    if(strcmp(seat_num[i].Second_Column,"XX") == 0){
            F_RED();
            printf(" |%s|\t",&seat_num[i].Second_Column);
            Set_default();
        }else{
            F_GREEN();
            printf(" |%s|\t",&seat_num[i].Second_Column);
            Set_default();
        }
    //3rd
    if(strcmp(seat_num[i].Third_Column,"XX") == 0){
            F_RED();
            printf("|%s|",&seat_num[i].Third_Column);
            Set_default();
        }else{
            F_GREEN();
           printf("|%s|",&seat_num[i].Third_Column);
            Set_default();
            }
        //4th
     if(strcmp(seat_num[i].Fourth_Column,"XX") == 0){
            F_RED();
            printf(" |%s|\t\n",&seat_num[i].Fourth_Column);
            Set_default();
        }else{
            F_GREEN();
             printf(" |%s|\t\n",&seat_num[i].Fourth_Column);
            Set_default();
            }

        //printf(" |%s|\t",&seat_num[i].Second_Column);
        //printf("|%s|",&seat_num[i].Third_Column);
        //printf(" |%s|\t\n",&seat_num[i].Fourth_Column);
    }

    while(1)
    {
        char user_seat[100];
        printf("\n\n\t\t\tPlease select your seat no: (%d no seat,Max 04)\n(ex : A2)\n=>",seat_count+1);
        gets(user_seat);
        if(strcmp(user_seat,"XX")==0){
            printf("Please select a valid seat!");
            continue;
        }
        int flag = 0;
        int i;
        for(i = 0 ; i < count ; i++)
        {
            if(strcmp(seat_num[i].First_Column,user_seat) == 0)
            {
                strcpy(seat_num[i].First_Column, "XX");
                strcpy(selected_seat[seat_count].Seat,user_seat);
                seat_count++;
                flag = 1;
                break;
            }
            else if(strcmp(seat_num[i].Second_Column,user_seat) == 0)
            {
                strcpy(seat_num[i].Second_Column, "XX");
                strcpy(selected_seat[seat_count].Seat,user_seat);
                seat_count++;
                flag = 1;
                break;
            }
            else if(strcmp(seat_num[i].Third_Column,user_seat) == 0)
            {
                strcpy(seat_num[i].Third_Column, "XX");
                strcpy(selected_seat[seat_count].Seat,user_seat);
                seat_count++;
                flag = 1;
                break;
            }
            else if(strcmp(seat_num[i].Fourth_Column,user_seat) == 0)
            {
                strcpy(seat_num[i].Fourth_Column, "XX");
                strcpy(selected_seat[seat_count].Seat,user_seat);

                seat_count++;
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
             printf("Wrong input\n");
        }
        else{
            if(seat_count >= 4)
            {
               break;
            }

            //TODO message change done
            B_BLUE();
            printf("press C for Continue seat selection and others for seat booking procedure\n");
            Set_default();
            char t;
            scanf("%c",&t);
            fflush(stdin);
            if(t != 'C')
            {
                break;
            }
         }
    }

    return 0;
}

