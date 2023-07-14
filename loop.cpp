#include <cstdint>
#include <iostream>

int main(){

    for(std::uint32_t i = 3U; i > 0U; i--){ //POST DECREMENT
        std::cout << i << "\n";
    }


    for(std::uint32_t i = 0U; i < 3U; ++i){ //pre DECREMENT
        std::cout << i << "\n";
    }

    for(std::uint32_t i = 0U; i < 3U; i++){ //post DECREMENT
        std::cout << i << "\n";
    }

    std::int32_t i = 1;
    std::int32_t result = i++;
    int meow = ++i;
    std::cout << "\n" << result << "\n" << meow << "\n";


    while(true){
        if(i>=10){
            break;
        }
        ++i;
    }
    std::cout << "\n" << i;

    do{
        ++i;
        if(i>=10){
            break;
        }


    }while(true);
    std::cout << "\n" << i;

    return 0;
}
