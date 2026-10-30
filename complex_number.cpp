# include<iostream>
using namespace std;
class ComplexNumber {
    private:
    float real;
    float imag;

    public:
    ComplexNumber(){
        real=0;
        imag=0;
    
    }
    ComplexNumber(float r,float i){
        real=r;
        imag=i;

    }
    ~ComplexNumber(){ }
    void display(void){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    ComplexNumber operator+(ComplexNumber c2){
        float r = real+c2.real;
        float i = imag+c2.imag;
        return(ComplexNumber(r,i));
    }
    
    ComplexNumber operator-(ComplexNumber c2){
        float r= real-c2.real;
        float i= imag-c2.imag;
        return(ComplexNumber(r,i));
    }
    ComplexNumber operator*(ComplexNumber c2){
        float r= real*c2.real - imag*c2.imag;
        float i= real*c2.imag + imag*c2.real;
        return(ComplexNumber(r,i));
    }

};
int main(){
    ComplexNumber c1(9,7);
    ComplexNumber c2(8,5);

     cout<<"first complex number :";
    c1.display();
    cout<<"second complex number :";
    c2.display();

    ComplexNumber sum = c1+c2;
    cout<<"addition is :";
    sum.display();

    ComplexNumber diff = c1-c2;
    cout<<"substraction is :";
    diff.display();

    ComplexNumber prod = c1*c2;
    cout<<"multiplication is :";
    prod.display();

    return 0;
}


/*PS C:\Krushna 205.c> cd "c:\Krushna 205.c\" ; if ($?) { g++ untitled-3.cpp -o untitled-3 } ; if ($?) { .\untitled-3 }
first complex number :9+7i
second complex number :8+5i
addition is :17+12i
substraction is :1+2i
multiplication is :37+107i*/