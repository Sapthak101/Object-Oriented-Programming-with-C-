#include <iostream>
using namespace std;

class dist
{
float feet;
float inches;
public:
void getd()
{	cout<<"Enter Feet and Inches: ";
	cin>>feet>>inches;
}
void disd()
{
	cout<<feet<<"'"<<inches<<"''"<<endl;
			
}	
void add(dist a, dist b)
{
	inches=a.inches+b.inches;
	feet=a.feet+b.feet;
}
dist add(dist b)
{
	dist temp;
	temp.inches=inches+b.inches;
	temp.feet=feet+b.feet;
	return temp;
}
};


int main()
{
	dist c1,c2,c3,c4;
	
	c1.getd();
	c2.getd();
	
	cout<<"Distance 1: ";
	c1.disd();
	cout<<"Distance 2: ";
	c2.disd();
	c3.add(c1,c2);
	
	cout<<"Output for c3.add(c1,c2): "<<endl;
	c3.disd();
	c4=c1.add(c2);
	cout<<"Output for c4=c1.add(c2): "<<endl;
	c4.disd();
	
	return 0;
}