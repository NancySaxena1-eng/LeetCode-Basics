#include<iostream>
class printNumber{

	void printNum(int maxNum){
     
		for (i =0; i<=maxNum; i++){  
			int j =i;
			while(j){
				if (j =! i){
					cout << j <<',' 
					j --;
				}
				else{
					
					cout << j <<endl
					
				}
		        
			}
	  
		}
  
	}

}


void main(){
    printNumber obj1;
	obj1.printNum(5)

}