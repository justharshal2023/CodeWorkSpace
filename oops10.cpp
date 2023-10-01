#include <iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(){real=0;img=0;}
    complex(int r,int i){
        real=r;
        img=i;
    }
    friend ostream &operator<<(ostream &output,complex &c){
        output<<c.real<<" + i"<<c.img<<endl;
        return output;
    }
    friend istream &operator>>(istream &input , complex &c){
        input>>c.real>>c.img;
        return input;
    }
  void operator=(const complex& C)
    {
        real = C.real;
        img = C.img;
    }
};
int main(){
    complex c1(20,30),c2,c3;
    cout<<"Enter Real and Imaginary data of complex :"<<endl;
    cin>>c2;
    c3=c1;
    cout<<"The First Complex Number is "<<c1;
    cout<<"The Second Complex Number is "<<c2;
    cout<<"The Third Complex Number is "<<c3;
    return 0;
}
