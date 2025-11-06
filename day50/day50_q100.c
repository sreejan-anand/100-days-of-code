#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[1000]; if(!fgets(s,1000,stdin)) return 0; int n=strlen(s); if(s[n-1]=='\n') n--;
    for(int i=0;i<n;i++) for(int j=i;j<n;j++){ for(int k=i;k<=j;k++) putchar(s[k]); putchar('\n'); }
return 0;
}
