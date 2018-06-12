#include <iostream>

using namespace std;

int main() {
  int main_array[15] = {1,2,3,4,5,6,7,8,9};
  int length_array = (sizeof(main_array) / sizeof(*main_array));
  int array_idx = 0;
  int modify = 0, to_modify = 0; 
  bool change = false, find= true;
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

  cout << "que elemento quiere eliminar ? (indique el indice de este)";
  cin >> array_idx;

  for (int i = 0; i < length_array ; ++i)
  {
    if ( array_idx == i + 1) {
      change = true;
    }

    if ( change ) {
      main_array[ i ] = main_array[ i+1 ];
    }
  }


  for (int i = 0; i < length_array ; ++i)
  {
    cout << main_array[i]; 
  }

}