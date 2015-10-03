// pasando cadenas a apuntadores 
#include <iostream>
#include <stdio.h>

class Exprexion {
public:
	virtual int evaluete(void) = 0;
}; 
class Literal :public Exprexion{
	private:
		int value;
	public: 
		Literal(int value){

			this->value = value;
		}
		int evaluete(void){

			return value;
		}
};
class Addition : public Exprexion{
	private:
		Exprexion* a;
		Exprexion* b;
	public:
		Addition(Exprexion& a, Exprexion& b){
			this-> a = &a;
			this-> b = &b;
		}
		int evaluete(void){
			return a->evaluete() + b->evaluete();
		}	
};
class Difference : public Exprexion{
	private:
		Exprexion* a;
		Exprexion* b;
	public:
		Difference(Exprexion& a, Exprexion& b){
			this-> a = &a;
			this-> b = &b;
		}
		int evaluete(void){
			return a->evaluete() - b->evaluete();
		}	
};
class Multiplication : public Exprexion{
	private:
		Exprexion* a;
		Exprexion* b;
	public:
		Multiplication(Exprexion& a, Exprexion& b){
			this-> a = &a;
			this-> b = &b;
		}
		int evaluete(void){
			return a->evaluete() * b->evaluete();
		}	
};

class Division : public Exprexion{
	private:
		Exprexion* a;
		Exprexion* b;
	public:
		Division(Exprexion& a, Exprexion& b){
			this-> a = &a;
			this-> b = &b;
		}
		int evaluete(void){
			return a->evaluete() / b->evaluete();
		}	
};

void printfExprexion(Exprexion& exp){
	std::cout<< "evulute  = " << exp.evaluete() << std::endl;
}
int main(){
	Literal num1(1);
	Literal num2(2);
	Literal num3(3);
	Literal num4(4);
	Literal num5(5);
	
	
	Multiplication mult(num3,num5);
	Division divi(num4,num2);
	Addition add(mult,divi);
	Difference diff(add,num1);

	printfExprexion(diff);
	
	return 0;
};