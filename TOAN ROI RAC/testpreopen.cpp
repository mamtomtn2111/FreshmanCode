#include <stdio.h>

int main ()
{
  freopen ("myfile.txt","w",stdout);
  printf ("YEAH");
  fclose (stdout);
  return 0;
}
