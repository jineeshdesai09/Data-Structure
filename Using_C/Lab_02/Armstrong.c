#include <stdio.h>
#include <math.h>

int armstrong(int);
int len(int);

void main(){
    int i =1;
    while(i<=1000){
        int isArmStrong = armstrong(i);
        if(isArmStrong == 1)
        printf("%d is armStrong\n",i);
        i++;
    }
}

int len(int n){
    int i=0;
    for(i=0;n!=0;i++,n/=10){}
    return i;
}

int armstrong(int n){
    int dummy = n;
    int sum = 0;
    int length = len(n);
    while(dummy>0){
        sum+= pow(dummy%10,length);
        dummy/=10;
    }
    return (sum == n?1:0);
}