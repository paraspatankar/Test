#include <iostream>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      long long k, n;
      cin >> n >> k;
      // if(k==1){
      //    cout<<"YES"<<endl;
      //    break;
      // }

      if (n % 2 == 0 || (n - k) % 2 == 0)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
   return 0;
}