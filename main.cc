#include <iostream>
#include <array>
#include <cstdint>

int main(){
    char arr[11][3] = {0};
    int num = 100;
    std::cout<<"\t  L   C   R\n";

    for(int i = 0; i<11;i++){
        std::cout << num <<"\t";
        for(int j = 0; j<3; j++){
           std::cout<< "| "<<arr[i][j]<<" ";
        }
        num -=20;
        std::cout <<"|" <<"\n";
    }
    return 0;
}
