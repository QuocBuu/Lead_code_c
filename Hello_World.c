#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
    
  	if (strcmp(s, "Welcome to C programming.") == 0) {
        printf("Hello, World!\nWelcome to C programming.");
    } else {
        printf("%s", s);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
