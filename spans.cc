#include <cstdint>
#include <iostream>
#include <vector>
#include <array>
#include <span>

/* span works like
class span:
length/size
ptr-begin
*/

//perform like c stype array
//we can have same function name twice

// void print_container(const std::vector<std::int32_t> &vec){

//      for (const auto val : vec) // read only, copy into value
//     {
//         std::cout << val << '\n';
//      }
// }

// template <std::size_t N>
// void print_container(const std::array<std::int32_t, N> &vec){

//      for (const auto val : vec) // read only, copy into value
//     {
//         std::cout << val << '\n';
//      }
// }

void print_container(std::span<std::int32_t> span){

     for (const auto val : span) // read only, copy into value
    {
        std::cout << val << '\n';
     }
}

int main(){
    int my_c_arr[] = {1,2,3,4,5};//don't use c but it also works
    auto my_vec = std::vector<std::int32_t>{1,2,3,4,5};
    auto my_arr = std::array<std::int32_t, 5U>{1,2,3,4,5};

    print_container(my_vec);
    print_container(my_arr);
    print_container(my_c_arr);

    return 0;
}
