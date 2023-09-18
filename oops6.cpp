#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle(){
        length=0;
        breadth=0;
    }
    Rectangle(int l , int b){
        length=l;
        breadth=b;
    }
    void area(){
        int area=length*breadth;
        cout<<"The Area of this Rectangle is : "<<area<<endl;
    }
};
int main() {
    // Write C++ code here
    int l,b;
    cout<<"Enter the dimension of Rectangle "<<endl;
    cin>>l>>b;
   Rectangle r1;
   Rectangle r2(l,b);
   r1.area();
   r2.area();
   return 0;
}
