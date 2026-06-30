#include <stdio.h>

int seats[10] = {0};

void showSeats()
{
    printf("\nSeat Status\n");
    printf("-------------------\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Seat %d : ", i + 1);

        if(seats[i] == 0)
            printf("Available\n");
        else
            printf("Booked\n");
    }
}

void bookTicket()
{
    int seat;

    printf("\nEnter Seat Number (1-10): ");
    scanf("%d", &seat);

    if(seat < 1 || seat > 10)
    {
        printf("Invalid Seat Number!\n");
        return;
    }

    if(seats[seat - 1] == 1)
    {
        printf("Seat Already Booked!\n");
    }
    else
    {
        seats[seat - 1] = 1;
        printf("Ticket Booked Successfully!\n");
    }
}

void cancelTicket()
{
    int seat;

    printf("\nEnter Seat Number to Cancel: ");
    scanf("%d", &seat);

    if(seat < 1 || seat > 10)
    {
        printf("Invalid Seat Number!\n");
        return;
    }

    if(seats[seat - 1] == 0)
    {
        printf("Seat is Already Available!\n");
    }
    else
    {
        seats[seat - 1] = 0;
        printf("Ticket Cancelled Successfully!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====");
        printf("\n1. Show Available Seats");
        printf("\n2. Book Ticket");
        printf("\n3. Cancel Ticket");
        printf("\n4. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                showSeats();
                break;

            case 2:
                bookTicket();
                break;

            case 3:
                cancelTicket();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}