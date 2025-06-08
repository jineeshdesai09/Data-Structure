// SortAlpha

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    char names[n][15]; 
    
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]s", names[i]);
    }

    // Sorting names alphabetically
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                char temp[15];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Output sorted names
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}