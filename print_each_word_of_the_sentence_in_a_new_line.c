#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char *token = strtok(s, " ");
    char *Matric[1000];
    int i = 0;
    while (token != NULL) {
        Matric[i++] = token;
        token = strtok(NULL, " ");
    }
    for(int j = 0; j < i; j++){
        printf("%s\n",Matric[j]);
    }
    return 0;
}
