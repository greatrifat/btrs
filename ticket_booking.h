//from to
//bus type
//date
#include<stdio.h>
    char fair[10] = ""; //fair
    char a[100] = ""; //dhaka
    char b[100] = ""; //khulna
    char c[10] = ""; //bus type

    char d[20]=""; //date
    char t[20]="08.20 am";
int ticket_booking()
{

    printf("\t***Available place***\n");
    FILE* filepointer;
    int bufferlength = 255;
    char buffer[bufferlength];

    filepointer = fopen("place.txt", "r");

    while(fgets(buffer, bufferlength, filepointer)){
        printf("%s", buffer);
    }

    fclose(filepointer);
    printf("\n");


    sd:
    printf(" LEAVING FROM: \n=>");
    B_RED();
    gets(a);
    Set_default();
    printf(" GOING TO: \n=>");
    B_RED();
    gets(b);
    Set_default();
    printf( " Bus Type : AC / Non AC\n=>");
    B_RED();
    gets(c);
    Set_default();
    printf( " DEPARTING DATE : (dd/mm/yyyy)\n=>");
    B_RED();
    gets(d);
    Set_default();

    char a1[100] = "Dhaka";
    char b1[100] = "Barishal";
    char c1[100] = "Khulna";
    char d1[100] = "Rangpur";
    char e1[100] = "Rajshahi";
    char f1[100] = "Chittagong";
    char g1[100] = "Shylet";
    char x[100] = "AC";
    char y[100] =  "Non AC";

    if(strcmp(a1,a) == 0 && strcmp(b1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1750 Tk only" );
        strcpy(fair, "1750");

    }
    else if(strcmp(a1,a) == 0 && strcmp(c1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1050 Tk only");
        strcpy(fair, "1050");

    }
     else if(strcmp(a1,a) == 0 && strcmp(d1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1500 Tk only");
        strcpy(fair, "1500");
    }
    else if(strcmp(a1,a) == 0 && strcmp(e1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1280 Tk only");
        strcpy(fair, "1280");
    }
     else if(strcmp(a1,a) == 0 && strcmp(f1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1600 Tk only");
        strcpy(fair, "1600");
    }
     else if(strcmp(a1,a) == 0 && strcmp(g1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1600 Tk only");
        strcpy(fair, "1600");
    }


    else if(strcmp(a1,a) == 0 && strcmp(b1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1750 Tk only" );
        strcpy(fair, "1750");

    }
    else if(strcmp(a1,a) == 0 && strcmp(c1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 990 Tk only");
        strcpy(fair, "990");
    }
     else if(strcmp(a1,a) == 0 && strcmp(d1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1000 Tk only");
        strcpy(fair, "1000");
    }
    else if(strcmp(a1,a) == 0 && strcmp(e1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 980 Tk only");
        strcpy(fair, "980");
    }
     else if(strcmp(a1,a) == 0 && strcmp(f1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 800 Tk only");
        strcpy(fair, "800");
    }
     else if(strcmp(a1,a) == 0 && strcmp(g1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 900 Tk only");
        strcpy(fair, "900");
    }
     else if(strcmp(b1,a) == 0 && strcmp(a1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1650 Tk only" );
        strcpy(fair, "1650");

    }
    else if(strcmp(b1,a) == 0 && strcmp(c1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1000 Tk only");
        strcpy(fair, "1000");
    }
     else if(strcmp(b1,a) == 0 && strcmp(d1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 2000 Tk only");
        strcpy(fair, "2000");
    }
    else if(strcmp(b1,a) == 0 && strcmp(e1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1380 Tk only");
        strcpy(fair, "1380");
    }
     else if(strcmp(b1,a) == 0 && strcmp(f1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1700 Tk only");
        strcpy(fair, "1700");
    }
     else if(strcmp(b1,a) == 0 && strcmp(g1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1300 Tk only");
        strcpy(fair, "1300");
    }


    else if(strcmp(b1,a) == 0 && strcmp(a1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1650 Tk only" );
        strcpy(fair, "1650");

    }
    else if(strcmp(b1,a) == 0 && strcmp(c1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 970 Tk only");
        strcpy(fair, "970");
    }
     else if(strcmp(b1,a) == 0 && strcmp(d1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1100 Tk only");
        strcpy(fair, "1100");
    }
    else if(strcmp(b1,a) == 0 && strcmp(e1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 980 Tk only");
        strcpy(fair, "980");
    }
     else if(strcmp(b1,a) == 0 && strcmp(f1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 800 Tk only");
        strcpy(fair, "800");
    }
     else if(strcmp(b1,a) == 0 && strcmp(g1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 900 Tk only");
        strcpy(fair, "900");
    }
     else if(strcmp(c1,a) == 0 && strcmp(b1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1750 Tk only" );
        strcpy(fair, "1750");

    }
    else if(strcmp(c1,a) == 0 && strcmp(a1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1060 Tk only");
        strcpy(fair, "1060");
    }
     else if(strcmp(c1,a) == 0 && strcmp(d1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1502 Tk only");
        strcpy(fair, "1502");
    }
    else if(strcmp(c1,a) == 0 && strcmp(e1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1280 Tk only");
        strcpy(fair, "1280");
    }
     else if(strcmp(c1,a) == 0 && strcmp(f1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1600 Tk only");
        strcpy(fair, "1600");
    }
     else if(strcmp(c1,a) == 0 && strcmp(g1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1700 Tk only");
        strcpy(fair, "1700");
    }


    else if(strcmp(c1,a) == 0 && strcmp(b1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1750 Tk only" );
        strcpy(fair, "1750");

    }
    else if(strcmp(c1,a) == 0 && strcmp(a1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 950 Tk only");
        strcpy(fair, "950");
    }
     else if(strcmp(c1,a) == 0 && strcmp(d1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 900 Tk only");
        strcpy(fair, "900");
    }
    else if(strcmp(c1,a) == 0 && strcmp(e1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 980 Tk only");
        strcpy(fair, "980");
    }
     else if(strcmp(c1,a) == 0 && strcmp(f1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 850 Tk only");
        strcpy(fair, "850");
    }
     else if(strcmp(c1,a) == 0 && strcmp(g1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 990 Tk only");
        strcpy(fair, "990");

    }
    else if(strcmp(d1,a) == 0 && strcmp(b1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1850 Tk only" );
        strcpy(fair, "1850");

    }
    else if(strcmp(d1,a) == 0 && strcmp(c1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 2050 Tk only");
        strcpy(fair, "2050");
    }
     else if(strcmp(d1,a) == 0 && strcmp(a1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1550 Tk only");
        strcpy(fair, "1550");
    }
    else if(strcmp(d1,a) == 0 && strcmp(e1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1280 Tk only");
        strcpy(fair, "1280");
    }
     else if(strcmp(d1,a) == 0 && strcmp(f1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1600 Tk only");
        strcpy(fair, "1600");
    }
     else if(strcmp(d1,a) == 0 && strcmp(g1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1900 Tk only");
        strcpy(fair, "1900");
    }


    else if(strcmp(d1,a) == 0 && strcmp(b1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1750 Tk only" );
        strcpy(fair, "1750");

    }
    else if(strcmp(d1,a) == 0 && strcmp(c1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 990 Tk only");
        strcpy(fair, "990");
    }
     else if(strcmp(d1,a) == 0 && strcmp(a1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1600 Tk only");
        strcpy(fair, "1600");
    }
    else if(strcmp(d1,a) == 0 && strcmp(e1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 980 Tk only");
        strcpy(fair, "980");
    }
     else if(strcmp(d1,a) == 0 && strcmp(f1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 800 Tk only");
        strcpy(fair, "800");
    }
     else if(strcmp(d1,a) == 0 && strcmp(g1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 900 Tk only");
        strcpy(fair, "900");
    }
    else if(strcmp(e1,a) == 0 && strcmp(b1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1750 Tk only" );
        strcpy(fair, "1750");

    }
    else if(strcmp(e1,a) == 0 && strcmp(c1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1050 Tk only");
        strcpy(fair, "1050");
    }
     else if(strcmp(e1,a) == 0 && strcmp(d1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1500 Tk only");
        strcpy(fair, "1500");
    }
    else if(strcmp(e1,a) == 0 && strcmp(a1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1280 Tk only");
        strcpy(fair, "1280");
    }
     else if(strcmp(e1,a) == 0 && strcmp(f1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1600 Tk only");
        strcpy(fair, "1600");
    }
     else if(strcmp(e1,a) == 0 && strcmp(g1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1500 Tk only");
        strcpy(fair, "1500");
    }


    else if(strcmp(e1,a) == 0 && strcmp(b1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1750 Tk only" );
        strcpy(fair, "1750");

    }
    else if(strcmp(e1,a) == 0 && strcmp(c1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 990 Tk only");
        strcpy(fair, "990");
    }
     else if(strcmp(e1,a) == 0 && strcmp(d1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1000 Tk only");
        strcpy(fair, "1000");
    }
    else if(strcmp(e1,a) == 0 && strcmp(a1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 980 Tk only");
        strcpy(fair, "980");
    }
     else if(strcmp(e1,a) == 0 && strcmp(f1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 800 Tk only");
        strcpy(fair, "800");
    }
     else if(strcmp(e1,a) == 0 && strcmp(g1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 900 Tk only");
        strcpy(fair, "900");
    }
     else if(strcmp(f1,a) == 0 && strcmp(b1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1750 Tk only" );
        strcpy(fair, "1750");

    }
    else if(strcmp(f1,a) == 0 && strcmp(c1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1050 Tk only");
        strcpy(fair, "1050");
    }
     else if(strcmp(f1,a) == 0 && strcmp(d1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1500 Tk only");
        strcpy(fair, "1500");
    }
    else if(strcmp(f1,a) == 0 && strcmp(e1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1280 Tk only");
        strcpy(fair, "1280");
    }
     else if(strcmp(f1,a) == 0 && strcmp(a1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1600 Tk only");
        strcpy(fair, "1600");
    }
     else if(strcmp(f1,a) == 0 && strcmp(g1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1540 Tk only");
        strcpy(fair, "1540");
    }


    else if(strcmp(f1,a) == 0 && strcmp(b1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1700 Tk only" );
        strcpy(fair, "1700");

    }
    else if(strcmp(f1,a) == 0 && strcmp(c1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 910 Tk only");
        strcpy(fair, "910");
    }
     else if(strcmp(f1,a) == 0 && strcmp(d1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1000 Tk only");
        strcpy(fair, "1000");
    }
    else if(strcmp(f1,a) == 0 && strcmp(e1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 980 Tk only");
        strcpy(fair, "980");
    }
     else if(strcmp(f1,a) == 0 && strcmp(a1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 800 Tk only");
        strcpy(fair, "800");
    }
     else if(strcmp(f1,a) == 0 && strcmp(g1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 900 Tk only");
        strcpy(fair, "900");
    }
    else if(strcmp(g1,a) == 0 && strcmp(b1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1650 Tk only" );
        strcpy(fair, "1650");

    }
    else if(strcmp(g1,a) == 0 && strcmp(c1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1050 Tk only");
        strcpy(fair, "1050");
    }
     else if(strcmp(g1,a) == 0 && strcmp(d1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1500 Tk only");
        strcpy(fair, "1500");
    }
    else if(strcmp(g1,a) == 0 && strcmp(e1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1280 Tk only");
        strcpy(fair, "1280");
    }
     else if(strcmp(g1,a) == 0 && strcmp(f1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1600 Tk only");
        strcpy(fair, "1600");
    }
     else if(strcmp(g1,a) == 0 && strcmp(a1,b) == 0 && strcmp(x,c) == 0)
    {
        printf("Price : 1800 Tk only");
        strcpy(fair, "1800");
    }


    else if(strcmp(g1,a) == 0 && strcmp(b1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1750 Tk only" );
        strcpy(fair, "1750");

    }
    else if(strcmp(g1,a) == 0 && strcmp(c1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 990 Tk only");
        strcpy(fair, "1750");
        strcpy(fair, "1750");
    }
     else if(strcmp(g1,a) == 0 && strcmp(d1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 1000 Tk only");
        strcpy(fair, "1000");
    }
    else if(strcmp(g1,a) == 0 && strcmp(e1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 980 Tk only");
        strcpy(fair, "980");
    }
     else if(strcmp(g1,a) == 0 && strcmp(f1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 800 Tk only");
        strcpy(fair, "800");
    }
     else if(strcmp(g1,a) == 0 && strcmp(a1,b) == 0 && strcmp(y,c) == 0)
    {
        printf("Price : 900 Tk only");
        strcpy(fair, "900");
    }

    else  {
        printf("Invalid\n");
        goto sd;

    }
    printf("\n");

    return 0;
}


