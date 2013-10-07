#include "iostream"
#include "string"
using namespace std;
class Hello
{
  public:
  Hello()
  {
  }
  void say(string str)
  {
   cout<<str<<endl;
  }

};
int main()
{
  Hello hello;
  hello.say("Hello github!");
  return 0;
}
