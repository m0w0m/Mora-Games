#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	srand((int)time(0));
	int ComNum = 0;
	int YurNum = 0;
	int a = 0;
	int comwin = 0;
	int youwin = 0;
	int nobodywin = 0;

	while (a < 10) {
		ComNum = (int)(3.0 * rand() / (RAND_MAX + 1.0)); //將 rand 函數所產生整數除以 RAND_MAX + 1.0，就可以得到 (0,1,2)
		printf("=====================================\n");
		printf("剪刀,石頭,布十戰勝負\n");
		printf("請輸入你的選項(0:剪刀,1:石頭,2:布):");
		scanf("%d", &YurNum);
		printf("你輸入的是:%d\n", YurNum);
		printf("電腦輸入的是:%d\n", ComNum);

		if (YurNum >= 10) {
			printf("請輸入0-2的數字\n");
			continue;
		}
		if (YurNum == ComNum) {
			printf("平手\n");
			nobodywin++;
			a++;
		}
		else if ((ComNum == 0 && YurNum == 2) || (ComNum == 1 && YurNum == 0) || (ComNum == 2 && YurNum == 1)) {
			printf("電腦贏\n");
			comwin++;
			a++;
		}
		else if (YurNum > 2) {
			printf("輸入錯誤");
			
		}
		else  {
			printf("你贏\n");
			youwin++;
			a++;
		}
		printf("=====================================\n");

	}
	printf("電腦贏:%d次\n", comwin);
	printf("你贏:%d次\n", youwin);
	printf("平手:%d次\n", nobodywin);
	while (a == 10) {
		if (youwin == comwin) {
			printf("此場十戰勝負無人獲勝");
		}
		else if (youwin > comwin) {
			printf("此場十戰勝負恭喜你獲勝");
		}
		if (youwin < comwin) {
			printf("此場十戰勝負恭喜電腦獲勝");
		}
		break;

	}
	system("pause");
	return 0;
}
