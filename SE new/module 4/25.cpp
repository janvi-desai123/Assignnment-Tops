#include<iostream>
using namespace std;

class Matrix
{
        int a[3];
    public:
        void accept();
        void display();
        void operator +(Matrix x);
};
void Matrix::accept()
{
        cout<<"\n Enter Matrix Element  : \n";
        for(int i=0; i<3; i++)
        {
                
            cout<<" ";
            cin>>a[i];
                
        }
}
void Matrix::display()
{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                
                cout<<a[i]<<"\t";
                
                cout<<"\n";
        }
}
void Matrix::operator +(Matrix x)
{
        int mat[3];
        for(int i=0; i<3; i++)
        {
               
                        mat[i]=a[i]+x.a[i];
                
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                
                cout<<mat[i]<<"\t";
        }
                
        
}
int main()
{
        Matrix m,n;
        m.accept();       // Accepting Rows
        n.accept();      // Accepting Columns
        cout<<"\n First Matrix : \n\n";
        m.display();   // Displaying First Matrix
        cout<<"\n Second Matrix : \n\n";
        n.display(); // Displaying Second Matrix
        m+n;        // Addition of Two Matrices. Overloaded '+' Operator
        return 0;
}
