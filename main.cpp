#include <stdio.h>
#include <memory>
#include <list>
#include <vector>

int main() {

	std::list<const char*> stations{"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", 
									"Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba",
									"Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro",
									"Gotanda", "Osaki", "Shinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"};

	printf("1970年の駅一覧\n");

	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		printf("%s\n", *itr);
		if (*itr == "Tabata") {
			stations.insert(itr, "Nishi-Nippori");
		}
	}

	printf("\n2019年の駅一覧\n");
	
	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		printf("%s\n", *itr);
		if (*itr == "Tamachi") {
			stations.insert(itr, "Takanawa-Gateway");
		}
	}

	printf("\n2022年の駅一覧\n");

	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		printf("%s\n", *itr);
	}

	return 0;
}