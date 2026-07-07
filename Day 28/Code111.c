#include <stdio.h>

struct Ticket {
    int seatNo;
    char name[50];
    int booked;   // 0 = Available, 1 = Booked
};

int main() {
    struct Ticket seats[10];
    int i, choice, seat;
    char name[50];

    // Initialize seats
    for (i = 0; i < 10; i++) {
        seats[i].seatNo = i + 1;
        seats[i].booked = 0;
    }

    while (1) {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Display Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nSeat Status:\n");
            printf("-------------------------\n");
            for (i = 0; i < 10; i++) {
                printf("Seat %d : %s\n",
                       seats[i].seatNo,
                       seats[i].booked ? "Booked" : "Available");
            }
            break;

        case 2:
            printf("Enter Seat Number (1-10): ");
            scanf("%d", &seat);

            if (seat >= 1 && seat <= 10) {
                if (seats[seat - 1].booked == 0) {
                    printf("Enter Passenger Name: ");
                    scanf(" %[^\n]", name);

                    seats[seat - 1].booked = 1;
                    strcpy(seats[seat - 1].name, name);

                    printf("Ticket Booked Successfully!\n");
                } else {
                    printf("Seat is already booked.\n");
                }
            } else {
                printf("Invalid Seat Number!\n");
            }
            break;

        case 3:
            printf("Enter Seat Number to Cancel: ");
            scanf("%d", &seat);

            if (seat >= 1 && seat <= 10) {
                if (seats[seat - 1].booked == 1) {
                    seats[seat - 1].booked = 0;
                    printf("Ticket Cancelled Successfully.\n");
                } else {
                    printf("Seat is already available.\n");
                }
            } else {
                printf("Invalid Seat Number!\n");
            }
            break;

        case 4:
            printf("Thank you for using the Ticket Booking System.\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}