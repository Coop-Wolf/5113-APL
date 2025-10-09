// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class frac
{
    // Private member variables
    private:
    int num;
    int den;
    
    // Default constructor
    public:
    
    frac()
    {
        num = 1;
        den = 1;
    }
    
    // Non default constructor
    frac(int n, int d)
    {
        num =n;
        den = d;
    }
    
    // Copy constructor
    frac(const frac& f)
    {
        this->num = f.getn();
        this->den = f.getd();
    }
    
    // Setters
    void setn(int n)
    {num = n;}
    
    void setd(int d)
    {den = d;}
    
    // Getters
    int getn() const
    {return num;}
    
    int getd() const
    {return den;}
    
    frac getFrac(frac temp)
    {
        temp.setn(this->num);
        temp.setd(this->den);
        
        return temp;
    }
    
    
};

int main()
{
    // Write C++ code here
    frac f(2,3);
    frac f2;
    f2.setd(10);
    f2.setn(5);
    frac f3 = f2.getFrac(f2);
    
    cout << "Num: " << f3.getn() << endl;
    cout << "Den: " << f2.getd();

    return 0;
}
