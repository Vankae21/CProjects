#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./util.h"

int main()
{
    char* s = "Beethoven";
    s = reverse(s);
    printf("%s\n",s);
    return 0;
}

char* reverse(char* string)
{
    int length = strlen(string);
    char* result = malloc((length + 1) * sizeof(char));
    for(int i = 0; (unsigned)i < length; i++)
    {
        result[i] = string[length - 1 - i];
    }
    result[length] = '\0';
    return result;
}
