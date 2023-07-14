#include <cstdint>
#include <iostream>

void printer(int value);

int main(){
    printer(42);

    return 0;
}


void printer(int value){
    std::cout << value << "\n";
}
