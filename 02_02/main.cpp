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
	//�擪�̃Z����錾
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("\n�D���Ȑ�������͂��Ă�������\n");

		printf("���͂���l: ");

		scanf_s("%d", &val);

		Create(&head, val);

		index(&head);
	}
	return 0;
}

//�Z����V�K�쐬����֐�
void Create(CELL* head, int val)
{
	CELL* New;
	//�V�K�쐬����Z�����̃��������m�ۂ���
	New = (CELL*)malloc(sizeof(CELL));

	New->val = val;

	New->next = nullptr;

	//�Ō�(�ŐV)�̃Z���̃A�h���X��1�ڂ̏����͈������玝���Ă���
	//���X�g�̂����ŏ��̃Z���̃A�h���X���Y������
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