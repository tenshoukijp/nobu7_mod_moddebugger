#pragma once

#include <windows.h>

// 以下ターゲットのクラス名か、プロセスネーム(の一部)のどちらかわかってればなんとかなる。
#define TARGET_N06_CLASS_WND "Tenshouki95"
#define TARGET_N06_HD_CLASS_WND "KOEI_NOBU9WINDOW"
#define TARGET_N07_CLASS_WND "信長の野望･将星録 パワーアップキット"
#define TARGET_N08_CLASS_WND "KOEI_NOBU8WINDOW"
#define TARGET_N09_CLASS_WND "KOEI_NOBU9WINDOW"
#define TARGET_N10_CLASS_WND "KOEI_NOBU10WINDOW"
#define TARGET_N11_CLASS_WND "KOEI_NOBUNAGA_11_WINDOW"
#define TARGET_N12_CLASS_WND "KOEI_NOBUNAGA_12_WINDOW"
#define TARGET_N13_CLASS_WND "KOEI_NOBUNAGA_13_WINDOW"
#define TARGET_N14_CLASS_WND "KT_NOBUNAGA_14PK_WINDOW"
#define TARGET_N14SR_CLASS_WND "KT_NOBUNAGA_SOUZOU2_WINDOW"

// 初期関数
void InitModDebugger(HWND hEdit);

// ループ
int ProcModDebugger(HWND hEdit);


// スレッド用関数の宣言
unsigned __stdcall ThreadExternalProcModDebugger(void *);

extern BOOL isActiveRecieveFlag;