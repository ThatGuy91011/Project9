#include <iostream>

using namespace std;
void BadHacking(int myScore, int highScore);
void GoodHacking(int& myScore, int& highScore);
int main()
{
	cout << "Video Game High Scores" << endl;

	int myScore = 231;
	int highScore = 66666;

	cout << "My score: " << myScore << endl << "High Score: " << highScore << endl;
	GoodHacking(myScore, highScore);
	cout << "My score: " << myScore << endl << "High Score: " << highScore << endl;
	
} 

void BadHacking(int myScore, int highScore)
{
	int tempFriend = 0;
	

	tempFriend = highScore;
	highScore = myScore;
	myScore = tempFriend;
	//cout << "My score: " << myScore << endl << "High Score: " << highScore << endl;
}

void GoodHacking(int& myScore, int& highScore)
{
	int tempFriend = 0;


	tempFriend = myScore;
	myScore = highScore;
	highScore = tempFriend;
	//cout << "My score: " << myScore << endl << "High Score: " << highScore << endl;
}