#include"str.h"

Str::Str(int leng) //생성자, leng을 len에 저장 
{	
	len = leng; //leng을 len에 저장
	str = new char[len+1]; //str에 메모리 할당, \0도 저장해야하기 때문에 +1
}

Str::Str(char *neyong) //생성자, neyong을 str에 저장
{
	len = (int)strlen(neyong); //neyong의 길이를 len에 저장
	str = new char[len+1]; //str에 메모리 할당
	strcpy(str, neyong); //str에 neyong저장
}

Str::~Str() //소멸자
{
	delete[] str; //메모리 해제
	len = 0; //len을 0으로 초기화
}

int Str::length(void) //len 반환
{
	return len;
}

char* Str::contents(void) //str반환
{
	return str;
}

int Str::compare(class Str& a)
{
	return strcmp(str, a.str); //strcmp으로 str과 a.str 비교, str이 a.str보다 작으면 음수, 같으면 0, 크면 양수 반환
}

int Str::compare(char* a)
{
	return strcmp(str, a); //str과a 비교
}

void Str::operator=(char* a)
{
	len = (int)strlen(a); //len에 a길이 저장
	str = new char[strlen(a)+1]; //str에 a길이+1만큼 메모리 할당
	strcpy(str, a); //a를 str에 복사
}

void Str::operator=(class Str& a)
{
	len = (int)strlen(a.str); //len에 a.str길이 저장
	str = new char[strlen(a.str)+1]; //str에 a.str길이+1만큼 메모리 할당
	strcpy(str, a.str); //a.str을 str에 저장
}
	
