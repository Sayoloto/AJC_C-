#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t

int main ()
{
  std::string str ("Lotolistical");
  int len_str = str.length();
  std::cout << len_str <<std::endl;
  for( int i = 0; i<5; i++)
  {
      std::string str2;
      std::cout << str.at(i)<< std::endl;
      //str2.append(str.at(i));
      //std::cout << str2<< std::endl;
   }

  //redo string exercise with iterator
  //std::string str ("Lotolistical");
  //int len_str = str.length();
  //std::cout << len_str <<std::endl;
  //for( std::string = 0; i<5; i++)
  //{
    //  std::string str2;
     // std::cout << str.at(i)<< std::endl;
      //str2.append(str.at(i));
      //std::cout << str2<< std::endl;


  return 0;
}
