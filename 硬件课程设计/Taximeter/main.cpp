#include<stdio.h>
#include<conio.h>
#include"ApiExUsb.h"
#include<iostream>
using namespace std;
#pragma comment(lib,"ApiExUsb.lib")
//�������ļ���TAXIMETER
#include"TAXIMETER.h"

int main(){
	if(!Startup()) {	/*���豸*/
		printf("ERROR: Open Device Error!\n");
		return 0;
	}
	TAXIMETER taximeter;
	Cleanup();
	return 0;
}