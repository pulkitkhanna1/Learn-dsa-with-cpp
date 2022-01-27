#include <iostream>

int main(){
    int savings;
    std::cout<<"enter the amount of savings";
    std::cin>>savings;

    if (savings>5000){
        std::cout<<"spend money";
    } else{
        std::cout<<"save money";
    }

}