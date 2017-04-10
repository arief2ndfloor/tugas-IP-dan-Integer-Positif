#include <iostream>
using namespace std;

bool iswithinrange (float ip, int max, int min);
void cetak ();

float ip, rataip;
int jmlh_mhs, mhs_lulus, mhs_tdklulus;
bool valid;


int main() {
	do {
		
		cout << "Masukan Nilai : ";
		cin >> ip;
		
	if (valid){
		if (ip >= 2.75){
		mhs_lulus++;
		
	} else{
		mhs_tdklulus++;	
		}
		rataip = rataip + ip;
		jmlh_mhs++;
	} else{
		cout << "************************" << endl;
		cout << "Tidak Ada Data" << endl;
	}
}

     while (ip != -999);
     cetak ();
}
bool iswithinrange (float ip, int max, int min){
	if (ip > max || ip <= 0){
		return false;
	}
        return true;
}

void cetak (){
	   
	    cout << "*************************" << endl;
		cout << "Banyaknya Mahasiswa : " << jmlh_mhs << endl;
		cout << "Banyaknya Ysng Lilus : " << mhs_lulus << endl;
		cout << "Banyaknya Yang Tidak Lulus : " << mhs_tdklulus << endl;
		cout << "Rata-rata Nilai IP : " << (rataip / jmlh_mhs) << endl;
}
