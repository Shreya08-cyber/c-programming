#include <stdio.h>
int main() {
    int r,c,i,j,key,found=0,mat[10][10];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&mat[i][j]);
    scanf("%d",&key);
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        if(mat[i][j]==key) { found=1; break; }
    printf(found? "Found":"Not Found");
    return 0;
}
