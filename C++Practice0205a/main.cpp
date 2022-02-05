#include"main.h"

void UpdateA()
{
	PRINT("AUpdate開始");

	if (A())//キーが押されたら
	{
		if (!B())//走っていない
		{
			if (!C())//ジャンプしていない
			{
				if (D())//ターゲットしていたら
				{
					PRINT("攻撃します");
				}
				else
				{
					PRINT("ターゲット開始");
				}
			}
		}
	}
	else
	{
		PRINT("キーは押されていません");
	}
}



void UpdateB()
{

	PRINT("BUpdate開始");

	if (!A())//キーが押されていないなら
	{
		PRINT("キーは押されていません");
		return;
	}

	if (B())//走っているなら
	{
		return;
	}

	if (C())//ジャンプしているなら
	{
		return;
	}

	if (!D())//ターゲットしていないなら
	{
		PRINT("ターゲット開始");
		return;
	}


	PRINT("攻撃します");

}





int main(void)
{
	UpdateA();
	UpdateB();

	return 1;
}