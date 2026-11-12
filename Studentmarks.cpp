#include <stdio.h>

int main()
{
    int n, i, marks, total = 0;
    float percentage;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter marks for Subject %d: ", i);
        scanf("%d", &marks);

        total = total + marks;
    }

    percentage = (float)total / n;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage >= 90)
        printf("\nGrade = A+");
    else if (percentage >= 80)
        printf("\nGrade = A");
    else if (percentage >= 70)
        printf("\nGrade = B");
    else if (percentage >= 60)
        printf("\nGrade = C");
    else if (percentage >=50)
        printf("\nGrade = D");
    else
        printf("\nGrade = F");

    return 0;
  }