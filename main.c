#include<stdio.h>
#include<time.h>
int main()
{
    time_t t;
    time(&t);
    printf("\nThis program has been written at (date and time): %s", ctime(&t));
    return 0;
}
