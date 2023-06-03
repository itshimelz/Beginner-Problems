//Codeforses Link: https://codeforces.com/problemset/problem/71/A

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    char word[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);

        int length = 0;
        while (word[length] != '\0')
        {
            length++;
        }

        if (length > 10)
        {
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }

    return 0;
}