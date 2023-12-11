
#include "../DxLib/DxLib.h"
//#include "/usr/i686-w64-mingw32/include/windows.h"
#define DX_GCC_COMPILE
#define DX_NON_INLINE_ASM

//void * __gxx_personality_v0 = 0;
//void * _Unwind_Resume = 0;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpStr, int nCmdShow){
    ChangeWindowMode(TRUE);
    if(DxLib_Init() == -1){
        return -1;
    }
    int music = LoadSoundMem("./thb04.wav");
    char strBuf[500] = {0};
    PlaySoundMem(music,DX_PLAYTYPE_BACK);
    DrawBox(320 - 20, 240 - 20, 320 + 20, 240 + 20, GetColor(255, 0, 0), TRUE);
    KeyInputString(0,0,sizeof(strBuf),strBuf,FALSE);
    WaitKey();
    
    DeleteSoundMem(music);
    DxLib_End();
    return 0;
}
