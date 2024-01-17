#include <Windows.h>
#include <stdio.h>

int main() {
	MessageBoxW(
		NULL,
		L"This is my first program of C with the Win32 API!!",
		L"First",
		MB_YESNO 
		);
	printf("Hello world");

}