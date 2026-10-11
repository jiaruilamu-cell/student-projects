#include <stdio.h>
#include <string.h>

void insert_char(char *s, char target, char to_insert) {
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if (s[i] == target) {
            for (int j = len; j > i + 1; --j) {
                s[j] = s[j - 1];
            }
            s[i + 1] = to_insert;
        }
    }
}

int main() {
    char input_str[100];
    printf("请输入字符串：");
    fgets(input_str, sizeof(input_str), stdin);
    input_str[strcspn(input_str, " ")] = '\0';

    char target, to_insert;
    printf("请输入要插入的目标字符：");
    scanf("%c", &target);
    getchar();
    printf("请输入要插入的字符：");
    scanf("%c", &to_insert);
    getchar();

    insert_char(input_str, target, to_insert);
    printf("改变后的字符串为：%s", input_str);

    return 0;
}