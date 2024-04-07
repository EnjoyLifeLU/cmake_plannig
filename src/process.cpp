#include <iostream>
#include "process.h"

void Process::planProcess()
{
    std::cout << "this is planProcesss()" << std::endl;
    my_map.mapInfo();
    std::cout << "planning suceess" << std::endl;
}