#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    if (s[0] == '0' && s[strlen(s) - 1] == '1')
    {
        printf("String Accepted");
    }
    else
    {
        printf("String Rejected");
    }

    return 0;
}
