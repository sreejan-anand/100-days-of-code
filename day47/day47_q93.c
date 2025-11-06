#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[10000], b[10000]; if(!fgets(a,10000,stdin)) return 0; if(!fgets(b,10000,stdin)) return 0; int ca[256]={0}, cb[256]={0}; for(int i=0;a[i]&&a[i]!='\n';i++) ca[(unsigned char)a[i]]++; for(int i=0;b[i]&&b[i]!='\n';i++) cb[(unsigned char)b[i]]++; int ok=1; for(int i=0;i<256;i++) if(ca[i]!=cb[i]) ok=0; printf(ok? "Anagram\n":"Not Anagram\n");
return 0;
}
