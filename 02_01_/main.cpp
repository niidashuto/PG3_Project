#include <stdio.h>
#include <list>
#include <string.h>

using namespace std;

int main()
{
	list<char*> JY1970, JY2019, JY2022;
	list<char*>::iterator itr;

	//1970�N�̉w��
	char station[28][20] =
	{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	

	for (const char* str : station)
	{
		JY1970.push_back((char*)str);
	}

	//2019�N�ɑO�̏�������
	JY2019 = JY1970;

	//2019�N�S�Ă̗v�f���Q��
	for (itr = JY2019.begin(); itr != JY2019.end(); itr++)
	{
		//���闢�̌�ɐ����闢��ǉ�
		if (*itr == station[7])
		{
			JY2019.insert(itr, (char*)"Nishi-Nippori");
		}
	}
	//2022�N�ɑO�̏�������
	JY2022 = JY2019;

	//2022�N�S�Ă̗v�f���Q��
	for (itr = JY2022.begin(); itr != JY2022.end(); itr++)
	{
		//�i��̌�ɍ��փQ�[�g�E�F�C��ǉ�
		if (*itr == station[24])
		{
			JY2022.insert(itr, (char*)"Takanawa Gateway");
		}
	}

	printf("JY1970  \n");

	for (char* string : JY1970)
	{
		printf("%s|", string);
	}

	printf("\n\nJY2019 \n");

	for (char* string : JY2019)
	{
		printf("%s|", string);
	}

	printf("\n\nJY2022 \n");

	for (char* string : JY2022)
	{
		printf("%s|", string);
	}

	return 0;
}