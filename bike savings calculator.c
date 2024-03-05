#include<stdio.h>

double savings(int w, double initial_savings)
{

    if(w==0)
    {
        return initial_savings;
    }
    else
    {
        return (1.1*savings(w-1,initial_savings)) + 20;
    }
}

void analysis(double savings, int bike_price)
{
    if(savings<bike_price)
    {
        printf("\nOops! Save more money!");
    }
    else if(savings>=bike_price)
    {
        printf("\nYou can buy the bike!!");
    }
    else
    {
        printf("\nError!");
    }
}


int main()
{

    char command;
    double initial_savings, total;
    int w, bike_price;
    float total_savings;


    double savings(int, double);
    void analysis(double, int);

    printf("Welcome to bike analyser!\n");


    do
    {
        do
        {
            printf("\nEnter your initial savings:");
            scanf("%lf", &initial_savings);

            if(initial_savings<=0.0)
            {
                printf("\nSorry you cannot enter %.0lf!\n", initial_savings);
            }


        }
        while(initial_savings<=0.0);

        fflush(stdin);

        do
        {
            printf("\nNumber of weeks:");
            scanf("%d", &w);

            if(w<=0)
                printf("\nInvalid number!");
        }
        while(w<0);

        fflush(stdin);

        printf("At the end of the week %d savings will be %.2lf", w, savings(w, initial_savings));

        printf("\nEnter bike price:");
        scanf("%d", &bike_price);

        analysis(savings(w, initial_savings), bike_price);

        fflush(stdin);

        printf("\nDo you want to try again?:");
        scanf("%c", &command);

        if(command=='N' || command=='n')
        {
            printf("\nByee!");
        }
        else if(command=='Y' || command=='y');

        else
        {
            printf("Invalid input!");
        }

    }
    while(command!='n' && command!='N');


    return 0;
}
