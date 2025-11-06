#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; int v=0,c=0; for(int i=0;s[i]&&s[i]!='\n';i++){ char ch=s[i]; if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){ char lo=ch|32; if(lo=='a'||lo=='e'||lo=='i'||lo=='o'||lo=='u') v++; else c++; } } printf("%d %d\n",v,c);
return 0;
}
