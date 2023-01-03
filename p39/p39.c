#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char word[6][20] = { "한국", "미국", "일본", "영국", "독일", "호주" };
	char key[20] = { 0 };
	int i, pos = 0;
	strcpy(key, "독일");

	printf("찾을 단어 : %s\n", key);

	for (i = 0; i < 6; i++) {
		if (strcmp(word[i], key) == 0) {
			printf("독일이 %d 번째에 있습니다.", i+1);
			pos++;
		}
	}

	if (pos == 0) printf("독일이 없습니다.");
}