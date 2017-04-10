#include <iostream>
#include <conio.h>

using namespace std;


//prototype//
    void input ();
	void pilihanA ();
	void pilihanB ();
	
//variable global//
    int angka, jumlah, max, min, pilihan;


main (){
	 while (pilihan != 3){
		    cout << "*****************************\n";
			cout << "           MENU\n";
			cout << "*****************************\n";
			cout << " 1. Cari Nilai Terkecil\n";
			cout << " 2. Cari Nilai Terbesar\n";
			cout << " 3. Keluar\n";
			cout << "*****************************\n";
			
			cout << "Pilihan Anda : ";
			
			cin >> pilihan;
			
			if (pilihan == 1){
				pilihanA ();
			
			} else if (pilihan == 2){
				pilihanB ();
				
			}
	 }
}	

    void pilihanA(){
		int angka, jumlah, max, min;
				 
			cout << "1. Mencari Nilai Terkecil" << endl;
			cout << endl;
			cout << "Masukan jumlah angka : "; cin >> jumlah;
			cout << endl;
			
			for (int i = 1; i <= jumlah; i++){
				
			cout << "Masukan Angka : "; cin >> angka;

			if ( i == 1 ){
				jumlah;
				min = angka;
				max = angka;
			
			} 
			else if ( min > angka ){
				min = angka;
				
			}
			
}
			
			cout << endl;
			cout << "Nilai Terkecil : " << min << endl;
			cout << "Jumlah : " << jumlah << endl;
			
			}
	
	void pilihanB(){
		int angka, jumlah, max, min;
		    
			cout << "2. Mencari Nilai Terbesar" << endl;
			cout << endl;
			cout << "Masukan jumlah angka : "; cin >> jumlah;
			cout << endl;
			
			for(int i = 1; i <= jumlah; i++){
				
			cout << "Masukan Angka : "; cin >> angka;

			if ( i == 1){
				jumlah;
				min = angka;
				max = angka;
		
		    } else if ( max < angka ){
				max = angka;
			}
			
}
	
	        cout << endl;
			cout << "Nilai Terbesar : " << max << endl;
			cout << "Jumlah : " << jumlah << endl;
            
	        
}
	        
			
