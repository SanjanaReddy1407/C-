# include <iostream>
using namespace std;
class ClassB;

class ClassA {
    private:
    int x;
    public :
    ClassA (int a){
        x=a;
    }
    friend void add(ClassA,ClassB);
    friend void sub(ClassA, ClassB);
    friend void div(ClassA, ClassB);
    friend void multi(ClassA,ClassB);
};

class ClassB {
    private:
    int y;
    public:
    ClassB (int b){
        y=b;
    }
    friend void add(ClassA,ClassB);
    friend void sub(ClassA, ClassB);
    friend void div(ClassA, ClassB);
    friend void multi(ClassA,ClassB);
};

void add(ClassA objA, ClassB objB){
    cout<<"sum = "<<objA.x + objB.y;
}
void sub(ClassA objA, ClassB objB){
    cout<<"sub = "<<objA.x - objB.y;
}
void div(ClassA objA, ClassB objB){
    cout<<"div = "<<objA.x / objB.y;
}
void multi(ClassA objA, ClassB objB){
    cout<<"multi = "<<objA.x * objB.y;
}

void check(int m){
    if(m==1){
        cout<<"Enter two numbers : ";
        int a,b;
        cin>>a>>b;
        ClassA objA(a);
        ClassB objB(b);
        add(objA,objB);
    }
    else if(m==2){
        cout<<"Enter two numbers : ";
        int a,b;
        cin>>a>>b;
        ClassA objA(a);
        ClassB objB(b);
        sub(objA,objB);
    }
    else if(m==3){
        cout<<"Enter two numbers : ";
        int a,b;
        cin>>a>>b;
        ClassA objA(a);
        ClassB objB(b);
        div(objA,objB);
    }
    else if(m==4){
        cout<<"Enter two numbers : ";
        int a,b;
        cin>>a>>b;
        ClassA objA(a);
        ClassB objB(b);
        multi(objA,objB);
    }
    else{
        cout<<"Invalid input";
    }
}

int main(){
    cout<<"Enter 1 for addition, 2 for subtraction, 3 for division and 4 for multiplication : ";
    int m;
    cin>>m;
    check(m);
    return 0;
}
