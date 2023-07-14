#include <iostream>
#include <cstdint>
#include <array>
#include <string>

int main(){

    //c appoarch string
    char aaa[10] = "ABCDEHG";
    //or
    char aaa2[] = "ABCDEHG"; //\0


    //c++(BAD)
    auto my_string = std::array<char, 8>{'A','B','C'};

    //c++ good
    auto my_text = std::string{"ABCDEFG"};

    std::cout << my_text.length()<<'\n';
    std::cout << my_text.size()<<'\n';
    //\0 is not included!!!!!!!!!!!



    return 0;
}
