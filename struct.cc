//struct: methods defined
//not much difference between struct and class
//when you only want to data members but not the method defined
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

int main(){
    //first method
    //User user1 = {Status::Connected, 42ULL};
    User user1 = {.status = Status::Connected, .id =  42U};//cpp features


    std::cout << user1.id<<'\n';
    std::cout << (std::int32_t)(user1.status)<<'\n';//casting, c appoarch
    std::cout << static_cast<std::int32_t>(user1.status)<<'\n';//casting, cpp appoarch
    return 0;
}
