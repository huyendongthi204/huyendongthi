#include<iostream>
#include<string.h>
using namespace std;
struct Ngay{
	int ngay, thang , nam;
};
class qli{
	private:
		char moto[10], loai[25];
		Ngay ngaysx;
		int soluong, gia1,vat, tong;
	public:
		qli(char moto[10]="",char loai[25]="" ,int ngay=0, int thang=0, int nam=0, int soluong=0 , int gia1=0, int vat=0, int tong=0){
			strcpy(this->moto, moto);
			this-> ngaysx.ngay = ngay;
			this->ngaysx.thang = thang; 
			this->ngaysx.nam = nam ;
			this->soluong =soluong;
			this->gia1= gia1;
		}
		friend istream& operator >> (istream& in , qli &a){
			cout<<"\nnhap ma o to: ";
			in.getline(a.moto, 10);
			fflush(stdin);
			cout<<"\nnhap ngay san xuat: ";
			in>>a.ngaysx.ngay;
			cout<<"\nnhap thang san xuat : ";
			in>>a.ngaysx.thang;
			cout<<"\nnhap nam san xuat: ";
			in>>a.ngaysx.nam;
			cout<<"\nnhap so luong: ";
			in>>a.soluong;
			cout<<"\nnhap gia 1 chiec oto: ";
			in>>a.gia1;
			fflush(stdin);
		
		}
		friend ostream& operator << (ostream& out, qli a){
			cout<<"\nma o to: ";
			out<<a.moto;
			cout<<"\nngay san xuat : ";
			out<<a.ngaysx.ngay;
			cout<<"\nthang san xuat: ";
			out<<a.ngaysx.thang;
			cout<<"\nnam  san xuat: ";
			out<<a.ngaysx.nam ;
			cout<<"\nso luong: ";
			out<<a.soluong;
			cout<<"\ngia 1 chiec oto: ";
			out<<a.gia1;
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
		
	
		
		
};
