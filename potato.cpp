
/*
by aPpLegUo
apple ascii:
5 5
7 7 7 2 7
7 9 9 9 7
9 9 9 9 1
9 9 9 9 1
7 9 1 1 7

aPpLegUo:
40 5
0 0 0 0 0 0 2 2 2 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 7 0 7 0 0 0 0 0 0
0 1 1 1 0 0 2 0 2 0 0 3 3 3 0 0 4 0 0 0 0 5 5 5 0 0 6 6 6 0 0 7 0 7 0 0 9 9 9 0
0 1 0 1 0 0 2 2 2 0 0 3 0 3 0 0 4 0 0 0 0 5 0 5 0 0 6 0 6 0 0 7 0 7 0 0 9 0 9 0
0 1 1 1 1 0 2 0 0 0 0 3 3 3 0 0 4 4 4 0 0 5 0 0 0 0 6 6 6 0 0 7 7 7 0 0 9 9 9 0
0 0 0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 5 5 5 0 0 0 0 6 0 0 0 0 0 0 0 0 0 0 0

potato:
10 7
7 7 11 11 11 11 11 7 7 7
7 11 3 11 11 11 3 11 11 7
11 11 11 11 11 11 11 11 11 11
11 3 11 11 3 11 11 11 11 3
7 11 11 11 11 11 11 3 3 7 
7 7 11 11 11 11 3 3 3 7
7 7 7 3 3 3 3 3 7 7

try!!!
*/


#include <cstdio>
using namespace std;

int main(){
	int x;
	int y;
	scanf("%d%d", &x, &y);
	int color[x][y];

	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			scanf("%d", &color[j][i]);
		}
	}

	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			int now = color[j][i];
			const char* ascii = "";
			switch(now) {
                case 0:  ascii = "\033[40m"; break;  // 黑色背景
                case 1:  ascii = "\033[41m"; break;  // 红色背景
                case 2:  ascii = "\033[42m"; break;  // 绿色背景
                case 3:  ascii = "\033[43m"; break;  // 黄色背景
                case 4:  ascii = "\033[44m"; break;  // 蓝色背景
                case 5:  ascii = "\033[45m"; break;  // 品红背景
                case 6:  ascii = "\033[46m"; break;  // 青色背景
                case 7:  ascii = "\033[47m"; break;  // 白色背景
                
                // 亮色背景
                case 8:  ascii = "\033[100m"; break; // 黑色背景
                case 9:  ascii = "\033[101m"; break; // 红色背景
                case 10: ascii = "\033[102m"; break; // 绿色背景
                case 11: ascii = "\033[103m"; break; // 黄色背景
                case 12: ascii = "\033[104m"; break; // 蓝色背景
                case 13: ascii = "\033[105m"; break; // 品红背景
                case 14: ascii = "\033[106m"; break; // 青色背景
                case 15: ascii = "\033[107m"; break; // 白色背景
                
                default: ascii = "\033[0m";   break;  // 重置颜色
            }
            printf("%s  ", ascii);  // 两个空格表示一个颜色块
        }
        printf("\033[0m\n");  // 每行结束后重置颜色并换行
    }

    printf("\033[0m");  // 最后重置颜色	
	return 0;
}
