#include <stdio.h>
#include <stdlib.h>

using namespace std;
int getBatRemain(){
  FILE *fp;
  char *cmd = "acpi";
  char inp[2^10];
  char buf[2^10];
  int res=0;
  if ((fp=popen(cmd,"r")) == NULL){
    perror("Command failed");
    return 0;
  }
  while(fgets(buf,sizeof(buf),fp) != NULL){
  }
  pclose(fp);
  return res;
}

