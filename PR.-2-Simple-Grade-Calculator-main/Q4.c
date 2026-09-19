#include <stdio.h>
#include <conio.h>

int main()
{
    int s;
    char g;

    printf("Enter Score: ");
    scanf("%d", &s);

    // Grade
    g = (s >= 90) ? 'A' : (s >= 80) ? 'B' :
        (s >= 70) ? 'C' : (s >= 60) ? 'D' :
        (s >= 50) ? 'E' : 'F';

    printf("Your Grade is %c\n", g);

    // Comment
    switch(g)
    {
        case 'A':
            printf("Excellent work!\n");
            break;

        case 'B':
            printf("Well done!\n");
            break;

        case 'C':
            printf("Good job!\n");
            break;

        case 'D':
            printf("You passed!\n");
            break;

        case 'E':
            printf("Try harder!\n");
            break;

        case 'F':
            printf("Sorry, you failed!\n");
            break;
    }

    // Eligibility
    if(g == 'A' || g == 'B' || g == 'C' || g == 'D')
        printf("You are eligible for next level.");
    else
        printf("Please try again next time.");

    getch();
}