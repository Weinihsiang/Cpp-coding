//VERY IMPORTANT FEATURE IN CPP
//auto is applicable to every data types

#include <iostream>

enum class Status{//three categories, new_data type
    Unkown,//cast->0
    Connected,
    Disconnected,

};

enum class UserPermission{//three categories, new_data type
    Unkown,
    User,
    admin,

};

struct User{
    Status status;
    std::uint64_t id;

};

//AAA:Almost Always Auto
//don't repeat yourself, int at left and right
int main(){
    auto i = 1; //auto type
    float a = 10.0F;
    //std::int32_t b = a;//possible loss of data

    //auto c = std::int32_t{a};//important: directly error

    //float to int requires a narrowing conversion
    //use cast instead

    auto d = static_cast<std::int32_t>(a);

    //for complex type, remember to put type at right before declaration

    auto user1 = User{.status = Status::Connected, .id =  42U};




    return 0;
}
