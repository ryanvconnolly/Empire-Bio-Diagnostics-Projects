#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility>


using namespace std;

string handheld_name;
string newv;
string versionnum;
string status;
string det;
string details;
string company;

void create(string details, string filename){
    ofstream writer;
    writer.open(filename, ios::app);

    writer << details << "     | " << endl;
    writer.close();   
}

void write_csv(string filename, vector<pair<string, vector <int>>> dataset){
    // Make a CSV file with one or more columns of integer values
    // Each column of data is represented by the pair <column name, column data>
    //   as std::pair<std::string, std::vector<int>>
    // The dataset is represented as a vector of these columns
    // Note that all columns should be the same size

    
    string company_file;

    if (company == "ruhof"){
        company_file = "ruhof.csv";
    } else if (company == "getinge"){
        company_file = "getinge.csv";
    } else if (company == "promega"){
        company_file = "promega.csv";
    }
    else {
        cout << "invalid input" << endl;
    }

    ofstream MyFile(company_file);

    //send column names to file

    

}

void questions(string company){
/*
    string company_file;

    if (company == "ruhof"){
        company_file = "ruhof.csv";
    } else if (company == "getinge"){
        company_file = "getinge.csv";
    } else if (company == "promega"){
        company_file = "promega.csv";
    }
    else {
        cout << "invalid input" << endl;
    }

    ofstream MyFile(company_file);*/
    cout << "please enter the name of the handheld" << endl;
    cin >> handheld_name;
    MyFile << handheld_name << "     |  ";
    cout << "thank you." << endl;
    cout << "is the handheld you are entering the latest version" << endl;
    cin >> newv;

    if (newv == "yes") {

        MyFile << "5.9.6 " << "    | ";

    }

    if (newv == "no"){
        cout << "please enter the version number of the handheld." << endl;
        cin >> versionnum;
        MyFile << versionnum << "       | ";
    }

    cout << "ok. now please enter the status of the handheld." << endl;
    cin >> status;
    MyFile << status << "     | ";

    cout << "thank you. are there any other details you would like to enter about this handheld?" << endl;
    cin >> det;

    if (det == "yes") {
        
        cout << "ok. please enter the details now." << endl;
        cin.ignore(1000, '\n');
        getline(cin, details);
        MyFile << details << "    | ";

        MyFile.close();
    }

    else if (det == "no") {

        cout << "ok." << endl;
        MyFile.close();
    }

    else {
        cout << "invalid response. please try again." << endl;
    }
 
 cout << "all done. have a great day!" << endl;
}

int main() {

string company;

ofstream writer;
ifstream reader;



    cout << "hello. what company is this handheld being tested for?" << endl;
    cin >> company;

    questions(company);

return 0; 
}