#include <iostream>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
//#include "queue_item.h"
#include "save2file.h"

// http://code.runnable.com/UqvNM9NFP0gtAAAM/command-line-arguments-with-options-in-c%2B%2B

using namespace dq;
void showhelpinfo(char *s);
//using namespace std;
int main (int argc,char *argv[])
{
    Item nitem;
  load_queue(default_queue);
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
		try {
			// I know much better solution exist!
			nitem.prio = int(optarg);
		}
		catch(const char* msg) {
		    std::cout << msg << "\n";
		}
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

  save_queue(default_queue);
  return 0;
}


void showhelpinfo(char *s) {
using namespace std;
  cout<<"Usage:   "<<s<<" [-option] [argument]"<<endl;
  cout<<"option:  "<<"-h  show help information"<<endl;
  cout<<"         "<<"-l label"<<endl;
  cout<<"         "<<"-p priority"<<endl;
  cout<<"         "<<"-v  show version infomation"<<endl;
  cout<<"example: "<<s<<" -l'refactor code' -p10"<<endl;
}
