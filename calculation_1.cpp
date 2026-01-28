// WAP TO CALCULATE AREA AND PERIMETER OF RECTANGLE.

# include <iostream>
using namespace std;
class Rectangle{
    public:
    int l, b;

    void input(){
        cout << "enter valeues of rectangle" << endl;
        cout << "length = ";
        cin >> l;
        cout << "bredth = " ;
        cin >> b;
    }

    int area(){
        return l*b;
    }

    int perimeter(){
        int add ,p;
        add = l+b;
        p = 2*add;

        return p;
    }
};

int main(){
    Rectangle r1;

    r1.input();

    cout << "area of this rectangle is "<< r1.area() << endl;
    cout << "perimeter of this rectangle is  " << r1.perimeter() << endl;

    return 0;
}
