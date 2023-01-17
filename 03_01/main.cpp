#include <stdio.h>

class SceneChange 
{
private:
	static const char SCENE_NAME[4][10];

	int scene = 0;

	SceneChange() = default;

	~SceneChange() = default;
public:
	static SceneChange* GetInstance();
	//コピーコンストラクタを無効にする
	SceneChange(const SceneChange& obj) = delete;
	//代入演算子を無効化する
	SceneChange& operator=(const SceneChange& obj) = delete;

	void PrintScene() {
		printf("sceneNo:%d\nsceneName:%s\n\n", scene, SCENE_NAME[scene]);
	}

	void ChangeScene(int sceneNo) {
		scene = sceneNo; 
	}

};

const char SceneChange::SCENE_NAME[4][10] =
{
	"Title",
	"NewGame",
	"GamePlay",
	"GameClear",
};

int main()
{
	SceneChange* sceneManager = SceneChange::GetInstance();
	while (true)
	{
		sceneManager->PrintScene();

	input:
		int putNum = 0;

		printf("0~3を押してシーンチェンジ\n");

		scanf_s("%d", &putNum);

		switch (putNum)
		{
		case 0:	case 1:	case 2:	case 3:

			sceneManager->ChangeScene(putNum);
			break;
		
		}
	}
}

SceneChange* SceneChange::GetInstance()
{
	static SceneChange sceneManager;

	return &sceneManager;
}