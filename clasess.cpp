#include <iostream>
using namespace std;

class Demon{
  private:
    string Name;
    string Hability;
    string Sin;
    bool IsOnVacation;

public:
    Demon(string name, string hability, string sin){
      Name = name;
      Hability = hability;
      Sin = sin;
      IsOnVacation = false;
    }

    void getCharacter(){
      cout << "This is " << Name << " has the hability to " << Hability << endl;
    }
    void onVacation(){
      cout << Name << " On vacation"<<endl;
      IsOnVacation = true;
    }
    void notOnVation(){
      cout << Name << " On the job "<<endl;
      IsOnVacation = false;
    }
    void checkDemon(){
      if(IsOnVacation){
        cout << Name << " is on vacation " <<endl;
      }
      else{
        cout << Name << " is working " <<endl;
      }
    }
};

int main(){
  Demon luci("Lucifer", "Kill people", "gula");
  Demon bafomed("Bafoment", "be cool", "evil");

  luci.checkDemon();
  luci.onVacation();
  luci.checkDemon();
  luci.notOnVation()
  luci.checkDemon();
  
}