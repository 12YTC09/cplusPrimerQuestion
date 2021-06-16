
#include <iostream>



int main(){

    int a ,b;
    std::cout << "請輸入兩個整數:" << std::endl;
    std::cout << "a:" << std::endl;
    std::cin >> a;
    std::cout << "b:" <<std::endl;
    std::cin >> b;

    while(a !=  b){
        while(a > b){
            std::cout << a-- << std::endl;
        }
        while(a < b){
            std::cout << b-- << std::endl;
        }
        while(a == b){
   
            std::cout << a << std::endl;
            break;
        }
    }

    while(a == b){
        std::cout << "equal" <<std::endl;
        break;
    }




    return 0;



}


























