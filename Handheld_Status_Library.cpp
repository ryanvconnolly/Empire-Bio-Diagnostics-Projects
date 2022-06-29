#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string handheld_name;
string newv;
string versionnum;
string status;
string det;
string details;

void create(string details, string filename){

    ofstream writer;
    writer.open(filename, ios::app);

    writer << details << "     | " << endl;
    writer.close();   
}

int main() {

string company;

ofstream writer;
ifstream reader;

ofstream MyFile("ruhof.csv");
ofstream MyFile1("getinge.csv");
ofstream MyFile2("promega.csv");

    cout << "hello. what company is this handheld being tested for?" << endl;
    cin >> company;

if (company == "ruhof"){

    
    cout << "please enter the name of the handheld" << endl;
    cin >> handheld_name;
    writer.open("ruhoff.txt", ios::app);
    MyFile << handheld_name << "    | ";
    cout << "thank you." << endl;
    cout << "is the handheld you are entering the latest version" << endl;
    cin >> newv;

    if (newv == "yes") {

        MyFile << "5.9.6     | ";
    }

    if (newv == "no"){
        cout << "please enter the version number of the handheld." << endl;
        cin >> versionnum;
        MyFile << versionnum << "      | ";
    }

    cout << "ok. now please enter the status of the handheld." << endl;
    cin >> status;
    MyFile << status << "    | ";

    cout << "thank you. are there any other details you would like to enter about this handheld?" << endl;
    cin >> det;

    if (det == "yes") {
        
        cout << "ok. please enter the details now." << endl;

        //cin.ignore(2, "/n");

        getline(cin, details);
    
        create(details, "ruhof.csv");

        cout << "ok. all done!";

    }

    if (det == "no") {

        cout << "ok. all done!" << endl;
        MyFile.close();
        
    }


}


if (company == "getinge"){

    cout << "please enter the name of the handheld" << endl;
    cin >> handheld_name;
    MyFile1 << handheld_name << "      | ";
    cout << "thank you." << endl;
    cout << "is the handheld you are entering the latest version" << endl;
    cin >> newv;

    if (newv == "yes") {

        MyFile1 << "5.9.6     | ";
    }

    if (newv == "no"){
        cout << "please enter the version number of the handheld." << endl;
        cin >> versionnum;
        MyFile1 << versionnum << "    | ";
    }

    cout << "ok. now please enter the status of the handheld." << endl;
    cin >> status;
    MyFile1 << status << "     | ";

    cout << "thank you. are there any other details you would like to enter about this handheld?" << endl;
    cin >> det;

    if (det == "yes") {
        
        cout << "ok. please enter the details now." << endl;
        cin >> details;
        MyFile1 << details << "   | ";

        MyFile1.close();
    }

    if (det == "no") {

        cout << "ok." << endl;
        MyFile1.close();
    }
 
 cout << "all done. have a great day!" << endl;

}

if (company == "promega"){

    cout << "please enter the name of the handheld" << endl;
    cin >> handheld_name;
    MyFile2 << handheld_name << "     |  ";
    cout << "thank you." << endl;
    cout << "is the handheld you are entering the latest version" << endl;
    cin >> newv;

    if (newv == "yes") {

        MyFile2 << "5.9.6 ";
    }

    if (newv == "no"){
        cout << "please enter the version number of the handheld." << endl;
        cin >> versionnum;
        MyFile2 << versionnum << "       | ";
    }

    cout << "ok. now please enter the status of the handheld." << endl;
    cin >> status;
    MyFile2 << status << "     | ";

    cout << "thank you. are there any other details you would like to enter about this handheld?" << endl;
    cin >> det;

    if (det == "yes") {
        
        cout << "ok. please enter the details now." << endl;
        cin >> details;
        MyFile2 << details << "    | ";

        MyFile2.close();
    }

    if (det == "no") {

        cout << "ok." << endl;
        MyFile2.close();
    }
 
 cout << "all done. have a great day!" << endl;

}
return 0; 
}