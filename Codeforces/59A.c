// Codeforces link: https://codeforces.com/problemset/problem/59/A

#include <stdio.h>

int main()
{
    char word[101];
    printf("Enter a word: ");
    scanf("%s", word);

    int uppercaseCount = 0;
    int lowercaseCount = 0;

    // Count the number of uppercase and lowercase letters
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            uppercaseCount++;
        }
        else if (word[i] >= 'a' && word[i] <= 'z')
        {
            lowercaseCount++;
        }
    }

    // Determine the corrected word based on the counts
    if (uppercaseCount > lowercaseCount)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] -= 32; // Convert to uppercase using ASCII values
            }
        }
    }
    else
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] += 32; // Convert to lowercase using ASCII values
            }
        }
    }

    printf("%s", word);

    return 0;
}
