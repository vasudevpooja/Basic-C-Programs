#include <stdio.h>
int main()
{
    char ch;
    char *pCh;
    pCh = &ch;
    ch = 'A';
    printf("Value of ch: %c\n",ch);
    printf("Address of ch: %p\n",&ch);
    printf("Value of ch: %c\n",*pCh);
    printf("Address of ch: %p",pCh);
   return 0;
}
