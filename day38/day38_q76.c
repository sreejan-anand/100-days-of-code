#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d",&n); int m[100][100]; for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&m[i][j]);
    int ok=1; for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(m[i][j]!=m[j][i]) ok=0;
    printf(ok? "Symmetric\n":"Not Symmetric\n");
return 0;
}
