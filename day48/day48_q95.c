#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s1[10000], s2[10000]; if(!fgets(s1,10000,stdin)) return 0; if(!fgets(s2,10000,stdin)) return 0; int n=strlen(s1); if(s1[n-1]=='\n') n--; int m=strlen(s2); if(s2[m-1]=='\n') m--; if(n!=m){ printf("Not Rotation\n"); return 0; }
    char dbl[20005]; for(int i=0;i<2*n;i++) dbl[i]=s1[i%n]; dbl[2*n]=0; if(strstr(dbl,s2)) printf("Rotation\n"); else printf("Not Rotation\n");
return 0;
}
