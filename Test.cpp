// #include "Direction.hpp"
// #include "Notebook.hpp"
// #include "doctest.h"
// #include <array>
// #include <string>


// // // // TEST_CASE("Bad input") {
// // // //   ariel::Notebook notebook;
// // // // for (int i = 1; i < 20; i++)
// // // // 	{
// // // // 		CHECK_THROWS(notebook.erase(0, 0, 99, Direction::Horizontal, i)); 
// // // // 	}
// // // // 	CHECK_THROWS(notebook.erase(0, 0, 0, Direction::Horizontal, 101)); 
// // // // }


// // // // TEST_CASE("Good input") {
// // // //   ariel::Notebook notebook;
// // // //   CHECK_NOTHROW(notebook.write(0, 0, 0, ariel::Direction::Horizontal, "ariel"));
// // // //   CHECK_NOTHROW(notebook.write(1, 1, 0, ariel::Direction::Horizontal, "ariel"));
// // // //   CHECK_NOTHROW(notebook.write(1, 1, 1, ariel::Direction::Horizontal, "ariel"));

// // // //   CHECK_NOTHROW(notebook.write(1, 1, 0, ariel::Direction::Vertical, "ariel"));
// // // //   CHECK_NOTHROW(notebook.write(1, 1, 1, ariel::Direction::Vertical, "ariel"));
// // // //   CHECK_NOTHROW(notebook.write(1, 1, 0, ariel::Direction::Vertical, "ariel"));
// // // //   CHECK_NOTHROW(notebook.write(1, 1, 0, ariel::Direction::Vertical, "ariel"));
// // // // }


// // // // TEST_CASE("functions") {
// // // //   ariel::Notebook notebook;
 
// // // //   SUBCASE("write")
// // // //   notebook.write(0, 100, 0, ariel::Direction::Horizontal, "ariel");
// // // //   CHECK_THROWS(notebook.write(0, 100, 0, ariel::Direction::Horizontal,"ariel")); 
// // // //   notebook.write(0, 100, 0, ariel::Direction::Vertical, "ariel");
// // // //   CHECK_THROWS(notebook.write(0, 100, 0, ariel::Direction::Vertical,"ariel"));
// // // //    CHECK_THROWS(notebook.write(0, 99, 0, ariel::Direction::Horizontal, "ariel")); 
// // // //   CHECK_THROWS(notebook.write(0, 99, 98, ariel::Direction::Horizontal, "ariel")); 


// // //   TEST_CASE("functions") {
// // //   ariel::Notebook notebook; 
// // //     CHECK(notebook.read(0, 0, 0, ariel::Direction::Horizontal, 5) == "_____");
// // //     notebook.write(0, 0, 0, ariel::Direction::Horizontal, "ariel");
// // //     CHECK(notebook.read(0, 0, 0, ariel::Direction::Horizontal, 5) == "ariel");
// // //     notebook.write(2, 2, 2, ariel::Direction::Horizontal, "~~~");
// // //     CHECK(notebook.read(2, 2, 2, ariel::Direction::Horizontal, 3) == "~~~");
// // //   }

 
// // //   // SUBCASE("erase") {
// // //   //   CHECK(notebook.read(0, 0, 0, ariel::Direction::Horizontal, 5) == "_____");
// // //   //   notebook.write(0, 0, 0, ariel::Direction::Horizontal, "ariel");
// // //   //   CHECK(notebook.read(0, 0, 0, ariel::Direction::Horizontal, 5) == "ariel");
// // //   //   notebook.erase(0, 0, 0, ariel::Direction::Horizontal, 5);
// // //   //   CHECK(notebook.read(0, 0, 0, ariel::Direction::Horizontal, 5) == "~~~~~");

// // //   //   CHECK(notebook.read(1, 0, 0, ariel::Direction::Vertical, 5) == "_____");
// // //   //   notebook.write(1, 0, 0, ariel::Direction::Vertical, "ariel");
// // //   //   CHECK(notebook.read(1, 0, 0, ariel::Direction::Vertical, 5) == "ariel");
// // //   //   notebook.erase(1, 0, 0, ariel::Direction::Vertical, 5);
// // //   //   CHECK(notebook.read(1, 0, 0, ariel::Direction::Vertical, 5) == "~~~~~");
// // //   // }

// TEST_CASE ("bad input") {
//     SUBCASE("out of bounds") {
//         ariel::Notebook notebook;
//         CHECK_THROWS(notebook.write(50, 90, 105, ariel::Direction::Horizontal, "out of bound"));
//         CHECK_THROWS(notebook.write(50, 90, 200, ariel::Direction::Vertical, "out of bound"));
//         CHECK_THROWS(notebook.read(10, 10, 105, Direction::Vertical, 30));
//         CHECK_THROWS(notebook.read(10, 10, 105, Direction::Horizontal, 30));
//         CHECK_THROWS(notebook.erase(50, 20, 10, ariel::Direction::Horizontal, 105));
//         CHECK_THROWS(notebook.erase(50, 20, 60, ariel::Direction::Horizontal, 46));
//         CHECK_THROWS(notebook.write(101, 90, 105, ariel::Direction::Horizontal, "out of bound"));
//         CHECK_THROWS(notebook.write(102, 90, 200, ariel::Direction::Vertical, "out of bound"));
//         CHECK_THROWS(notebook.read(103, 10, 105, Direction::Vertical, 30));
//         CHECK_THROWS(notebook.read(104, 102, 1205, Direction::Horizontal, 30));
//         CHECK_THROWS(notebook.erase(50, 20, 150, ariel::Direction::Horizontal, 105));
//         CHECK_THROWS(notebook.erase(50, 220, 610, ariel::Direction::Horizontal, 46));
//     }
//             SUBCASE("negative input") {
//         ariel::Notebook notebook;
//         CHECK_THROWS(notebook.write(-10, 10, 10, Direction::Horizontal, "123"));
//         CHECK_THROWS(notebook.write(10, -10, 10, Direction::Horizontal, "123"));
//         CHECK_THROWS(notebook.write(10, 10, -10, Direction::Horizontal, "123"));
//         CHECK_THROWS(notebook.read(-10, 10, 10, Direction::Horizontal, 10));
//         CHECK_THROWS(notebook.read(10, -10, 10, Direction::Horizontal, 10));
//         CHECK_THROWS(notebook.read(10, 10, -10, Direction::Horizontal, 10));
//         CHECK_THROWS(notebook.read(10, 10, 10, Direction::Horizontal, -10));
//         CHECK_THROWS(notebook.erase(-10, 10, 10, Direction::Horizontal, 10));
//         CHECK_THROWS(notebook.erase(10, -10, 10, Direction::Horizontal, 10));
//         CHECK_THROWS(notebook.erase(10, 10, -10, Direction::Horizontal, 10));
//         CHECK_THROWS(notebook.erase(10, 10, 10, Direction::Horizontal, -10));
//     }

// }
// /**
//  * In this test case we will if the basic input is actually write down in the notebook.
//  * we are testing here:
//  * 1.write and read.
//  * 2.write erase and read.
//  * 3.erase and read.
//  * 4.read an empty page that have never been visited.
//  */
// TEST_CASE ("good input") {
//     ariel::Notebook notebook;
//     CHECK_NOTHROW(notebook.write(10, 10, 10, ariel::Direction::Horizontal, "best test"));
//     CHECK_NOTHROW(notebook.write(20, 20, 20, ariel::Direction::Vertical, "int the world"));
//     CHECK_NOTHROW(notebook.write(30, 30, 30, ariel::Direction::Horizontal, "give me 100"));
//     CHECK_NOTHROW(notebook.write(40, 40, 40, ariel::Direction::Vertical, "I LOVE C+++"));
//     CHECK_NOTHROW(notebook.erase(40, 40, 40, ariel::Direction::Vertical, 6));
//     CHECK_NOTHROW(notebook.read(10, 10, 10, ariel::Direction::Horizontal, 9));
//     CHECK_NOTHROW(notebook.read(20, 20, 20, ariel::Direction::Horizontal, 13));
//     CHECK_NOTHROW(notebook.read(30, 30, 30, ariel::Direction::Horizontal, 11));
//     CHECK_EQ(notebook.read(10, 10, 10, ariel::Direction::Horizontal, 9), "best test");
//     CHECK_EQ(notebook.read(20, 20, 20, ariel::Direction::Vertical, 13), "int the world");
//     CHECK_EQ(notebook.read(30, 30, 30, ariel::Direction::Horizontal, 11), "give me 100");
//     CHECK_EQ(notebook.read(40, 40, 40, ariel::Direction::Vertical, 11), "~~~~~~ C+++");
//     CHECK_EQ(notebook.read(50, 50, 50, ariel::Direction::Horizontal, 10), "__________");
//     CHECK_EQ(notebook.read(60, 60, 60, ariel::Direction::Vertical, 10), "__________");
// }

#include "doctest.h"
#include "Notebook.hpp"
using namespace ariel;
#include <string>
#include <algorithm>

/* Test cases for write function */

TEST_CASE("length of the line is between 0-99"){
    
    for ( int i=100; i<200;i++){
        Notebook note;
        try
        {
            note.write(1,i-100,0,Direction::Vertical,"Look at me");
            note.write(1,i-100,2,Direction::Horizontal,"I'm Mr. meeseeks");
        }
        catch(const std::exception& e)
        {
            CHECK_EQ(true,false);
        }
        
        CHECK_THROWS(note.write(1,i-100,i,Direction::Vertical,"o"));
        CHECK_THROWS(note.write(1,i-100,2,Direction::Vertical,"o"));
        CHECK_THROWS(note.write(1,i-100,98,Direction::Horizontal,"abc"));
    }
}
TEST_CASE("case: special chars"){
    Notebook note;
    note.write(1,0,0,Direction::Horizontal,"n____n");
    try{note.write(1,0,1,Direction::Horizontal,"abcd");}
    catch(std::exception &){
        CHECK_EQ(true,false);
    }
    CHECK_THROWS(note.write(1,1,1,Direction::Horizontal,"\n"));
}
TEST_CASE("Case: writing twice on the same position"){
    Notebook note;
     for (int i=0; i<96;i++){
        note.write(1,i,i,Direction::Horizontal,"abcd");
     }
     for (int i=1; i<96;i++){
         CHECK_THROWS(note.write(1,i-1,i,Direction::Vertical,"ab"));
         CHECK_THROWS(note.write(1,i-1,i,Direction::Vertical,"ab"));
     }
}

TEST_CASE("case: there is infinate rows"){
    Notebook note;
    std::string s;
    for (int i=1; i<10000;i++){s+="a";}
     int k=0;
    for(;k<100;k++){
        try{
            note.write(0,0,k,Direction::Vertical,s);}
        catch(std::exception&){
            CHECK_EQ(true,false);
        }
    }   
}

TEST_CASE("case: there is infinate pages"){
    Notebook note;
    for(int i=0; i<10000;i++){
        try{
            note.write(i,0,0,Direction::Horizontal,"%#!#");}
        catch(std::exception&){
            CHECK_EQ(true, false);
        }
    }
}

/*Test cases for earse function  */
TEST_CASE("case: earse outside the line"){
    Notebook note;
    CHECK_THROWS(note.erase(0,4,98,Direction::Horizontal,3));
    CHECK_THROWS(note.erase(1,2,102,Direction::Vertical, 50));
    CHECK_THROWS(note.erase(1,2,100,Direction::Vertical, 5));
}

TEST_CASE("case: replace the current char to '~' "){
    Notebook note;
    note.write(1,2,55,Direction::Horizontal,"hello world");
    note.erase(1,2,60,Direction::Horizontal,6);
    CHECK_EQ(note.read(1,2,55,Direction::Horizontal,11),"hello~~~~~~");
    note.erase(1,2,53,Direction::Horizontal,2);
    CHECK_EQ(note.read(1,2,50,Direction::Horizontal,16),"___~~hello~~~~~~"); 
}
TEST_CASE("can't write again after earse"){
    Notebook note;
    try{
        note.write(1,2,55,Direction::Horizontal,"morty and jessica forever");
        note.erase(1,2,66,Direction::Horizontal,7);}
    catch(std::exception){
        CHECK_EQ(true,false);
    }
    CHECK_THROWS(note.write(1,0,55,Direction::Vertical,"this is not gonna work"));
        note.write(0,30,40,Direction::Horizontal,"my name is bird person");
    note.erase(0,30,51,Direction::Horizontal,11);
    note.write(0,30,62,Direction::Horizontal,"Phoenixperson");
    CHECK_EQ(note.read(0,30,40,Direction::Horizontal,35),"my name is ~~~~~~~~~~~Phoenixperson");
    CHECK_EQ(note.read(0,30,38,Direction::Horizontal,39),"__my name is ~~~~~~~~~~~Phoenixperson__");
}

/* Test cases for read function */
TEST_CASE("case: the empty cube represent by '_' "){
    Notebook note;
    std::string st;
    st = note.read(0,0,0,Direction::Horizontal,100);
    bool flag;
    for(unsigned long i=0; i<100;i++){
        flag = st[i]=='_';
        CHECK_FALSE(!flag);} 
    note.write(0,1,40,Direction::Vertical,"my name is bird person");
    note.erase(0,1,51,Direction::Vertical,11);
    note.write(0,1,62,Direction::Vertical,"Phoenixperson");
    st = note.read(0,1,0,Direction::Vertical,100);
    for(unsigned long i=0; i<40;i++){
        flag =st[i]=='_';
        CHECK_FALSE(!flag);}
    for(unsigned long i=76;i<100;i++){
        flag = st[i]=='_';
        CHECK_FALSE(!flag);}
}
TEST_CASE("case: want to read above the limits of the line"){
    Notebook note;
    CHECK_THROWS(note.read(0,1,100,Direction::Vertical,5));
    CHECK_THROWS(note.read(1,1,98,Direction::Horizontal,5));
}