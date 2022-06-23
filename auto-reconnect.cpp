#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

int main() {
    for (; ; ) {
        system("rasdial PPPoE username password");
        std::this_thread::sleep_for(45s);
        system("rasdial PPPoE /disconnect");
    }
    return 0;
    }
