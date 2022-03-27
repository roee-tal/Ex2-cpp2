#include <iostream>
#pragma once

#include "Direction.hpp"
#include "Row.hpp"
using ariel::Direction;
#include <unordered_map>

using namespace std;
namespace ariel{
    class Page{
        public:
            unordered_map<int,Row> rows;
};
}