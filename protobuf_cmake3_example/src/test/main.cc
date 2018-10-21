#include <iostream>
#include <fstream>
#include <string>
#include <ios>
#include "dog.pb.h"

int main(){
    Dog d;
    d.set_name("andrew\n");
    std::cout << d.name();
}