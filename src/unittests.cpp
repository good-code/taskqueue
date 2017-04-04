#include "save2file.h"

class test_dq {
    public:
        std::priority_queue<Item, std::vector<Item>, Comp_Items> test_queue;
        bool test_q() {
            Item item;
            item.label = "Test";
            item.prio = 1;
            test_queue.push(item);
            assert(test_queue.size() == 1);
    }
        bool test_save_q() {
            save_queue(test_queue);
        } 

        bool test_load_q() {
            load_queue(test_queue);
        }
};
            

