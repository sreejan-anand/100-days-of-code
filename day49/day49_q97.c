#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; int i=0; while(s[i] && s[i]!='\n'){ while(s[i]==' ') i++; if(s[i]==0||s[i]=='\n') break; putchar(s[i]); putchar('\n'); while(s[i] && s[i]!=' ' && s[i]!='\n') i++; }
return 0;
}
