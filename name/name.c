#include <stdio.h>

int solution(char* name_list[], int name_list_len) {
	int answer = 0;

	for (int i = 0; i < name_list_len; i++)
		for (int j = 0; name_list[i][j] != 0; j++)
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				answer++;
				break;
			}

	return answer;
}

void main() {
	char* name_list[] = {"james", "jack", "sally", "john"};
	int name_list_len = 4;

	printf("%d\n", solution(name_list, name_list_len));
}