#include <iostream>

//input only params: Const
//parameter could only be const or non-const
constexpr std::uint64_t faculty(const std::uint8_t n){
    auto result = std::uint64_t{1};//uniform initialization{}
    //std::cout << result << "\n";

    for(std::uint8_t i = 1; i <= n;i++){
        result *= i;
    }

    return result;
}


int main(){
    //const - run time only (only for integers may be compile time
    //constexpr (c++17)- compile and run time


    //variable

    const auto value = std::uint32_t{42U+20U};
    constexpr auto value2 = std::uint32_t{42U+20U};

    //value = 10;// you cant change the value
    //constexpr run during compling to save run time
    const auto i = 1;
    const auto value3 = faculty(5);
    constexpr static auto value4 = faculty(i);//wrong, bcz input in const but output is constexpr
    //if we force complier to really store this everytime -> add static
    return 0;
}
