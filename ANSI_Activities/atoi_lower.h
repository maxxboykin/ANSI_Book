//
// Created by Max Boykin on 4/14/22.
//

#ifndef ANSI_BOOK_ATOI_LOWER_H
#define ANSI_BOOK_ATOI_LOWER_H

#endif //ANSI_BOOK_ATOI_LOWER_H

#include <string.h>
#include <stdio.h>

/* atoi: convert s to integer
 * The atoi() function in C takes a string (which represents an integer)
 * as an argument and returns its value of type int. So basically the
 * function is used to convert a string argument to an integer.
 */
int atoiCustom(char s[]) {
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    //example 55, first would be 5 since n = 0; then it would be 5*10 + 5 => 55/
    printf("This is the atoi %i", n);
    return n;
}

/* lower: convert c to lower case
 */
int lowerCustom(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int htoiCustom(char s[])
{
    int i = 0;
    if (s[i] == '0')
    {
        ++i;
    }
    if (s[i] == 'x' || s[i] == 'X')
    {
        ++i;
    }

    int n = 0;
    int hexdigit;

    for(; i < strlen(s); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9'){
            hexdigit = s[i] - '0';
            n = 16 * n + hexdigit;
        }
        if(s[i] >= 'A' && s[i] <= 'F'){
            hexdigit = s[i] - 'A' + 10;
            n = 16 * n + hexdigit;
        }
        if (s[i] >= 'a' && s[i] <= 'f'){
            hexdigit = s[i] - 'a' + 10;
            n = 16 * n + hexdigit;
        }
    }
    printf("%i", n);
    return n;
}

/*strcat: concatenate t to end of s; s must be big enough */
//void strcat(char s[], char t[])
//{
//    int i , j;
//    i = j = 0;
//    while (s[i] != '\0') /* find end of s */
//        i++;
//    while ((s[i++] = t[j++]) != '\0'); /* copy t */
//}
int randomFunctionsCustom()
{
    char a[] = "0x71927";
    htoiCustom(a);

    return 0;
}