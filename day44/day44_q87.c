#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; int sp=0,d=0,spc=0; for(int i=0;s[i]&&s[i]!='\n';i++){ if(s[i]==' ') sp++; else if(s[i]>='0'&&s[i]<='9') d++; else if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))) spc++; }
    printf("%d %d %d\n",sp,d,spc);
return 0;
}
