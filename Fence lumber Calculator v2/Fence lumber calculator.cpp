/*Program to calculate the amount of lumber you will need for a 6 feet fence*/
#include <iostream>
using namespace std;

//Declaring variables
double linearft, post, pickets, rails;
double postPrice, picketPrice, railPrice;

/*Seperate functions to calculate the amount of post, baacker rails, and pickets for a fence*/
void PostFence()
{
	post = (linearft / 8)+1; // We are dividing the perimeter by 8 ft which is the amount of seperation between each post
	cout << "You need " << post << " post." << endl;
	postPrice = post * 10.18;
};

void railsN()
{
	rails = (linearft / 8) * 3; // We obtain the amount of sections first then divide by 3 which is the amount of 2x4's needed
	cout << "You need " << rails << " rails." << endl;
	railPrice = rails * 5.38;
};

void Npickets()
{
	pickets = (linearft * 12) / 5; // We convert the perimeter in inches by multiplying by 12 then divid by the amount of the width of the picket
	cout << "You need " << pickets << " pickets." << endl;
	picketPrice = pickets * 2.25;
};


/*Main function*/
int main()
{

	double concrete = 6;
	double totalMaterialCost;
	cout << "please enter linear feet "<< endl;
	cin >> linearft;
	PostFence();
	railsN();
	Npickets();

	/*This adds the cost of the material and gives
	the total for all materials without taxes*/

	totalMaterialCost = picketPrice + railPrice + postPrice + concrete;		
	cout << "This is the total of your material cost $" << totalMaterialCost << endl;

	
}

