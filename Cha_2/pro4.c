#include <stdio.h>
void jolly();
void deny()
{
    printf("deny\n");
}
int main()
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

void jolly()
{
    printf("Jolly\n");
}