#include<iostream>
using namespace std;
class reverseDigit{

  public:int reverseDigitfunc(int Num){
		int remainder=0;
		int reverseNum=0;
		while (Num){
			remainder = Num % 10      ;          
			reverseNum = reverseNum * 10 + remainder ; 
			Num = Num/10 ;
		}
		return reverseNum;
	}
};

int main(){
    reverseDigit obj1;
	int reverseNum =0;
	reverseNum = obj1.reverseDigitfunc(1234);
	cout<< reverseNum <<endl;

}
