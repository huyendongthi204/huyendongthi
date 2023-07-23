#include<iostream>
using namespace std;
class ps{
	private: 
	int tuso;
	float mauso;
	public:
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
	ps a;
	a.nhap();
	a.xuat();
	
	
}