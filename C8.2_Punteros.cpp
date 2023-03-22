#include <iostream>
using namespace std;


main(){
	int fil=0, col=0, **pm_notas;
	cout<<"Ing. No. de estudiantes: ";
	cin>>fil;
	cout<<"Ing. No. de notas: ";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i; i<fil; i++){
		cout<<"___________Estudiante________________"<< i<<endl;
		pm_notas[i]= new int (col);
		for (int ii=0;ii<fil; ii++){
			cout<<"Nota: "<<ii<<" : ";
			cin >>*(*(pm_notas+i)+ii);
		}
		cout<<"___________________________________"<< endl;
		
	}
		

	cout<<"--------------Mostrar Notas------------";
		for(int i; i<fil; i++){
			for (int ii=0;ii<col; ii++){
				cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"___________________________________"<< endl;
		
	}
	for(int i=0; i<fil;i++)	{
		delete [] pm_notas [i];
	}
		delete [] pm_notas;
	system("pause");
}

/*
// puntero con asignacion de memoria dinamicañ
// new = reservar un espacio en memoria 
// delete [] = liberar la memoria
main(){
	
	int total=0, *p_notas;
	p_notas = new int[total];
	char res;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor:(s/n) ";
		cin>>res;
		
		
	}while(res=='s'||res=='S');
	
	cout<<"---------- Mostrar notas ----------"<<endl;
	for(int i=0; i<total; i++){
		cout<<"Nota ("<<i<<"):"<<*p_notas<<endl;
		p_notas++;
				
			}
			delete[] p_notas;
	
	
	system("pause");
}
*/


/*main(){
	int total=0;
	int notas[3];
	char res;
	int *p_notas = notas;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor:(s/n) ";
		cin>>res;
		
		
	}while(res=='s'||res=='S');
	
	cout<<"---------- Mostrar notas ----------"<<endl;
	for(int i=0; i<total; i++){
		cout<<"Nota ("<<i<<"):"<<*p_notas<<endl;
		p_notas++;
				
			}
	
	
	system("pause");
}/*

/*
main(){
	int edad, *p_edad;
	p_edad =&edad;
	
	cout<<"Ingrese edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if (*p_edad>18){
		cout<<"Mayor de edad"<<endl;
		
	}else{
		cout<<"Menor de edad"<<endl;
	}
	
	system("pause");
}
*/

// puntero con asignacion de memoria dinamicañ
// new = reservar un espacio en memoria 
// delete [] = liberar la memoria

/*main(){
	int total=0;
	int notas[3];
	char res;
	int *p_notas = notas;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor:(s/n) ";
		cin>>res;
		
		
	}while(res=='s'||res=='S');
	
	cout<<"---------- Mostrar notas ----------"<<endl;
	for(int i=0; i<total; i++){
		cout<<"Nota ("<<i<<"):"<<*p_notas<<endl;
		p_notas++;
				
			}
	
	
	system("pause");
}*/
