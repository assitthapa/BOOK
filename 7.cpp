#include<iostream>
using namespace std;
class Beta;
class Alpha{
	private:
		int a;
		public:
			Alpha(int a)
			{
				this->a=a;
			}
			friend int sum(Alpha ,Beta);
};
class Beta{
 private:
 	int a;
 	public:
 		Beta(int a){
 			this->a=a;
		 }
		 friend int sum(Alpha, Beta);
};
int sum(Alpha x,Beta y)
{
	return x.a+y.a;
	
 } 
 int main(){
 	Alpha obj(2);
 	Beta obj2(5);
 	cout<<"sum="<<sum(obj,obj2);
 	return 0;
 }
