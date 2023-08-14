#include<iostream>
#include<string.h>
using namespace std;
struct nsx{
	int ngay,thang,nam;
};
class ql{
	private:
		char moto[10],loai[25];
		nsx ngaysx;
		int soluong;
		int gia1,vat, tong;
	public:
		ql(char moto[10] = "", char loai[25]=" m2", int ngay=1, int thang= 2, int nam=2004, int soluong =2, int gia1=3){
			strcpy(this->moto, moto);
			strcpy(this->loai, loai);
			this->ngaysx.ngay= ngay;
			this->ngaysx.thang =thang;
			this->ngaysx.nam =nam ;
			this->soluong=soluong;
			this->gia1= gia1;
			
		}
		friend istream& operator >> ( istream& in , ql &a){
			cout<<"\nnhap ma o to: ";
			in.getline(a.moto,10);
			cout<<"\nnhap loai oto: ";
			in>>a.loai;
			fflush(stdin);
			cout<<"\nnhap ngay san xuat:";
			in>>a.ngaysx.ngay;
			cout<<"\nnhap thang san xuat: ";
			in>>a.ngaysx.thang;
			cout<<"\nnhap nam san xuat: ";
			in>>a.ngaysx.nam;
			cout<<"\nnhap so luong: ";
			in>>a.soluong;
			cout<<"\nnhao gia 1 san pham: ";
			in>>a.gia1;
			fflush(stdin);
			return in;
		}
		friend  ostream& operator << (ostream& out, ql a){
			cout<<"\n ma o to:"<<a.moto<<endl;
			cout<<"\nloai: "<<a.loai<<endl;
			cout<<"\nngay sx: "<<a.ngaysx. ngay;
			cout<<"\nthang sx : "<<a.ngaysx.thang;
			cout<<"\nnam sx: "<<a.ngaysx.nam<<endl;
			return out;
		}
			float tinhthue(){
			if(this->gia1> 10000){
			    this->vat=0.1;
			}
			else if( this->gia1 > 7000){
				this->vat= 0.07;
			}
			else if(this->gia1> 3000){
				this->vat=0.05;
			}
			return vat;
		}
		float tongtien(){
			this->tong= soluong *gia1 - tinhthue();
			return tong;
		}
		bool operator > (ql a){
			return this->tongtien()>a.tongtien();
		}
		float get_tongtien(){
			return this->tong;
		}	
		
};
void nhapds(ql a[], int &n){
	for(int i=0; i<n; i++){
		cout<<"\no to thu:"<<i+1<<endl;
		cin>>a[i];
	}
}


void xuatds(ql a[], int &n){
	for(int i=0; i<n; i++){
		cout<<"\nxuat danh sach: ";
		cout<<a[i];
	}
}
void sapxep(ql a[], int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				swap(a[i], a[j]);
			}
		}
	}
	xuatds(a,n);
}
int main(){
	int n;
	cout<<"\nnhap n phan tu: ";
	cin>>n;
	fflush(stdin);
	ql a[n];
	nhapds(a,n);
	xuatds(a,n);
	cout<<"\ndanh sach sau khi sap xep la: "<<endl;
	sapxep(a,n);
	
	
	
	
	
	
	
	
	
}