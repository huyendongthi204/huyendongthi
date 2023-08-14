#include<iostream>
#include<string.h>
using namespace std;
struct ngaythang{
	int ngay, thang, nam;
};
class qli{
	private:
	char moto[10], loai[25];
	int n, t, nam;
	int soluong;
	int gia,vat, tongtien;
	public:
	  qli(char moto[10]="dvs", char loai[25]="h2", int n=1, int t =2, int nam=3){
	  	strcpy(this->moto,moto);
	  	strcpy(this->loai,loai);
	  	this->n= n;
	  	this->t=t;
	  	this->nam=nam;
	  	this->soluong=soluong;
	  	this->gia=gia;
	  }
	  void nhap(){
	  	cout<<"\nnhap ma o to: ";
	  	cin.getline(moto, 10);
	  	cout<<"\nnhap loai: ";
	  	cin.getline(loai, 25);
	  	fflush(stdin);
	  	cout<<"\nnhap ngay san xuat: ";
	  	cin>>n;
	  	cout<<"\nnhap thang san xuat: ";
	  	cin>>t;
	  	cout<<"\nnhap nam sana xuat: ";
	  	cin>>nam;
	  	cout<<"\nnhap so luong: ";
	  	cin>>soluong;
	  	cout<<"\nnhap gia: ";
	  	cin>>gia;
	  	fflush(stdin);
	  	
	  }
	  float tinhthue(){
	  	if(this->gia>1000){
	  		this->vat=0.1;
	  		return vat;
		  }
		  else if(this->gia>7000){
		  	this->vat=0.07;
		  	return vat;
		  }
		  else if( this->gia >3000){
		  	this->vat=0.05;
		  	return  vat;
		  }
	  }
	void xuat(){
		cout<<"\nma o to: "<<moto;
		cout<<"\nloai oto: "<<loai;
		cout<<"\nngay san xuat: "<<n;
		cout<<"\nthang san xuaat : "<<t;
		cout<<"\nnam san xuat: "<<nam;
		cout<<"\nso luong: "<<soluong;
		cout<<"\ngia 1 chiec: "<<gia;
		cout<<"\nvat: "<<tinhthue();
	}
	float get_tongtien(){
	     return this->tongtien;
	}
	float get_soluong(){
		return this->soluong;
	}
	float get_gia(){
		 return this->gia;
	}
	  
};
void nhapthongtin(qli a[], int &n){
	for(int i=0; i<n; i++){
		cout<<"\nnhap o to thu: "<<i+1<<endl;
		a[i].nhap();
	}
}
void tinhtongtien(qli a[], int n){
	for(int i=0; i<n; i++){
		a[i].get_tongtien()= a[i].get_soluong()*a[i].get_gia()-tinhthue();
	}
}
void xuatthongtin(qli a[], int n){
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
}



int main(){
	int n;
	cout<<"\nnhap n mat hang: "; cin>>n;
	qli a[n];
	cout<<"\nnhap tt: "<<endl;
	nhapthongtin(a,n);
	get_tongtien();
	cout<<"\nxuat thong tin: "<<endl;
	xuatthongtin(a,n);
	
}