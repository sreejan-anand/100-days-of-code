#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; int i=0; int firstprinted=0;
    while(s[i] && s[i]!='\n'){ while(s[i]==' ') i++; if(s[i]==0||s[i]=='\n') break; int j=i; while(s[j]&&s[j]!=' '&&s[j]!='\n') j++; if(!firstprinted){ for(int k=i;k<j;k++) putchar(s[k]); firstprinted=1; } else { putchar(' '); for(int k=i;k<j;k++) putchar(s[k]); }
    i=j; }
    putchar('\n');
return 0;
}
