#pragma once

#include <windows.h>

// �ȉ��^�[�Q�b�g�̃N���X�����A�v���Z�X�l�[��(�̈ꕔ)�̂ǂ��炩�킩���Ă�΂Ȃ�Ƃ��Ȃ�B
#define TARGET_N06_CLASS_WND "Tenshouki95"
#define TARGET_N06_HD_CLASS_WND "KOEI_NOBU9WINDOW"
#define TARGET_N07_CLASS_WND "�M���̖�]������^ �p���[�A�b�v�L�b�g"
#define TARGET_N08_CLASS_WND "KOEI_NOBU8WINDOW"
#define TARGET_N09_CLASS_WND "KOEI_NOBU9WINDOW"
#define TARGET_N10_CLASS_WND "KOEI_NOBU10WINDOW"
#define TARGET_N11_CLASS_WND "KOEI_NOBUNAGA_11_WINDOW"
#define TARGET_N12_CLASS_WND "KOEI_NOBUNAGA_12_WINDOW"
#define TARGET_N13_CLASS_WND "KOEI_NOBUNAGA_13_WINDOW"
#define TARGET_N14_CLASS_WND "KT_NOBUNAGA_14PK_WINDOW"
#define TARGET_N14SR_CLASS_WND "KT_NOBUNAGA_SOUZOU2_WINDOW"

// �����֐�
void InitModDebugger(HWND hEdit);

// ���[�v
int ProcModDebugger(HWND hEdit);


// �X���b�h�p�֐��̐錾
unsigned __stdcall ThreadExternalProcModDebugger(void *);

extern BOOL isActiveRecieveFlag;