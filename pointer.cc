#include <array>
#include <cstdint>
#include <iostream>

template <std::size_t NN>
//size is not determinine by uint32_t  but -> (size of comtainer) size_t

void print_array2(const std::array<std::uint32_t, NN> *arr){////////////////////////////
    std::cout << arr << '\n';
    for(std::size_t i  = 0; i< arr->size(); i++){

        std::cout << (*arr)[i] <<'\n';
    }
}

int main(){
    std::uint32_t value=32;
    std::uint32_t *value_ptr = &value;
    std::cout <<value_ptr<< '\n';
    std::cout <<*value_ptr<< '\n';
    std::cout <<&value_ptr<< '\n';
    auto my_array2 = std::array<std::uint32_t, 5>{1,2,3,4,5};

    std::cout <<&my_array2<< '\n';
    print_array2(&my_array2);

    return 0;
}
