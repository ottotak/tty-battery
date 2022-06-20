#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;
int getBatRemain(){
  FILE *fp;
  char *cmd = "bash sh/linux-battery-percentage.sh";
  char inp[100];
  char buf[100];
  int res=-1;
  if ((fp=popen(cmd,"r")) == NULL){
    perror("Command failed");
    return 0;
  }
  while(fgets(buf,sizeof(buf),fp) != NULL){
  }
  pclose(fp);
  res = atoi(buf);
  return res;
}
