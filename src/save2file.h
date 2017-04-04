#include <fstream>
#include "queue_item.h"
#define __QUEUE_FILENAME__ "tasks.txt"

class filestorage(
public:
    std::queue<Item> save_queue() {

}

    int load_queue(std::queue<Item> default_queue) {
        std::ifstream infile(__QUEUE_FILENAME__);
        
}
    
            
