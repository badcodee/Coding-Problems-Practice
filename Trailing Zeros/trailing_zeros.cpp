// for an integer N, find the number of trailing zeros in N!

#include<iostream>

int main() {
    int num; 
    int factorial = 1;
    std::cin>>num;
    while(num>1){
        factorial = factorial * num;
        num --;
    }
    std::cout<<factorial;

    return 0;
}