#include <iostream>
#include <cmath>
using namespace std;
int main() {
    /*int x;
    cin>>x;
     if (x>=0) {
         cout << "x is postive" << endl;
     }else{
         if (x<0){
             cout<<"x is negative"<<endl;
         }
     }
   */

/*int x;
  cin>>x;
   if (x<0 && x%2==0) {
 cout << "x is negative and even " << endl;
  } else if (x >= 0) {
           cout << "x is positive and odd" << endl;
}
 }

    /*int a, b, c, max;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    max = a;
    if (a > b && a > c) {
        cout << a << " is the largest" << endl;
    } else {
        if (b > a && b > c) {
            cout << b << " is the largest" << endl;
        } else {

        }
    }
        return 0;*/
    /* problem 4
      int x, y;
    cin >> x >> y;
    if (x % y == 0){
        cout << x << "is divisible by<< y <<" << endl;
    }else{
        if (x%y!=0) {
            cout << x << " is not divisible by "<<y<<endl;
        }

}*/

    /*
     * problem 5
     * int x;
cout<< "a given year is a leap"<<endl;
cin>> x;
if ( x%4==0){
    cout<< x<<" is a leap year"<< endl;
}else{
    if ( x%100!=0 && x%400!=0){
    cout<<x<<" is not a leap year"<<endl;
    }
}*/
    /* double a, b, c;
     cout << "Enter coefficients a, b, c: ";
     cin >> a >> b >> c;

     if (a == 0) {
         cout << "Coefficient 'a' must not be zero." << endl;
         return 1;
     }

     double discriminant = b * b - 4 * a * c;

     cout << fixed << setprecision(6); // Set precision for output

     if (discriminant > 0) {
         // Two real roots
         double x1 = (-b + sqrt(discriminant)) / (2 * a);
         double x2 = (-b - sqrt(discriminant)) / (2 * a);
         cout << "x1=" << x1 << " x2=" << x2 << endl;
     } else if (discriminant == 0) {
         // One real root
         double x1 = -b / (2 * a);
         cout << "x1=x2=" << x1 << endl;
     } else {
         // Complex roots
         double realPart = -b / (2 * a);
         double imaginaryPart = sqrt(-discriminant) / (2 * a);
         cout << "x1=" << realPart << "+" << imaginaryPart << "i "
              << "x2=" << realPart << "-" << imaginaryPart << "i" << endl;
     }

     return 0;
 } */
     /*problem7
    int a, b, c;
    cout << "Enter coefficients a, b, c:" << endl;
    cin >> a >> b >> c;
    if (a + b >= c || a + c >= b || b + c >= a) {
        cout << " The triangle is valid";
    } else { cout << " The triangle is not valid"<<endl; }*/
     /*
     char ch;
        // Input a character
        cout << "Enter a character: ";
        cin >> ch;

        // Check if the character is an uppercase letter
        if (ch >= 'A' && ch <= 'Z') {
            cout << "Uppercase alphabet" << endl;
        }
            // Check if the character is a lowercase letter
        else if (ch >= 'a' && ch <= 'z') {
            cout << "Lowercase alphabet" << endl;
        }
            // If it's neither, it's not an alphabet
        else {
            cout << "It is not an alphabet" << endl;
        }  return 0;
        */
     int x, y;
     cin>> x>>y;
    double distance = sqrt(pow(x, 2) + pow(y, 2));
     if ( x<5 && y<5) {
         cout << " Point (" <<x<<","<< y<<") is in circle";
     }else if ( x>5 && y>5) {
         cout << " Point ("<<x<<","<< y<<") is not in circle"<< endl;
     }
    return 0;

}
