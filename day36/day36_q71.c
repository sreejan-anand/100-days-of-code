#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int r,c; scanf("%d %d",&r,&c); int m[100][100]; for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&m[i][j]);
    for(int i=0;i<r;i++){ for(int j=0;j<c;j++){ printf("%d",m[i][j]); if(j<c-1) printf(" "); } if(i<r-1) printf("\n"); }
return 0;
}
