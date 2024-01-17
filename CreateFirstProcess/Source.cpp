#include <Windows.h>
#include <stdio.h>

int main() {
	STARTUPINFOW siw;
	PROCESS_INFORMATION PI;
	CreateProcessW(
		L"E:\\ghidra_11.0_PUBLIC\\ghidraRun.bat",
		NULL,
		NULL,
		NULL,
		FALSE,
		BELOW_NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&siw,
		&PI

	);

}