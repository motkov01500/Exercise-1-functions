#include <iostream>
#include <string>
using namespace std;

void divide(int a,int b){
	int c= a/b;
	cout<<c;
}

void substract(int a,int b){
	int c= a-b;
	cout<<c;
}

void multiply(int a,int b){
	int c=a*b;
	cout<<c;
}

void modulo(int a,int b){
	int c = a%b;
	cout<<c;
}

void power(int a,int b){
	int c = 1;
	int i = 0;
	for(int i = 0;i<b;i++){
	c*=a;
	}
	cout<<c;
}


int main() {
	int x,y;
	string a;
	cout<<"Enter which type of calclulation do you want,You can choose from divide,modulo,multiply,power and substract:  ";
	cin>>a;
	cout<<"Enter two numbers: "<<endl;
	cin>>x>>y;
	if(a == "divide"){
		divide(x,y);
	}
	else if(a == "modulo"){
		modulo(x,y);
	}
	else if(a == "multiply"){
		multiply(x,y);
	}
	else if(a == "power"){
		power(x,y);
	}
	else if(a == "substract"){
		substract(x,y);
	}
	else{
		cout<<"Enter again";
	}
	return 0;
}
