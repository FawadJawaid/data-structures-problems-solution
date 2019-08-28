
//Name: Muhammad Fawad Jawaid Malik
//Roll No. 11k-2116
//Section: B 

#include<iostream>

using namespace std;


//Sorting Class
class Sorting
{
public:      
void PrintArray(int input[][2])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<2;j++)      
          cout<<input[i][j]<<"-";
        cout<< "\b  ";
    }
}
  
void Swap(int *a, int *b) 
{
       int tmp;
       tmp=*a;
       *a=*b;
       *b=tmp;
}



void MergeSort(int data[], int low,int high)
{
     int mid=(high-low)/2;
     int temp[high+2];
     int i1=low;
     int i2=mid+1;
     int i3=0;
     
     while(i1<=mid && i2<=high)
     {           
        if(data[i1]<data[i2])
        {
            temp[i3++]=data[i1++];
        }
        else
        {
            temp[i3++]=data[i2++];
        }
     }
     
     while(i1<=mid) temp[i3++]=data[i1++];
     while(i2<=high) temp[i3++]=data[i2++];
     
     for(int i=0;i<(high+1);i++)
     {
         data[i]=temp[i];
     }
     //PrintArray(data);
}

void QuickSort(int a[][2],int low,int high)
{
      int i=low,j=high;
      int pivot = a[low+(high - low) / 2][2];
           
           
      while(i<=j)
      {
         while(a[i][2]<pivot) 
            i++;
         while (a[j][2]>pivot) 
            j--;
                  
         if(i<=j)
         {
            Swap(&a[i][2],&a[j][2]);
            i++;
            j--;
         }
      };
           
      if(low > j)  
        QuickSort(a,low,j);
      if(i > high)  
        QuickSort(a,i,high);
                     
}
};      

// Main Program
int main()
{
    int a=0,b=0,e=0,count[10][2]={0};
    Sorting sort;
    
    cout<<"Enter first number."<<endl;
    cin>>a;
    
    cout<<"Enter second number."<<endl;
    cin>>b;
    
   
   for(int i=0;i<10;i++){
         count[i][0]=i;  }
   
   for(int i=a;i<=b;i++)
   {  
      cout<<i<<" ";         

     int d=i;

      while(d>0)
      {
        e=(d%10);
        
        
       if(e==0)
       {
            count[0][1]++;
       }
       else if(e==1)
       {
            count[1][1]++;
       }
       else if(e==2)
       {
            count[2][1]++;
       }
       else if(e==3)
       {
            count[3][1]++;
       }
       else if(e==4)
       {
            count[4][1]++;
       }
       else if(e==5)
       {
            count[5][1]++;
       }
       else if(e==6)
       {
            count[6][1]++;
       }
       else if(e==7)
       {
            count[7][1]++;
       }
       else if(e==8)
       {
            count[8][1]++;
       }
       else if(e==9)
       {
            count[9][1]++;
       }
       d=d/10;
      }

   }
           
   cout<<endl<<endl;
   sort.QuickSort(count,0,9);
   sort.PrintArray(count);
    
       
    cout<<endl;  
    cout<<endl;
    
    system("pause");
    return 0;
}
