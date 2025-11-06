#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; for(int i=0;s[i]&&s[i]!='\n';i++){ if(s[i]>='a'&&s[i]<='z') s[i]=s[i]-32; else if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32; }
    printf("%s",s);
return 0;
}
