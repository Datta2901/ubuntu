#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
printf("\nLeast Replacement Used Page Replacement Policy\n");
char *args[]={"LRU","Overlay","Policy",NULL};
execv("./os2",args);
return 0;
