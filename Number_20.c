#include <stdio.h>

int main()
{
    int mark;
    jump:
    printf("Enter mark from 1 to 100: ");
    scanf("%d", &mark);
    
    if (mark > 100 || mark < 0)
    {
        printf("You've entered an invalid mark. Try again.\n");
        goto jump;
    }
    else
    {
        switch (mark / 10)
        {

        case 10:
        case 9:
        case 8:
            printf("Grade:  A");
            break;

        case 7:
            printf("Grade: B");
            break;

        case 6:
            printf("Grade: C");
            break;

        case 5:
            printf("Grade: D");
            break;

        default:
            printf("Grade: F");
            break;
        }
    }

    return 0;
}