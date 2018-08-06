#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int trimSpace(char *inbuf, char *outbuf)
{
	if (inbuf == NULL || outbuf == NULL) {
		return -1;
	}

	int begin = 0;
	int end = strlen(inbuf) - 1;

	while(isspace(inbuf[begin]) && inbuf[begin] != 0) {
		begin++;
	}	

	while(isspace(inbuf[end]) && inbuf[end] != 0) {
		end--;
	}

	strncpy(outbuf, inbuf+begin, end-begin+1);
	
	//printf("%d, %d\n", begin, end);
}

int ltrim(char *inbuf, char *outbuf)
{
	if (inbuf == NULL || outbuf == NULL) {
		return -1;
	}

	int begin = 0;
	int end = strlen(inbuf) - 1;

	while(isspace(inbuf[begin]) && inbuf[begin] != 0) {
		begin++;
	}

	strncpy(outbuf, inbuf+begin, end);
}

int rtrim(char *inbuf, char *outbuf)
{
	if (inbuf == NULL || outbuf == NULL) {
		return -1;
	}

	int begin = 0;
	int end = strlen(inbuf) - 1;

	while(isspace(inbuf[end]) && inbuf[end] != 0) {
		end--;
	}

	strncpy(outbuf, inbuf+begin, end+1);
}

void main()
{
	char *p = "    abc   ";
	char *q = NULL;
	q = (char *)malloc(sizeof(char) * 100);

	int ret = trimSpace(p, q);
	if (ret < 0) {
		fprintf(stderr, "ret=%d\n", ret);
	}
	printf("去除首尾空格后是：%s, %d\n", q, strlen(q));


	char *p2 = "    abc   ";
	char *q2 = NULL;
	q2 = (char *)malloc(sizeof(char) * 100);
	int ret2 = rtrim(p2, q2);
	if (ret2 < 0) {
		fprintf(stderr, "ret=%d\n", ret2);
	}
	printf("去除右侧空格后是：%s, %d, %d\n", q2, strlen(q2), sizeof(q2));


	char *p3 = "    abc   ";
	char *q3 = NULL;
	q3 = (char *)malloc(sizeof(char) * 100);
	int ret3 = ltrim(p3, q3);
	if (ret3 < 0) {
		fprintf(stderr, "ret=%d\n", ret3);
	}
	printf("去除左侧空格后是：%s, %d, %d\n", q3, strlen(q3), sizeof(q3));


	char *p4 = "fanglin";
	printf("strlen(p4) = %d, sizeof(p4) = %d \n", strlen(p4), sizeof(p4));
}