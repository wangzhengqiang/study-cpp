// ļCHAPTER1-1-2.cpp
#include <iostream>

using namespace std;

int main(int argc, char* argv[], char** env)
{

  for(int i = 0; i < argc; i++)
	  cout << "argv[" << i << "]: " << argv[i] << " \n";
  
  cout << "######################## \n";


  for(int i = 0; env[i]; i++)
	  cout << "env[" <<  i << "]: " << env[i] << " \n";

  return 0;
}
