class Item {

public:

    int prio;
    std::string label;
};

class Comp_Items {
    public:
        bool operator() (Item Item1, Item Item2) {
        if ( Item1.prio >  Item2.prio ) 
            return true;

        }
};

std::priority_queue<Item, std::vector<Item>, Comp_Items> default_queue;

void add2_queue(int prio, std::string label) {
    Item *nq;
    nq = new Item;
    nq->prio = prio;
    nq->label = label;
    default_queue.push(*nq);
    delete nq;
}
