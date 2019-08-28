
// Name: Muhammad Fawad Jwaid Malik
// Roll No. 11k-2116
// Section: B

#include<iostream>

using namespace std;

int main()
{
    const int n=10;
    int arr[n][n]={
                     {1,2,4,2,5,6,7,2,2,1},
                     {1,2,4,2,5,6,7,2,2,1},
                     {1,2,4,2,5,6,7,2,2,1},  
                     {1,2,4,2,5,6,7,2,2,1},
                     {1,2,4,2,5,6,7,2,2,1},
                     {1,2,4,2,5,6,7,2,2,1},
                     {1,2,4,2,5,6,7,2,2,1},
                     {1,2,4,2,5,6,7,2,2,1},
                     {1,2,4,2,5,6,7,2,2,1},
                     {1,2,4,2,5,6,7,2,2,1}
                    };
    int a, b;
    

    cout<<"Array 10 X 10 with (1-9)"<<endl<<endl;

    //cout<<arr[4][4];
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
         cout<<arr[i][j]<<" ";
       cout<<endl;
    }
    
    cout<<endl<<"The largest possible block which contain natural number between (a-b)"<<endl;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    
    cout<<endl;
    
    if((a==1)&&(b==1))
    {
       for(int r=0;r<n;r++)
       {
         for(int c=0;c<1;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = 1X10"<<endl;
       
    }
    else if(((a==1)&&(b==2))||((a==1)&&(b==3)))
    { 
        int r,c; 
       for(r=0;r<n;r++)
       {
         for(c=7;c<n;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c - 7<<"X"<<r<<endl; 
    }
    else if((a==1)&&(b==4))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=0;c<4;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<< c <<"X"<< r<<endl; 
    }
    else if((a==1)&&(b==5))
    {  
       int r,c;
       for(r=0;r<n;r++)
       {
         for(c=0;c<5;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<< c <<"X"<< r <<endl; 
    }
    else if((a==1)&&(b==6))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=0;c<6;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c<<"X"<<r<<endl; 
    }
    else if((a==1)&&(b==7))
    { 
       int r,c;
       for(r=0;r<n;r++)
       {
         for(c=0;c<7;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c<<"X"<<r<<endl; 
    }
    else if(((a==2)&&(b==2)) ||((a==2)&&(b==3)))
    {  
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=7;c<n-1;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-7<<"X"<<r<<endl; 
    }
    else if((a==2)&&(b==4))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=1;c<4;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-1<<"X"<<r<<endl; 
    }
    else if((a==2)&&(b==5))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=1;c<5;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-1<<"X"<<r<<endl; 
    }
    else if((a==2)&&(b==6))
    {  
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=1;c<6;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-1<<"X"<<r<<endl; 
    }
    else if(((a==2)&&(b==7)) || ((a==2)&&(b==8)) || ((a==2)&&(b==9)))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=1;c<9;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-1<<"X"<<r<<endl; 
    }
    else if((a==4 || a==3)&&(b==4))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=2;c<3;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-2<<"X"<<r<<endl; 
    }
    else if((a==5)&&(b==5))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=4;c<5;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-4<<"X"<<r<<endl; 
    }
    else if((a==5 || a==4 || a==3)&&(b==7 || b==8 || b==9))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=4;c<7;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-4<<"X"<<r<<endl; 
    }
    else if((a==6)&&(b==6))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=5;c<6;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-5<<"X"<<r<<endl; 
    }
    else if((a==6)&&(b==7 || b==8 || b==9))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=5;c<7;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-5<<"X"<<r<<endl; 
    }                
    else if((a==7)&&(b==7 || b==8 || b==9))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=6;c<7;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c-6<<"X"<<r<<endl; 
    } 
    else if((a==1)&&(b==8 || b==9))
    {
       int r,c;  
       for(r=0;r<n;r++)
       {
         for(c=0;c<n;c++)
          cout<<arr[r][c]<<" ";
       cout<<endl;
       }
                
       cout<<endl<<"The largest possible two-dimensional sub array of entered sub sequence is " <<endl;
       cout<<"ColXRows = "<<c<<"X"<<r<<endl; 
    } 
    else
    { 
        cout<<endl<<"There is no largest two-dimensional sub array between the entered sub sequence."<<endl;
    }                                   

system("pause");
return 0;
}                
                 
                 
