#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_count_non_space(char *p, int *n)
{
	if (p == NULL || n == NULL) {
		return -1;
	}

	char *q = p;
	int begin = 0;
	int end = strlen(p)-1;
	
	while(isspace(*(p+begin))) {
		begin++;
		(*n)++;
	}

	while(isspace(*(q+end))) {
		end--;
		(*n)++;
	}

	return 0;
}

int get_count_non_space2(char *p, int *n)
{
	if (p == NULL || n == NULL) {
		return -1;
	}

	char *q = p;
	int begin = 0;
	int end = strlen(p)-1;
	
	while(isspace(p[begin]) && p[begin] != 0) {
		begin++;
		*n++;
	}

	while(isspace(p[end]) && p[begin] != 0) {
		end--;
		*n++;
	}

	return 0;
}

// 算出字符串首尾空格数
void main()
{
	char *p = "    abc   ";
	int ret = 0;
	int spaceCount = 0;

	printf("strlen(p) = %d\n", strlen(p));

	//ret = get_count_non_space(p, &spaceCount);
	ret = get_count_non_space2(p, &spaceCount);
	if (ret < 0) {
		fprintf(stderr, "ret=%d\n", ret);
	}

	printf("spaceCount = %d\n", spaceCount);
}