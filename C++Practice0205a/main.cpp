#include"main.h"

void UpdateA()
{
	PRINT("AUpdate�J�n");

	if (A())//�L�[�������ꂽ��
	{
		if (!B())//�����Ă��Ȃ�
		{
			if (!C())//�W�����v���Ă��Ȃ�
			{
				if (D())//�^�[�Q�b�g���Ă�����
				{
					PRINT("�U�����܂�");
				}
				else
				{
					PRINT("�^�[�Q�b�g�J�n");
				}
			}
		}
	}
	else
	{
		PRINT("�L�[�͉�����Ă��܂���");
	}
}



void UpdateB()
{

	PRINT("BUpdate�J�n");

	if (!A())//�L�[��������Ă��Ȃ��Ȃ�
	{
		PRINT("�L�[�͉�����Ă��܂���");
		return;
	}

	if (B())//�����Ă���Ȃ�
	{
		return;
	}

	if (C())//�W�����v���Ă���Ȃ�
	{
		return;
	}

	if (!D())//�^�[�Q�b�g���Ă��Ȃ��Ȃ�
	{
		PRINT("�^�[�Q�b�g�J�n");
		return;
	}


	PRINT("�U�����܂�");

}





int main(void)
{
	UpdateA();
	UpdateB();

	return 1;
}