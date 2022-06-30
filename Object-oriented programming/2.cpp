#include<iostream>
using namespace std;
class Rect
{
   public:
   	float w,h;
   	
   	 void SetWidth(float Width)
	 {
	 	w = Width; 
	 }
	 
	 void SetHeight(float height)
	 {
	    h = height;
	 }
	 
   	float GetWidth()
   	{
   		return w;
	}
	
	float GetHeight()
	{
		return h;
	}
	
		 
};

int main()
{
	
float tx,ty;
float bx,by;

    Rect x;
    
    cout << "Enter the bottom right corner length :";
	 	cin >> bx >> by;
	 
	 	cout << "Enter the top left corner length :";
	 	cin >> tx >> ty;
		 	
    x.SetWidth(bx+by);
    x.SetHeight(tx+ty);
    
    float wid = x.GetWidth();
    float hei = x.GetHeight();
    
    cout<<"The Width is : "<<wid<<endl;
	cout<<"The height is : "<<hei;
	    
	return 0;
}
