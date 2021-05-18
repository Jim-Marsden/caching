
#include <iostream>
#include "cache.h"
int main() {
    il::my_cache<int> myCache;
    std::fstream fstream(std::string{"file name"}, std::fstream::app);
    myCache.load(fstream, "file");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
