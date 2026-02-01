# include <iostream>
using namespace std;
class New{
    public:
    int a, b, c;

    void input(){
        cout<<"Enter three numbers: "<<endl;
        cout << "a: ";
        cin>>a;
        cout << "b: ";
        cin>>b; 
        cout << "c: ";
        cin>>c;
        
    }

    int check(){
        if(a+c > b && a+b > c && b+c > a)
            return 1;
        else 
            return 0;
    }

    int triangle(){
        if(a==b==c)
            cout<<"Equilateral Triangle"<<endl;
        else if(a==b || b==c || a==c)
            cout<<"Isosceles Triangle"<<endl;
        else if(a!=b && b!=c && a!=c)
            cout<<"Scalene Triangle"<<endl;
    }


};

int main(){
    New x;
    x.input();
    if(x.check()){
        cout<<"Triangle can be formed"<<endl;
        x.triangle();
    }
    else{
        cout<<"Triangle cannot be formed"<<endl;
    }
    return 0;
}
