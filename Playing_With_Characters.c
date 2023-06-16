#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
        char c;
        scanf("%c", &c);
        printf("%c\n", c);
        
        char b[10];
        scanf("%s", &b);
        printf("%s\n",b);
        
        scanf("\n");
        char h[100];
        scanf("%[^\n]%*c",&h);
        printf("%s\n",h);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
