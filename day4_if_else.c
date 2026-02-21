#include <stdio.h>

int main()
{
    int num, a, b, age;

    // -------- Even or Odd --------
    printf("Enter a number to check Even/Odd: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");


    // -------- Greatest of Two --------
    printf("\nEnter two numbers:\n");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%d is greater\n", a);
    else
        printf("%d is greater\n", b);


    // -------- Voting Eligibility --------
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are NOT eligible to vote.\n");

    return 0;
}