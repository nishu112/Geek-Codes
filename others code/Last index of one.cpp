// Geeks Last index of One
#include <cstdio>
#include <string.h>

char line[108];

int main(){
  int t;

  scanf("%d ",&t);
  while(t--){
    fgets(line,sizeof(line),stdin);
    int temp=strrchr(line,'1')-line;
    printf("%d\n",temp);
  }
}
