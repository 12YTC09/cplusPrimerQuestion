

#include <iostream>

int main(){

    //currVal 是我們正在統計的數;我們將讀入的新值存入val
    
    int currVal = 0,val = 0;

    //讀取第一個數,並確保確實有數據可以處理
    
    if(std::cin >> currVal){
        int cnt = 1;             //保存我們正在處理的當前數的個數
        while(std::cin>> val){   //讀取剩餘的數
            if(val == currVal)   //如果值相同
                ++cnt;           //將cnt加1
            else{                //否則,打印前一個值的個數
                std:: cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;               //記住新值
                cnt = 1;                     //重置計數器
            }
        }

        std::cout << currVal << " occurs " << cnt << " times " << std::endl;

    }
  
        return 0;

}
























