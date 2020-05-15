#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char * argv[])
{
  set_tickets(30);
  int i,k;
  const int loop = 43000;
  for(i=0; i<loop; i++)
  {
    asm("nop");
    for(k=0; k<loop;k++)
    {
      asm("nop");
    }
    if(i%100==0 && i != 0)
      check_ticks();
  }
  //check_ticks();  
  exit();
}

