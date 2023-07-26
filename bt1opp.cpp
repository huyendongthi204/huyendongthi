#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class GV{
	private:
		char ht[30], bc[15],cn[20];
		int tuoi;
		float bl,lcb;
	public:
		
		void nhapthongtin(){
			cout<<"\nnhap ho ten: ";
			cin.getline(ht,30);
			cout<<"\nnhap bang cap: ";
			cin.getline(bc,15);
			cout<<"\nnhap chuyen nghanh: ";
			cin.getline(cn,20);
			fflush(stdin);
			cout<<"\nnhap tuoi: ";
			cin>>this->tuoi;
			cout<<"\nnhap bac luong: ";
			cin>>this->bl;
			fflush(stdin);
				
		}
		
		float get_luong(){
			lcb=bl*610;
			return this->lcb;
		}
		void xuatthongtin(){
			cout<<setw(30)<<this->ht
			    <<setw(15)<<this->bc
			    <<setw(20)<<this->cn
			    <<setw(20)<<this->tuoi
			    <<setw(30)<<this->bl
			    <<setw(30)<<this->lcb<<endl;
			    	    
		}		
		
};

void nhap(GV a[], int &n){
	for(int i=0; i<n; i++){
		cout<<"\ngiao vien thu : "<<i+1<<endl;
		a[i].nhapthongtin();
	
	}
}
void tieude(){
	cout<<setw(30)<<"HO VA TEN "
	    <<setw(15)<<" BANG CAP "
	    <<setw(20)<<" CHUYEN NGANH "
	    <<setw(20)<<" TUOI "
	    <<setw(30)<<" BAC LUONG "
	    <<setw(30)<<" LUONG CO BAN"<<endl;
}
void xuat(GV  a[], int n){
	for(int  i=0; i<n; i++){
		a[i].xuatthongtin();
	}
}

void  showluong(GV a[], int &n){
	for(int i=0; i<n; i++){
		if(a[i].get_luong() < 2000){
			a[i].xuatthongtin();
   
		}
	}


}


int main(){
	int n;
	cout<<"\nnhap n giao vien: ";cin>>n;
	fflush(stdin);
	GV a[n];
	cout<<"\nnhap thong tin giao vien: ";
	nhap(a,n);
	cout<<"\nxuat thong tin: "<<endl;
	tieude();
	xuat(a,n);
	cout<<"\ndanh sach giao vien co tien luong nho hon 2000: "<<endl;
	tieude();
	showluong(a,n);
	
}