#include <stdio.h>
/* NAME AMAAN KHAN
UIN 251P045
ROLL NO 41
CLASS COMPUTER C3*/
void counter()
{
    // static int count =0;
    static int count = 0;
    count++;
    printf("number of time function is called %d\n", count);
}
int main()
{
    counter();
    counter();
    counter();
    counter();
    return 0;
}