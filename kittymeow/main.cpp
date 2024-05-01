#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
  std::string tImg = { " /\\_/\\\n" };
  std::string mImg = { "( o.o )\n" };
  std::string bImg = { " > ^ <\n" };
  std::string spacing = { "   " };
  std::string inp = { "" };
  std::string ts = { "" };
  
  char sMark = '"';

  inp += argv[1];
  for(size_t i = 0; i < inp.length() + 2; i++)
  {
    ts += " "; 
  }
  
  std::cout << spacing << ts << spacing << tImg << spacing << sMark << argv[1] << sMark << spacing << mImg << spacing << ts << spacing << bImg;

}
