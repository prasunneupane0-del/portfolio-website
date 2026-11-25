#include <stdio.h>

int main()
{
    int marks[10];
    int largest;

    // Input marks of 10 students
    printf("Enter marks of 10 students:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Assume first element is the largest
    largest = marks[0];

    // Find the largest marks
    for(int i = 1; i < 10; i++)
    {
        if(marks[i] > largest)
        {
            largest = marks[i];
        }
    }

    // Display the largest marks
    printf("\nThe largest marks are: %d", largest);

    return 0;
}