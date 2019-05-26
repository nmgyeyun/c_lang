#include <stdio.h>
#include <stdlib.h>



void test1(void)
{

    char *p;
    p = (char *)malloc(129);
    p = (char *)malloc(129);
}

int main()
{
    int l;

    test1();

    printf("%08x %08x\n", -1L, -1L << 12);
    printf("%08x \n", -1L ^ (-1L << 12));
    printf("%08x \n", ((1<<12)-1));


}
