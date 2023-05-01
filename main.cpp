#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int numero;

  do{
    cout << "Numero [1 - 10] : ";
    cin >> numero;
  }while(numero<1 or numero>10);

  //---- construimos la tabla
  cout << "\n";
  //---- cabera
  cout << setw(5) << "";
  for(int i=1; i<=10; i++)
    cout << setw(5) << i;
  cout << "\n";
  for(int n1=1; n1<=numero; n1++)
  {
    cout << setw(5) << n1;
    for(int n2=1; n2<=10; n2++)
      cout << setw(5) << n1*n2;
    cout << "\n";
  }

  return 0;
}
