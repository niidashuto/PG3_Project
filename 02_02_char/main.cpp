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
	//�擪�̃Z����錾
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("\n�D���Ȑ�������͂��Ă�������\n");

		printf("���͂���l: ");

		scanf_s("%s", str,8);

		Create(&head, str);

		index(&head);
	}
	return 0;
}

//�Z����V�K�쐬����֐�
void Create(CELL* endcell, const char *buf)
{
	CELL* newCell;
	//�V�K�쐬����Z�����̃��������m�ۂ���
	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, 8, buf);

	//*newCell->str = *buf;

	newCell->next = nullptr;

	//�Ō�(�ŐV)�̃Z���̃A�h���X��1�ڂ̏����͈������玝���Ă���
	//���X�g�̂����ŏ��̃Z���̃A�h���X���Y������
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