#include <iostream>
#pragma once

#include "Direction.hpp"
#include <stdexcept>
#include <vector>
using namespace std;
namespace ariel{

    class Row{
        public:
        std::vector<char>row1;

        Row(){
                row1.reserve(100);
                for ( int i=0; i<100; i++){
                    row1[(unsigned long)i]='_';
                    }    
        }
    };
}