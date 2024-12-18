#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calcu(int m, int a, int b, int c)
{
    int sr1= (m>a)?a:m; 
    int sr2= (m>b)?b:m;
    int remaining= m+m-sr1-sr2;
    int sr3= (remaining>=c)?c:remaining;

    int allocate= sr1+sr2+sr3;
    printf("%d \n", allocate);

    return allocate;
}

int main(){
    int t, m, a,b ,c;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d %d %d %d", &m, &a, &b, &c);
        calcu(m,a, b,c);
    }

}