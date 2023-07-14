#include <iostream>
#include <cstdint>
#include <array>

template <std::size_t NN>
//size is not determinine by uint32_t  but -> (size of comtainer) size_t

void print_array2(const std::array<std::uint32_t, NN> &arr){////////////////////////////
//input only-> usually const and 8 bytes
//pointer takes 8 bytes, so for small integer you don;t need this

    //direclt add & will send address into the function
    std::cout << &arr << '\n';
    //things are copied-> waste space
    const auto size = sizeof(arr);
    //does not work-> we need pointer
    for(std::size_t i  = 0; i<arr.size(); i++){

        std::cout << arr[i] <<'\n';
    }
}

template <std::size_t NN>
void double_array2(std::array<std::uint32_t, NN> &arr){////////////////////////////
//in and out-> no const, reference

    for(std::size_t i  = 0; i<arr.size(); i++){

        arr[i] = arr[i]* 2;//does not work if array is const
    }
}

int main(){

    //C++ APPOARCH
    auto my_array2 = std::array<std::uint32_t, 5>{1,2,3,4,5};
    std::cout << &my_array2 << '\n';
    print_array2(my_array2);
    double_array2(my_array2);
    print_array2(my_array2);

    return 0;
}
