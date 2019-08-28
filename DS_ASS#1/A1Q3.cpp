
//Name: Muhammad Fawad Jawaid Malik
//Roll No. 11k-2116
//Section: B

#include<iostream>

using namespace std;

double Absolute(double);

int main()
{
    double a=1+0.5,xl,xu,tolerance,ite;
    int i=1;
    
    cout<<"Your two guesses."<<endl;
    cout<<"Enter the first one."<<endl;
    cin>>xl;
    
    cout<<"Enter the second one."<<endl;
    cin>>xu;
    
    cout<<endl<<"Now, Enter the Tolerance."<<endl;
    cin>>tolerance;
    
    cout<<"Maximum number of iterations?"<<endl;
    cin>>ite;
    
    cout<<endl;
    
    double xm = (xl+xu)/2;
    double fxm = a*(xm)-1;
    double M = (xu-xl)/2;
    double fxlxm = (a*xl-1)*(a*xm-1);
    
    
  while(i<ite)
  {
   if(M<tolerance)
   {
              
    if(fxlxm<0)
    {
       
       xl=xl;
       xu=xm;
       
    }
    else if(fxlxm>0)
    {
       
       xl=xm;
       xu=xu;
       
    }
    else if(fxlxm==0)
    {
         return 0;
    }
   }
   i++;  
  }
   
    double xnew = (xl+xu)/2;
    double Ea = Absolute(((xnew-xm)/xnew)*100);
    
   
    cout<<"xl: "<<xl<<endl;
    cout<<"xu: "<<xu<<endl;
    cout<<"xm: "<<xm<<endl;
    cout<<"Ea: "<<Ea<<endl;
    cout<<"f(xm): "<<fxm<<endl; 
             
    
    system("pause");
    return 0;       
} 

double Absolute(double num)
{
     if(num<0)
     {
        return num=num*(-1);
     }
     else
     {
        return num;
     }
}

         
