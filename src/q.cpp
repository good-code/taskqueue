#include <queue>
#include <iostream>
#include <string>
#include "queue_item.h"

using namespace dq;
int main() {

    dq::add2_queue(3, "codetest");

    std::cout << "nr of tasks: " << default_queue.size() << "\n";
    dq::Item i;
    i = default_queue.top();
    std::cout << "current one: " << i.label << "\n";
}
