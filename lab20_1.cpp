#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double xx = abs(R1.x - R2.x) ;
	double yy = abs(R1.y - R2.y) ;
	double xxx, yyy ;
	if(xx > R1.w or yy > R1.h) return 0;
	else{
		if(yy < R1.h-R2.h){
			yyy = R2.h;
		}else{
			yyy = R1.h - yy;
		}
		if(xx < R1.w-R2.w){
			xxx = R2.w;
		}else{
			xxx = R1.w - xx;
		}
		return xxx*yyy ;
	}
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(R1,R2);	
}
