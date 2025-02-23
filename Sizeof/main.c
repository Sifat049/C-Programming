#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i;
    float f;
    double d;
    char c;

    printf("size=%d bytes\n",sizeof(i));
    printf("size=%d bytes\n",sizeof(f));
    printf("size=%d bytes\n",sizeof(d));
    printf("size=%d bytes\n",sizeof(c));
    return 0;
}
