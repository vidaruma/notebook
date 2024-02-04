#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
int main () {
    vector<string> ruls={"put"};
    string a;
    string b;


    int c;
    int p;
    int l;


    cout<<"commands listL: \n";
    cout<<" pr-your vector\n add-add \n del-delete \n del_m-delete many elements \n edit-redact your elements \n stop-stop program \n";
    cout<<"\n enter your commands :\n";
    for (int i;i<100;i++) {


        cin>>a;
        if (a=="pr") {
            for(int m=0;m<ruls.size();m++){
                cout<<m<<". ";
                cout<<ruls[m]<<"\n";

            }
            cout<<"OK \n";
        }
        if (a=="del") {
            cout<<"element in vector\n";
            cin>>c;
            if (c>=ruls.size()) {
                cout<<"no element in vector \n";
            }else {
                ruls.erase( next(ruls.begin(), c) );
            }

            cout<<"OK \n";
        }
        if (a=="del_m") {
            cout<<"how much  \n";
            cin>>p;
            cout<<"element in vector\n";
            cin>>l;
            for (int qu;qu<p;qu++) {
                 ruls.erase( next(ruls.begin(), l) );
            }
            cout<<"OK \n";
        }
        if (a=="add") {
            cout<<"element in vector \n";
            cin >> ws; getline(std::cin, b);
            ruls.push_back(b);
            cout<<"OK \n";
        }
        if (a=="edit") {
            string s;
            int h;
            cout<<"number of element \n";
            cin>>h;
            cout<<"element in vector\n";
            cin >> ws; getline(std::cin, s);
            ruls[h]=s;
            cout<<"OK \n";
        }
        if (a=="save"){
            ofstream outfile ("test.txt");
            for (int i=0; i<ruls.size(); i++) {
                outfile << ruls[i] << "\n";
            }
            outfile.close();
            cout<<"save completed" << "\n";
        }
        if (a=="stop") {
            break;
        }

}
}
