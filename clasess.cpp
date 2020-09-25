#include <iostream>
using namespace std;

class Demon{
  public:
    string Name;
    string Hability;
    string Sin;

    Demon(string name, string hability, string sin){
      Name = name;
      Hability = hability;
      Sin = sin;
    }

    void getCharacter(){
      cout << "This is " << Name << " has the hability to " << Hability << endl;
    }
};

int main(){
  Demon luci("Lucifer", "Kill people", "gula");
  Demon bafomed("Bafoment", "be cool", "evil");

  luci.getCharacter();
  bafomed.getCharacter();
}