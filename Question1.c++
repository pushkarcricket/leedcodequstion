// given an integar num, repeatedly add all its digits until the result has only one digit and return it

#include <iostream>
using namespace std;




int addDigitHelper(int num){
    int sum=0;
    while(num !=0){
        int ld= num%10;
        num=num/10;
        sum=sum+ld;

    }
    return sum;
}



int main(int num){

    while(num<9){
        num=addDigitHelper(num);
    }

    return num;
}