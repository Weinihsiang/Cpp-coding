#include <cstdint>
#include <iostream>
#include <vector>
#include <array>
#include <span>
//std::vector<std::int8_t>=>ByteVector

//C style
//typedef
typedef std::vector<std::int8_t> ByteVector1;

//c++, BENEFIT-> template
//using
using ByteVector2 = std::vector<std::int8_t>;

template <typename T>
using Vec = std::vector<T>;


template<typename T>
void print_container(std::span<T> span){

     for (const auto val : span) // read only, copy into value
    {
        std::cout << val << '\n';
     }
}


int main(){
    std::uint16_t my_c_arr[] = {1,2,3,4,5};//don't use c but it also works
    auto my_vec = std::vector<std::int32_t>{1,2,3,4,5};
    auto my_arr = std::array<std::uint16_t, 5U>{1,2,3,4,5};

    print_container<std::int32_t>(my_vec);
    print_container<std::uint16_t>(my_arr);
    print_container<std::uint16_t>(my_c_arr);

    return 0;
}
