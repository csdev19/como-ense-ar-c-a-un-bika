#include <iostream>

using namespace std;

int main() {
  int main_array[15] = {1,2,3,4,5,6,7,8,9};
  int length_array = (sizeof(main_array) / sizeof(*main_array));
  int modify = 0, to_modify = 0; 
  int cin_number = 0;
  cout << "ingrese los numero a continuacion";

  for (int i = 0; i < length_array; ++i)
  {
    cin >> cin_number;
  }

  for (int i = 0; i < length_array ; ++i)
  { 
    cout << main_array[i] << endl; 
  }


  cout << " que elemento quieres modificar ? ";
  cin >> modify;
  cout << " que numero quieres que sea ?" ;
  cin >> to_modify;

  for ( int i = 0; i < length_array ; i ++ ) {
    if ( i +1  == modify){ 
      main_array[i] = to_modify;
    }
  }

  for (int i = 0; i < length_array ; ++i)
  { 
    cout << main_array[i] << endl; 
  }

}