#include <windows.h>

    LRESULT CALLBACK WinProc(HWND window,UINT msg,WPARAM wParam,LPARAM lParam);
    int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
        LPSTR lpCmdLine, int nCmdShow)

    {

    HWND hwnd;
    WNDCLASSEX win;
    MSG message;

    win.cbClsExtra=0;
    win.cbSize=sizeof(win);
    win.cbWndExtra=0;
    win.hbrBackground=GetSysColorBrush(COLOR_WINDOW);
    win.hCursor=LoadCursor(NULL,IDC_ARROW);
    win.hIcon=LoadIcon(NULL,IDI_APPLICATION);
    win.hIconSm=LoadIcon(NULL,IDI_APPLICATION);
    win.hInstance=hInstance;
    win.lpfnWndProc=WinProc;
    win.lpszClassName="Janela";
    win.lpszMenuName=NULL;
    win.style=0;
    if(!RegisterClassEx(&win))
    return 0;
    hwnd = CreateWindowEx(0,"Janela","Maikon",WS_OVERLAPPED|WS_SYSMENU,300,100,400,400,NULL,NULL,hInstance,NULL);

    if(hwnd == NULL)
    return 0;

    ShowWindow(hwnd,SW_SHOW);
    UpdateWindow(hwnd);

    while(GetMessage(&message,0,0,0)){
    TranslateMessage(&message);
    DispatchMessage(&message);
    }
    return message.wParam;

    }

    LRESULT CALLBACK WinProc(HWND window,UINT msg,WPARAM wParam,LPARAM lParam){

    switch(msg)
        {
            case WM_CLOSE:
                DestroyWindow(window);
            break;
            case WM_DESTROY:
                PostQuitMessage(0);
            break;
            default:
                return DefWindowProc(window, msg, wParam, lParam);
    }
      return 0;

    }
