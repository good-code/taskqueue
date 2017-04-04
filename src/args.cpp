#include <iostream>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "queue_item.h"

// http://code.runnable.com/UqvNM9NFP0gtAAAM/command-line-arguments-with-options-in-c%2B%2B

void showhelpinfo(char *s);
//using namespace std;
int main (int argc,char *argv[])
{
  Item nitem;
  char tmp;
  /*if the program is ran witout options ,it will show the usgage and exit*/
  if(argc == 1)
  {
    showhelpinfo(argv[0]);
    exit(1);
  }
  /*use function getopt to get the arguments with option."hu:p:s:v" indicate 
  that option h,v are the options without arguments while u,p,s are the
  options with arguments*/
  while((tmp=getopt(argc,argv,"h:l:p:v"))!=-1)
  {
    switch(tmp)
    {
      /*option h show the help infomation*/
      case 'h':
        showhelpinfo(argv[0]);
        break;
      case 'l':
        nitem.label = optarg;
        break;
      case 'p':
        nitem.prio = int(optarg);
        //if piro not in 1 .. 10 error
        break;
      /*option v show the version infomation*/
      case 'v':
        std::cout<<"The current version is 0.1"<<std::endl;
        break;
      /*invail input will get the heil infomation*/
      default:
        showhelpinfo(argv[0]);
        break;
    }
  }

  if ( nitem.prio > 0 && nitem.label.length() > 0 ) 
     add2_queue(nitem.prio, nitem.label);

  return 0;
}
