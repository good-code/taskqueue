#include <queue>
#include <iostream>
#include <string>
#include <functional>

class Item {
public:
    int prio;
    std::string label;
};

Item item_compr(Item Item1, Item Item2) {
    if ( Item1.prio >  Item2.prio ) {
        return Item1;
    }
    else return Item2;
}

int main() {

    //  TODO: to use priority queue cmp class has to be compleated!
    //  std:: priority_queue<Item, item_compr> q;
    std::queue<Item> q;
    struct Item q1, q2, q3;
    q1.prio = 8;
    q1.label = "guitar practice";
    q2.prio = 10;
    q2.label = "job hunt";
    q3.prio = 4;
    q3.label = "studio cleanup";


    for(struct Item n : { q1, q2, q3 })
        q.push(n);
    
    Item i;
    i = q.back();
    std::cout << i.label;
    /*
    std::cout << q.top() << " ";

    */

}
