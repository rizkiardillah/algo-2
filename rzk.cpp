#include <iostream>
using namespace ::std;

float hitung (float uts,float uas,float ts,float absen){
    float hasil;
    hasil = (uts*0.2)+(uas*0.3)+(ts*0.35)+(absen*0.15);
    if(hasil>81){cout<<"nilai anda: A";}
    else if (hasil >=61){cout <<"nilai anda :B";}
    else if (hasil >=41){cout <<"nilai anda :C";}
    else if (hasil >=21){cout <<"nilai anda :D";}
    else {cout<<"nilai anda :E";}
}
struct jumlah{
float uts,uas;
double ts,absen,total;
};
main (){
    int uts,uas,ts,absen;
    jumlah nilai [10];

cout <<" masukan nilai uts\t :";
cin  >>uts;
cout <<" masukan nilai uas\t :";
cin  >>uas;
cout <<" masukan nilai tugas\t :";
cin  >>ts;
cout <<"masukan nilai absen\t :";
cin  >>absen;
hitung (uts,uas,ts,absen);
}



/*for (int i=0; i<=10; i++){
nilai [i].uts   = inputan ( "uts"  );
nilai [i].uas   = inputan ( "uas"  );
nilai [i].ts    = inputan ( "ts"   );
nilai [i].absen = inputan ( "absen");
nilai {i}.total=nilai{i}.uts*0.2 + nilai {i}.0.3 + nilai {i}.ts*0.35 + nilai*0.15;
cout <<" nilai :" <<nilai [1].total<<endl;
huruf(nilai[i].total);
*/

































