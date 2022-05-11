#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;


vector<int> factors(int n){
  vector<int> ret;
  //try all numbers from 2 to n
  for (int divisor = 1; divisor <= (n/2); divisor++) {
    if((n%divisor) == 0){
      ret.push_back(divisor);
      //cout << "Divisor: " << divisor << endl;
    }
  }
  return ret;
}

bool found_f(vector<int> v){
  bool found = true;
  for (int i = 0; i < 20; i++) {
    if((v[i]-1) != i){
      return false;
    }
  }
  return true;
}



int main()
{
  bool found = false;
  int n=2;

  while(!found){
    //cout << "Testing number: " << n << endl;
    vector<int> aux = factors(n);
    found = found_f(aux);
    n++;
  }
  cout << "The number is: " << (n-1) << endl;

}


/* --- main for testing functions work properly
int main(){
  vector<int> aux = factors(2520);
  for (int i = 0; i < aux.size(); i++) {

    cout << aux[i] << endl;
  }

  cout << found_f(aux) << endl;


} */
