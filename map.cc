#include <iostream>
#include <cstdint>
#include <map>//like dictionary
#include <string>

//it will sorted by alphabit(binary search tree)

void print_map(const std::map<std::string, std::int32_t> &map){
    for(const auto &[key, val] : map){
        //std::cout <<val <<'\n'; does not work because we have both string and int
        std::cout <<val <<'\n';
        std::cout <<key <<'\n'<<'\n';
    }
}

int main(){
    //<key, value>
    auto my_map = std::map<std::string, std::int32_t>{
        {"Jan", 28}
    };

    my_map["Michael"] = 40;
    my_map["Winnie"] = 4;

    print_map(my_map);

    my_map["Winnie"] = 45;
    print_map(my_map);


    if (!my_map.contains("Wiinnie")){
        my_map["Wiinnie"] = 4;
    }
    my_map["Apple"] = 4;
     print_map(my_map);


    const auto it_find = my_map.find("Jan");
    //return pointer back

    if(it_find != my_map.end()){
        std::cout << (*it_find).first <<'\n';
    }

    return 0;
}
