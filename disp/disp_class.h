class Display
{
public:
    static void draw();
    Display(unsigned long w = 0, unsigned long h = 0, unsigned long cfg = 0, unsigned long cbg = 0, unsigned long style = 0)
    {
        createwin(w, h, cfg, cbg, style);
    }
    void show()
    {
        DWORD ThreadID;
        CreateThread(NULL, 0, &drawthread, NULL, 0, &ThreadID);
    }
    static DWORD WINAPI drawthread(void* Param)
    {
        while (iswin())
        {
            if (gettimer() > ftimedraw + 1 / framedraw)
            {
                while (gettimer() > ftimedraw + 1 / framedraw)
                {
                    ftimedraw = ftimedraw + 1 / framedraw;
                }
                draw();
            }
        }
        return 0;
    }
};
