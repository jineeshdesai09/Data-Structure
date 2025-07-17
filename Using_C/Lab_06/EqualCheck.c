// EqualCheck
#include<stdio.h>
#define SIZE 100

int Stack[SIZE];
int top = -1;

void push(int value){
    if (top == SIZE-1)
    {
        printf("Overflow");
        return;
    }
    else{
        Stack[++top] = value;
    }
    
}

int main(){
    char str[SIZE];
    int i=0, countB=0;
    int valid =1;

    printf("Enter the String ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            push(1);
        }
        else if (str[i] == 'b')
        {
            countB++;
        }
        else{
            valid = 0;
            break;
        }
        i++;
    }

    if (valid && top+1 == countB)
    {
        printf("Valid String\n");
    }
    else{
        printf("Invalid String\n");
    }
    return 0;
    
}
