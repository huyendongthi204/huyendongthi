#include<iostream>
#include<string.h>
using namespace std;
class ps{
	private: 
	int tuso;
	float mauso;
	public:
		void ps(int tuso, float mauso){
			this->tuso = tuso;
			this->mauso = mauso;
		}
		
		void nhap(){
			cout<<"\nnhap tu so: ";
			cin>>tuso;
			cout<<"\nnhap mau so: ";
			while(mauso==0){
				cout<<" khong hop le: ";
				cin>>mauso;
			}
		}
		void xuat(){
			cout<<"so thuc la: "<<tuso<<"/"<<mauso<<endl;
		}
};


int main(){
	ps a(29,30);
	a.nhap();
	a.xuat();
	
	
	
}