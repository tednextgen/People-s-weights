#include <iostream>
#include <iomanip>              // For setprecision
#include <vector>
using namespace std;

int main() {
   double total = 0;
   double max = 0; 
   vector<double> array(5);
   for(int i = 0; i < 5; i++){
      cout << "Enter weight " << i+1 << ":" << endl;
      cin >> array.at(i);
   }
   cout << "You entered: ";
   for(int j = 0; j < 5; j++){
      cout << fixed << setprecision(2) << array.at(j);
      cout << " ";
      total += array.at(j);
      if(max < array.at(j)){
         max = array.at(j);
      }
   }
   cout << endl << endl;
   cout << "Total weight: " << total << endl;
   cout << "Average weight: " << total/5 << endl;
   cout << "Max weight: " << max << endl;

   return 0;
}
