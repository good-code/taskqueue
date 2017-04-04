class Item {
public:
    int prio;
    std::string label;
};

std::queue<Item> default_queue;


Item item_compr(Item Item1, Item Item2) {
    if ( Item1.prio >  Item2.prio ) {
        return Item1;
    }
    else return Item2;
}



