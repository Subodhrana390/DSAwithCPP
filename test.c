#include <stdio.h>
#include <string.h>

void displayCharacter(char s[])
{
    int len = strlen(s);
    printf("Display string character by character :");
    for (int i = 0; i < len; i++)
    {
        printf("%c ", s[i]);
    }
}

void compareString(char s1[], char s2[])
{
    if (strcmp(s1, s2) == 0)
    {
        printf("String is same");
    }
    else
    {
        printf("String is different");
    }
}

void concatString(char s1[], char s2[])
{
    strcat(s1, s2);
    printf("%s", s1);
}

int main()
{
    char s1[40];
    printf("Name: Subodh Rana\nURN: 2302689\n");
    printf("Enter your string:- ");
    scanf("%s", s1);
    displayCharacter(s1);
}

// int main()
// {
//     char s1[40], s2[40];
//     printf("Name: Subodh Rana\nURN: 2302689\n");
//     printf("Enter First String:- ");
//     scanf("%s", s1);
//     printf("Enter Second String:- ");
//     scanf("%s", s2);
//     compareString(s1, s2);
// }

// int main()
// {
//     char s1[40], s2[40];
//     printf("Name: Subodh Rana\nURN: 2302689\n");
//     printf("Enter First String:- ");
//     scanf("%s", s1);
//     printf("Enter Second String:- ");
//     scanf("%s", s2);
//     concatString(s1, s2);
// }
