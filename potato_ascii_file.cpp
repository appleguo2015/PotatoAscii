// by aPpLegUo
#include <cstdio>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
	int x;
	int y;
    freopen(argv[1], "r", stdin);
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
