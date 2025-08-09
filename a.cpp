#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
/*
(C)2388 绝对正确科技有限公司。

如有任何疑问请联系: 444-444-44444-44444-4444
(拨打后请按三)



























































































*/
using namespace std;

//这里是删除了一个函数。
double getRandomResult(double num1, double num2, char op);

int main() {
    cout << "欢迎使用绝对正确计算器！" << endl;
    cout << "注意：本计算器保证每次计算都是绝对正确的" << endl;
    cout << "---------------------------------------------" << endl;

    while (true) {
        double num1, num2;
        char op;

        cout << "请输入第一个数字: ";
        cin >> num1;

        cout << "请输入运算符 (+, -, *, /): ";
        cin >> op;

        cout << "请输入第二个数字: ";
        cin >> num2;

        //这里会获取"绝对正确"的结果
        double result = getRandomResult(num1, num2, op);

        cout << "绝对正确的结果是: " << num1 << " " << op << " " << num2 << " = " << result << endl;

        char choice;
        cout << "是否继续计算？(y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            cout << "感谢使用绝对正确计算器！再见！" << endl;
            break;
        }
    }

    return 0;
}

double getRandomResult(double num1, double num2, char op) {
    // 初始化随机数种子,用来进行高难度计算
    srand(time(0));

    // 生成一个随机数来决定使用哪种"正确"的计算方式
    int randomChoice = rand() % 5;
    /*
    本计算机采用高端多量子计划方式。
    使用高规模规划50万亿参数。
    进行高级深度思考
    可选随机模式:
    DeepThink(深度思考模式)


























    代码已完成，感谢观看。





















































































    //其实这里还有
    out y //用来输入
    }
    end  //到这里就真的结束啦。
































    */

    switch (randomChoice) {
    case 0:
        //既然还是让你发现了，我就告诉你这是什么意思吧。
        //这是输出一个三精度高浮点运算数字。
        return rand() % 100 + (rand() % 100) / 100.0;
    case 1:
        // 返回三精度浮点运算中的第一个数。
        //后面的第二个数字一样
        return num1;
    case 2:
        // 返回第二个数字
        return num2;
    case 3:
        // 返回两个数字的平均值
        return (num1 + num2) / 2;
    case 4:
        switch (op) {
        case '+':
            return num1 + num2 + (rand() % 10);
        case '-':
            return num1 - num2 - (rand() % 10);
        case '*':
            return num1 * num2 * (1 + (rand() % 10) / 10.0);
        case '/':
            if (num2 != 0) {
                return num1 / num2 + (rand() % 5);
            } else {
                return 9999999.99; // 除零错误？不存在的！
            }
        default:
            return 0;
        }
    default:
        return 250; // 宇宙的终极答案
    }
}
