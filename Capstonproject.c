#include <stdio.h>

int main()
{
    struct city
    {
        char from[15];
        char to[15];
        char date[15];
        char sit[40];
        char name[20];
        char number[15];
        char gender[10];
    };
    struct city c1;
    struct city c2[40];
    printf("\t\t\t\tWelcome to Route Bus ticket service\n\n");
    printf("\t\t\t\tHere Bus ticket available : ");
    printf("\tDHAKA TO RANGPUR DIVISION\n\n");
    printf("\t\tEnter city from\t:\t");
    scanf(" %[^\n]", c1.from);
    printf("\t\tEnter city to\t:\t");
    scanf(" %[^\n]", c1.to);
    printf("\t\tDate of journey:\t");
    scanf(" %[^\n]", c1.date);
    printf("\n\t\tFrom\t\t\tTo\t\tDate of journey\n");
    printf("\t------------------\t-------------------\t-------------------\n");
    printf("\t\t%s\t\t\t%s\t\t\t%s:\n", c1.from, c1.to, c1.date);
    printf("\t------------------\t-------------------\t-------------------\n\n");
    printf("___________________________________________________________________________________________________________________\n");
    printf("  Operator(Bus type)\t@\tDev.time\t@\tArr.time\t@\tSeat available\t@\tFare\t@\n");
    printf("___________________________________________________________________________________________________________________\n");
    if ((c1.from[0] == 'D' && c1.to[0] == 'R') || (c1.from[0] == 'd' && c1.to[0] == 'r'))
    {
        printf("1) Alhamra\t10:30PM\t\t\t5:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur -\n\n");
        printf("2) Hanif Enterprise\t\t10:00PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur -\n\n");
        printf("3) Nabil Paribahan\t\t11:00PM\t\t\t6:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur -\n\n");
        printf("4) Nabil Paribahan\t\t11:30PM\t\t\t7:00AM\t\t\t36\t\t\t1050\n");
        printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur \n\n");
        printf("5) Hanif Enterprise\t\t10:30PM\t\t\t5:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur\n");
        int i;

        printf("\n\nChoice your bus : ");
        int n, m, r;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("your bus is Alhamra\n");
            printf("if you select one seat please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 2:
            printf("your bus is Hanif Enterprise and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 3:
            printf("your bus is Nabil Paribahan\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 4:
            printf("your bus is Nabil Paribahan and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 5:
            printf("your bus is Hanif Enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
        FILE *fp;
        fp = fopen("ticket.txt", "r");
        for (i = 0; i < 36; i++)
        {
            fscanf(fp, " %s", &c2[i].sit);
        }
        for (i = 0; i < 36; i++)
        {
            printf("| %s |\t", c2[i].sit);
        }
        printf("\n\tchoise your seat is\t:\t");
        scanf(" %[^\n]", &c2[i].sit);
        printf("\t\tyour sit is : %s\n", c2[i].sit);
        printf("\nTotal economy %d\n\n", r);
        fclose(fp);
        int h;
        printf("please bill pay in Bkash : \nBkash number :01777777777\n");
        printf("if you have paid your bill please Enter your TxnId : ");
        scanf(" %[^\n]", &h);
        if (h = 565656)
        {
            printf("\n\tplease inter your name  : ");
            scanf(" %[^\n]", c1.name);
            printf("\n\tplease inter your gender : ");
            scanf(" %[^\n]", c1.gender);
            printf("\n\tplease inter your phone  : ");
            scanf(" %[^\n]", c1.number);
            FILE *fptr;
            fptr = fopen("data.txt", "a+");
            fprintf(fptr, "\n\nPassenger Details\nName : %s\nGender : %s\nPhone : %s\n\n", c1.name, c1.gender, c1.number);
            fprintf(fptr, "Journey Details :\n");
            fprintf(fptr, "%s to %s\n", c1.from, c1.to);
            switch (n)
            {
            case 1:
                fprintf(fptr, "S.R Travels \nBus srart 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 2:
                fprintf(fptr, "Hanif Enterprise \nBus srart 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 3:
                fprintf(fptr, "Nabil Paribahan \nBus srart 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 4:
                fprintf(fptr, "Nabil Paribahan\nBus srart 11:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 5:
                fprintf(fptr, "Hanif Enterprise \nBus srart 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            }
            fprintf(fptr, "%s\nseat no : %s\n:", c1.date, c2[i].sit);
            fprintf(fptr, "\nPayment Details :\n");
            fprintf(fptr, "Total paid %d", r);
            printf("\nYour ticket is confirm\n");
            fclose(fptr);
        }
        else
            printf("your Id is wrong\nyou are not paid your ticket price");
    }
    else if ((c1.from[0] == 'D' && c1.to[0] == 'L') || (c1.from[0] == 'd' && c1.to[0] == 'l'))
    {
        printf("1) Rozina Enterprise\t\t11:00PM\t\t\t7:00AM\t\t\t30\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
        printf("2) Hanif Enterprise\t\t10:00PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
        printf("3) Nabil Paribahan\t\t10:30PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
        printf("4) Nabil Paribahan\t\t11:00PM\t\t\t6:30AM\t\t\t36\t\t\t1050\n");
        printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
        printf("5) Hanif Enterprise\t\t10:30PM\t\t\t7:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n");
        int i;
        printf("\n\nChoice your bus : ");
        int n, m, r;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("your bus is Rozina enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 2:
            printf("your bus is Hanif Enterprise and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 3:
            printf("your bus is Nabil Enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 4:
            printf("your bus is Nabil Enterprise and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 5:
            printf("your bus is Hanif Enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
        FILE *fp;
        fp = fopen("ticket.txt", "r");
        for (i = 0; i < 36; i++)
        {
            fscanf(fp, " %s", &c2[i].sit);
        }
        for (i = 0; i < 36; i++)
        {
            printf("| %s |\t", c2[i].sit);
        }
        printf("\n\tchoise your seat is\t:\t");
        scanf(" %[^\n]", &c2[i].sit);
        printf("\t\tyour seat is : %s\n", c2[i].sit);
        fclose(fp);
        printf("Total economy %d", r);
        int h;
        printf("please bill pay in Bkash : \nBkash number :01777777777\n");
        printf("if you have paid your bill please Enter your TxnId : ");
        scanf(" %[^\n]", &h);
        if (h = 565656)
        {
            printf("\n\tplease inter your name  : ");
            scanf(" %[^\n]", c1.name);
            printf("\n\tplease inter your gender : ");
            scanf(" %[^\n]", c1.gender);
            printf("\n\tplease inter your phone  : ");
            scanf(" %[^\n]", c1.number);
            FILE *fptr;
            fptr = fopen("data.txt", "a+");
            fprintf(fptr, "\n\nPassenger Details\nName : %s\nGender : %s\nPhone : %s\n\n", c1.name, c1.gender, c1.number);
            fprintf(fptr, "Journey Details :\n");
            fprintf(fptr, "%s to %s\n", c1.from, c1.to);

            switch (n)
            {
            case 1:
                fprintf(fptr, "Rozina enterprise \nBus srart 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 2:
                fprintf(fptr, "Hanif Enterprise \nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 3:
                fprintf(fptr, "Nabil Paribahan \nBus start 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 4:
                fprintf(fptr, "Nabil Paribahan\nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 5:
                fprintf(fptr, "Hanif Enterprise \nBus start 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            }
            fprintf(fptr, "%s\nseat no : %s\n:", c1.date, c2[i].sit);
            fprintf(fptr, "\nPayment Details :\n");
            fprintf(fptr, "Total paid %d", r);
            printf("Your ticket is confirm\n");
            fclose(fptr);
        }
        else
            printf("your Id is wrong\nyou are not piad your ticket price");
    }
    else if ((c1.from[0] == 'D' && c1.to[0] == 'D') || (c1.from[0] == 'd' && c1.to[0] == 'd'))
    {
        printf("1) Nabil Paribahan\t\t10:00PM\t\t\t6:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka -- Dinajpur\n\n");
        printf("2) Hanif Enterprise\t\t11:00PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf(" AC\n Route: Dhaka -- dinajpur\n\n");
        printf("3) Ena Transport (Pvt) Ltd\t10:30PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka --Dinajpur\n\n");
        printf("4) Nabil Paribahan\t\t10:00PM\t\t\t6:30AM\t\t\t36\t\t\t1050\n");
        printf("  AC\n Route: Dhaka -- Dinajpur\n\n");
        printf("5) Hanif Enterprise\t\t10:30PM\t\t\t6:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka -- Dinajpur\n");
        int i;
        printf("\n\nChoice your bus : ");
        int n, m, r;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("your bus is Nabil Paribahan\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
        case 2:
            printf("your bus is Hanif Enterprise and AC service\n");
            printf("if you select one seat please press 1\nif you select two seat please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 3:
            printf("your bus is Ena Transport (Pvt) Ltd\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 4:
            printf("your bus is Nabil Paribahan and AC service\n");
            printf("if you select one seat please press 1\nif you select two seat please press 2\n");
            printf("if you select three seat please press 3\nif you select four seat please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 5:
            printf("your bus is Hanif Enterprise\n");
            printf("if you select one seat please press 1\nif you select two sit please press 2\n");
            printf("if you select three seat please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
        FILE *fp;
        fp = fopen("ticket.txt", "r");
        for (i = 0; i < 36; i++)
        {
            fscanf(fp, " %s", &c2[i].sit);
        }
        for (i = 0; i < 36; i++)
        {
            printf("| %s |\t", c2[i].sit);
        }
        printf("\n\tchoise your seat is\t:\t");
        scanf(" %[^\n]", &c2[i].sit);
        printf("\t\tyour sit is : %s\n", c2[i].sit);
        fclose(fp);
        printf("Total economy %d", r);
        int h;
        printf("please bill pay in Bkash : \nBkash number :01784566743\n");
        printf("if you have paid your bill please Enter your TxnId : ");
        scanf(" %[^\n]", &h);
        if (h = 565656)
        {
            printf("\n\tplease inter your name  : ");
            scanf(" %[^\n]", c1.name);
            printf("\n\tplease inter your gender : ");
            scanf(" %[^\n]", c1.gender);
            printf("\n\tplease inter your phone  : ");
            scanf(" %[^\n]", c1.number);
            FILE *fptr;
            fptr = fopen("data.txt", "a+");
            fprintf(fptr, "\n\nPassenger Details\nName : %s\nGender : %s\nPhone : %s\n\n", c1.name, c1.gender, c1.number);
            fprintf(fptr, "Journey Details :\n\n");
            fprintf(fptr, "%s to %s\n", c1.from, c1.to);
            switch (n)
            {
            case 1:
                fprintf(fptr, "Nabil Paribahan\nBus srart 11:00PM\n");
                fprintf(fptr, "Bording point Gabtoli bus stand\n");
                break;
            case 2:
                fprintf(fptr, " Hanif Enterprise \nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 3:
                fprintf(fptr, "Ena Transport\nBus start 10:30PM\n");
                fprintf(fptr, "Bording point Gabtoli bus stand\n");
                break;
            case 4:
                fprintf(fptr, "Nabil Paribahan\nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 5:
                fprintf(fptr, "Hanif Enterprise \nBus start 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            }
            fprintf(fptr, "%s\nseat no : %s\n:", c1.date, c2[i].sit);
            fprintf(fptr, "\nPayment Details :\n");
            fprintf(fptr, "Total paid %d", r);
            printf("Your ticket is confirm\n");
            fclose(fptr);
        }
        else
            printf("your Id is wrong\nyou are not piad your ticket price\n");
    }
    else if ((c1.from[0] == 'D' && c1.to[0] == 'G') || (c1.from[0] == 'd' && c1.to[0] == 'g'))
    {
        printf("1) S.R Travels (Pvt) Ltd\t\t11:00PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gaibandha\n\n");
        printf("2) S.R Travels (Pvt) Ltd\t\t10:30PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf(" AC\n Route: Dhaka - Bogra -\n Gaibandha\n\n");
        printf("3) Nabil Paribahan\t\t\t10:00PM\t\t\t5:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gaibandha\n\n");
        printf("4) Nabil Paribahan\t\t\t11:00PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf("  AC\n Route: Dhaka - Bogra -\n Gaibandha\n\n");
        printf("5) Hanif Enterprise\t\t\t10:30PM\t\t\t6:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gaibandha\n");
        int i;
        printf("\n\nChoice your bus : ");
        int n, m, r;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("your bus is S.R Travels (Pvt) Ltd\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 2:
            printf("your bus is S.R Travels (Pvt) Ltd\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 3:
            printf("your bus is Nabil Paribahan\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 4:
            printf("your bus is Nabil Paribahan and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 5:
            printf("your bus is Hanif Enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
        FILE *fp;
        fp = fopen("ticket.txt", "r");
        for (i = 0; i < 36; i++)
        {
            fscanf(fp, " %s", &c2[i].sit);
        }
        for (i = 0; i < 36; i++)
        {
            printf("| %s |\t", c2[i].sit);
        }
        printf("\n\tchoise your seat is\t:\t");
        scanf(" %[^\n]", &c2[i].sit);
        printf("\t\tyour sit is : %s\n", c2[i].sit);
        fclose(fp);
        printf("Total economy %d", r);
        int h;
        printf("please bill pay in Bkash : \nBkash number :01777777777\n");
        printf("if you have paid your bill please Enter your TxnId : ");
        scanf(" %[^\n]", &h);
        if (h = 565656)
        {
            printf("\n\tplease inter your name  : ");
            scanf(" %[^\n]", c1.name);
            printf("\n\tplease inter your gender : ");
            scanf(" %[^\n]", c1.gender);
            printf("\n\tplease inter your phone  : ");
            scanf(" %[^\n]", c1.number);
            FILE *fptr;
            fptr = fopen("data.txt", "a+");
            fprintf(fptr, "\n\nPassenger Details\nName : %s\nGender : %s\nPhone : %s\n\n", c1.name, c1.gender, c1.number);
            fprintf(fptr, "Journey Details :\n\n");
            fprintf(fptr, "%s to %s\n", c1.from, c1.to);
            switch (n)
            {
            case 1:
                fprintf(fptr, "S.R Travels \nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 2:
                fprintf(fptr, "S.R Travels \nBus start 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 3:
                fprintf(fptr, "Nabil Paribahan \nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 4:
                fprintf(fptr, "Nabil Paribahan\nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 5:
                fprintf(fptr, "Hanif Enterprise \nBus start 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            }
            fprintf(fptr, "%s\nseat no %s\n:", c1.date, c2[i].sit);
            fprintf(fptr, "\nPayment Details :\n");
            fprintf(fptr, "Total paid %d", r);
            printf("Your ticket is confirm\n");
            fclose(fptr);
        }
        else
            printf("your Id is wrong\nyou are not piad your ticket price\n");
    }
    else if ((c1.from[0] == 'D' && c1.to[0] == 'N') || (c1.from[0] == 'd' && c1.to[0] == 'n'))
    {
        printf("1) S.R Travels (Pvt) Ltd\t11:00PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n\n");
        printf("2) Hanif Enterprise\t\t10:30PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n\n");
        printf("3) Nabil Paribahan\t\t11:00PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n\n");
        printf("4) Nabil Paribahan\t\t10:00PM\t\t\t6:30AM\t\t\t36\t\t\t1050\n");
        printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n\n");
        printf("5) Hanif Enterprise\t\t11:00PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n");
        int i;
        printf("\n\nChoice your bus : ");
        int n, m, r;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("your bus is S.R Travels (Pvt) Ltd\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 2:
            printf("your bus is Hanif Enterprise and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 3:
            printf("your bus is Nabil Paribahan\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 4:
            printf("your bus is Nabil Paribahan and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 5:
            printf("your bus is Hanif Enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
        FILE *fp;
        fp = fopen("ticket.txt", "r");
        for (i = 0; i < 36; i++)
        {
            fscanf(fp, " %s", &c2[i].sit);
        }
        for (i = 0; i < 36; i++)
        {
            printf("| %s |\t", c2[i].sit);
        }
        printf("\n\tchoise your seat is\t:\t");
        scanf(" %[^\n]", &c2[i].sit);
        printf("\t\tyour sit is : %s\n", c2[i].sit);
        fclose(fp);
        printf("Total economy %d", r);
        int h;
        printf("please bill pay in Bkash : \nBkash number :0177777777\n");
        printf("if you have paid your bill please Enter your TxnId : ");
        scanf(" %[^\n]", &h);
        if (h = 565656)
        {
            printf("\n\tplease inter your name  : ");
            scanf(" %[^\n]", c1.name);
            printf("\n\tplease inter your gender : ");
            scanf(" %[^\n]", c1.gender);
            printf("\n\tplease inter your phone  : ");
            scanf(" %[^\n]", c1.number);
            FILE *fptr;
            fptr = fopen("data.txt", "a+");
            fprintf(fptr, "\n\nPassenger Details\nName : %s\nGender : %s\nPhone : %s\n\n", c1.name, c1.gender, c1.number);
            fprintf(fptr, "Journey Details :\n\n");
            fprintf(fptr, "%s to %s\n", c1.from, c1.to);
            switch (n)
            {
            case 1:
                fprintf(fptr, "S.R Travels \nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 2:
                fprintf(fptr, "Hanif Enterprise \nBus start 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 3:
                fprintf(fptr, "Nabil Poribohon \nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 4:
                fprintf(fptr, "Nabil Poribohon\nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 5:
                fprintf(fptr, "Hanif Enterprise \nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            }
            fprintf(fptr, "%s\nsit no : %s\n:", c1.date, c2[i].sit);
            fprintf(fptr, "\nPayment Details :\n");
            fprintf(fptr, "Total paid %d", r);
            printf("Your ticket is confirm\n");
            fclose(fptr);
        }
        else
            printf("your Id is wrong\nyou are not piad your ticket price\n");
    }
    else if ((c1.from[0] == 'D' && c1.to[0] == 'P') || (c1.from[0] == 'd' && c1.to[0] == 'p'))
    {
        printf("1) S.R Travels (Pvt) Ltd\t10:00PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n\n");
        printf("2) Hanif Enterprise\t\t11:00PM\t\t\t6:30AM\t\t\t36\t\t\t1050\n");
        printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n\n");
        printf("3) Nabil Paribahan\t\t10:30PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n\n");
        printf("4) Nabil Paribahan\t\t11:00PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n\n");
        printf("5) Hanif Enterprise\t\t11:30PM\t\t\t7:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n");
        int i;
        printf("\n\nChoice your bus : ");
        int n, m, r;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("your bus is S.R Travels (Pvt) Ltd\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 2:
            printf("your bus is Hanif Enterprise and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 3:
            printf("your bus is Nabil Paribahan\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 4:
            printf("your bus is Nabil Paribahan and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 5:
            printf("your bus is Hanif Enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
        FILE *fp;
        fp = fopen("ticket.txt", "r");
        for (i = 0; i < 36; i++)
        {
            fscanf(fp, " %s", &c2[i].sit);
        }
        for (i = 0; i < 36; i++)
        {
            printf("| %s |\t", c2[i].sit);
        }
        printf("\n\tchoise your seat is\t:\t");
        scanf(" %[^\n]", &c2[i].sit);
        printf("\t\tyour sit is : %s\n", c2[i].sit);
        fclose(fp);
        printf("Total economy %d", r);
        int h;
        printf("please bill pay in Bkash : \nBkash number :0177777777\n");
        printf("if you have paid your bill please Enter your TxnId : ");
        scanf(" %[^\n]", &h);
        if (h = 565656)
        {
            printf("\n\tplease inter your name  : ");
            scanf(" %[^\n]", c1.name);
            printf("\n\tplease inter your gender : ");
            scanf(" %[^\n]", c1.gender);
            printf("\n\tplease inter your phone  : ");
            scanf(" %[^\n]", c1.number);
            FILE *fptr;
            fptr = fopen("data.txt", "a+");
            fprintf(fptr, "\n\nPassenger Details\nName : %s\nGender : %s\nPhone : %s\n\n", c1.name, c1.gender, c1.number);
            fprintf(fptr, "Journey Details :\n\n");
            fprintf(fptr, "%s to %s\n", c1.from, c1.to);
            switch (n)
            {
            case 1:
                fprintf(fptr, "S.R Travels \nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 2:
                fprintf(fptr, "Hanif Enterprise \nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 3:
                fprintf(fptr, "Nabil Paribahan \nBus start 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 4:
                fprintf(fptr, "Nabil Paribahan\nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 5:
                fprintf(fptr, "Hanif Enterprise \nBus start 11:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            }
            fprintf(fptr, "%s\nsit no : %s\n:", c1.date, c2[i].sit);
            fprintf(fptr, "\nPayment Details :\n");
            fprintf(fptr, "Total paid %d", r);
            printf("Your ticket is confirm\n");
            fclose(fptr);
        }
        else
            printf("your Id is wrong\nyou are not piad your ticket price\n");
    }
    else if ((c1.from[0] == 'D' && c1.to[0] == 'T') || (c1.from[0] == 'd' && c1.to[0] == 't'))
    {
        printf("1) S.R Travels (Pvt) Ltd\t11:00PM\t\t\t6:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Thakurgaon\n\n");
        printf("2) Hanif Enterprise\t\t10:00PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Thakurgaon\n\n");
        printf("3) Nabil Paribahan\t\t10:30PM\t\t\t6:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Thakurgaon\n\n");
        printf("4) Nabil Paribahan\t\t11:00PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Thakurgaon\n\n");
        printf("5) Hanif Enterprise\t\t10:00PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Thakurgaon\n");
        int i;
        printf("\n\nChoice your bus : ");
        int n, m, r;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("your bus is S.R Travels (Pvt) Ltd\n");
            printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
            printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 2:
            printf("your bus is Hanif Enterprise and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 3:
            printf("your bus is Nabil Paribahan\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 4:
            printf("your bus is Nabil Paribahan and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 5:
            printf("your bus is Hanif Enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
        FILE *fp;
        fp = fopen("ticket.txt", "r");
        for (i = 0; i < 36; i++)
        {
            fscanf(fp, " %s", &c2[i].sit);
        }
        for (i = 0; i < 36; i++)
        {
            printf("| %s |\t", c2[i].sit);
        }
        printf("\n\tchoise your seat is\t:\t");
        scanf(" %[^\n]", &c2[i].sit);
        printf("\t\tyour sit is : %s\n", c2[i].sit);
        fclose(fp);
        printf("Total economy %d\n", r);
        int h;
        printf("please bill pay in Bkash : \nBkash number :01777777777\n");
        printf("if you have paid your bill please Enter your TxnId : ");
        scanf(" %[^\n]", &h);
        if (h = 565656)
        {
            printf("\n\tplease inter your name  : ");
            scanf(" %[^\n]", c1.name);
            printf("\n\tplease inter your gender : ");
            scanf(" %[^\n]", c1.gender);
            printf("\n\tplease inter your phone  : ");
            scanf(" %[^\n]", c1.number);
            FILE *fptr;
            fptr = fopen("data.txt", "a+");
            fprintf(fptr, "\n\nPassenger Details\nName : %s\nGender : %s\nPhone : %s\n\n", c1.name, c1.gender, c1.number);
            fprintf(fptr, "Journey Details :\n\n");
            fprintf(fptr, "%s to %s\n", c1.from, c1.to);
            switch (n)
            {
            case 1:
                fprintf(fptr, "S.R Travels \nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 2:
                fprintf(fptr, " Hanif Enterprise \nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 3:
                fprintf(fptr, "Nabil Paribahan \nBus start 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 4:
                fprintf(fptr, "Nabil Paribahan\nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 5:
                fprintf(fptr, "Hanif Enterprise \nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            }
            fprintf(fptr, "%s\nsit no : %s\n:", c1.date, c2[i].sit);
            fprintf(fptr, "\nPayment Details :\n");
            fprintf(fptr, "Total paid %d", r);

            printf("Your ticket is confirm\n");
            fclose(fptr);
        }
        else
            printf("your Id is wrong\nYou aren't paid yorr ticket price  \n");
    }
    else if ((c1.from[0] == 'D' && c1.to[0] == 'S') || (c1.from[0] == 'd' && c1.to[0] == 's'))
    {
        printf("1) S.R Travels (Pvt) Ltd\t11:00PM\t\t\t6:30AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Thakurgaon\n\n");
        printf("2) Hanif Enterprise\t\t10:00PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Thakurgaon\n\n");
        printf("3) S.I Enterprice\t\t10:30PM\t\t\t6:30AM\t\t\t36\t\t\t350\n");
        printf(" Non AC\n Route: Dhaka - Tangail -\n Sirajganj\n\n");
        printf("4) Nabil Paribahan\t\t11:00PM\t\t\t6:00AM\t\t\t36\t\t\t1050\n");
        printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Thakurgaon\n\n");
        printf("5) Hanif Enterprise\t\t10:00PM\t\t\t6:00AM\t\t\t36\t\t\t550\n");
        printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Thakurgaon\n");
        int i;
        printf("\n\nChoice your bus : ");
        int n, m, r;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("your bus is S.R Travels (Pvt) Ltd\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        case 2:
            printf("your bus is Hanif Enterprise and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 3:
            printf("your bus is S.I Enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 350;
            break;
        case 4:
            printf("your bus is Nabil Paribahan and AC service\n");
            printf("if you select one sit please press 1\nif you select two sit plese press 2\n");
            printf("if you select three sit please press 3\nif you select four sit plese press 4\n ");
            scanf("%d", &m);
            r = m * 1050;
            break;
        case 5:
            printf("your bus is Hanif Enterprise\n");
            printf("if you select one sit please press 1\nif you select two sit please press 2\n");
            printf("if you select three sit please press 3\nif you select four sit please press 4\n ");
            scanf("%d", &m);
            r = m * 550;
            break;
        }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
        FILE *fp;
        fp = fopen("ticket.txt", "r");
        for (i = 0; i < 36; i++)
        {
            fscanf(fp, " %s", &c2[i].sit);
        }
        for (i = 0; i < 36; i++)
        {
            printf("| %s |\t", c2[i].sit);
        }
        printf("\n\tchoise your seat is\t:\t");
        scanf(" %[^\n]", &c2[i].sit);
        printf("\t\tyour sit is : %s\n", c2[i].sit);
        fclose(fp);
        printf("Total economy %d\n", r);
        int h;
        printf("please bill pay in Bkash : \nBkash number :01777777777\n");
        printf("if you have paid your bill please Enter your TxnId : ");
        scanf(" %[^\n]", &h);
        if (h = 565656)
        {
            printf("\n\tplease inter your name  : ");
            scanf(" %[^\n]", c1.name);
            printf("\n\tplease inter your gender : ");
            scanf(" %[^\n]", c1.gender);
            printf("\n\tplease inter your phone  : ");
            scanf(" %[^\n]", c1.number);
            FILE *fptr;
            fptr = fopen("data.txt", "a+");
            fprintf(fptr, "\n\nPassenger Details\nName : %s\nGender : %s\nPhone : %s\n\n", c1.name, c1.gender, c1.number);
            fprintf(fptr, "Journey Details :\n\n");
            fprintf(fptr, "%s to %s\n", c1.from, c1.to);
            switch (n)
            {
            case 1:
                fprintf(fptr, "Shyamoli Paribahan \nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 2:
                fprintf(fptr, " Hanif Enterprise \nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 3:
                fprintf(fptr, "S.I Enterprice \nBus start 10:30PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 4:
                fprintf(fptr, "Nabil Paribahan\nBus start 11:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            case 5:
                fprintf(fptr, "Hanif Enterprise \nBus start 10:00PM\n");
                fprintf(fptr, "Boarding point Gabtoli bus stand\n");
                break;
            }
            fprintf(fptr, "%s\nsit no : %s\n:", c1.date, c2[i].sit);
            fprintf(fptr, "\nPayment Details :\n");
            fprintf(fptr, "Total paid %d", r);

            printf("\nYour ticket is confirm\n");
            fclose(fptr);
        }
        else
            printf("your Id is wrong\nYou aren't paid your ticket price  \n");
    }
    else
        printf(" \n\n There is no bus from %s to %s", c1.from, c1.to);
    return 0;
}
