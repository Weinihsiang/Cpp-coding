#include <iostream>
#include <cstdint> //for integer type

int main()
{
    //8 different types
    std::int8_t i1 = 0;
    std::uint8_t i2 = 0U; //u or U, means value is intended to be unsignned

    std::int16_t i3 = 0;
    std::uint16_t i4 = 0U;

    std::int32_t i5 = 0;
    std::uint32_t i6 = 0U;

    std::int64_t i7 = 0;
    std::uint64_t i8 = 0ULL;//unsignned 64

    int i = 0; //type depends on your device


    float f1 = 12.0F; //32 bit, F = float
    double f2 = 12.0; //64 bit

    bool b2 = false;
    bool b1 = true;

    char c1 = 'A'; //8 bit
    char c2 = 'z';

    bool c3 = (b1 || b2) && b1;

    if(b1){
        std::cout <<"Printy\n";

    }
    else if (!b2){
        std::cout <<"eePrinty\n";
    }
    else{
        std::cout <<"Printy\n";
    }

    std::int32_t result;

    if(b1){
        result = 10;
    }
    else{
        result = -10;
    }


    std::int32_t result2 = b1 ? 10:-10;//ternary operator



    return 0;
}
