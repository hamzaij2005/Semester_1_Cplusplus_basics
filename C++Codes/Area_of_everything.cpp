#include<iostream>
using namespace std;
int main(){
    int f;
    do{
    cout<<"Press 1 for Area of Circle"<<endl;
    cout<<"Press 2 for Area of Rectangle"<<endl;
    cout<<"Press 3 for Area of Triangle"<<endl;
    cout<<"Press 4 for Area of Square"<<endl;
    cout<<"Press 5 for Area of Parallelogram"<<endl;
    cout<<"Press 6 for Area of Rhombus"<<endl;
    cout<<"Press 7 for Area of Sector"<<endl;
    cout<<"Press 8 for Area of Cube"<<endl;
    cout<<"Press 9 for Area of Cylinder"<<endl;
    cout<<"Press 10 for Area of Sphere"<<endl;
    int a;
    cout<<"Enter your choice: ";
    cin>>a;
    if(a>=1&&a<=10){
        switch(a){
            case 1: {
                float radius;
                cout<<"Area of Circle"<<endl;
                cout << "Enter radius: ";
                cin >> radius;
                cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
                break;
            }
            case 2: {
                float length, width;
                cout << "Area of Rectangle" << endl;
                cout << "Enter length : ";
                cin >> length ;
                cout << "Enter width : ";
                cin >> width;
                cout << "Area of Rectangle = " << length * width << endl;
                break;
            }
            case 3: {
                float base, height;
                cout << "Area of Triangle" << endl;
                cout << "Enter base : ";
                cin >> base ;
                cout << "Enter height : ";
                cin >> height;
                cout << "Area of Triangle = " << 0.5 * base * height << endl;
                break;
            }
            case 4: {
                float side;
                cout << "Area of Square" << endl;
                cout << "Enter side length: ";
                cin >> side;
                cout << "Area of Square = " << side * side << endl;
                break;
            }
            case 5: {
                float base, height;
                cout << "Area of Parallelogram" << endl;
                cout << "Enter base : ";
                cin >> base ;
                cout << "Enter height : ";
                cin >> height;
                cout << "Area of Parallelogram = " << base * height << endl;
                break;
            }
            case 6: {
                float d1, d2; // diagonals
                cout << "Area of Rhombus" << endl;
                cout << "Enter diagonals d1 : ";
                cin >> d1 ;
                cout << "Enter diagonals d2 : ";
                cin >> d2;

                cout << "Area of Rhombus = " << 0.5 * d1 * d2 << endl;
                break;
            }
            case 7: {
                float radius, angle; // angle in degrees
                cout << "Area of Sector" << endl;
                cout << "Enter radius : ";
                cin >> radius ;
                cout << "Enter angle in degrees : ";
                cin >> angle;
                cout << "Area of Sector = " << (angle / 360) * 3.14159 * radius * radius << endl;
                break;
            }
            case 8: {
                float side; // side length
                cout << "Area of Cube" << endl;
                cout << "Enter side length of cube: ";
                cin >> side;
                cout << "Surface Area of Cube = " << 6 * side * side << endl;
                break;
            }
            case 9: {
                float radius, height;
                cout << "Area of Cylinder" << endl;
                // surface area = 2πr(r + h)
                cout << "Enter radius of cylinder: ";
                cin >> radius ;
                cout << "Enter height of cylinder: ";
                cin >> height;
                cout << "Surface Area of Cylinder = " << 2 * 3.14159 * radius * (radius + height) << endl;
                break;
            }
            case 10: {
                float radius;
                cout << "Area of Sphere" << endl;
                // surface area = 4πr^2
                cout << "Enter radius of sphere: ";
                cin >> radius;
                cout << "Surface Area of Sphere = " << 4 * 3.14159 * radius * radius << endl;
                break;
            }
            

        }

    }
    else {
        cout << "Invalid choice! Please enter a number between 1 and 10." << endl;//if-else staement is used as default is not present in switch case 
  
    }
    cout << "Press 1 to continue or any other key to exit: ";
    cin >> f;
    }
    while(f==1);
    return 0;
}