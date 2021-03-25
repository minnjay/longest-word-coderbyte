#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

string LongestWord(string sen) {
  
  // code goes here

  stringstream ss(sen);
  vector<string> svec;
  while(ss.good())
  {
    string sub;
    getline(ss, sub, ' ');
    svec.push_back(sub);
  }

  string temp;
  for(int i = 0; i<svec.size(); i++)
  {
    temp = "";
    for(int a = 0; a<svec[i].length(); a++)
    {
      if(svec[i][a] >=65 && svec[i][a] <=90 || svec[i][a] >=97 && svec[i][a] <=122 || svec[i][a] >=48 && svec[i][a] <=57)
      {
        temp += svec[i][a];
      }
    }
    svec[i] = temp;
  }

  int maxLen = svec[0].length();
  int index = 0;
  for(int i = 0; i<svec.size(); i++)
  {
    if(maxLen < svec[i].length())
    {
      maxLen = svec[i].length();
      index = i;
    }
  }



  return svec[index];

}

int main(void) { 
   
  // keep this function call here
  cout << LongestWord(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
