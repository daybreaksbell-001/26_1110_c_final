#include <stdio.h>
#include <stdlib.h>
int calFor(char* a){
    int i=0;
    while(a[i]!='\0'){
        if(a[i]=='*'||a=='/'){
            
        }
    i++;
    }
}
int main() {
    char* a;
    printf("Please enter number : "); 
    gets(a);
    calFor(&a);
    printf("결과: %d\n",calFor(a));
    return 0;
}