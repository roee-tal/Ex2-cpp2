#include "Notebook.hpp"
#include <stdexcept>
#include <string>
using namespace std;
namespace ariel{

 void Notebook::write(int page,  int row,  int col, Direction dir, string to_write){
     if(col > MAX_COl_NUM){
         throw invalid_argument( "the column is not bigger than 100" );
     }
     if(dir == Direction::Horizontal && (unsigned int)col+to_write.length() > MAX_COl_NUM){
         throw invalid_argument( "The input cannot ber over column 100" );
     }
     if(page < 0 || row < 0 || col < 0){
         throw invalid_argument( "The input cannot ber over column 100" );
     }
     string match_read = read(page,row,col,dir,to_write.length());
    for(char c : match_read){
        if(c != '_'){
            throw invalid_argument( "You cannot write upon existing letters" );
         }
     }
     for(char c : to_write){
         if(c == '~'){
              throw invalid_argument( "You cannot write ~" );
         }
          if (isprint(c) == 0){
              throw invalid_argument( "Not printable char" );
          }
     }
     if(dir == Direction::Horizontal){
        std::string::size_type j=0;
         for(int i=col;i<to_write.length()+(unsigned long)col ;i++){
            pages[page].rows[row].row1[static_cast<vector<int>::size_type>(i)] = to_write[(unsigned int)j];
            j++;            
         }
     }
     else{
         for(int i=row,j=0;i<to_write.length() + (unsigned int)row;i++,j++){
              pages[page].rows[i].row1[static_cast<unsigned long>(col)] = to_write[(unsigned long)j];
         }
         }
     }
 

 string Notebook::read( int page,  int row,  int col, Direction dir, int length){

     if(col >= MAX_COl_NUM){
         throw invalid_argument( "the column is not bigger than 100" );
     }
     if(dir == Direction::Horizontal && col+length > MAX_COl_NUM){
         throw invalid_argument( "The input cannot ber over column 100" );
     }
     if(page < 0 || row < 0 || col < 0 || length < 0){
         throw invalid_argument( "The input cannot ber over column 100" );
    }
    string ans;
    if(dir==Direction::Horizontal){
        for(int i=col;i<col + length;i++){
            ans.push_back(pages[page].rows[row].row1[static_cast<unsigned long>(i)]);
        }
    }
    else{
        for(int i=row;i<row + length;i++){
            ans.push_back(pages[page].rows[i].row1[static_cast<unsigned long>(col)]);
        }
    }
    return ans;
 }


void Notebook::erase( int page,  int row,  int col, Direction dir, int length){
     if(col >= MAX_COl_NUM){
         throw invalid_argument( "the column is not bigger than 100" );
     }
     if(dir == Direction::Horizontal && col+length >= MAX_COl_NUM){
         throw invalid_argument( "The input cannot ber over column 100" );
     }
     if(page < 0 || row < 0 || col < 0 || length < 0){
         throw invalid_argument( "The input cannot ber over column 100" );
     }
    if(dir == Direction::Horizontal){
        for(int i=col;i<length +col;i++){
            pages[page].rows[row].row1[static_cast<unsigned long>(i)] = '~';        
        }
    }
    else{
        for(int i=row;i<length +row;i++){
            pages[page].rows[i].row1[static_cast<unsigned long>(col)] = '~';        
        }
    }
}

void Notebook::show( int page){
    if(page<0){
      throw invalid_argument( "The page cannot be negative" );  
    }
    cout << "show";
}
}