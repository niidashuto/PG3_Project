#include <stdio.h>

class SceneManager 
{
private:
	static const char SCENE_NAME[4][10];

	int scene = 0;

	SceneManager() = default;
	~SceneManager() = default;
public:
	static SceneManager* GetInstance();

	SceneManager(const SceneManager& obj) = delete;

	SceneManager& operator=(const SceneManager& obj) = delete;

	void PrintScene() {
		printf("sceneNo:%d\nsceneName:%s\n\n", scene, SCENE_NAME[scene]);
	}

	void ChangeScene(int sceneNo) {
		scene = sceneNo; 
	}

};

const char SceneManager::SCENE_NAME[4][10] =
{
	"Title",
	"NewGame",
	"GamePlay",
	"GameClear",
};

int main()
{
	SceneManager* sceneManager = SceneManager::GetInstance();
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

SceneManager* SceneManager::GetInstance()
{
	static SceneManager sceneManager;

	return &sceneManager;
}