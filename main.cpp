#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//const int SIZE = 4;
//
//
//double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
//    double sum = 0.0;
//    for (int i = 0; i < rowSize; i++) {
//        sum += m[i][columnIndex];
//    }
//    return sum;
//}
//
//int main() {
//    double m[5][SIZE] = {
//            {5, 3, 1, 6},
//            {-5, 2, 2, 5},
//            {6, 6, 1, 6},
//            {-3, 11, 2, 55},
//            {0, 4, 0, 0}
//    };
//
//    int rowSize = 5;
//
//    for (int col = 0; col < SIZE; col++) {
//        cout << "sum of column " << col << "=" << sumColumn(m, rowSize, col) << endl;
//    }
//
//    return 0;
//}
//





//const int SIZE=4;
//
//double sumMajorDiaganal(const double m[][SIZE]){
//  double   sum=0.0;
//    for(int i=0; i<SIZE; i++ ){
//        sum+=m[i][i];
//    }
//return sum;
//}
//int main(){
//    double m[4][SIZE]{
//            {1.0, 2.0, 3.0, 4.0},
//            {5.0, 6.0, 7.0, 8.0},
//            {9.0, 10.0, 11.0 , 12.0},
//            {13.0,14.0,15.0, 16.0}
//    };
//        cout<< sumMajorDiaganal( m)<<endl;
//
//    return 0;
//}

//const int N = 4;
//void multiplyMatrix(const double a[][N], const double b[][N], double c[][N]) {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            c[i][i] = 0;
//            for (int k = 0; k < N; k++) {
//                c[i][j]+= a[i][k] * b[j][k];
//            }
//        }
//    }
//}
//int main() {
//    double M1[4][N] = {
//            {1.0,  2.0,  3.0,  4.0},
//            {5.0,  6.0,  7.0,  8.0},
//            {9.0,  10.0, 11.0, 12.0},
//            {13.0, 14.0, 15.0, 16.0}
//    };
//    double M2[4][N] = {
//            {0.5,  1.5,  2.5,  3.5},
//            {4.5,  5.5,  6.5,  7.5},
//            {8.5,  9.5,  10.5, 11.5},
//            {12.5, 13.5, 14.5, 15.5}
//
//    };
//    double C[4][N];
//    multiplyMatrix(M1, M2, C);
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cout << C[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}




//void search( string& s, char& key) {
//        for (char ch: s) {
//        if (ch == key) {
//            cout << "Found" << endl;
//            return;
//        }
//    }
//    cout << "Not found" << endl;
//}
//  int main(){
//  string s;
//  char key;
//
//  cout<< "Enter the word: ";
//  getline(cin, s);
//
//  cout<<"Enter the character your are looking for: ";
//  cin>>key;
//
//  search(s, key);
//
//  return 0;
//}


int counts(const string& s, char a) {
    int count=0;
    for (char ch: s) {
        if (ch == a) {
            count++;
        }
    }
    return count;
}

        int main(){
    string s;
    char a;
    cout<<" ENTER the word:";
    getline(cin, s);

    cout<<"enter the character: ";
    cin>>a;

   int result= counts(s,a);
   cout<< result<<endl;
return 0;
}



// void countLetters(const char s[], int counts[]) {
//     for (int i = 0; i < 26; i++) {
//         counts[i] = 0;
//     }
//     for(int i=0; s[i] != '\0'; ++i) {
//         char c = tolower(s[i]);
//         if (c >= 'a' && c <= 'z') {
//             counts[c-'a']++;
//         }
//     }
// }
// int main() {
//     char input[100];
//     int counts[26];
//     cout<< "Enter a string: ";
//     cin.getline(input, 100);
//     countLetters(input, counts);
//     for (int i = 0; i < 26; ++i) {
//         if(counts[i] > 0) {
//             cout << char('a' + i)<<":"<<counts[i]<<endl;;
//         }
//     } return 0;
// }
