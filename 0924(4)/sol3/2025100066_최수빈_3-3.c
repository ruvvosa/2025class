#include <stdio.h>	

int main() {

	int w1, h1, w2, h2, w3, h3, w4, h4, w5, h5;
	int height1, height2, height3, height4, height5;
	int min_height;
	
	printf(" Please input 5 square boards : ");
	scanf_s("%dx%d %dx%d %dx%d %dx%d %dx%d", &w1, &h1, &w2, &h2, &w3, &h3, &w4, &h4, &w5, &h5);

	// 각 판자의 회전을 고려해서 최대 높이 결정

	height1 = (w1 > h1) ? w1 : h1;
	height2 = (w2 > h2) ? w2 : h2;
	height3 = (w3 > h3) ? w3 : h3;
	height4 = (w4 > h4) ? w4 : h4;
	height5 = (w5 > h5) ? w5 : h5;

	min_height = height1;
	if (height2 < min_height) min_height = height2;
	if (height3 < min_height) min_height = height3;
	if (height4 < min_height) min_height = height4;
	if (height5 < min_height) min_height = height5;

	printf("Maximum height of Fence : %d\n", min_height);

}