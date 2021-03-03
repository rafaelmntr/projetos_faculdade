#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include<iostream>
#include <string>
#include <fstream>

using namespace std;

class Patient{
	public:
		string name;
		string clinic;
		Patient(string c, string n){
			clinic = c;
			name = n;
		}
	void registerPatient(){
		cout << "registrando paciente...";
		ofstream file;
		
		file.open("PATIENTS.csv", ios::app);
		file << this->clinic + "," + this->name +'\n';

		file.close();
	}
};

#endif
