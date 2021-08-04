// 1D Array
// #include <iostream>
// #include <conio.h>
// int main(){
//     int *P,n,i;
//     std::cout<<"enter array size ";
//     std::cin>>n;
//     P=new int[n];
//     std::cout<<"Enter "<<n<<"integer";
//     for(i=0;i<n;i++) std::cin>>P[i];
//     std::cout<<"The element are : ";
//     for (i=0;i<n;i++) std::cout<<P[i]<<" ";
//     delete P;
// }




//***************************************************************************************
//  2D - Array
// #include <iostream>
// #include <conio.h>
// int main()
// {
//     int **p,nr,nc,r,c;
//     std::cout<<"enter number of rows and columns ";
//     std::cin>>nr>>nc;
//     p=new int *[nr];
//     for (r=0;r<nr;r++) p[r]=new int[nc];
//     std::cout<<"enter "<<nr*nc<<" integer  ";
//     for(r=0;r<nr;r++)
//     for(c=0;c<nc;c++)
//     std::cin>>p[r][c];
//     std::cout<<"Elements are\n";
//     for(r=0;r<nc;r++)
//     {
//         for(c=0;c<nc;c++)
//         {
//             std::cout<<p[r][c]<<" ";
//         }
//         std::cout<<std::endl;
//     }
//     delete p;
//     getch();
// }

// #include <iostream>
// #include <conio.h>
// int main(){
//     int *p;
//     int a=100;
//     int &b=a;
//     int &c=b;
//     std::cout<<a<<std::endl;
//     std::cout<<b<<std::endl;
//     c=200; 
//     std::cout<<a<<std::endl;
//     std::cout<<b<<std::endl;
//     std::cout<<c<<std::endl;
    
// }

//***********************************************************************

// #include <iostream>
// #include <conio.h>

// void swap(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;

// }
// int main(){
//     int a=10,b=20;
//     swap(&a,&b);
//     std::cout<<"a= "<<a<<"\t b ="<<b;

// }

//**********************************************************
#include <iostream>
#include <conio.h>

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int a=10,b=20;
    swap(a,b);
    std::cout<<"a= "<<a<<"\t b ="<<b;

}