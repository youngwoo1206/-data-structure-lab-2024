#include <cstdio>
#include "Rectangle.h"
#include "SmartHome.h"
#include "Music.h"

/*
int main()
{
	Rectangle a(10, 20); //a°´Ã¼ / (10, 20) ÀÎ¼ö
	std::cout << "Rectangle 1" << std::endl;
	std::cout << "Area:" << a.getArea() << std::endl;
	std::cout << "Area:" << a.getArea() << std::endl;
	std::cout << "Perimeter:" << a.getPerimeter() << std::endl;
	std::cout << "is Square?:" << std::boolalpha << a.isSquare() << std::endl;

	Rectangle b(20, 20);//b °´Ã¼ / (20, 20)ÀÎ¼ö
	std::cout << "Rectangle 2" << std::endl;
	std::cout << "Area:" << b.getArea() << std::endl;
	std::cout << "Area:" << b.getArea() << std::endl;
	std::cout << "Perimeter:" << b.getPerimeter() << std::endl;
	std::cout << "is Square?:" << std::boolalpha << b.isSquare() << std::endl;
}
*/
	




//SmartHome Class
/*
int main()
{
	SmartHome myHome("È«¿µ¿ì", 23, 40, true);//°´Ã¼ myHome // ÀÎ¼ö ("È«¿µ¿ì", 23, 40, true)
	myHome. printStatus();
	myHome.setTemperature(500);
	myHome.printStatus();
	
}
*/



//Music Streaming Service 

int main()
{
	MusicStreamingService myService("Spotify"); //°´Ã¼ mySurvice / ÀÎ¼ö"Spotify"
	myService.addMusic("VIBE", "Taeyang", "Album", 2023);
	myService.addMusic("Ditto", "NewJeans", "Album", 2023);
	myService.addMusic("Attention", "NewJeans", "Album", 2023);

	string music_title;
	cout << "Enter the Music Title : ";
	cin >> music_title;

	Music* result = myService.searchByTitle(music_title);
	if (result != NULL) {
		cout << "found: " << result->getTitle() << " by " << result->getArtist() << endl;

	}
	else {
		cout << "Not found" << endl;
	}

	string artist_name;
	cout << "Enter the Artist Name : ";
	cin >> artist_name;

	vector<Music*> artistResult = myService.searchByArtist(artist_name);
	if (artistResult.size() > 0) {
		cout << "Found " << artistResult.size() << " songs by " << artist_name << " : " << endl;
		for (int i = 0; i < artistResult.size(); i++) {
			cout << artistResult[i]->getTitle() << endl;
		}
	}
	else {
		cout << "not found" << endl;
	}
}

