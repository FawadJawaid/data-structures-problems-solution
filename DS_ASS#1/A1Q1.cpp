
//Name: Muhammad Fawad Jawaid Malik
//Roll No. 11k-2116
//Section: B

#include<iostream>
#include<math.h>

using namespace std;

//Magic Class
class Magic
{
   public:
   void MagicPrint(int n)
   {
      int i;  
      for(i=-(n-1);i<=n-1;i++)
      {
         cout<<n-abs(i)<<" ";
      }
   }
};    
 
//Main Program    
int main()
{    
    int n;
    Magic mag;
     
    cout<<"Enter a Positive Integer less than 10."<<endl;
    cin>>n;
    
    mag.MagicPrint(n);
    
    cout<<endl;
    
    system("pause");
    return 0;
}
