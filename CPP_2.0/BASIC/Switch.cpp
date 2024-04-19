#include<iostream>
using namespace std;

int main() {
    int hundred = 100, fifty = 50, ten = 10, one = 1;
    int ttlamnt = 1;
    int amount ;
    cin>>amount;
    switch (ttlamnt) {
    case 1: {
            int hndnotes;
            hndnotes = amount/hundred;
            ttlamnt = amount - hndnotes*hundred;
            cout<<"hundred notes :" <<hndnotes<<endl;
              }
     case 2: {
                int fftynotes;
                fftynotes = ttlamnt/fifty;
                ttlamnt = ttlamnt- fifty*fftynotes;
                
                cout<<"fifty notes :"<<fftynotes <<endl; 
            }
     case 3 :
            { int tenn;
                    tenn= ttlamnt/ten;
                    ttlamnt = ttlamnt- ten*tenn;

                 cout<<"ten notes :" <<tenn<<endl;}
     case 4: 
                  {  int note1 ;
                    note1= ttlamnt/one;
                    ttlamnt = ttlamnt-one*note1;

                    cout<<"ones notes : "<<note1 <<endl;
                  }

                 break;

    }
    }

