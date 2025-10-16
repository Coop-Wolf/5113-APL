// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class frac
{
    // Private member variables
    private:
    int num;
    int den;
    
    int gcd(int a ,int b)
    {
        if (a % b == 0)
            return b;
            
        else
            return (gcd(b,a %b));
    }
    
    bool iswhole()
    {
        if (den == 1)
            return true;
        else 
            return false;
    }
    
    // Default constructor
    public:
    
    frac()
    {
        num = 1;
        den = 1;
    }
    
    // Non-default constructor
    frac(int n, int d)
    {
        num =n;
        den = d;
    }

    // Setters
    void setn(int n)
    {num = n;}
    
    void setd(int d)
    {den = d;}

    void setFrac(int n, int d)
    {
        num = n;
        den = d;
    }
    
    // Getters
    int getn() const
    {return num;}
    
    int getd() const
    {return den;}

    void printfrac()
    {
        if (this->iswhole())
        {
            cout << num;
        }
        else
        cout << num << "/" << den;
        
    }

    frac operator* (frac f)
    {
        frac temp;
        temp.num = this->getn() * f.getn();
        temp.den = this->getd() * f.getd();

        return temp;
    }

    frac operator/ (frac f)
    {
        frac temp;
        temp.num = this->getn() * f.getd();
        temp.den = this->getd() * f.getn();

        return temp;   
    }

    frac operator+ (frac f)
    {
        frac temp;
        temp.num = num * f.getd() + den * f.getn();
        temp.den = den * f.getd();
        
        temp.reduce();
        
        return temp;
    }
    
    void reduce ()
    {
        int g = gcd(num, den);
        den = den/g;
        num = num/g;
        
        
    }
    
};

int main()
{
    // Write C++ code here
    frac f(2,3);
    frac f2;
    f2.setd(10);
    f2.setn(5);
    frac f3 = f2;
    frac f10(f);

    f10.printfrac();

    cout << endl << "Going to multiply ";
    f.printfrac();
    cout << " * ";
    f2.printfrac();

    frac f4;
    cout << endl;
    f4 = f * f2;
    f4.printfrac();

    cout << endl << endl;

    cout << "Going to divide ";
    frac f7(1,2);
    frac f8(5,2);
    f7.printfrac();
    cout << " / ";
    f8.printfrac();

    frac f9 = f7 / f8;
    cout << endl;
    f9.printfrac();

    cout << endl << endl << "Going to add ";
    frac f13(1,2);
    frac f14(5,2);
    f7.printfrac();
    cout << " + ";
    f8.printfrac();


    frac f34 = f13 + f14;
    cout << endl;
    f34.printfrac();

    cout << endl << endl;
    return 0;
}
