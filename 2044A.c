#include<stdio.h>
#include<stdlib.h>

int main(){
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        printf("%d\n", n-1);
    }
}