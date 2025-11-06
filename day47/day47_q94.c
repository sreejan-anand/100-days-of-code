#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; int best=0,bi=0; int cur=0,ci=0; for(int i=0;;i++){ char ch=s[i]; if(ch==' '||ch=='\n'||ch==0){ if(cur>best){ best=cur; bi=ci; } cur=0; ci=i+1; if(ch==0||ch=='\n') break; } else cur++; }
    for(int i=bi;i<bi+best;i++) putchar(s[i]); putchar('\n');
return 0;
}
