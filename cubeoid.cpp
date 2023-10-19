#include <iostream>
using namespace std;
class cube
{
    private:
    double height=1.0;
    double width=1.0;
    double length=1.0;
    public:
    double volume()    
 {
    return height*length*width;
 }
 void update() 
 {
cin>>height;

 }
 double h()  
 {
    return height;                          
 }
double l()  
 { return length;
 }
double b() 
 {return width;}

    void input()
    {cin>>height; 
    cin>>length;
    cin>>width;}
    cube() 
    {cin>>height;
    cin>>length;
    cin>>width;}
    ~cube(){
        cout<<"Destructor";
    }
};

int main()
{ 
    cube cu1; 
    double vol=cu1.volume();
    cout<<vol<<endl;
    cout<<"enter height"<<endl;
    cu1.update();
    vol=cu1.volume();
    cout<<"volume of a cube having height,breadth and length "<<cu1.h()<<" "<<cu1.b()<<" "<<cu1.l()<<endl;
    cout<<vol<<endl;

}
