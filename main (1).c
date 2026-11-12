#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int calFor(char* a){
    int i=0;
    int val=0;
    while(a[i]!='\0'){
        if(a[i]=='+'||a[i]=='-'){
            if(a[i]=='+'){
                val=(a[i-1]+a[i]+1);
            }
            if(a[i]=='-'){
                val=(a[i-1]-a[i]+1);
            }
        }
        if(a[i]=='*'||a[i]=='/'){
            if(a[i]=='*'){
                val=(a[i-1])*(a[i+1]);
            }if(a[i]=='/'){
                val=(a[i-1])/(a[i+1]);
            }
        }
    i++;
    } return val;
}
//이거 어케하냐 감이 안잡히농....
int main() {
    char* a;
    printf("Please enter number : "); 
    gets(a);
    calFor(&a);
    printf("결과: %d\n",calFor(a));
    return 0;
}
//오늘 과제문제가 2문제여서 기분이가 좋았다