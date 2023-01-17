#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct cell
{
	char str[8];
	struct cell* next;
}CELL;

void Create(CELL* endcell, const char *buf);

void index(CELL* endcell);

int main()
{
	char str[8];
	//先頭のセルを宣言
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("\n好きな数字を入力してください\n");

		printf("入力する値: ");

		scanf_s("%s", str,8);

		Create(&head, str);

		index(&head);
	}
	return 0;
}

//セルを新規作成する関数
void Create(CELL* endcell, const char *buf)
{
	CELL* newCell;
	//新規作成するセル分のメモリを確保する
	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, 8, buf);

	//*newCell->str = *buf;

	newCell->next = nullptr;

	//最後(最新)のセルのアドレスの1つ目の処理は引数から持ってきた
	//リストのうち最初のセルのアドレスが該当する
	while (endcell->next != nullptr)
	{
		endcell = endcell->next;
	}
	endcell= newCell;
}

void index(CELL* endcell)
{
	while (endcell->next != nullptr)
	{
		endcell = endcell->next;

		printf("%s\n", endcell->str);

	}
}