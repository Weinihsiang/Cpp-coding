#include <iostream>
#include <cstdint>
#include <array>
#include <string>

int main(){
    //C-Style array must be known at compile time
     constexpr static auto len = std::size_t{5};

    //length must be constant

    std::uint32_t array[len] = {1,2,3,4,5};//stack
    //4 x 5 -> 20 byte


    auto value = std::int16_t{10};



    //we could do in heap so that we don't need to know the length

    auto len2 = std::size_t{};

    std::cin >> len2;

    //heap
    std::uint32_t *heap_arr = new std::uint32_t[len2];
    //4*len2 memory allocation
    //will return pointer to the first address of the array

    std::cout << heap_arr << '\n';

    if(heap_arr != nullptr){
        //check is it working
        for(std::size_t i = 0; i < len2; i++){
            heap_arr[i] = static_cast<std::uint32_t>(i);
    }
        for(std::size_t i = 0; i < len2; i++){
            std::cout << heap_arr[i] << '\n';
        }
    }



    //free memory

    delete[] heap_arr;

    //make heap_arr pointer point to nothing

    heap_arr = nullptr;

    if(heap_arr){
        std::cout << heap_arr[1];
    }
    else if(!nullptr){
        std::cout << "Invalid Pointer\n";
    }
    //std::cout << heap_arr[1];-> error

    return 0;
}


/*

*/
