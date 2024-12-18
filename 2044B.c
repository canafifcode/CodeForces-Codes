#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *str);
void rplc(char *str);

void reverse(char *str)
{
    char temp;
    int l=strlen(str);
    for(int i=0; i<(l/2); i++){
            temp= str[i];
            str[i]= str[l-i-1];
            str[l-i-1]= temp;
    }
    rplc(str);
    
}

void rplc(char *str)
{
    int len=strlen(str);
    for(int i=0; i<len; i++){
        if(str[i]=='p'){
            str[i]='q';
        }
        else if(str[i]=='q'){
            str[i]='p';
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    char in[120];
    for(int i=0; i<n; i++){
        scanf("%s", in);
        reverse(in);
        printf("%s \n", in);
    }
}