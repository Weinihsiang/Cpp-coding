#include <iostream>
//enumerate

//without class will be global variable

enum class Status{//three categories, new_data type
    Unkown,
    Connected,
    Disconnected,

};

enum class UserPermission{//three categories, new_data type
    Unkown,
    User,
    admin,

};


int main(){

    Status s1 = Status::Unkown;//::name scope
    //c appoarch-> no class and (Status s1 = Connected) but might experience misunderstanding


    switch(s1){
        case Status::Unkown:{
            std::cout <<"uNKNOWN\n";
            break;
        }
        case Status::Connected:{
            std::cout <<"Connected\n";
            break;
        }
        case Status::Disconnected:{
            std::cout <<"Disconnected\n";
            break;
        }
    }


    if(s1 == Status::Unkown){

    }


    return 0;
}
