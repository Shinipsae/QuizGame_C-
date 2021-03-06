#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <conio.h>

void gotoxy(int x, int y) //커서 위치 조정 함수
{
	COORD Pos = { x-1, y-1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void sc_design();
void main_screen();

int main() {
	srand((unsigned)time(NULL)); //난수생성위한 srand() 함수
	system("mode con cols = 120 lines = 30"); //콘솔 창 크기조절
	sc_design(); //게임 창 디자인
	gotoxy(60, 9); //좌표설정
	main_screen();
}

void sc_design() //게임 디자인을 콘솔에 띄우는 함수
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //진한 흰색

	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	printf("|                                                                             < 미림여자정보과학고등학교 신잎새 개발> |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|---------------------------------------------------------------------------------------------------------------------|\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------");
}

void main_screen() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("cls");
	sc_design();

	gotoxy(43, 7);
	printf("C++ 초보 프로그래머를 위한 퀴즈 게임");
	gotoxy(43, 11);
	printf("1. 로그인");
	gotoxy(43, 14);
	printf("2. 회원가입");
	gotoxy(43, 17);
	printf("3. 도움말");
	gotoxy(40, 21);
	printf("원하시는 메뉴를 선택해주세요 >>");
}