#include <iostream>

using namespace std;

int main() {
  int main_array[15] = {1,2,3,4,5,6,7,8,9};
  int length_array = (sizeof(main_array) / sizeof(*main_array));
  int array_idx = 0, search = 0;
  bool find= false;
  int cin_number = 0;
  cout << "ingrese los numero a continuacion";

  for (int i = 0; i < length_array; ++i)
  {
    cin >> cin_number;
    main_array[i] = cin_number;

  }

  for (int i = 0; i < length_array ; ++i)
  { 
    cout << main_array[i] << endl; 
  }
   
  cout << " que numero quieres buscar ? ";
  cin >> search;
  for ( int i =0; i < length_array; i++) {
    if ( search == main_array[i]) {
      cout<< "el numero " << search << " si existe en el array"<< endl;
      //find = true;
    break;
    }
  }
  if (find) {
    cout<< "el numero" << search << "no existe en el array";  
  }


  for (int i = 0; i < length_array ; ++i)
  {
    cout << main_array[i] << endl; 
  }

}