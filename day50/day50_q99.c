#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[100]; if(!fgets(s,100,stdin)) return 0; int d,m,y; sscanf(s, "%d/%d/%d", &d,&m,&y);
    char *mons="Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec";
    int idx = m-1; int start = idx*4; char mon3[4]; strncpy(mon3, mons+start,3); mon3[3]=0; printf("%02d-%s-%04d\n",d,mon3,y);
return 0;
}
