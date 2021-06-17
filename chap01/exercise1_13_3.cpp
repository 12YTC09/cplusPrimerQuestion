


#include<iostream>
    



int main()
{

    int a =0,b=0; 
    std::cin >> a >> b;

    
    if(a > 0 & b>0){
        for(a ,b;  a> b; a--){
        
            std::cout << a << std::endl;
            
            if((a-b)== 1){
            std::cout << --a << std::endl;
            
            }

        for(a,b;  b> a; b--){
        
        std::cout << b << std::endl;
       

        if((b-a)== 1){
            std::cout << --b << std::endl;
            }
        }

        for(a,b; a==b; ){
            std::cout << "equal" << std::endl;
            break;
        }
  
      }        
        
    }

   


    return 0;








}


























