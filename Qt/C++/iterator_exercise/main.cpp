#include <iostream>
#include <vector>
#include <strings.h>
#include <cstddef>
#include <list>
#include <map>
#include <queue>
//#include <fill>
using namespace std;


int main ()
{
vector<int> myvector;

for (int i=1; i<=5; i++) myvector.push_back(i);
for (vector<int>::iterator it = myvector.begin() ;
it != myvector.end();
++it)
cout << ' ' << *it;

  std::cout << "myvector backwards using crbegin et crend:";
  for (auto bit = myvector.crbegin(); bit != myvector.crend(); ++bit)
  std::cout << ' ' << *bit;

  std::cout << '\n';


  std::cout << "myvector contains on begin:";
  for (std::vector<int>::iterator it2 = myvector.begin(); it2 != myvector.end(); ++it2)
    std::cout << ' ' << *it2;

//Iterator on liste

  list <string> liste;
  liste.push_back("Loto");
  liste.push_front("Oluwasayo");
  liste.push_back("Zoe");
  liste.sort();
  liste.reverse();

  for(list<string>::iterator it = liste.begin(); it!=liste.end();
    it++)
    std::cout <<*it<<endl;

//Iterator using map

  map<std::string,int> Age;
  Age["Pierre"] = 37;
  Age["Marie"] = 65;
  Age["Jennifer"] = 24;

  for (map<string,int>::iterator it=Age.begin();
  it!=Age.end(); ++it)
  cout << it->first <<" => "<< it->second<< endl;

// Fill with queue

//    std::queue<int> first_queue;
//    int myint;

//      std::cout << "Please enter some integers (enter 0 to end):\n";

//      do {
//        std::cin >> myint;
//        first_queue.push (myint);
//         }
//      while (myint);
//      std::cout << "myqueue contains: ";
//      while (!first_queue.empty())
//      {
//        std::cout << ' ' << first_queue.front();
//        first_queue.pop();
//      }
//      std::cout << '\n';

// std::copie

      int init[]={10,20,30,40,50,60};
      std::vector<int> vect(7);
      std::copy (init, init+7,vect.begin());

      std::cout << "vect contains:";
        for (std::vector<int>::iterator it = vect.begin(); it!=vect.end(); ++it)
          std::cout << ' ' << *it;

return 0;
}
