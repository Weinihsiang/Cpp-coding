#include <cstdint>
#include <iostream>
#include <utility>//pair
#include <tuple>
#include <string>
//tuple can hold many, pair with only two

struct DataBla{
    std::int32_t i;
    float j;
};

std::tuple<std::int32_t, float, std::string> some_function(const std::int32_t input){
    return std::make_tuple(input+1,  static_cast<float>(input+2), std::to_string(input+3));
}

DataBla new_function(const std::int32_t input){
    return DataBla{input+1,  static_cast<float>(input+2)};
}

int main(){
    auto my_pair = std::pair<std::int32_t, float>{1337,43.8F};
    std::cout << my_pair.first <<'\n';
    std::cout << my_pair.second <<'\n';

    auto my_tuple = std::tuple<std::int32_t, float, std::string>{1337,43.0F,"Winnie"};

    //you have to use get function for tuple

    std::cout << std::get<0>(my_tuple) <<'\n';
    std::cout << std::get<1>(my_tuple) <<'\n';
    std::cout << std::get<2>(my_tuple) <<'\n';

    const auto result = some_function(42);//type is tuple
    std::cout << std::get<0>(result) <<'\n';
    std::cout << std::get<1>(result) <<'\n';
    std::cout << std::get<2>(result) <<'\n';

    //now, structure binding
    //can be used in tuple, array, struct

    const auto &[i, f, s] = some_function(42);
    std::cout << i <<'\n';
    std::cout << f <<'\n';
    std::cout << s <<'\n';

    const auto &[i1, f1] = new_function(1042);
    std::cout << i1 <<'\n';
    std::cout << f1 <<'\n';
    return 0;
}
