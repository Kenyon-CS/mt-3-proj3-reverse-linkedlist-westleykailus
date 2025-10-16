#include "LinkedList.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

static bool all_passed = true;

void check(bool cond, const std::string& msg) {
    if (!cond) {
        all_passed = false;
        std::cout << "FAIL: " << msg << "\n";
    } else {
        std::cout << "PASS: " << msg << "\n";
    }
}

int main() {
    LinkedList L;
    for (int v : {5,4,3,2,1}) L.push_front(v);
    check(L.to_string()=="[1, 2, 3, 4, 5]", "initial list");
    L.reverse();
    check(L.to_string()=="[5, 4, 3, 2, 1]", "reversed list");
    if (all_passed) std::cout << "ALL TESTS PASSED\n"; else std::cout << "SOME TESTS FAILED\n";
    return all_passed ? 0 : 1;
}
