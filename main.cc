// pasando cadenas a apuntadores 
#include <iostream>
#include <stdio.h>

class Operetion{
	public: 
		virtual int operate( int a, int b) = 0;
		
};
class Addition : public Operetion{
	public:
	int operate(int a, int b){
		return a + b;
	}	
};


class Difference : public Operetion{
	public:
	int operate(int a, int b){
		return a - b;
	}	
};

void printfOperation(int a, int b, Operetion& op){
	std::cout<< a <<" ? "<< b << " = "<< op.operate(a,b) << std::endl;

}

int main(){
	Addition add;
	Difference diff;
	printfOperation(2,3,add);
	printfOperation(2,3,diff);
	return 0;
};