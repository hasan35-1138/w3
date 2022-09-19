#include<stdio.h>
int main()
{
    int a=32;
    int b=16;
    int c;
    
    c=a&b;
    printf("a&b=%d\n",c);
    
    c=a|b;
    printf("a|b=%d\n",c);
    
    c=a^b;
    printf("a^b=%d\n",c);
}

