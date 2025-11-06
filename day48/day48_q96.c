#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; int i=0; while(s[i]&&s[i]!='\n'){ int j=i; while(s[j] && s[j]!=' ' && s[j]!='\n') j++; for(int k=j-1;k>=i;k--) putchar(s[k]); if(s[j]==' '){ putchar(' '); i=j+1; } else break; } putchar('\n');
return 0;
}
