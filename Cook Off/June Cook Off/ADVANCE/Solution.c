#include <stdio.h>

int main(){
  int t,i,x,y;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d%d",&x,&y);
    if(y>=x && y<=x+200){
      printf("YES");
    }
    else printf("NO");
  }
  return 0;
}
