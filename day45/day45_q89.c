#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; char ch; scanf("%c",&ch); int cnt=0; for(int i=0;s[i]&&s[i]!='\n';i++) if(s[i]==ch) cnt++; printf("%d\n",cnt);
return 0;
}
