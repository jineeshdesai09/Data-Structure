#include<stdio.h>
#include<string.h>
#define size 50

char Stack[size];
int top = -1;

void push(char ch){
    if (top >= size-1)
    {
        return;
    }
    Stack[++top] = ch;
    
}

char pop(){
    if (top == -1)
    {
        return '\0';
    }
    return Stack[top--];
}

int isVowel(char ch){
    return(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void reverse(char str[], int index){
    top = -1;

    for (int i = 0; i <index; i++)
    {
        push(str[i]);
    }

    for (int i = 0; i <index; i++)
    {
        str[i] = pop();
    }
    
}

int main(){
    int t;

    printf("Enter the test cases: ");
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        char str[size];

        printf("Case %d: Enter the string: ", test);
        scanf("%s", str);

        int n = strlen(str);

        for (int i = 0; i < n; i++) {
            if (isVowel(str[i])) {
                reverse(str, i);
            }
        }

        printf("Final String: %s\n", str);
    }
    return 0;
}
