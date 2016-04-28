#include <iostream>
#include <cstdlib>

using namespace std;

int fib(int n)
{
  if(n<3)
    return 1;

  return fib(n-2)+fib(n-1);
}

int main (int argc, char ** argv)
{
int n=0;

cout << "\tObliczanie wyrazu ciagu"<<endl;

 if (argc >= 2)
  {
    n = atoi(argv[1]);
  }
   else
  {
    cout << "Ktory wyraz ciagu mam obliczyc?: ";
    cin >> n;
  }

cout<<n<<" wyraz ciagu ma wartosc "<<fib(n)<<endl;
}
