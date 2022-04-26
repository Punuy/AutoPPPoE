#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;
using namespace std;

int main() {
    for (; ; ) {
        system("rasdial PPPoE Username Password");
        std::this_thread::sleep_for(45s);
        system("rasdial PPPoE /disconnect");
    }
    return 0;
    }
