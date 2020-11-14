#include<stdio.h>
#include<string.h>
#include<signal.h>
#include"welcome_screen.h"
#include"update.h"
#include"ticket.h"
#include <windows.h>
int user_command;
int main()
{
    welcome_screen();
    start:
    menu();
    switch(user_command)
    {
        case 1:
            purchase_ticket();
            break;
        case 2:
            search_ticket();
            break;
        case 3:
            contact_us();
            break;
        case 4:
            ticket_booking();
        case 5:
             return 0;
    }

    printf("\n 1. Main Manu \n 2. Close \n=> ");
    int manu_choice;
    scanf("%d",&manu_choice);
    clear_data();
    if(manu_choice == 1){
        goto start;
    }
}

void menu(){
    printf("\n 1. Reserve your Seat");
    printf("\n 2. Search Your Ticket");
    printf("\n 3. Contact Us");
    printf("\n 4. Check Real Time Bus fare");
    printf("\n 5. Exit \t\n=> ");
    scanf("%d",&user_command);
    fflush(stdin);
}
void purchase_ticket()
{
    ticket_booking();
    select_seat();
    ticket_data();

    int seat_fair = atoi(fair)*seat_count;
    F_BLUE();
    printf("\n\t***Your total fair is : %d***\n",seat_fair);
    printf("\n\t***Send %d taka to '01717638208'***\n",seat_fair);
    Set_default();

     pay();
     updatefile();
     print_ticket(txid);

}
void search_ticket(){
    char txid[100];
    printf("\tEnter your valid transaction ID: ");
    scanf("%s",&txid);
    print_ticket(txid);
}
void contact_us()
{
    printf("\tUIU BUS Transport (PVT) LTD\n");
    printf("\tPhone: +88 01756984236\n");
    printf("\tEmail : Support@uiu.transport.app\n\n\n\n");
    F_GREEN();
    printf("\n\t***Developed and Managed by Rifat and Team***\n");
    printf("\t***Email: greatrifat@programmer.net***\n");
    Set_default();
}

//color
void B_BLUE(){
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_BLUE |  BACKGROUND_BLUE );
}
void Set_default(){
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_BLUE );
}
void B_RED(){
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_BLUE |  BACKGROUND_RED );
}
void F_RED(){
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED  );
}
void F_BLUE()
{
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE  );
}
void F_GREEN()
{
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN  );
}
void clear_data(){
    seat_count=0;
    count = 0;
    fair[10] = ""; //fair
    a[100] = ""; //dhaka
    b[100] = ""; //khulna
    c[10] = ""; //bus type

    d[20]=""; //date
    t[20]="08.20 am";
    txid [100]="";
    name[30]="";
    email [50]="";
    phn [50]="";
}
