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
		int gia1;
	public:
		ql(char *moto=" ", char *loai=" ", int ngay=1, int thang= 2, int nam=2004, int soluong =2, int gia1=3){
			strcpy(this->moto= moto);
			strcpy(this->loai= loai);
			this->ngaysx.ngay= ngay;
			this->ngaysx.thang =thang;
			this->ngaysx.nam =nam ;
			this->soluong=soluong;
			this->gia1= gia1;
			
			
		}
};
int main(){
	
	
}