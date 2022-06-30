#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void create()
{
    // file pointer
    fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("ruhof.csv", ios::out | ios::app);
  
    cout << "please enter the name of the handheld." << endl;
  
    int i;
    string version;
    string status, answer, details;
    string name;

  
    // Read the input
    for (i = 0; i < 5; i++) {
  
        cin >> name;
        fout << name << " , ";
        cout << "is this handheld the lastest version?" << endl;
        cin >> answer;

        if (answer == "yes"){

            version = "5.9.6";

        }
        else if (answer == "no"){

            cout << "ok. please enter the version number now." << endl;
            cin >> version;
        }
        else{

            cout << "invalid entry. please try again" << endl;
        }
        
        fout << version << " , ";

        cout << "what is the status of " << name << "?" << endl;

        cin.ignore(1000, '\n');
        getline (cin, status);

        fout << status << " , ";

        cout << "ok. are there any additional details about this device you would like to enter?" << endl;
        cin >> answer;

        if(answer == "yes"){

            cout << "ok. please enter any details now." << endl;
            cin.ignore(1000, '\n');
            getline (cin, status);

            fout << details << endl;


        }



        
    
    }
}

int main(){


    create();
    return 0;

}