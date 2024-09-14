#include<iostream>
using namespace std;
class calc{
	int a,b;
	public:
		int add(int a, int b){
			return a+b;
		}
	
		int sub(int a, int b){
			return a-b;
		}
		
		int mul(int a, int b){
			return a*b;
		}
		
		float div(float a, float b){
			return a/b;
		}
};
int main(){
	int a,b;
	calc k;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	cout<<"Addition = "<<k.add(a,b)<<endl;
	cout<<"Substraction  = "<<k.sub(a,b)<<endl;
	cout<<"Multiplication = "<<k.mul(a,b)<<endl;
	cout<<"Divison = "<<k.div(a,b)<<endl;
}