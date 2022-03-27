#include <iostream>
#include "Direction.hpp"
#include "Page.hpp"
#include <unordered_map>
#define MAX_COl_NUM 100
using ariel::Direction;
#include <stdexcept>
using namespace std;
namespace ariel{

    class Notebook{
        unordered_map<int,Page>pages;
        
        public:       
            Notebook(){}
            ~Notebook(){}
            void write( int page,  int row,  int col, Direction dir, string to_write);
            string read( int page,  int row,  int col, Direction dir, int length);
            void erase( int page,  int row,  int col, Direction dir, int length);
            static void show( int page);

    };
}

