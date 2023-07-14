#include <iostream>
#include <array>//cpp appoarch
#include <cstdint>

void print_array(const std::uint32_t arr[], const std::size_t len){
    const auto size = sizeof(arr);
    //does not work-> we need pointer
    for(std::size_t i  = 0; i<len; i++){

        std::cout << arr[i] <<'\n';
    }
}

//bcz we still need to put 5 so we could make a template
template <std::size_t NN>
//size is not determinine by uint32_t  but -> (size of comtainer) size_t

void print_array2(const std::array<std::uint32_t, NN> arr){
    const auto size = sizeof(arr);
    //does not work-> we need pointer
    for(std::size_t i  = 0; i<arr.size(); i++){

        std::cout << arr[i] <<'\n';
    }
}

int main(){

    constexpr static auto len = std::size_t{5};

    //length must be constant

    std::uint32_t array[len] = {1,2,3,4,5};//5x32, c-style array
    //4 x 5 -> 20 byte

    print_array(array, len);

    /******************************/
    //C++ APPOARCH
    auto my_array2 = std::array<std::uint32_t, len>{1,2,3,4,5};
    print_array2(my_array2);



    return 0;
}
