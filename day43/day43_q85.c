#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; int n=0; while(s[n] && s[n]!='\n') n++; for(int i=n-1;i>=0;i--) putchar(s[i]); putchar('\n');
return 0;
}
