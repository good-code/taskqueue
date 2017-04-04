#include <boost/algorithm/string.hpp>
#include <fstream>
#include "queue_item.h"
#define __QUEUE_FILENAME__ "tasks.txt"

using namespace dq;

int save_queue(std::priority_queue<Item, std::vector<Item>, Comp_Items> q) {
        std::ofstream outfile(__QUEUE_FILENAME__);
		Item item;
	    while(!q.empty()) {
			item = default_queue.top();
			outfile << item.prio << ":" << item.label << "\n";
			q.pop();
    }
	return 0;
}
        
 
int load_queue(std::priority_queue<Item, std::vector<Item>, Comp_Items> q) {
        std::ifstream infile(__QUEUE_FILENAME__);
		Item item;
		std::string file_line, strs;
	    while(infile >> file_line) {
			std::cout << file_line;			
			/*
			boost::split(strs, file_line, boost::is_any_of(":"));
			//assert(strs == 2);
			item.prio = strs[0];
			item.label = strs[1];
			default_queue.push(item);
			*/
    }
	return 0;
}
        
   
            
