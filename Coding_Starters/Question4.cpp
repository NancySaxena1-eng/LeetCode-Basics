#include<iostream>
using namespace std;
class powerOfTwo{

  public:int powerOfTwoFunc(int Num){
       int count = 0;
	   if(Num == 0){
	       return 0;
	       
	   }
	   else{
	       while (Num>1){
                if (Num % 2 != 0)
                     return 0;
                Num = Num / 2;
	       }
	   }
	   return 1;
	}
};

int main(){
    powerOfTwo obj1;
	int num = 64;
	int result=0;
	result = obj1.powerOfTwoFunc(num);
	cout<< result <<endl;
	result ? cout << "Yes\n" : cout << "No\n";
   
}
