#include <stdio.h>
int main()
{
    int age;
    int num_days;
    printf("Please input your age, it is a int number:\n");
    scanf("%d", &age);
    num_days = age * 365;
    printf("Your age is %d, and the number of days is %d", age, num_days);
    return 0;
}