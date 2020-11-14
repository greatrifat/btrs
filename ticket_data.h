  #include<stdio.h>
char name[30]="";
char email [50]="";
char phn [50]="";
int ticket_data()
{
    printf("Enter your name\n=>");
    F_RED();
    gets(name);
    Set_default();
    printf("Enter your email\n=>");
    F_RED();
    gets(email);
    Set_default();

    printf("Enter your phone no\n=>");
    F_RED();
    gets(phn);
    Set_default();
}
