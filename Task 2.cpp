#include<iostream>
#include<cmath>
using namespace std;
class compare{
	int i,decimal=0,decimal2=0;
	public:
		void convert(int a[4],int b[4]){
			for (i=0;i<4;i++){
				decimal=decimal+(a[i]*(pow(2,3-i)));
			}
			for (i=0;i<4;i++){
				decimal2=decimal2+(b[i]*(pow(2,3-i)));
			}
			
		}
		void show(int a[4],int b[4]){
			for (i=0;i<4;i++){
				cout<<a[i];
			}
			cout<<" ="<<decimal<<endl;
			for (i=0;i<4;i++){
				cout<<b[i];
			}
			cout<<" ="<<decimal2<<endl;
		}
		void comparing(){
			if(decimal==decimal2){
				cout<<"Both are equal\n";
			}
			else if(decimal>decimal2){
				cout<<decimal<<" is greater\n";
			}
			else{
			cout<<decimal2<<" is greater\n";
			}
		}
		
};
int main(){
	int a[4],b[4];
	compare c;
	cout<<"Enter two Binary Numbers\n";
	cout << "Enter the first 4-bit binary number (bit by bit):" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Bit " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "Enter the second 4-bit binary number (bit by bit):" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Bit " << i + 1 << ": ";
        cin >> b[i];
    }
	c.convert(a,b);
	c.show(a,b);
	c.comparing();
	return 0;
	
}