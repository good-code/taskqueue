#include <queue>
#include <iostream>
#include <string>
#include "queue_item.h"

int main() {

    //  TODO: to use priority queue cmp class has to be compleated!
    //  std:: priority_queue<Item, item_compr> q;
    struct Item q1, q2, q3;
    q1.prio = 8;
    q1.label = "guitar practice";
    q2.prio = 10;
    q2.label = "job hunt";
    q3.prio = 4;
    q3.label = "studio cleanup";


    for(struct Item n : { q1, q2, q3 })
        default_queue.push(n);
    
    Item i;
    i = default_queue.back();
    std::cout << i.label;
}
