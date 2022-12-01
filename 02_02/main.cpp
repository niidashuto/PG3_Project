#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
	int val;
	struct cell* next;
}CELL;

void Create(CELL*head,int val);

void index(CELL* head);

int main()
{
	int val;
	//先頭のセルを宣言
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("\n好きな数字を入力してください\n");

		printf("入力する値: ");

		scanf_s("%d", &val);

		Create(&head, val);

		index(&head);
	}
	return 0;
}

//セルを新規作成する関数
void Create(CELL* head, int val)
{
	CELL* New;
	//新規作成するセル分のメモリを確保する
	New = (CELL*)malloc(sizeof(CELL));

	New->val = val;

	New->next = nullptr;

	//最後(最新)のセルのアドレスの1つ目の処理は引数から持ってきた
	//リストのうち最初のセルのアドレスが該当する
	while (head->next != nullptr)
	{
		head = head->next;
	}
	head->next = New;
}

void index(CELL*head)
{
	while (head->next != nullptr)
	{
		head = head->next;
		
		printf("%d,", head->val);
		
	}
}