//struct: methods defined
//not much difference between struct and class
//when you only want to data members but not the method defined
#include <iostream>

constexpr static std::uint64_t faculty(const std::uint8_t n){
    //static means that it could only be used in currect source file
    auto result = std::uint64_t{1};//uniform initialization{}
    //std::cout << result << "\n";

    for(std::uint8_t i = 1; i <= n;i++){
        result *= i;
    }

    return result;
}
/*
or //no name means that it could only be used in currect source file-> private
namespace{
constexpr static std::uint64_t faculty(const std::uint8_t n){
    //static means that it could only be used in currect source file
    auto result = std::uint64_t{1};//uniform initialization{}
    //std::cout << result << "\n";

    for(std::uint8_t i = 1; i <= n;i++){
        result *= i;
    }

    return result;
}

}

*/

//we want to make status and userpermission connected
namespace MyStd{
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
}

int main(){
    //first method
    //User user1 = {Status::Connected, 42ULL};
    MyStd::User user1 = {.status = MyStd::Status::Connected, .id =  42U};//cpp features


    std::cout << user1.id<<'\n';
    std::cout << (std::int32_t)(user1.status)<<'\n';//casting, c appoarch
    std::cout << static_cast<std::int32_t>(user1.status)<<'\n';//casting, cpp appoarch
    return 0;
}
