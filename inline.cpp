#include<iostream>
#include<math.h>
using namespace std;
inline double distance(double x1,double x2,double y1,double y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));}
bool isValidTriangle(double d1, double d2, double d3) {
    return (d1 + d2 > d3) && (d1 + d3 > d2) && (d2 + d3 > d1);
}

int main(){
    
    int x1,x2,x3,y1,y2,y3;
    cout<<"enter the coordinates of first point"<<endl;
    cin>>x1>>y1;
    cout<<"enter the coordinates of second point"<<endl;
    cin>>x2>>y2;
    cout<<"enter the coordinates of third point"<<endl;
    cin>>x3>>y3;
    double d1 = distance(x1, y1, x2, y2);
    double d2 = distance(x2, y2, x3, y3);
    double d3 = distance(x3, y3, x1, y1);
    double shortest = min(d1, min(d2, d3));
    cout << "Shortest distance: " << shortest << endl;
    if (isValidTriangle(d1, d2, d3)) {
        cout << "The points form a valid triangle." << endl;
    } else {
        cout << "The points do not form a valid triangle." << endl;
    }
     return 0;

}