#include <iostream>

#include "Sales_item.h"



int main(){


    Sales_item total, current;
    char AB = 'q'; 
    char AC ;
    int cnt =1;
    if(std::cin >> total){
        while(std::cin >> current && current != AB)
        {
               if(total.isbn == current.isbn)
               {
                 cnt++;          
               }
               else{
                 total = current;
                 cnt =1;
               }
        }

        std::cout << total.isbn << "發生" << cnt << "次" << std::endl;
    }    
    else if (std::cin >> AC && AB == AC) {
        std::cerr << "No data" << std::endl;
        return -1;  //
    }

    return 0;
    }






















