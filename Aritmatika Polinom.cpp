#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct polinom {
	int pangkat,koef;
	string x;
};
polinom p1[5], p2[6], p3[2],kali[10],px[6];
int a,b=0,c=0;


void deklarasi_polinom() {
	p1[0].koef = 6;//p1
	p1[0].x = "x^";
	p1[0].pangkat = 8;
	p1[1].koef = 8;
	p1[1].x = "x^";
	p1[1].pangkat = 7;
	p1[2].koef = 5;
	p1[2].x = "x^";
	p1[2].pangkat = 5;
	p1[3].koef = 1;
	p1[3].x = "x^";
	p1[3].pangkat = 3;
	p1[4].koef = 15;
	p1[4].x = "x^";
	p1[4].pangkat = 0;
	p2[0].koef = 3;//p2
	p2[0].x = "x^";
	p2[0].pangkat = 9;
	p2[1].koef = 4;
	p2[1].x = "x^";
	p2[1].pangkat = 7;
	p2[2].koef = 3;
	p2[2].x = "x^";
	p2[2].pangkat = 4;
	p2[3].koef = 2;
	p2[3].x = "x^";
	p2[3].pangkat = 3;
	p2[4].koef = 2;
	p2[4].x = "x^";
	p2[4].pangkat = 2;
	p2[5].koef = 10;
	p2[5].x = "x^";
	p2[5].pangkat = 0;
	p3[0].koef = 1;//p3
	p3[0].x = "x^";
	p3[0].pangkat = 2;
	p3[1].koef = 5;
	p3[1].x = "x^";
	p3[1].pangkat = 0;
	cout<<"P1 = ";//menampilkan p1
	for(int i=0; i<5;i++){
		if(p1[i].x=="x^" && p1[i].pangkat!=0 && p1[i].koef!=1){
			cout<<p1[i].koef<<"x^"<<p1[i].pangkat<<" + ";
		}else if(p1[i].x=="x^" && p1[i].pangkat!=0){
			cout<<"x^"<<p1[i].pangkat<<" + ";
		} else{
			cout<<p1[i].koef;
		}
	}
	cout<<endl;
	cout<<"P2 = ";//menampilkan p2
	for(int i=0; i<6;i++){
		if(p2[i].x=="x^" && p2[i].pangkat!=0 && p2[i].koef!=1){
			cout<<p2[i].koef<<"x^"<<p2[i].pangkat<<" + ";
		}else if(p2[i].x=="x^" && p2[i].pangkat!=0){
			cout<<"x^"<<p2[i].pangkat<<" + ";
		} else{
			cout<<p2[i].koef;
		}
	}
	cout<<endl;
	cout<<"P3 = ";//menampilkan p3
	for(int i=0; i<2;i++){
		if(p3[i].x=="x^" && p3[i].pangkat!=0 && p3[i].koef!=1){
			cout<<p3[i].koef<<"x^"<<p3[i].pangkat<<" + ";
		}else if(p3[i].x=="x^" && p3[i].pangkat!=0){
			cout<<"x^"<<p3[i].pangkat<<" + ";
		} else{
			cout<<p3[i].koef;
		}
	}
	cout<<"\n\n";
}
void addition() {
	cout<<"P1 + P2 = ";
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(p1[i].pangkat==p2[j].pangkat){
				a=p1[i].koef+p2[j].koef;
				if(p1[i].pangkat!=0)
				cout<<a<<"x^"<<p1[i].pangkat<<" + ";
				else cout<<a<<" + ";
			} else b++;
		}
		if(b==6){
			cout<<p1[i].koef<<"x^"<<p1[i].pangkat<<" + ";
		} b=0;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<5;j++){
			if(p2[i].pangkat!=p1[j].pangkat){
			b++;
			} 
		}
		if(b==5){
			cout<<p2[i].koef<<"x^"<<p2[i].pangkat;if(i!=4)cout<<" + ";
		} b=0;
	}
	cout << endl;
}
void pengurangan() {
cout<<"P1 - P2 = ";
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(p1[i].pangkat==p2[j].pangkat){
				a=p1[i].koef-p2[j].koef;
				if(p1[i].pangkat!=0)
				cout<<a<<"x^"<<p1[i].pangkat<<" + ";
				else cout<<a<<" + ";
			} else b++;
		}
		if(b==6){
			cout<<p1[i].koef<<"x^"<<p1[i].pangkat<<" + ";
		} b=0;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<5;j++){
			if(p2[i].pangkat!=p1[j].pangkat){
			b++;
			} 
		}
		if(b==5){
			cout<<-p2[i].koef<<"x^"<<p2[i].pangkat;if(i!=4)cout<<" + ";
		} b=0;
	}
	cout << endl;
}

void perkalian() {
	for (int i=0;i<5;i++) {
		for (int j=0; j<2;j++) {
			kali[c].koef = p1[i].koef * p3[j].koef;
			kali[c].x = p1[i].x;
			kali[c].pangkat = p1[i].pangkat + p3[j].pangkat;
			c++;
		}
	}
	cout << "P1 * P3 = ";
	for (c=0;c<10;c++) {
		if (kali[c].pangkat == 2)
			kali[c].x = "x^";
		cout << kali[c].koef << kali[c].x << kali[c].pangkat;if(c<9)cout<<" + ";
	}
	cout << endl;
}
void turunan() {
	cout<<"P2' = ";
	for(int i=0;i<6;i++){
		if(p2[i].x=="x^" && p2[i].pangkat!=0 && p2[i].koef!=1){
			cout<<p2[i].koef*p2[i].pangkat<<"x^"<<p2[i].pangkat-1;
		} else{
			cout<<" ";
		}
		if(i<4)cout<<" + ";
	}
}

int main() {
	cout<<"Bilangan Polinom = "<<endl;
	deklarasi_polinom();
	cout<<"Operasi Aritmatika\n";
	addition();
	pengurangan();
	perkalian();
	turunan();
	return 0;
	}
	
