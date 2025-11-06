#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; int seen[26]={0}; for(int i=0;s[i]&&s[i]!='\n';i++){ if(s[i]>='a'&&s[i]<='z'){ if(seen[s[i]-'a']){ printf("%c\n",s[i]); return 0; } seen[s[i]-'a']=1; } } printf("-1\n");
return 0;
}
