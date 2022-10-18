// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;
class printNumber{

    public: void printNum(int maxNum){
     
		for (int i =1; i<=maxNum; i++){  
			for (int j=1; j<=i; j++){  
			            
			     if(i == j){
			         cout << j <<endl ;
			         
			     }
			     else{
			         
			         cout << j << ',' ;
			         
			     }
		        
			}
	  
		}
    }
	

};
int main()
{

    printNumber obj1;
	obj1.printNum(5);

    return 0;
}
